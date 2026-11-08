// FUN_01aa2cec @ 01aa2cec size=176 calls_out=0 calls_in=4
// strings: 

int FUN_01aa2cec(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if (param_1 == param_2) {
    return 0;
  }
  piVar2 = (int *)(param_1 + 8);
  iVar1 = 0;
  uVar5 = (uint)(param_2 - param_1) >> 4;
  do {
    iVar6 = 0;
    if (piVar2[-2] == 1) {
      uVar7 = piVar2[-1];
      uVar3 = LZCOUNT(uVar7 | 1) | 0x20;
      if ((int)uVar7 < 0) {
        uVar3 = LZCOUNT((int)uVar7 >> 0x1f);
      }
      iVar6 = ((uVar3 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
    }
    iVar4 = 0;
    if (*piVar2 == 1) {
      uVar3 = piVar2[1];
      uVar7 = LZCOUNT(uVar3 | 1) | 0x20;
      if ((int)uVar3 < 0) {
        uVar7 = LZCOUNT((int)uVar3 >> 0x1f);
      }
      iVar4 = ((uVar7 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
    }
    piVar2 = piVar2 + 4;
    uVar5 = uVar5 - 1;
    iVar1 = iVar1 + iVar6 + iVar4 + 1;
  } while (uVar5 != 0);
  return iVar1;
}

