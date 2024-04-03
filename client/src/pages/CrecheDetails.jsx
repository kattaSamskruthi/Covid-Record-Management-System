import React from 'react'
import CrecheHeaderComponent from '../components/CrecheHeaderComponent'
import CrecheImagesComponent from '../components/CrecheImagesComponent'
import ProfileDetails from '../components/ProfileDetails'
import ReviewsComponent from '../components/ReviewsComponent'

const CrecheDetails = () => {
  return (
    <div>
      <CrecheHeaderComponent />
      <CrecheImagesComponent />
      <div className="flex flex-cols-3 p-10">
      <ProfileDetails />
      <ReviewsComponent />
      </div>
     
    </div>
    
  )
}

export default CrecheDetails