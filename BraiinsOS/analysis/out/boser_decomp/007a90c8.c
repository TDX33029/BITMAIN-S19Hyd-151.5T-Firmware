// FUN_007a90c8 @ 007a90c8 size=68 calls_out=2 calls_in=5
// strings: 

void FUN_007a90c8(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  iVar1 = 1;
  if (0x80000000 < uVar2) {
    iVar1 = uVar2 + 0x7fffffff;
  }
  if (iVar1 == 0) {
    FUN_0069263c((char)param_1[1],param_1[2]);
    return;
  }
  if (iVar1 != 1) {
    return;
  }
  if (uVar2 == 0x80000000) {
    return;
  }
  FUN_019bb7e0(uVar2,param_1[1]);
  return;
}

