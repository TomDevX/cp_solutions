import React, { useState } from "react";

const initialState = {
  problem_name: "",
  platform: "",
  problem_url: "",
  tags: "",
  language: "Python",
  solution_code: "",
  notes: "",
};

function SolutionForm({ onUpload }) {
  const [form, setForm] = useState(initialState);

  const handleChange = e => {
    setForm({ ...form, [e.target.name]: e.target.value });
  };

  const handleSubmit = async e => {
    e.preventDefault();
    const data = {
      ...form,
      tags: form.tags.split(",").map(tag => tag.trim()).filter(Boolean),
    };
    await onUpload(data);
    setForm(initialState);
  };

  return (
    <form onSubmit={handleSubmit} style={{ marginBottom: 24 }}>
      <input
        name="problem_name"
        placeholder="Problem name"
        value={form.problem_name}
        onChange={handleChange}
        required
        style={{ width: "100%", marginBottom: 8 }}
      />
      <input
        name="platform"
        placeholder="Platform (LeetCode, Codeforces...)"
        value={form.platform}
        onChange={handleChange}
        required
        style={{ width: "100%", marginBottom: 8 }}
      />
      <input
        name="problem_url"
        placeholder="Problem URL"
        value={form.problem_url}
        onChange={handleChange}
        required
        style={{ width: "100%", marginBottom: 8 }}
      />
      <input
        name="tags"
        placeholder="Tags (comma separated, e.g. array, dp)"
        value={form.tags}
        onChange={handleChange}
        style={{ width: "100%", marginBottom: 8 }}
      />
      <input
        name="language"
        placeholder="Programming language"
        value={form.language}
        onChange={handleChange}
        required
        style={{ width: "100%", marginBottom: 8 }}
      />
      <textarea
        name="solution_code"
        placeholder="Solution code"
        value={form.solution_code}
        onChange={handleChange}
        required
        rows={6}
        style={{ width: "100%", marginBottom: 8 }}
      />
      <input
        name="notes"
        placeholder="Notes (optional)"
        value={form.notes}
        onChange={handleChange}
        style={{ width: "100%", marginBottom: 8 }}
      />
      <button type="submit">Upload Solution</button>
    </form>
  );
}

export default SolutionForm;