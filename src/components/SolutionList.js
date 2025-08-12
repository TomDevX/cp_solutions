import React from "react";

function SolutionList({ solutions }) {
  if (!solutions.length) return <div>No solutions uploaded yet.</div>;

  return (
    <div>
      <h2>Solution List</h2>
      {solutions.map((sln, idx) => (
        <div key={idx} style={{ marginBottom: 24, padding: 16, border: "1px solid #ddd", borderRadius: 8 }}>
          <h3>
            <a href={sln.problem_url} target="_blank" rel="noopener noreferrer">{sln.problem_name}</a>
            {" "}({sln.platform})
          </h3>
          <div><strong>Tags:</strong> {sln.tags && sln.tags.join(", ")}</div>
          <div><strong>Language:</strong> {sln.language}</div>
          <pre style={{ background: "#f6f8fa", padding: 12, borderRadius: 4 }}>
            {sln.solution_code}
          </pre>
          {sln.notes && <div><strong>Notes:</strong> {sln.notes}</div>}
        </div>
      ))}
    </div>
  );
}

export default SolutionList;