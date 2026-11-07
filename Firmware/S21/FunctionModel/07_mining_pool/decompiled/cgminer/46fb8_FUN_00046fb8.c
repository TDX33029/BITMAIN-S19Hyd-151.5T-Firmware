// FUN_00046fb8 @ 00046fb8  size=64  callers=1
// program: cgminer


uint FUN_00046fb8(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  if (uVar1 == 0) {
    uVar1 = FUN_00046e30();
  }
  if (1 < uVar1 + 2) {
    FUN_00048528(param_1 + 0x28,uVar1 & 0xff);
  }
  return uVar1;
}

