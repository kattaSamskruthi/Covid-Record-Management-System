const express = require("express");
const jwt = require("jsonwebtoken");
const bcrypt = require("bcrypt");
const Creche = require("../../models/creche.model");
const Guardian = require("../../models/guardian.model");

exports.login = async (req, res) => {
  const email = req.body.email;
  const password = req.body.password;

  const crecheExists = await Creche.findOne({ email: email });
  const guardianExists = await Guardian.findOne({ email: email });

  if (crecheExists) {
    const isPasswordValid = await bcrypt.compare(
      password,
      crecheExists.password
    );

    if (isPasswordValid) {
      const token = jwt.sign(
        {
          name: crecheExists.name,
          email: crecheExists.email,
        },
        process.env.JWT_TOKEN
      );

      return res.json({
        status: true,
        message: "Validation successful for creche",
        token: token,
        isPasswordValid: isPasswordValid,
      });
    } else {
      return res.json({
        status: false,
        message: "Validation error",
        isPasswordValid: isPasswordValid,
      });
    }
  } else if (guardianExists) {
    const isPasswordValid = await bcrypt.compare(
      password,
      guardianExists.password
    );

    if (isPasswordValid) {
      const token = jwt.sign(
        {
          name: guardianExists.name,
          email: guardianExists.email,
        },
        process.env.JWT_TOKEN
      );

      return res.json({
        status: true,
        message: "Validation successful for guardian",
        token: token,
        isPasswordValid: isPasswordValid,
      });
    } else {
      return res.json({
        status: false,
        message: "Validation error",
        isPasswordValid: isPasswordValid,
      });
    }
  } else {
    return res.json({
      status: false,
      message: "This email does not exist in the database",
      crecheExists: false,
      guardianExists: false,
    });
  }
};
