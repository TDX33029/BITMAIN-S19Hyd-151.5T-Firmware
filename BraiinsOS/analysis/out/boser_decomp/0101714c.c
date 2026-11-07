// FUN_0101714c @ 0101714c size=312 calls_out=4 calls_in=1
// strings: 

void FUN_0101714c(uint *param_1,int *param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint local_38;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  uVar3 = 0;
  iVar4 = param_3 * 0xc;
  if (0xaaaaaaa < param_3) {
LAB_01017178:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar3,iVar4);
  }
  if (iVar4 == 0) {
    piVar1 = (int *)&SUB_00000004;
    uVar2 = 0;
  }
  else {
    uVar3 = 4;
    piVar1 = (int *)FUN_01298504(iVar4,4);
    if (piVar1 == (int *)0x0) goto LAB_01017178;
    uVar2 = param_3;
  }
  if (param_3 < 2) {
    if (param_3 == 0) {
      local_38 = 0;
      if (*param_2 != -0x80000000) {
        FUN_019bb7e0(*param_2,param_2[1]);
      }
      goto LAB_01017258;
    }
    param_3 = 1;
    piVar6 = piVar1;
  }
  else {
    iVar4 = *param_2;
    iVar9 = param_2[1];
    iVar7 = 0;
    iVar8 = param_2[2];
    piVar5 = piVar1;
    do {
      if (iVar4 == -0x80000000) {
        local_30 = -0x80000000;
      }
      else {
        FUN_006666fc(&local_30,iVar9,iVar8);
      }
      iVar7 = iVar7 + 1;
      piVar6 = piVar5 + 3;
      *piVar5 = local_30;
      piVar5[1] = iStack_2c;
      piVar5[2] = iStack_28;
      piVar5 = piVar6;
    } while (param_3 - 1 != iVar7);
  }
  iVar4 = param_2[1];
  iVar7 = param_2[2];
  *piVar6 = *param_2;
  piVar6[1] = iVar4;
  piVar6[2] = iVar7;
  local_38 = param_3;
LAB_01017258:
  *param_1 = uVar2;
  param_1[1] = (uint)piVar1;
  param_1[2] = local_38;
  return;
}

