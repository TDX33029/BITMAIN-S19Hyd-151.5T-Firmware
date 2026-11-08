// FUN_0094ad08 @ 0094ad08 size=436 calls_out=9 calls_in=3
// strings: 

void FUN_0094ad08(int *param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int local_68;
  uint local_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined1 local_38 [4];
  uint local_34;
  uint local_30;
  undefined1 uStack_21;
  
  uVar3 = 0x15;
  if ((int)*param_2 < 0) {
    uVar3 = *param_2 ^ 0x80000000;
  }
  switch(uVar3) {
  case 0xc:
    uVar3 = param_2[1];
    uVar5 = param_2[2];
    uVar4 = param_2[3];
    *param_1 = 2;
    param_1[1] = uVar3;
    param_1[2] = uVar5;
    param_1[3] = uVar4;
    return;
  case 0xd:
    break;
  case 0xe:
    uVar3 = param_2[1];
    uVar5 = param_2[2];
    uVar4 = param_2[3];
    FUN_00fab1e0(&local_68,uVar5,uVar4);
    if (local_68 != 0) {
      if (uVar3 != 0x80000000) {
        local_38[0] = 6;
        local_34 = uVar5;
        local_30 = uVar4;
        FUN_00924358(&local_68,local_38,&uStack_21,&DAT_01867c28);
        *param_1 = local_68;
        param_1[1] = local_64;
        param_1[2] = iStack_60;
        param_1[3] = iStack_5c;
        param_1[4] = iStack_58;
        param_1[5] = iStack_54;
        param_1[6] = local_50;
        param_1[7] = iStack_4c;
        param_1[8] = iStack_48;
        param_1[9] = iStack_44;
        param_1[10] = iStack_40;
        param_1[0xb] = iStack_3c;
        if (uVar3 != 0) {
          thunk_FUN_016d3fb4(uVar5);
        }
        return;
      }
      uVar3 = uVar5;
      uVar5 = uVar4;
      uVar4 = local_64;
    }
    param_1[1] = uVar3;
    param_1[2] = uVar5;
    param_1[3] = uVar4;
    *param_1 = 2;
    return;
  case 0xf:
    FUN_009270b8(param_1,param_2[1],param_2[2]);
    FUN_008f7448(param_2);
    return;
  default:
    FUN_008f73e8(param_1,param_2,&uStack_21,&DAT_01867c28);
    return;
  }
  uVar3 = param_2[2];
  uVar2 = 0;
  if ((int)uVar3 < 0) {
LAB_0094add8:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar2,uVar3);
  }
  uVar5 = param_2[1];
  if (uVar3 == 0) {
    uVar4 = 0;
    iVar1 = 1;
  }
  else {
    iVar1 = thunk_FUN_016d4a50(uVar3);
    uVar4 = uVar3;
    if (iVar1 == 0) {
      uVar2 = 1;
      goto LAB_0094add8;
    }
  }
  FUN_016dd1aa(iVar1,uVar5,uVar3);
  param_1[3] = uVar3;
  *param_1 = 2;
  param_1[1] = uVar4;
  param_1[2] = iVar1;
  FUN_008f7448(param_2);
  return;
}

