import "./App.css";
import { BrowserRouter as Router, Routes, Route } from "react-router-dom";
import Header from "./components/header.component";
import Signup from "./pages/signup.page";
import Login from "./pages/login.page";
import DiscussionForum from "./pages/discussion-forum.page";
import SearchPage from "./pages/search.page";
import Profile from "./pages/Profile";
import CrecheDetails from "./pages/CrecheDetails";
import Dashboard from "./pages/dashboard.page";
import LandingPage from "./pages/landing.page";

function App() {
  return (
    <Router>
      <Header />
      <Routes>
        <Route path="/signup" element={<Signup />} />
        <Route path="/login" element={<Login />} />
        <Route path="/" element={<LandingPage />} />
        <Route path="/discussion-forum" element={<DiscussionForum />} />
        <Route path="/search-page" element={<SearchPage />} />
        <Route path="/profile" element={<Profile />} />
        <Route path="/details/:id" element={<CrecheDetails />} />
        <Route path="/dashboard" element={<Dashboard />} />
      </Routes>
    </Router>
  );
}

export default App;
