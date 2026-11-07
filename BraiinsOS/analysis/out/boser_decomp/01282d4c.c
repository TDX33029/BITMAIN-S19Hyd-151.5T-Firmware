// FUN_01282d4c @ 01282d4c size=272 calls_out=6 calls_in=3
// strings: 

void FUN_01282d4c(int *param_1,int *param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  
  DataMemoryBarrier(0xb);
  if (param_2[2] == 1) {
    iVar2 = *param_2;
    uVar3 = param_2[1];
    thunk_FUN_01be4678(param_2);
    local_2c = (param_3 - iVar2) + param_4;
    uVar1 = 0x20 - LZCOUNT(uVar3 >> 10);
    if (6 < uVar1) {
      uVar1 = 7;
    }
    local_24 = uVar1 << 2 | 1;
    local_30 = iVar2;
    local_28 = uVar3;
    FUN_01283ef4(&local_30);
    *param_1 = local_30;
    param_1[1] = local_2c;
    param_1[2] = local_28;
    param_1[3] = local_24;
  }
  else {
    uVar4 = 0;
    if ((int)param_4 < 0) {
LAB_01282dd8:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar4,param_4);
    }
    if (param_4 == 0) {
      iVar2 = 1;
      uVar1 = 0;
    }
    else {
      uVar4 = 1;
      iVar2 = FUN_01298504(param_4,1);
      uVar1 = param_4;
      if (iVar2 == 0) goto LAB_01282dd8;
    }
    FUN_01bed4e2(iVar2,param_3,param_4);
    FUN_01282e84(param_2);
    *param_1 = iVar2;
    uVar3 = 0x20 - LZCOUNT(uVar1 >> 10);
    param_1[1] = param_4;
    param_1[2] = uVar1;
    if (6 < uVar3) {
      uVar3 = 7;
    }
    param_1[3] = uVar3 << 2 | 1;
  }
  return;
}

