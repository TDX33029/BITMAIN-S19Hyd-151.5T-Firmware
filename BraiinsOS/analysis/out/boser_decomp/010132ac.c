// FUN_010132ac @ 010132ac size=328 calls_out=1 calls_in=2
// strings: 

int FUN_010132ac(uint *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_1 == param_2) {
    iVar7 = 0;
  }
  else {
    iVar7 = 0;
    uVar3 = (uint)((int)param_2 - (int)param_1) / 0x38;
    do {
      iVar6 = 0;
      if (param_1[10] != 0x80000000) {
        iVar6 = param_1[0xc] + ((LZCOUNT(param_1[0xc] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      uVar1 = param_1[6];
      iVar5 = 0;
      iVar4 = 0;
      if (uVar1 != 0) {
        iVar4 = uVar1 + ((LZCOUNT(uVar1 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      if (*param_1 != 2) {
        if ((*param_1 & 1) == 0) {
          if (param_1[1] == 0) {
            iVar5 = 2;
          }
          else {
            iVar5 = ((LZCOUNT(param_1[1] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 3;
          }
        }
        else {
          iVar5 = 2;
          if (*(double *)(param_1 + 2) != 0.0) {
            iVar5 = 0xb;
          }
        }
      }
      uVar1 = param_1[9];
      iVar2 = FUN_011df750(param_1[8],uVar1 * 0x34 + param_1[8]);
      param_1 = param_1 + 0xe;
      uVar3 = uVar3 - 1;
      uVar1 = iVar4 + iVar6 + iVar5 + uVar1 + iVar2;
      iVar7 = uVar1 + iVar7 + ((LZCOUNT(uVar1 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
    } while (uVar3 != 0);
  }
  return iVar7;
}

