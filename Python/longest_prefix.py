def longest_common_prefix(strs):
    if not strs:
        return ""

    min_len = min(len(s) for s in strs)
    result = ""

    for i in range(min_len):
        char = strs[0][i]

        if all(s[i] == char for s in strs):
            result += char
        else:
            break

    return result

strings = ["flower", "flow", "flight"]
print(longest_common_prefix(strings))
