// FUN_0004e7fc @ 0004e7fc  size=164  callers=2
// program: bmminer


void FUN_0004e7fc(char *param_1)

{
  char local_2008 [8196];
  
  if (1 < DAT_000be63c) {
    snprintf(local_2008,0x2000,"%s: %s\n","stop_mining_and_restart",param_1);
    FUN_0004948c(1,local_2008,0);
  }
  FUN_0004e6b0();
  FUN_0004e6e8();
  FUN_00065af4();
  FUN_00065b8c();
  builtin_strncpy(local_2008,"restart\n",9);
  FUN_0004948c(0,local_2008);
                    /* WARNING: Subroutine does not return */
  __assert_fail("0","driver-btm-api.c",0xec,"stop_mining_and_restart");
}

