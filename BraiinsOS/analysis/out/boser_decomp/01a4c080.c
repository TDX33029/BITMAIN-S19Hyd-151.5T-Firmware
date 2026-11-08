// FUN_01a4c080 @ 01a4c080 size=176 calls_out=4 calls_in=1
// strings: 

void FUN_01a4c080(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar5 = param_2[1];
  iVar6 = param_2[2];
  iVar4 = 0;
  if (iVar6 < 0) {
LAB_01a4c09c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(iVar4,iVar6);
  }
  if (iVar6 == 0) {
    iVar1 = 1;
  }
  else {
    iVar4 = 1;
    iVar1 = FUN_01298504(iVar6,1);
    if (iVar1 == 0) goto LAB_01a4c09c;
    iVar4 = iVar6;
  }
  FUN_01bed4e2(iVar1,uVar5,iVar6);
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  *param_1 = *param_3;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[9] = 0x80000000;
  uVar2 = *param_2;
  param_1[3] = iVar4;
  param_1[4] = iVar1;
  param_1[5] = iVar6;
  param_1[6] = 0;
  param_1[7] = 4;
  param_1[8] = 0;
  FUN_0134bd64(uVar2,uVar5);
  return;
}

