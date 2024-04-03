const express = require("express");
const router = express.Router();

const {
  crecheSignup,
  guardianSignup,
} = require("../controllers/auth/signup.controller");
const { login } = require("../controllers/auth/login.controller");
const { getUser } = require("../controllers/auth/getUser.controller");

const validated = require("../middlewares/validated.middleware");

router.post("/crecheSignup", crecheSignup);
router.post("/guardianSignup", guardianSignup);
router.post("/login", login);
router.get("/getUser", validated, getUser);

module.exports = router;
