// FUN_012a1f9c @ 012a1f9c size=336 calls_out=5 calls_in=3
// strings: 

void FUN_012a1f9c(int *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  int local_38;
  int local_34;
  int local_30;
  undefined8 local_28;
  
  uVar2 = *param_2;
  uVar1 = FUN_01337c54(param_2[4]);
  if ((uVar2 & 1) != 0) {
    uVar1 = uVar1 + 9;
  }
  param_2[5] = uVar1;
  FUN_01328ef8(&local_38,param_3);
  if (local_38 == 4) {
    if ((*param_2 & 1) != 0) {
      uVar2 = *(uint *)(param_3 + 0x18);
      uVar1 = *(uint *)(param_3 + 0x1c);
      uVar3 = *(undefined8 *)(param_2 + 2);
      if (uVar2 - uVar1 < 5) {
        local_28 = CONCAT35(local_28._5_3_,9);
        FUN_01328914(&local_38,param_3,&local_28,1);
        if (local_38 != 4) goto LAB_012a20b8;
      }
      else {
        if (uVar2 < uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar1,uVar2,uVar2,&DAT_0188fa90);
        }
        *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 9;
        *(uint *)(param_3 + 0x1c) = uVar1 + 1;
      }
      local_28 = uVar3;
      FUN_01328914(&local_38,param_3,&local_28,8);
      if (local_38 != 4) goto LAB_012a20b8;
    }
    FUN_01328b10(&local_38,param_3,param_2[4]);
    if (local_38 == 4) {
      *param_1 = 4;
      return;
    }
  }
LAB_012a20b8:
  param_1[1] = local_34;
  *param_1 = local_38;
  param_1[2] = local_30;
  return;
}

