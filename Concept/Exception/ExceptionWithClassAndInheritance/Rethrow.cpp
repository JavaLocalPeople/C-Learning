
int getIntValueFromDatabase(Database *d, std::string table, std::string key)
{
    assert(d);
 
    try
    {
        return d->getIntValue(table, key); // throws Derived exception on failure
    }
    catch (Base &exception)
    {
        // Write an error to some global logfile
        g_log.logError("doSomethingImportant failed");
 
        throw; // This throws the same exception as the one that was just caught
    }
}
