import React from "react";

const ReviewsComponent = () => {
  return (
    <div>
      <div className="text-4xl py-3 font-bold pl-4">Reviews</div>
      <div class="grid grid-rows-4 gap-2 p-4">
        <div class="flex flex-cols justify-between text-sm p-4 pb-4 bg-pink-secondary rounded-md ">
          <div class="flex flex-row">
            <img
              src="https://w7.pngwing.com/pngs/722/101/png-transparent-computer-icons-user-profile-circle-abstract-miscellaneous-rim-account.png"
              class="w-12 h-12 mt-2 mr-4"
            />
            <div class="grid grid-rows-2">
              <p className="font-sans font-normal text-lg">Anushka</p>
              <div>
                The best play home for toddlers!! the faculty and attendants are
                extremely co operative and the events that are organized are
                just perfect for kids and parents!!
              </div>
            </div>
          </div>
        </div>
        <div class="flex flex-cols justify-between text-sm p-4 pb-4 bg-pink-secondary rounded-md ">
          <div class="flex flex-row">
            <img
              src="https://w7.pngwing.com/pngs/722/101/png-transparent-computer-icons-user-profile-circle-abstract-miscellaneous-rim-account.png"
              class="w-12 h-12 mt-2 mr-4"
            />
            <div class="grid grid-rows-2">
              <p className="font-sans font-normal text-lg">Amisha</p>
              <div>
                Beautiful place for kids to start their journey of school.. the
                place is well designed, spacious, good teaching material, play
                area, most important very good teachers and careers
              </div>
            </div>
          </div>
        </div>
        {/* <div class="flex flex-cols justify-between text-sm p-4 pb-4 bg-pink-secondary rounded-md ">
          <div class="flex flex-row">
            <img
              src="https://w7.pngwing.com/pngs/722/101/png-transparent-computer-icons-user-profile-circle-abstract-miscellaneous-rim-account.png"
              class="w-12 h-12 mt-2 mr-4"
            />
            <div class="grid grid-rows-2">
              <p className="font-sans font-normal text-lg">Anushka</p>
             <div>The best play home for toddlers!! the faculty and attendants are extremely co operative and the events that are organized are just perfect for kids and parents!!</div>
            </div>
          </div>
        </div> */}
      </div>
    </div>
  );
};

export default ReviewsComponent;
