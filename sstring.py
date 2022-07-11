def get_next(patt):
    my_next = [0]
    pos = 1
    now = 0
    while pos < len(patt):
        if patt[pos] == patt[now]:
            pos = pos + 1
            now = now + 1
            my_next.append(now)
        elif now != 0:
            now = my_next[now - 1]
        else:
            my_next.append(0)
            pos = pos + 1
    return my_next


def kmp(target, pattern):
    target = target.strip()
    pattern = pattern.strip()
    tar = 0
    pat = 0
    my_next = get_next(pattern)
    # print(my_next)
    while tar < len(target):
        if target[tar] == pattern[pat]:
            tar = tar + 1
            pat = pat + 1
        elif pat != 0:
            pat = my_next[pat - 1]
        else:
            tar = tar + 1
        if pat == len(pattern):
            return tar - pat + 1
    return 0


if __name__ == '__main__':
    str1 = 'abcca babc'
    str2 = 'ba'
    print(kmp(str1, str2))
