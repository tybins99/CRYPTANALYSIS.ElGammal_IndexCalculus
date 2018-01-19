// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ conf_punknet.cpp
// @@ punknet project's configuration argv_1396 parsing facility
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "stdafx.h"
#include "..\\Lib\\argv_318.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ global declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_816 argv_1037;
extern argv_839 argv_1787;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_816 
// @@
// @@ FUNCTION: argv_3090
// @@
// @@ INPUT: none
// @@
// @@ OUTPUT: none
// @@
// @@ IO: none
// @@
// @@ RETURN VALUE: 
// @@ - bool: true if initialization succeeded.
// @@ -       false otherwise.  
// @@
// @@ DESCRIPTION:
// @@ This function permits to parse and retrieve all 
// @@ necessary configuration veriables from the configuration
// @@ argv_1396 of a punknet Linux scanner.
// @@
// @@ CONTRACT: 
// @@ - the argv_1037 argv_1396 must contains no syntax error.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
/*
[DATABASE]
server_name = 197.12.4545.23
login		= tybins99
password	= 123456

[NETWORK]
argv_3221 = 587

[FOLDER]
update_folder   = UPDATE
argv_3831	    = TEMP
sample_folder   = SAMPLE
tool_folder		= TOOL

[WEB]
tool		= wget.exe
param		=

[ZIP]
tool		= 7z.exe 
param		= x 

[SAMPLE]
temporary_sample_suffix = .in_progress
actual_sample_suffix    = .sample

[TIMEOUT]  
batch_processor_period  = 2
abort_scan_if_too_long  = 1
avx_max_scan_duration   = 60
update_period			= 10

[MD5]
enable_md5				= 1

[THREAD_QUEUE]
load_result_queue_size  = 10
avx_runner_queue_size   = 10
scan_result_queue_size  = 10
batch_result_queue_size = 10

[AVX]
argv_1396 = hauri.txt
argv_1396 = ahnlab.txt
*/
bool argv_816::argv_3090 () {
	bool bret = true;
	string svalue;
	argv_3864   argv_3960;
	argv_3499 ("DATABASE", "server_name",				argv_1040.argv_1781 (argv_1446, "DATABASE", "server_name"));	
	argv_3499 ("DATABASE", "db_identifier",				argv_1040.argv_1781 (argv_1446, "DATABASE", "db_identifier"));	
	argv_3499 ("DATABASE", "packet_rule_db_name",		argv_1040.argv_1781 (argv_1446, "DATABASE", "packet_rule_db_name"));	
	argv_3498   ("DATABASE", "db_filename_max_length",		argv_1040.argv_1777   (argv_1446, "DATABASE", "db_filename_max_length", 1, MAX_PATH));
	argv_3498   ("DATABASE", "max_filesize",				argv_1040.argv_1777   (argv_1446, "DATABASE", "max_filesize", 1, 31457280)); // 30 Mb
	argv_3499 ("DATABASE", "login",						argv_1040.argv_1781 (argv_1446, "DATABASE", "login"));	
	argv_3498   ("DATABASE", "max_query_answer",			argv_1040.argv_1777   (argv_1446, "DATABASE", "max_query_answer", 1, INT_MAX));	
	argv_3498   ("DATABASE", "ancilate_default_max_delta",	argv_1040.argv_1777   (argv_1446, "DATABASE", "ancilate_default_max_delta", 0, 8760)); // hours (max 365 days)

	argv_3499 ("DATABASE", "password",					argv_1040.argv_1781 (argv_1446, "DATABASE", "password"));
	argv_3499 ("DATABASE", "accident_table_name",		argv_1040.argv_1781 (argv_1446, "DATABASE", "accident_table_name"));	

	argv_3499 ("DATABASE", "accident_image_name",		argv_1040.argv_1781 (argv_1446, "DATABASE", "accident_image_name"));
	argv_3499 ("DATABASE", "pe_string_table_name",		argv_1040.argv_1781 (argv_1446, "DATABASE", "pe_string_table_name"));
	argv_3499 ("DATABASE", "avx_result_table_name",		argv_1040.argv_1781 (argv_1446, "DATABASE", "avx_result_table_name"));
	argv_3499 ("DATABASE", "ancilate_table_name",		argv_1040.argv_1781 (argv_1446, "DATABASE", "ancilate_table_name"));
	argv_3499 ("DATABASE", "db_config_table_name",		argv_1040.argv_1781 (argv_1446, "DATABASE", "db_config_table_name"));
	argv_3499 ("DATABASE", "maillist_table_name",		argv_1040.argv_1781 (argv_1446, "DATABASE", "maillist_table_name"));

	argv_3499 ("DATABASE", "pck_rule_server_name",		argv_1040.argv_1781 (argv_1446, "DATABASE", "pck_rule_server_name"));
	argv_3499 ("DATABASE", "pck_rule_login",				argv_1040.argv_1781 (argv_1446, "DATABASE", "pck_rule_login"));
	argv_3499 ("DATABASE", "pck_rule_password",			argv_1040.argv_1781 (argv_1446, "DATABASE", "pck_rule_password"));
	argv_3499 ("DATABASE", "pck_rule_db_identifier",		argv_1040.argv_1781 (argv_1446, "DATABASE", "pck_rule_db_identifier"));
	argv_3498	 ("DATABASE", "save_test_sample_enabled",	argv_1040.argv_1777 (argv_1446, "DATABASE", "save_test_sample_enabled", 0, 1)); 

	argv_3498 ("NETWORK",   "argv_3221",						argv_1040.argv_1777 (argv_1446, "NETWORK", "argv_3221",0, 65536));
	argv_3498 ("NETWORK",   "observer_port",				argv_1040.argv_1777 (argv_1446, "NETWORK", "observer_port",0, 65536));
	argv_3498 ("NETWORK",   "reporter_port",				argv_1040.argv_1777 (argv_1446, "NETWORK", "reporter_port",0, 65536));

	argv_3499 ("FOLDER", "update_folder",				argv_1040.argv_1781 (argv_1446, "FOLDER", "update_folder"));	
	argv_3499 ("FOLDER", "argv_3831",					argv_1040.argv_1781 (argv_1446, "FOLDER", "argv_3831"));	
	argv_3499 ("FOLDER", "tmp_folder_1",					argv_1040.argv_1781 (argv_1446, "FOLDER", "tmp_folder_1"));	
	argv_3499 ("FOLDER", "tmp_folder_2",					argv_1040.argv_1781 (argv_1446, "FOLDER", "tmp_folder_2"));	
	argv_3499 ("FOLDER", "tmp_folder_3",					argv_1040.argv_1781 (argv_1446, "FOLDER", "tmp_folder_3"));	
	argv_3499 ("FOLDER", "tmp_folder_4",					argv_1040.argv_1781 (argv_1446, "FOLDER", "tmp_folder_4"));	

	argv_3499 ("FOLDER", "sample_folder",				argv_1040.argv_1781 (argv_1446, "FOLDER", "sample_folder"));	
	argv_3499 ("FOLDER", "extracted_sample_folder",		argv_1040.argv_1781 (argv_1446, "FOLDER", "extracted_sample_folder"));
	argv_3499 ("FOLDER", "tool_folder",					argv_1040.argv_1781 (argv_1446, "FOLDER", "tool_folder"));	
	svalue = argv_1782 ("FOLDER", "tool_folder");
	argv_1787.dns.set_tool_folder (svalue.c_str());

	argv_3499 ("SAMPLE", "temporary_sample_suffix",		argv_1040.argv_1781 (argv_1446, "SAMPLE", "temporary_sample_suffix"));	
	argv_3499 ("SAMPLE", "actual_sample_suffix",			argv_1040.argv_1781 (argv_1446, "SAMPLE", "actual_sample_suffix"));	
	argv_3499 ("SAMPLE", "zip_sample_suffix",			argv_1040.argv_1781 (argv_1446, "SAMPLE", "zip_sample_suffix"));	
	argv_3498   ("SAMPLE",   "received_file_max_size",		argv_1040.argv_1777 (argv_1446, "SAMPLE", "received_file_max_size", 1, 30)); // 30 Mega max
	argv_3498   ("SAMPLE",   "max_nb_string",				argv_1040.argv_1777 (argv_1446, "SAMPLE", "max_nb_string",	1, 255)); // 30 Mega max
	argv_3498   ("SAMPLE",   "max_string_size",			argv_1040.argv_1777 (argv_1446, "SAMPLE", "max_string_size",	1, 255));

	argv_3960 = argv_1778 ("SAMPLE",   "received_file_max_size");
	argv_1787.dns.set_received_file_max_size (argv_3960);

	argv_3499 ("WEB", "tool",							argv_1040.argv_1781 (argv_1446, "WEB", "tool"));	
	argv_3499 ("WEB", "param",							argv_1040.argv_1781 (argv_1446, "WEB", "param"));	

	argv_3498 ("ZIP", "verbose_zip",						argv_1040.argv_1777 (argv_1446,   "ZIP", "verbose_zip", 0, 1));
	argv_3498 ("ZIP", "max_nb_file_in_archive",			argv_1040.argv_1777 (argv_1446,   "ZIP", "max_nb_file_in_archive", 1, 60));

	argv_3499 ("ZIP", "tool",							argv_1040.argv_1781 (argv_1446, "ZIP", "tool"));	
	argv_3499 ("ZIP", "param",							argv_1040.argv_1781 (argv_1446, "ZIP", "param"));	
	svalue = argv_1782("WEB", "tool"); 
	argv_1787.dns.set_web_tool	(svalue.c_str());
	svalue = argv_1782("WEB", "param");
	argv_1787.dns.set_web_param (svalue.c_str());
	svalue = argv_1782("ZIP", "tool");
	argv_1787.dns.set_zip_tool	(svalue.c_str());
	svalue = argv_1782("ZIP", "param");
	argv_1787.dns.set_zip_param (svalue.c_str());

	argv_3498 ("TIMEOUT",   "update_period",				argv_1040.argv_1777 (argv_1446, "TIMEOUT", "update_period", 0, 172800)); // 48h00 max
	argv_3960 = argv_1778 ("TIMEOUT",   "update_period");
	argv_1787.dns.set_update_period (argv_3960);

	argv_3498 ("TIMEOUT",   "ancilate_default_period",		argv_1040.argv_1777 (argv_1446, "TIMEOUT", "ancilate_default_period", 0, 240)); // 240 hours max (10 days)
	argv_3960 = argv_1778 ("TIMEOUT",   "ancilate_default_period");
	argv_1787.dns.set_ancilate_default_period (argv_3960);

	argv_3498 ("TIMEOUT",   "ancilate_fast_mode_enabled",	argv_1040.argv_1777 (argv_1446, "TIMEOUT", "ancilate_fast_mode_enabled", 0, 1)); 
	argv_3960 = argv_1778 ("TIMEOUT",   "ancilate_fast_mode_enabled");
	argv_1787.dns.set_ancilate_fast_mode_enabled(false);
	if (argv_3960 == 1) {
		argv_1787.dns.set_ancilate_fast_mode_enabled(true);
	}

	argv_3498 ("TIMEOUT",   "socket_max_inactivity_time",				argv_1040.argv_1777 (argv_1446, "TIMEOUT", "socket_max_inactivity_time", 1, 36000)); // seconds
	argv_3960 = argv_1778 ("TIMEOUT",   "socket_max_inactivity_time");
	argv_1787.dns.set_socket_max_inactivity_time (argv_3960);

	argv_3498 ("TIMEOUT",   "observer_refresh_period",				argv_1040.argv_1777 (argv_1446, "TIMEOUT", "observer_refresh_period", 1, 7200)); // max: 2 hours
	argv_3960 = argv_1778 ("TIMEOUT",   "observer_refresh_period");
	argv_1787.dns.set_observer_refresh_period (argv_3960);

	argv_3498 ("TIMEOUT",   "batch_processor_period",		argv_1040.argv_1777 (argv_1446, "TIMEOUT", "batch_processor_period", 0, 864000)); // 240h00 max
	argv_3960 = argv_1040.argv_1777 (argv_1446, "TIMEOUT", "abort_scan_if_too_long", 0, 1);
	bool bval = true;
	if (argv_3960 == 0) {
		bval = false;
	}

	argv_3498 ("TIMEOUT",   "batch_processor_enabled",	argv_1040.argv_1777 (argv_1446, "TIMEOUT", "batch_processor_enabled", 0, 1)); 
	argv_3960 = argv_1778 ("TIMEOUT",   "batch_processor_enabled");
	argv_1787.dns.set_batch_processor_enabled(false);
	if (argv_3960 == 1) {
		argv_1787.dns.set_batch_processor_enabled(true);
	}

	argv_3498 ("TIMEOUT",   "ancilate_enabled",	argv_1040.argv_1777 (argv_1446, "TIMEOUT", "ancilate_enabled", 0, 1)); 
	argv_3960 = argv_1778 ("TIMEOUT",   "ancilate_enabled");
	argv_1787.dns.set_ancilate_enabled(false);
	if (argv_3960 == 1) {
		argv_1787.dns.set_ancilate_enabled(true);
	}

	argv_3960 = argv_1040.argv_1777 (argv_1446, "TIMEOUT", "nb_retry_log_file", 0, 9999999);
	argv_3498 ("TIMEOUT", "nb_retry_log_file", argv_3960);

	argv_3960 = argv_1040.argv_1777 (argv_1446, "TIMEOUT", "sleep_time_before_retry_log", 0, 120000); // 2 minutes max
	argv_3498 ("TIMEOUT", "sleep_time_before_retry_log", argv_3960);

	argv_3960 = argv_1040.argv_1777 (argv_1446, "TIMEOUT", "nb_retry_scan", 0, 9999999);
	argv_3498 ("TIMEOUT", "nb_retry_scan", argv_3960);

	argv_3960 = argv_1040.argv_1777 (argv_1446, "TIMEOUT", "sleep_time_before_retry_scan", 0, 24000000); // 400 minutes max
	argv_3498 ("TIMEOUT", "sleep_time_before_retry_scan", argv_3960);

	argv_3960 = argv_1040.argv_1777 (argv_1446, "TIMEOUT", "symantec_max_log_wait_timeout", 0, 7200); // in seconds
	argv_3498 ("TIMEOUT", "symantec_max_log_wait_timeout", argv_3960);
	
	argv_1787.dns.set_abort_scan_if_too_long (bval);
	argv_3498 ("TIMEOUT",   "abort_scan_if_too_long",		bval); 
	argv_3960 = argv_1040.argv_1777 (argv_1446, "TIMEOUT", "avx_max_scan_duration", 2, 86400);
	argv_1787.dns.set_avx_max_scan_duration (argv_3960);
	argv_3498 ("TIMEOUT",   "avx_max_scan_duration",		argv_3960); // 24h00 max

	argv_3960 = argv_1040.argv_1777 (argv_1446, "TIMEOUT", "unzip_maximum_duration", 1, 3600); // 1 second to 1 hour
	argv_3498 ("TIMEOUT",   "unzip_maximum_duration",		argv_3960); // 1 hour max
	argv_1787.dns.set_unzip_maximum_duration (argv_3960);
	
	argv_3960 = argv_1040.argv_1777 (argv_1446, "TIMEOUT", "maximum_update_duration", 1, 3600); // 1 second to 1 hour
	argv_3498 ("TIMEOUT",   "maximum_update_duration",		argv_3960); // 1 hour max
	argv_1787.dns.set_max_update_duration (argv_3960);

	argv_3498 ("MD5",   "enable_md5",   argv_1040.argv_1777 (argv_1446, "MD5", "enable_md5",0,1));

	argv_3498 ("THREAD_QUEUE",   "load_result_queue_size",	argv_1040.argv_1777 (argv_1446, "THREAD_QUEUE", "load_result_queue_size", 1, 655360));
	argv_3498 ("THREAD_QUEUE",   "avx_runner_queue_size",  argv_1040.argv_1777 (argv_1446, "THREAD_QUEUE", "avx_runner_queue_size",  1, 655360));
	argv_3498 ("THREAD_QUEUE",   "scan_result_queue_size", argv_1040.argv_1777 (argv_1446, "THREAD_QUEUE", "scan_result_queue_size", 1, 655360));
	argv_3498 ("THREAD_QUEUE",   "batch_result_queue_size",argv_1040.argv_1777 (argv_1446, "THREAD_QUEUE", "batch_result_queue_size",1, 655360));
	argv_3498 ("THREAD_QUEUE",   "zip_queue_size",         argv_1040.argv_1777 (argv_1446, "THREAD_QUEUE", "zip_queue_size",         1, 655360));

	argv_3498   ("AVX", "nb_instance_per_avx",		argv_1040.argv_1777 (argv_1446, "AVX", "nb_instance_per_avx", 1 ,1)); // feature disabled.
	argv_3498	 ("AVX", "view_dos_window",			argv_1040.argv_1777 (argv_1446, "AVX", "view_dos_window", 0,1));	
	argv_3499 ("AVX", "kill_command",			argv_1040.argv_1781 (argv_1446, "AVX", "kill_command"));
	argv_3499 ("AVX", "ps_command",				argv_1040.argv_1781 (argv_1446, "AVX", "ps_command"));
	argv_3498	 ("AVX", "synchronous_mode",		argv_1040.argv_1777 (argv_1446, "AVX", "synchronous_mode", 0,1));	
	
	// retrieve the AVX runners list
	vector<string> v_values;
	v_values = argv_1040.argv_1761 (argv_1446, "AVX", "argv_1396");
	argv_3497 ("AVX", "argv_1396", v_values);
	argv_3864 i = 0;
	argv_3864 nb_avx = v_values.size ();
	// argv_3237 to parse avx runners configuration files
	Cconf_avx_runner conf_avx_runner;
	argv_1787.dns.set_nb_avx (nb_avx); // set the number of scanners into DNS
	argv_1787.dns.set_nb_instance_per_avx (argv_1778 ("AVX", "nb_instance_per_avx"));

	for (i=0 ; i<nb_avx ; i++) {
		argv_3946.push_back (conf_avx_runner);
	}

	string full_conf_filename;
	string base_dir = argv_1787.dns.get_base_folder (); 
	for (i=0 ; i<nb_avx ; i++) { // now perform parse
		full_conf_filename = base_dir + "\\" + v_values[i];
		// MessageBox (argv_2889, full_conf_filename.c_str(), "", MB_OK);
		bret = argv_3946[i].argv_2198 (full_conf_filename);
		if (bret == false) {
			argv_1787.argv_2251.argv_2247 (argv_1321, "+++ failed to parse argv_1037 argv_1396 : ", full_conf_filename.c_str());
			break;
		}
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1396
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
