try {
		if (n < 0) throw "Cannot take negative number.";
	}
	catch (const char* exception) {
		std::cerr << "Error: " << exception << std::endl;
	}
  
  // or 
  
  	assert(n >= 0 && n < max_n);
