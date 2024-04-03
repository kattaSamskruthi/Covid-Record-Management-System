import React from "react";
import SearchBar from "../components/search-bar.component";
import CardComponent from "../components/card.component";
import CrecheCardList from "../components/crecheCardList";

const searchPage = () => {
  return (
    <div>
      <SearchBar
        text="Discover the best care for your child, right near you."
        placeholder="Type a location"
      />
      {/* <CardComponent /> */}
      <CrecheCardList />
    </div>
  );
};

export default searchPage;
