// FUN_012a461c @ 012a461c size=448 calls_out=3 calls_in=0
// strings: 

void FUN_012a461c(int *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  int local_30;
  int local_2c;
  int local_28;
  undefined8 local_20;
  
  if ((*param_2 & 1) != 0) {
    uVar2 = *(uint *)(param_3 + 0x18);
    uVar1 = *(uint *)(param_3 + 0x1c);
    uVar3 = *(undefined8 *)(param_2 + 2);
    if (uVar2 - uVar1 < 5) {
      local_20 = CONCAT35(local_20._5_3_,9);
      FUN_01328914(&local_30,param_3,&local_20,1);
      if (local_30 != 4) goto LAB_012a47b0;
    }
    else {
      if (uVar2 < uVar1) goto LAB_012a47c8;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 9;
      *(uint *)(param_3 + 0x1c) = uVar1 + 1;
    }
    local_20 = uVar3;
    FUN_01328914(&local_30,param_3,&local_20,8);
    if (local_30 != 4) goto LAB_012a47b0;
  }
  if ((param_2[4] & 1) != 0) {
    uVar2 = *(uint *)(param_3 + 0x18);
    uVar1 = *(uint *)(param_3 + 0x1c);
    uVar3 = *(undefined8 *)(param_2 + 6);
    if (uVar2 - uVar1 < 5) {
      local_20 = CONCAT35(local_20._5_3_,0x11);
      FUN_01328914(&local_30,param_3,&local_20,1);
      if (local_30 != 4) goto LAB_012a47b0;
    }
    else {
      if (uVar2 < uVar1) {
LAB_012a47c8:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar1,uVar2,uVar2,&DAT_0188fa90);
      }
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x11;
      *(uint *)(param_3 + 0x1c) = uVar1 + 1;
    }
    local_20 = uVar3;
    FUN_01328914(&local_30,param_3,&local_20,8);
    if (local_30 != 4) goto LAB_012a47b0;
  }
  FUN_01328b10(&local_30,param_3,param_2[8]);
  if (local_30 == 4) {
    *param_1 = 4;
    return;
  }
LAB_012a47b0:
  param_1[1] = local_2c;
  *param_1 = local_30;
  param_1[2] = local_28;
  return;
}

