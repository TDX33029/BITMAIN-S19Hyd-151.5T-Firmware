// FUN_01ac9950 @ 01ac9950 size=328 calls_out=5 calls_in=2
// strings: 

void FUN_01ac9950(int *param_1,int *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int local_28;
  
  if (*param_2 == 1) {
    puVar1 = (uint *)(param_2 + 1);
  }
  else {
    if (param_2[2] == 0) {
      iVar5 = 1;
      local_28 = 0;
      iVar4 = 0;
      goto LAB_01ac9a70;
    }
    puVar1 = (uint *)(param_2 + 3);
  }
  uVar3 = *puVar1;
  iVar6 = param_2[5];
  uVar7 = param_2[6];
  if (uVar3 != 0) {
    if (uVar3 < uVar7) {
      if (*(char *)(iVar6 + uVar3) < -0x40) goto LAB_01ac99b0;
    }
    else if (uVar7 != uVar3) {
LAB_01ac99b0:
                    /* WARNING: Subroutine does not return */
      FUN_012fb514(iVar6,uVar7,uVar3,uVar7,&DAT_01d2fcf8);
    }
  }
  iVar4 = uVar7 - uVar3;
  uVar2 = 0;
  if (iVar4 < 0) {
LAB_01ac99f0:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar2,iVar4);
  }
  if (uVar7 == uVar3) {
    iVar5 = 1;
    local_28 = 0;
  }
  else {
    uVar2 = 1;
    iVar5 = FUN_01298504(iVar4,1);
    local_28 = iVar4;
    if (iVar5 == 0) goto LAB_01ac99f0;
  }
  FUN_01bed4e2(iVar5,(char *)(iVar6 + uVar3),iVar4);
  if (uVar3 <= uVar7) {
    if ((uVar3 != 0 && uVar3 < uVar7) && (*(char *)(iVar6 + uVar3) < -0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec(&DAT_00532886,0x30,&DAT_01d2f9e8);
    }
    param_2[6] = uVar3;
  }
LAB_01ac9a70:
  *param_1 = local_28;
  param_1[1] = iVar5;
  param_1[2] = iVar4;
  return;
}

