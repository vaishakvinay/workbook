//
// This is only a SKELETON file for the 'Pangram' exercise. It's been provided as a
// convenience to get you started writing code faster.
//

export const isPangram = (string) => {
  let cleaned= string.toLowerCase().replace(/[^a-z]/g,'');
  return new Set(cleaned).size===26;
};
