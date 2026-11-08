// FUN_00042dbc @ 00042dbc  size=248  callers=0
// program: cgminer


void FUN_00042dbc(void)

{
  int iVar1;
  char local_808 [2048];
  
  if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (4 < DAT_00067848)) {
    builtin_strncpy(local_808,"cgminer call shutdown",0x16);
    FUN_0001dd98(5,local_808,0);
  }
  iVar1 = FUN_00042888("shutdown",8);
  if ((iVar1 != 0) && (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)))) {
    snprintf(local_808,0x800,"%s: bitmain_shutdown failed.","bitmain_c5_shutdown");
    FUN_0001dd98(3,local_808,0);
  }
  return;
}

