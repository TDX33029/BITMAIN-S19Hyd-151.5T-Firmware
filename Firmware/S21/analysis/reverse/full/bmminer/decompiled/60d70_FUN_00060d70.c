// FUN_00060d70 @ 00060d70  size=88  callers=2
// program: bmminer


undefined4 FUN_00060d70(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_00944b94 == 0) {
    uVar1 = *(undefined4 *)(&DAT_000bf09c + param_1 * 4);
  }
  else {
    uVar1 = *(undefined4 *)(&DAT_000bedb0 + param_1 * 4);
  }
  return uVar1;
}

