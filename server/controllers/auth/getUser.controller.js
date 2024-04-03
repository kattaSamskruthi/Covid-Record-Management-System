const express = require("express");
const jwt = require("jsonwebtoken");
const bcrypt = require("bcrypt");
const Creche = require("../../models/creche.model");
const Guardian = require("../../models/guardian.model");

exports.getUser = async (req, res) => {
  const email = req.email;

  const crecheExists = await Creche.findOne({ email: email });
  const guardianExists = await Guardian.findOne({ email: email });

  if (crecheExists) {
    return res.json({
      status: true,
      message: "Creche retrieval from database successful",
      name: crecheExists.name,
    });
  } else if (guardianExists) {
    return res.json({
      status: true,
      message: "Guardian retrieval from database successful",
      name: guardianExists.name,
    });
  } else {
    return res.json({
      status: false,
      message: "Database error",
      userExists: userExists,
    });
  }
};
