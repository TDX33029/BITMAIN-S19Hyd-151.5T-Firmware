// FUN_01013038 @ 01013038 size=212 calls_out=0 calls_in=1
// strings: 

int FUN_01013038(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 == param_2) {
    return 0;
  }
  iVar1 = 0;
  uVar5 = (uint)((int)param_2 - (int)param_1) / 0x30;
  do {
    uVar4 = param_1[10];
    uVar2 = 0;
    if (uVar4 != 0) {
      uVar2 = uVar4 + ((LZCOUNT(uVar4 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    if ((char)param_1[0xb] != '\x02') {
      uVar2 = uVar2 + 2;
    }
    iVar3 = 2;
    if (*(double *)(param_1 + 2) != 0.0) {
      iVar3 = 0xb;
    }
    if ((*param_1 & 1) != 0) {
      uVar2 = uVar2 + iVar3;
    }
    iVar3 = 2;
    if (*(double *)(param_1 + 6) != 0.0) {
      iVar3 = 0xb;
    }
    if ((param_1[4] & 1) != 0) {
      uVar2 = uVar2 + iVar3;
    }
    uVar5 = uVar5 - 1;
    iVar1 = uVar2 + iVar1 + ((LZCOUNT(uVar2 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
    param_1 = param_1 + 0xc;
  } while (uVar5 != 0);
  return iVar1;
}

