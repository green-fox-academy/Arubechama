#ifndef CHARINDEX_CHARINDEXFINDER_H
#define CHARINDEX_CHARINDEXFINDER_H

int indexer(const char * string, const char character)
{
    int i = 0;
    while(string[i] != '\0')
    {
        if(string[i] == character) {
            return i;
        }
        i++;
    }

    return -1;
}

#endif //CHARINDEX_CHARINDEXFINDER_H
