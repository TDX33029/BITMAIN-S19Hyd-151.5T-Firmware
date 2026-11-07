// FUN_00053ce4 @ 00053ce4  size=64  callers=1
// program: bmminer


uint FUN_00053ce4(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  if (uVar1 == 0) {
    uVar1 = FUN_00053b5c();
  }
  if (1 < uVar1 + 2) {
    FUN_00055254(param_1 + 0x28,uVar1 & 0xff);
  }
  return uVar1;
}

