// FUN_0160fc68 @ 0160fc68 size=616 calls_out=6 calls_in=2
// strings: 

void FUN_0160fc68(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined2 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int extraout_r3;
  int iVar4;
  int extraout_r3_00;
  ulonglong uVar5;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  uVar5 = FUN_01623bf0(param_2,param_3);
  uVar3 = (undefined4)(uVar5 >> 0x20);
  piVar2 = (int *)uVar5;
  uVar1 = FUN_01623bc0(param_2,param_3);
  switch(uVar1) {
  case 1:
    FUN_016428bc(&local_50,piVar2,uVar3);
    if (local_50 != 0) {
LAB_0160fdb0:
      param_1[2] = local_48;
      param_1[3] = local_44;
      *param_1 = 8;
      param_1[1] = local_4c;
      return;
    }
    local_50 = 4;
    iVar4 = extraout_r3;
    local_4c = local_48;
    goto LAB_0160fe34;
  default:
    FUN_01623ae4(&local_50,param_2,param_3);
    if (local_50 == -0x80000000) {
      param_1[1] = local_4c;
      param_1[3] = local_44;
      *param_1 = 8;
      param_1[2] = local_48;
      return;
    }
    local_40 = local_44;
    iVar4 = local_50;
    local_50 = 7;
    local_44 = local_48;
    break;
  case 3:
    if (uVar5 < 0x400000000) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,4,uVar3,&DAT_01d06318);
    }
    if (uVar5 < 0x800000000) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(4,8,uVar3,&DAT_01d06318);
    }
    if (uVar5 < 0xc00000000) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(8,0xc,uVar3,&DAT_01d06318);
    }
    if (uVar5 < 0x1000000000) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0xc,0x10,uVar3,&DAT_01d06318);
    }
    if (uVar5 < 0x1400000000) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0x10,0x14,uVar3,&DAT_01d06318);
    }
    iVar4 = *piVar2;
    local_50 = 5;
    local_4c = piVar2[1];
    local_44 = piVar2[2];
    local_40 = piVar2[3];
    param_4 = piVar2[4];
    break;
  case 4:
    FUN_01629fd8(&local_50,param_2,param_3,param_4,param_5);
    if (local_50 == 4) {
      param_1[2] = local_48;
      *param_1 = 8;
      param_1[1] = local_4c;
      param_1[3] = local_44;
      return;
    }
    local_60 = local_38;
    iStack_5c = iStack_34;
    iStack_58 = iStack_30;
    iStack_54 = iStack_2c;
    iVar4 = local_4c;
    param_4 = local_3c;
    local_4c = local_48;
    break;
  case 7:
    FUN_016428bc(&local_50,piVar2,uVar3);
    if (local_50 != 0) goto LAB_0160fdb0;
    local_50 = 6;
    iVar4 = extraout_r3_00;
    local_4c = local_48;
LAB_0160fe34:
  }
  *param_1 = local_50;
  param_1[4] = local_40;
  param_1[2] = local_4c;
  param_1[1] = iVar4;
  param_1[5] = param_4;
  param_1[3] = local_44;
  param_1[6] = local_60;
  param_1[7] = iStack_5c;
  param_1[8] = iStack_58;
  param_1[9] = iStack_54;
  return;
}

