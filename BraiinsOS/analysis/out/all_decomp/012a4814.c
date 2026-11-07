// FUN_012a4814 @ 012a4814 size=464 calls_out=4 calls_in=2
// strings: 

void FUN_012a4814(int *param_1,uint *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  int local_34;
  int local_30;
  int local_2c;
  undefined8 local_28;
  
  iVar4 = 0;
  if ((*param_2 & 1) != 0) {
    iVar4 = 9;
  }
  if ((param_2[4] & 1) != 0) {
    iVar4 = iVar4 + 9;
  }
  iVar1 = FUN_01337c54(param_2[8]);
  param_2[9] = iVar4 + iVar1;
  if ((*param_2 & 1) != 0) {
    uVar3 = *(uint *)(param_3 + 0x18);
    uVar2 = *(uint *)(param_3 + 0x1c);
    uVar5 = *(undefined8 *)(param_2 + 2);
    if (uVar3 - uVar2 < 5) {
      local_28 = CONCAT35(local_28._5_3_,9);
      FUN_01328914(&local_34,param_3,&local_28,1);
      if (local_34 != 4) goto LAB_012a49b8;
    }
    else {
      if (uVar3 < uVar2) goto LAB_012a49d0;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 9;
      *(uint *)(param_3 + 0x1c) = uVar2 + 1;
    }
    local_28 = uVar5;
    FUN_01328914(&local_34,param_3,&local_28,8);
    if (local_34 != 4) goto LAB_012a49b8;
  }
  if ((param_2[4] & 1) != 0) {
    uVar3 = *(uint *)(param_3 + 0x18);
    uVar2 = *(uint *)(param_3 + 0x1c);
    uVar5 = *(undefined8 *)(param_2 + 6);
    if (uVar3 - uVar2 < 5) {
      local_28 = CONCAT35(local_28._5_3_,0x11);
      FUN_01328914(&local_34,param_3,&local_28,1);
      if (local_34 != 4) goto LAB_012a49b8;
    }
    else {
      if (uVar3 < uVar2) {
LAB_012a49d0:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar2,uVar3,uVar3,&DAT_0188fa90);
      }
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 0x11;
      *(uint *)(param_3 + 0x1c) = uVar2 + 1;
    }
    local_28 = uVar5;
    FUN_01328914(&local_34,param_3,&local_28,8);
    if (local_34 != 4) goto LAB_012a49b8;
  }
  FUN_01328b10(&local_34,param_3,param_2[8]);
  if (local_34 == 4) {
    *param_1 = 4;
    return;
  }
LAB_012a49b8:
  *param_1 = local_34;
  param_1[1] = local_30;
  param_1[2] = local_2c;
  return;
}

