// FUN_01053244 @ 01053244 size=188 calls_out=1 calls_in=1
// strings: rdataFormErrNotImpRefusedYXRRSetNXRRSetNotAuthNotZoneBADVERSBADSIGBADKEYBADTIMEBADMODEBADNAMEBADALGBADCOOKIEargument `ptr` is mis-aligned for `N` tag bits and could be parsed as marked `null` pointer. | Record | name_labels | dns_class

void FUN_01053244(int param_1,undefined4 param_2)

{
  int local_28;
  
  local_28 = param_1 + 0x48;
  FUN_00fb34b0(param_2,"Record",6,"name_labels",0xb,param_1,FUN_0103cee8,"dns_class",9,
               param_1 + 0x44,FUN_007227c0,"ttl",3,param_1 + 0xe4,FUN_007883b8,
               "rdataFormErrNotImpRefusedYXRRSetNXRRSetNotAuthNotZoneBADVERSBADSIGBADKEYBADTIMEBADMODEBADNAMEBADALGBADCOOKIEargument `ptr` is mis-aligned for `N` tag bits and could be parsed as marked `null` pointer."
               ,5,&local_28,FUN_010375e4);
  return;
}

