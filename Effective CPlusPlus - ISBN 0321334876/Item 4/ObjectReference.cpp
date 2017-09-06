#include <cstdio>

class FileSystem {
public:
	std::size_t numDisks() const;
};

FileSystem& tfs()
{
	static FileSystem fs;
	return fs;
}

class Directory {
public:
	Directory();
};

Directory::Directory()
{
	
	std::size_t disks = tfs().numDisks();   // use the tfs object
}

Directory& tempDir()
{
	static Directory td;
	return td;
}

