// FUN_01a60f90 @ 01a60f90 size=88 calls_out=2 calls_in=1
// strings: 

void FUN_01a60f90(int param_1)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  
  FUN_01a4bbdc();
  pbVar2 = (byte *)(*(int *)(param_1 + 0x14) + 0x69);
  for (iVar3 = *(int *)(param_1 + 0x18) * 0xc0; iVar3 != 0; iVar3 = iVar3 + -0xc0) {
    if (*(int *)(pbVar2 + -0x69) == 1) {
      uVar1 = *(uint *)(pbVar2 + -0xd);
      if (uVar1 < 2) {
        uVar1 = (uint)*pbVar2;
      }
      if (uVar1 == 1) {
        FUN_01a60f90(pbVar2 + -0x61);
      }
    }
    pbVar2 = pbVar2 + 0xc0;
  }
  return;
}

