const { express } = require("express");
const jwt = require("jsonwebtoken");
const Creche = require("../models/creche.model");
const Guardian = require("../models/guardian.model");

const validated = async (req, res, next) => {
  const verifiedToken = await jwt.verify(
    req.headers.authorization,
    process.env.JWT_TOKEN
  );

  if (!verifiedToken) {
    return res.status(400).send({
      status: false,
      message: "Invalid token",
    });
  }

  const crecheExists = await Creche.findOne({ email: verifiedToken.email });
  const guardianExists = await Guardian.findOne({ email: verifiedToken.email });
  {
    if (!crecheExists && !guardianExists) {
      return res.status(400).send({
        status: false,
        message: "User does not exist in database",
      });
    } else {
      (req.email = userExists.email), (req.name = userExists.name);
      next();
    }
  }
};

module.exports = validated;
