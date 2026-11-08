// FUN_01aa32d8 @ 01aa32d8 size=216 calls_out=1 calls_in=2
// strings: 

int FUN_01aa32d8(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  if (param_1 == param_2) {
    iVar3 = 0;
  }
  else {
    piVar5 = (int *)(param_1 + 0xc);
    iVar3 = 0;
    uVar4 = (uint)(param_2 - param_1) / 0x18;
    do {
      iVar6 = 0;
      if (piVar5[-3] != -0x80000000) {
        iVar6 = piVar5[-1] + ((LZCOUNT(piVar5[-1] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      iVar1 = 0;
      if (*piVar5 != -0x80000000) {
        iVar7 = piVar5[2];
        iVar1 = FUN_01aa2d9c(piVar5[1],piVar5[1] + iVar7 * 0x60);
        uVar2 = iVar1 + iVar7 * 2;
        iVar1 = uVar2 + ((LZCOUNT(uVar2 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      piVar5 = piVar5 + 6;
      uVar4 = uVar4 - 1;
      iVar3 = iVar1 + iVar6 + iVar3 + ((LZCOUNT(iVar1 + iVar6 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
    } while (uVar4 != 0);
  }
  return iVar3;
}

