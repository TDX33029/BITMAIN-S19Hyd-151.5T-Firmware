// FUN_00b223f4 @ 00b223f4 size=264 calls_out=4 calls_in=9
// strings: 

void FUN_00b223f4(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = param_1[2];
  uVar6 = (uint)(param_3 - param_2) >> 3;
  if ((uint)(*param_1 - iVar7) < (uint)(param_3 - param_2) >> 3) {
    FUN_006520b4(param_1,iVar7,uVar6,4,0xc);
    iVar7 = param_1[2];
  }
  if (param_2 != param_3) {
    piVar5 = (int *)(param_2 + 4);
    piVar2 = (int *)(param_1[1] + iVar7 * 0xc + 8);
    do {
      iVar4 = *piVar5;
      iVar3 = 0;
      if (iVar4 < 0) {
LAB_00b224f0:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(iVar3,param_2);
      }
      iVar1 = piVar5[-1];
      if (iVar4 == 0) {
        param_2 = 1;
      }
      else {
        iVar3 = 1;
        param_2 = FUN_01298504(iVar4,1);
        if (param_2 == 0) {
          param_2 = iVar4;
          goto LAB_00b224f0;
        }
        iVar3 = iVar4;
      }
      piVar5 = piVar5 + 2;
      FUN_01bed4e2(param_2,iVar1,iVar4);
      piVar2[-2] = iVar3;
      iVar7 = iVar7 + 1;
      *piVar2 = iVar4;
      piVar2[-1] = param_2;
      piVar2 = piVar2 + 3;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  param_1[2] = iVar7;
  return;
}

