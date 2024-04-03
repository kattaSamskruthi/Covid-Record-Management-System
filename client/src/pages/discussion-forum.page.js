import React, { useState, useEffect } from "react";
// import { Oval } from "react-loader-spinner";
import QuestionList from "../components/question-list.component";
import SearchBar from "../components/search-bar.component";

function DiscussionForum() {
  return (
    <div className="p-5">
      <SearchBar
        text="Explore a plethora of queries, to know the best for your child."
        placeholder="Type a query"
      />
      <QuestionList />
    </div>
  );
}

export default DiscussionForum;
