// FUN_01283b64 @ 01283b64 size=204 calls_out=4 calls_in=0
// strings: 

void FUN_01283b64(int *param_1,undefined4 *param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  
  piVar3 = (int *)*param_2;
  DataMemoryBarrier(0xb);
  if (piVar3[4] == 1) {
    uVar5 = (*piVar3 - param_3) + piVar3[1];
    iVar1 = param_3;
  }
  else {
    uVar4 = 0;
    if ((int)param_4 < 0) {
LAB_01283bac:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar4,param_4);
    }
    if (param_4 == 0) {
      iVar1 = 1;
      uVar5 = 0;
    }
    else {
      uVar4 = 1;
      iVar1 = FUN_01298504(param_4,1);
      uVar5 = param_4;
      if (iVar1 == 0) goto LAB_01283bac;
    }
    FUN_01bed4e2(iVar1,param_3,param_4);
    FUN_01283c54(piVar3);
    uVar2 = 0x20 - LZCOUNT(uVar5 >> 10);
    if (6 < uVar2) {
      uVar2 = 7;
    }
    piVar3 = (int *)(uVar2 << 2 | 1);
  }
  *param_1 = iVar1;
  param_1[1] = param_4;
  param_1[2] = uVar5;
  param_1[3] = (int)piVar3;
  return;
}

