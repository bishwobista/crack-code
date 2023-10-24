function areAnagrams(str1, str2) {
    // Remove spaces and convert to lowercase to make the comparison case-insensitive and space-insensitive
    str1 = str1.replace(/\s/g, '').toLowerCase();
    str2 = str2.replace(/\s/g, '').toLowerCase();

    // Check if the sorted characters of both strings are the same
    return str1.split('').sort().join('') === str2.split('').sort().join('');
}

// Example usage:
const string1 = "listen";
const string2 = "silent";

if (areAnagrams(string1, string2)) {
    console.log(`"${string1}" and "${string2}" are anagrams.`);
} else {
    console.log(`"${string1}" and "${string2}" are not anagrams.`);
}
