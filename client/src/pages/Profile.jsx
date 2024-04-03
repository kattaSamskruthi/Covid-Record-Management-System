import React from "react";
import ContactReqList from "../components/contact-requests/ContactReqList";
import ProfileDetails from "../components/ProfileDetails";

const Profile = () => {
  return (
    <div className="grid grid-cols-2 divide-x">
      <div className="flex grid">
        <div className="flex justify-center">
        <img
          className="my-auto w-40 h-40"
          src="https://www.kindpng.com/picc/m/24-248253_user-profile-default-image-png-clipart-png-download.png"
        />
        </div>
        <ProfileDetails />
        <div className="flex justify-center my-0">
        <div className="flex grid-row gap-8 p-4">
          <div>
            <button className="border-2 border-pink-primary rounded-full pt-2 pb-2 pl-4 pr-4 text-xl font-bold text-pink-primary h-10 w-auto mx-1">
              Search Creches
            </button>
          </div>
          <div>
            <button className="border-2 border-pink-primary rounded-full pt-2 pb-2 pl-4 pr-4 text-xl font-bold text-pink-primary h-10 w-auto mx-1">
              Go to Forum
            </button>
          </div>
        <div>
        <button className="border-2 border-pink-primary rounded-full pt-2 pb-2 pl-4 pr-4 text-xl font-bold text-pink-primary h-10 w-auto mx-1">
          Edit
        </button>
        </div>
        </div>
        </div>
      </div>
      <div className="border-none">
        <ContactReqList />
      </div>
    </div>
  );
};

export default Profile;
