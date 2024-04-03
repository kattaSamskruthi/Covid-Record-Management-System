const express = require("express");
const jwt = require("jsonwebtoken");
const bcrypt = require("bcrypt");
const Creche = require("../../models/creche.model");
const Guardian = require("../../models/guardian.model");

exports.crecheSignup = async (req, res) => {
  const nameOfOrg = req.body.nameOfOrg;
  const address = req.body.address;
  const email = req.body.email;
  const password = req.body.password;

  try {
    const userExists = await Creche.findOne({ email: email });

    if (userExists) {
      res.json({
        status: false,
        message: "Email already exists in the database",
        userExists: userExists,
      });
    } else {
      const hashedPassword = await bcrypt.hash(password, 10);

      await Creche.create({
        nameOfOrg: nameOfOrg,
        address: address,
        email: email,
        password: hashedPassword,
      });

      const token = jwt.sign(
        {
          name: nameOfOrg,
          email: email,
        },
        process.env.JWT_TOKEN
      );

      res.json({
        status: true,
        message: "Creche successfully signed in",
        token: token,
      });
    }
  } catch (err) {
    res.json({
      status: false,
      error: "Internal server error",
    });
  }
};

exports.guardianSignup = async (req, res) => {
  const name = req.body.name;
  const location = req.body.location;
  const email = req.body.email;
  const password = req.body.password;

  try {
    const userExists = await Guardian.findOne({ email: email });

    if (userExists) {
      res.json({
        status: false,
        message: "Email already exists in the database",
        userExists: userExists,
      });
    } else {
      const hashedPassword = await bcrypt.hash(password, 10);

      await Guardian.create({
        name: name,
        location: location,
        email: email,
        password: hashedPassword,
      });

      const token = jwt.sign(
        {
          name: name,
          email: email,
        },
        process.env.JWT_TOKEN
      );

      res.json({
        status: true,
        message: "Guardian successfully signed in",
        token: token,
      });
    }
  } catch (err) {
    res.json({
      status: false,
      error: "Internal server error",
    });
  }
};
