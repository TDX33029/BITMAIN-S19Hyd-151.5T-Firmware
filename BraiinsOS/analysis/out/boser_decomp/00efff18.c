// FUN_00efff18 @ 00efff18 size=336 calls_out=2 calls_in=1
// strings: 

void FUN_00efff18(undefined4 *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *param_2;
  uVar3 = 0;
  if (uVar1 != 3) {
    iVar6 = 0;
    iVar7 = 0;
    if (param_2[10] != 0x80000000) {
      iVar7 = param_2[0xc] + ((LZCOUNT(param_2[0xc] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    uVar4 = param_2[6];
    if (uVar4 != 0) {
      iVar6 = uVar4 + ((LZCOUNT(uVar4 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    iVar5 = 0;
    if (uVar1 != 2) {
      if ((uVar1 & 1) == 0) {
        if (param_2[1] == 0) {
          iVar5 = 2;
        }
        else {
          iVar5 = ((LZCOUNT(param_2[1] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 3;
        }
      }
      else {
        iVar5 = 2;
        if (*(double *)(param_2 + 2) != 0.0) {
          iVar5 = 0xb;
        }
      }
    }
    uVar1 = param_2[9];
    iVar2 = FUN_011df750(param_2[8],uVar1 * 0x34 + param_2[8]);
    uVar1 = iVar6 + iVar7 + iVar5 + uVar1 + iVar2;
    uVar1 = uVar1 + ((LZCOUNT(uVar1 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    uVar4 = *(uint *)(param_3 + 4) ^ 0x7fffffff;
    if (uVar4 < uVar1) {
      param_1[1] = uVar1;
      param_1[2] = uVar4;
      uVar3 = 1;
    }
    else {
      FUN_00f00068(param_2,param_3);
      uVar3 = 0;
    }
  }
  *param_1 = uVar3;
  return;
}

