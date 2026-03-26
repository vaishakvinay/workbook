6 kyu
Type Checking

Instructions
Output
Create the function type which takes the argument val and returns val's type as a string. If possible, type should return additional information. Instead of a wall of text, here are code examples:

type(undefined) --> 'Undefined'
type(null) --> 'Null'
type(true) --> 'Boolean'
type(function(){}) --> 'Function'
type(Math.max) --> 'Function'
type('abc') --> 'String'
type({snap: "crackle"}) --> 'Object'

//Numbers should include additional information
type(1) --> 'Number Integer'
type(1.1) --> 'Number Float'
type(NaN) --> 'Number NaN'
type(-Infinity) --> 'Number Infinite'

//If a string is numeric-formatted:
type('123')
type('123.321')
type('0xF')
  --> All return 'String Numeric'

//For constructed objects, return the name of the constructor
type(/abc/) --> 'RegExp'
type([1,2,3]) --> 'Array'
function Custom(){}
type(new Custom()) --> 'Custom'

function type(val) {
  
  if (val === null )return 'Null';
  
  if (val === undefined)return 'Undefined';
  
  if (typeof val === 'boolean') return 'Boolean';
  
  if (typeof val === 'function') return 'Function';
  
  if (typeof val === 'string') {
    if (val.trim() !== '' && !isNaN(val)) {return 'String Numeric';}
    return 'String';
  }

    if (typeof val === 'object') {
    // Get constructor name
    if (val.constructor && val.constructor.name) {
      return val.constructor.name;
    }
    return 'Object';
  }
    if (typeof val === 'number') {
    if (Number.isNaN(val)) return 'Number NaN';
    if (!Number.isFinite(val)) return 'Number Infinite';
    if (Number.isInteger(val)) return 'Number Integer';
    return 'Number Float';
  }
 
  
}
