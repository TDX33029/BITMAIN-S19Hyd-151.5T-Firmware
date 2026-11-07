// FUN_0129d888 @ 0129d888 size=476 calls_out=4 calls_in=0
// strings: 

void FUN_0129d888(int *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 local_48;
  uint uStack_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined8 local_30;
  
  if ((*param_2 & 1) != 0) {
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    uVar2 = *(uint *)(param_3 + 0x18);
    uVar1 = *(uint *)(param_3 + 0x1c);
    if (uVar2 - uVar1 < 5) {
      local_48 = 8;
      uStack_44 = uStack_44 & 0xffffff00;
      FUN_01328914(&local_40,param_3,&local_48,1);
      if (local_40 != 4) goto LAB_0129da38;
    }
    else {
      if (uVar2 < uVar1) goto LAB_0129da50;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 8;
      *(uint *)(param_3 + 0x1c) = uVar1 + 1;
    }
    FUN_0132901c(&local_40,param_3,uVar3,uVar4);
    if (local_40 != 4) goto LAB_0129da38;
  }
  if ((param_2[4] & 1) != 0) {
    uVar2 = *(uint *)(param_3 + 0x18);
    uVar1 = *(uint *)(param_3 + 0x1c);
    uVar5 = *(undefined8 *)(param_2 + 6);
    if (uVar2 - uVar1 < 5) {
      local_30 = CONCAT35(local_30._5_3_,0x11);
      FUN_01328914(&local_40,param_3,&local_30,1);
      if (local_40 != 4) goto LAB_0129da38;
    }
    else {
      if (uVar2 < uVar1) {
LAB_0129da50:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar1,uVar2,uVar2,&DAT_0188fa90);
      }
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x11;
      *(uint *)(param_3 + 0x1c) = uVar1 + 1;
    }
    local_30 = uVar5;
    FUN_01328914(&local_40,param_3,&local_30,8);
    if (local_40 != 4) goto LAB_0129da38;
  }
  FUN_01328b10(&local_40,param_3,param_2[8]);
  if (local_40 == 4) {
    *param_1 = 4;
    return;
  }
LAB_0129da38:
  param_1[1] = local_3c;
  *param_1 = local_40;
  param_1[2] = local_38;
  return;
}

