// belowings are equal.
{
    typedef double distance_t; // define distance_t as an alias for type double

    using distance_t = double; // define distance_t as an alias for type double
}

// Usage
{
  typedef std::vector<std::pair<std::string, int> > pairlist_t; // make pairlist_t an alias for this crazy type

  pairlist_t pairlist; // instantiate a pairlist_t

  boolean hasDuplicates(pairlist_t pairlist) // use pairlist_t in a function parameter
  {
      // some code here
  }
}
