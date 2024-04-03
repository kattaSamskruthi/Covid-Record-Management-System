const mongoose = require("mongoose");
const Schema = mongoose.Schema;

const creche = new Schema({
  nameOfOrg: {
    type: String,
    required: true,
  },
  address: {
    type: String,
    required: true,
  },
  email: {
    type: String,
    required: true,
  },
  password: {
    type: String,
    required: true,
  },
});

const Creche = mongoose.model("creche", creche);

module.exports = Creche;
