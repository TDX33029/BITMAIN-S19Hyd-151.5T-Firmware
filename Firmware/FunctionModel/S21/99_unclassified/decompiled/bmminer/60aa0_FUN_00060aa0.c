// FUN_00060aa0 @ 00060aa0  size=72  callers=0
// program: bmminer


undefined4 FUN_00060aa0(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_000608e4(&DAT_000a7478,param_1);
  }
  return uVar1;
}

