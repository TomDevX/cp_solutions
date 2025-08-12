const API_URL = "http://localhost:5000"; // Change port if your backend uses another

export async function fetchSolutions() {
  // If you don't have a backend, you can use mock data:
  return [
    {
      problem_name: "Two Sum",
      platform: "LeetCode",
      problem_url: "https://leetcode.com/problems/two-sum/",
      tags: ["array", "hashmap"],
      language: "Python",
      solution_code: "def twoSum(nums, target): ...",
      notes: "Basic solution"
    }
  ];
  // Uncomment below if backend available
  /*
  const res = await fetch(`${API_URL}/solutions`);
  if (!res.ok) return [];
  return await res.json();
  */
}

export async function uploadSolution(data) {
  // For mock: just return what you send
  return data;
  // Uncomment below if backend available
  /*
  const res = await fetch(`${API_URL}/solutions`, {
    method: "POST",
    headers: { "Content-Type": "application/json" },
    body: JSON.stringify(data),
  });
  if (!res.ok) throw new Error("Upload failed");
  return await res.json();
  */
}