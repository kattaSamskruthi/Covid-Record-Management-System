import React from "react";
import CardComponent from "./card.component";

function crecheCardList() {
  return (
    <div className="grid grid-cols-4 gap-4">
      <CardComponent />
      <CardComponent />
      <CardComponent />
      <CardComponent />
      <CardComponent />
      <CardComponent />
      <CardComponent />
      <CardComponent />
    </div>
  );
}

export default crecheCardList;
