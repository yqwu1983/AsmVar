/**
 *
 * Author : Shujia Huang
 * Date   : 2014-08-18
 *
 **/

#ifndef __VCF_H__
#define __VCF_H__

#include <iostream>

using namespace std;

class VcfHeader {

public:

	VcfHeader() { data_.clear(); Add("###","##fileformat=VCFv4.1"); }	
	~VcfHeader() { data_.clear(); }

	void Add(string mark, string id, string num, 
			 string type, string description);
	void Add(string id, string description);

	map<string, string> data() { return data_; }
private:

	map<string, string> data_;
};

class VCF {

public:

	string chrom_;
    unsigned long int pos_;
    string Id_;
    string ref_;
    string alt_;
    int    qual_;
    string filters_;
	VcfInfo info_;
    string formats_;
    vector<string> sample;
}

#endif

