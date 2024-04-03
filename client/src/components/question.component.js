import React from "react";
import moment from "moment";
import { Link } from "react-router-dom";

function Question() {
  return (
    <div className="bg-pink-secondary m-4 p-6">
      <div className="block">
        <Link to="/">
          <div className="text-2xl font-bold hover:text-white">title</div>
        </Link>
        <div>
          Author: <span className="font-bold">name</span>
        </div>
        <div>
          <div>
            Asked <span className="font-bold">date</span>
          </div>
        </div>
      </div>
    </div>
  );
}

export default Question;
