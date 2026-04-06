//
// This is only a SKELETON file for the 'Anagram' exercise. It's been provided as a
// convenience to get you started writing code faster.
//

export const findAnagrams = (word,candidates) => {
  let sortedWord = word.toLowerCase().split('').sort().join('');
  let result=[]

  for (let candidate of candidates){
    let sortedCandidate=candidate.toLowerCase().split('').sort().join('');

    if (candidate.toLowerCase() !== word.toLowerCase() && sortedWord===sortedCandidate){
      result.push(candidate);
    }
  }

  return result;
};
