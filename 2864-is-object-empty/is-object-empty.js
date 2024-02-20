/**
 * @param {Object|Array} obj
 * @return {boolean}
 */
var isEmpty = function(obj) {
   if (Array.isArray(obj)) {
    return obj.length === 0;
  }

  if (obj === null || obj === undefined) {
    return true;
  }

  for (const key in obj) {
    if (Object.prototype.hasOwnProperty.call(obj, key)) {
      return false;
    }
  }

  return true;
};