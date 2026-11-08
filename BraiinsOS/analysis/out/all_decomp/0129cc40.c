// FUN_0129cc40 @ 0129cc40 size=304 calls_out=3 calls_in=1
// strings: 

void FUN_0129cc40(int *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  int local_38;
  int local_34;
  int local_30;
  undefined8 local_28;
  
  if ((*param_2 & 1) != 0) {
    uVar1 = *(uint *)(param_3 + 0x18);
    uVar2 = *(uint *)(param_3 + 0x1c);
    uVar3 = *(undefined8 *)(param_2 + 2);
    if (uVar1 - uVar2 < 5) {
      local_28 = CONCAT35(local_28._5_3_,9);
      FUN_01328914(&local_38,param_3,&local_28,1);
      if (local_38 != 4) goto LAB_0129cd40;
    }
    else {
      if (uVar1 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar2,uVar1,uVar1,&DAT_0188fa90);
      }
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 9;
      *(uint *)(param_3 + 0x1c) = uVar2 + 1;
    }
    local_28 = uVar3;
    FUN_01328914(&local_38,param_3,&local_28,8);
    if (local_38 != 4) goto LAB_0129cd40;
  }
  FUN_01328b10(&local_38,param_3,param_2[4]);
  if (local_38 == 4) {
    *param_1 = 4;
    return;
  }
LAB_0129cd40:
  param_1[1] = local_34;
  *param_1 = local_38;
  param_1[2] = local_30;
  return;
}

