// FUN_00060a44 @ 00060a44  size=92  callers=0
// program: bmminer


undefined4 FUN_00060a44(void *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (void *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    memset(param_1,0,0x10);
    uVar1 = FUN_000608e4(&DAT_000a7478,param_1);
  }
  return uVar1;
}

