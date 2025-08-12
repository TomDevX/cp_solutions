import React, { useEffect, useState } from "react";
import SolutionForm from "./components/SolutionForm";
import SolutionList from "./components/SolutionList";
import { fetchSolutions, uploadSolution } from "./api";

function App() {
  const [solutions, setSolutions] = useState([]);

  useEffect(() => {
    fetchSolutions().then(setSolutions);
  }, []);

  const handleUpload = async (data) => {
    const newSolution = await uploadSolution(data);
    setSolutions([newSolution, ...solutions]);
  };

  return (
    <div style={{ maxWidth: 800, margin: "auto", padding: 20 }}>
      <h1>CP-uploader: Upload your programming solutions</h1>
      <SolutionForm onUpload={handleUpload} />
      <hr />
      <SolutionList solutions={solutions} />
    </div>
  );
}

export default App;