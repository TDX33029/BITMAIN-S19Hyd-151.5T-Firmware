// FUN_00063afc @ 00063afc  size=124  callers=1
// program: bmminer


undefined4 FUN_00063afc(void)

{
  undefined4 uVar1;
  char local_808 [2048];
  
  if (DAT_00944b90 == 0) {
    builtin_strncpy(local_808,"please init platform first!!\n",0x1e);
    FUN_0004948c(0,local_808,0);
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

