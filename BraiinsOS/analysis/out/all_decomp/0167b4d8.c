// FUN_0167b4d8 @ 0167b4d8 size=540 calls_out=6 calls_in=1
// strings: 

void FUN_0167b4d8(int *param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int unaff_r11;
  int local_58;
  int local_54;
  int local_50;
  int iStack_4c;
  int local_48;
  undefined4 *local_44;
  int local_40;
  uint local_3c;
  int local_38;
  uint uStack_34;
  uint uStack_30;
  int iStack_2c;
  uint local_28;
  
  uVar7 = *(undefined4 *)(param_3 + 8);
  uVar6 = *(undefined4 *)(param_3 + 0xc);
  FUN_0167b0f8(&local_58);
  if (local_58 == 1) {
    *(undefined4 *)(param_3 + 8) = uVar7;
    *(undefined4 *)(param_3 + 0xc) = uVar6;
    FUN_0166ce68(&local_40,param_3);
    if (local_40 == 3) {
      if (local_3c < 0x80) {
        local_28 = local_3c & 0xff;
        uVar5 = 1;
      }
      else {
        uVar3 = (undefined1)local_3c;
        uVar1 = (undefined1)(local_3c >> 6);
        if (local_3c < 0x800) {
          local_28 = (CONCAT11(uVar3,uVar1) & 0x3fff | 0x8000) | 0xc0;
          uVar5 = 2;
        }
        else {
          uVar2 = (undefined1)(local_3c >> 0xc);
          if (local_3c >> 0x10 == 0) {
            uVar5 = 3;
            local_28 = (CONCAT21(CONCAT11(uVar3,uVar1),uVar2) & 0xff3fff | 0x8000) & 0x3fffff |
                       0x8000e0;
          }
          else {
            uVar5 = 4;
            local_28 = CONCAT31(CONCAT21(CONCAT11(uVar3,uVar1),uVar2),(char)(local_3c >> 0x12)) &
                       0x3f3f3fff | 0x808080f0;
          }
        }
      }
      iVar4 = thunk_FUN_016d4a50(uVar5);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,uVar5);
      }
      FUN_016dd1aa(iVar4,&local_28,uVar5);
      local_40 = 3;
      local_38 = iVar4;
      uStack_34 = uVar5;
      local_3c = uVar5;
      uStack_30 = (uint)&local_58 | 4;
    }
    else {
      unaff_r11 = iStack_2c;
      if (local_40 == 1) {
        if (local_54 != 0) {
          thunk_FUN_016d3fb4(local_50);
        }
        if (local_48 != 0) {
          if ((code *)*local_44 != (code *)0x0) {
            (*(code *)*local_44)(local_48);
          }
          if (local_44[1] != 0) {
            thunk_FUN_016d3fb4(local_48);
          }
        }
        *param_1 = 1;
        param_1[1] = local_3c;
        param_1[2] = local_38;
        param_1[3] = uStack_34;
        param_1[4] = uStack_30;
        param_1[5] = iStack_2c;
        return;
      }
    }
    *param_1 = local_40;
    param_1[1] = local_3c;
    param_1[2] = local_38;
    param_1[3] = uStack_34;
    param_1[4] = uStack_30;
    param_1[5] = unaff_r11;
    if (local_54 != 0) {
      thunk_FUN_016d3fb4(local_50);
    }
    if (local_48 != 0) {
      if ((code *)*local_44 != (code *)0x0) {
        (*(code *)*local_44)(local_48);
      }
      if (local_44[1] != 0) {
        thunk_FUN_016d3fb4(local_48);
        return;
      }
    }
  }
  else {
    *param_1 = local_58;
    param_1[1] = local_54;
    param_1[2] = local_50;
    param_1[3] = iStack_4c;
    param_1[4] = local_48;
    param_1[5] = (int)local_44;
  }
  return;
}

