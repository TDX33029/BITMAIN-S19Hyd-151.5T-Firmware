// FUN_0093ff14 @ 0093ff14 size=340 calls_out=3 calls_in=3
// strings: 

void FUN_0093ff14(int *param_1,uint *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int local_68;
  int local_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined1 uStack_21;
  
  uVar3 = *param_2;
  uVar2 = 0x15;
  if ((int)uVar3 < 0) {
    uVar2 = uVar3 ^ 0x80000000;
  }
  if (uVar2 != 0x10) {
    if (uVar2 == 0x11) {
      piVar4 = (int *)param_2[1];
      local_68 = *piVar4;
      local_64 = piVar4[1];
      iStack_60 = piVar4[2];
      iStack_5c = piVar4[3];
      if (local_68 == -0x80000000) {
        uVar1 = (undefined1)local_64;
        FUN_008f7448(&local_68);
        local_54._0_1_ = uVar1;
LAB_0093ff88:
        *(undefined1 *)(param_1 + 1) = (undefined1)local_54;
        *param_1 = 2;
      }
      else {
        FUN_008f73e8(&local_58,&local_68,&uStack_21,&DAT_01867c68);
        if (local_58 == 2) {
          goto LAB_0093ff88;
        }
        *param_1 = local_58;
        param_1[1] = local_54;
        param_1[2] = iStack_50;
        param_1[3] = iStack_4c;
        param_1[4] = iStack_48;
        param_1[5] = iStack_44;
        param_1[6] = local_40;
        param_1[7] = iStack_3c;
        param_1[8] = iStack_38;
        param_1[9] = iStack_34;
        param_1[10] = iStack_30;
        param_1[0xb] = iStack_2c;
      }
      thunk_FUN_016d3fb4(piVar4);
      goto joined_r0x0093ffa4;
    }
    if (uVar2 != 0x12) {
      if (uVar3 == 0x80000000) {
        uVar2 = param_2[1];
        FUN_008f7448(param_2);
        local_54._0_1_ = (char)uVar2;
      }
      else {
        FUN_008f73e8(&local_58,param_2,&uStack_21,&DAT_01867c68);
        if (local_58 != 2) {
          *param_1 = local_58;
          param_1[1] = local_54;
          param_1[2] = iStack_50;
          param_1[3] = iStack_4c;
          param_1[4] = iStack_48;
          param_1[5] = iStack_44;
          param_1[6] = local_40;
          param_1[7] = iStack_3c;
          param_1[8] = iStack_38;
          param_1[9] = iStack_34;
          param_1[10] = iStack_30;
          param_1[0xb] = iStack_2c;
          return;
        }
      }
      *(undefined1 *)(param_1 + 1) = (undefined1)local_54;
      *param_1 = 2;
      return;
    }
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 2;
joined_r0x0093ffa4:
  if (uVar3 == 0x80000011) {
    return;
  }
  FUN_008f7448(param_2);
  return;
}

