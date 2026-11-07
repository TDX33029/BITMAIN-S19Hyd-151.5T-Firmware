// FUN_0166f928 @ 0166f928 size=300 calls_out=3 calls_in=2
// strings: 

void FUN_0166f928(int *param_1,undefined4 param_2,int param_3,undefined4 *param_4,undefined1 param_5
                 )

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_28;
  
  uVar4 = 0;
  if (param_3 < 0) {
LAB_0166f940:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar4,param_3);
  }
  local_28 = 0;
  if (param_3 == 0) {
    iVar1 = 1;
    iVar8 = 0;
  }
  else {
    uVar4 = 1;
    iVar1 = FUN_01298504(param_3,1);
    iVar8 = param_3;
    if (iVar1 == 0) goto LAB_0166f940;
  }
  FUN_01bed4e2(iVar1,param_2,param_3);
  iVar7 = param_4[1];
  if (iVar7 < 0) {
LAB_0166f9ac:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(local_28,iVar7);
  }
  uVar4 = *param_4;
  if (iVar7 == 0) {
    iVar2 = 1;
    local_28 = 0;
  }
  else {
    iVar2 = FUN_01298504(iVar7,1);
    if (iVar2 == 0) {
      local_28 = 1;
      goto LAB_0166f9ac;
    }
    local_28 = iVar7;
  }
  FUN_01bed4e2(iVar2,uVar4,iVar7);
  iVar3 = param_4[3];
  iVar5 = param_4[4];
  param_1[6] = param_4[2];
  param_1[7] = iVar3;
  param_1[8] = iVar5;
  iVar3 = param_4[6];
  iVar5 = param_4[7];
  iVar6 = param_4[8];
  param_1[9] = param_4[5];
  param_1[10] = iVar3;
  param_1[0xb] = iVar5;
  param_1[0xc] = iVar6;
  *(undefined1 *)(param_1 + 0xd) = param_5;
  param_1[2] = param_3;
  *param_1 = iVar8;
  param_1[1] = iVar1;
  param_1[3] = local_28;
  param_1[4] = iVar2;
  param_1[5] = iVar7;
  return;
}

