// FUN_0132eb90 @ 0132eb90 size=1152 calls_out=5 calls_in=1
// strings: assertion failed: amt <= self.limit_within_buf - self.pos_within_buf

void FUN_0132eb90(undefined4 *param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  int local_48;
  undefined4 uStack_44;
  uint uStack_40;
  int local_38;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  undefined4 local_24;
  uint local_20;
  
  switch(param_3) {
  case 0:
    iVar1 = *(int *)(param_2 + 0x38);
    uVar3 = *(int *)(param_2 + 0x3c) - iVar1;
    if (*(int *)(param_2 + 0x3c) == iVar1) {
LAB_0132ebd8:
      FUN_0132d5a8(&local_38);
      if (local_38 != 0) {
LAB_0132ebec:
        param_1[1] = local_34;
        param_1[2] = local_30;
        param_1[3] = local_2c;
        *param_1 = 4;
        return;
      }
      uVar2 = local_30;
      uVar7 = local_2c;
    }
    else {
      pcVar5 = (char *)(*(int *)(param_2 + 0x20) + iVar1);
      uVar2 = (uint)*pcVar5;
      if ((int)uVar2 < 0) {
        if (uVar3 < 2) goto LAB_0132ebd8;
        uVar6 = (uint)pcVar5[1];
        if ((int)uVar6 < 0) {
          if (uVar3 < 10) goto LAB_0132ebd8;
          uVar7 = 0;
          uVar2 = uVar2 & 0x7f | (uVar6 & 0x7f) << 7 | ((int)pcVar5[2] & 0x7fU) << 0xe;
          uVar6 = 3;
          if (0x7fffffff < (uint)(int)pcVar5[2]) {
            uVar2 = uVar2 | ((int)pcVar5[3] & 0x7fU) << 0x15;
            uVar6 = 4;
            if (0x7fffffff < (uint)(int)pcVar5[3]) {
              uVar6 = (uint)pcVar5[4];
              uVar2 = uVar2 | uVar6 << 0x1c;
              uVar7 = (uVar6 & 0x7f) >> 4;
              if ((int)uVar6 < 0) {
                uVar7 = uVar7 | ((int)pcVar5[5] & 0x7fU) << 3;
                uVar6 = 6;
                if (0x7fffffff < (uint)(int)pcVar5[5]) {
                  uVar7 = uVar7 | ((int)pcVar5[6] & 0x7fU) << 10;
                  uVar6 = 7;
                  if (0x7fffffff < (uint)(int)pcVar5[6]) {
                    uVar7 = uVar7 | ((int)pcVar5[7] & 0x7fU) << 0x11;
                    uVar6 = 8;
                    if (0x7fffffff < (uint)(int)pcVar5[7]) {
                      uVar7 = uVar7 | ((int)pcVar5[8] & 0x7fU) << 0x18;
                      uVar6 = 9;
                      if (0x7fffffff < (uint)(int)pcVar5[8]) {
                        if (pcVar5[9] < 0) {
                          local_30 = CONCAT31(local_30._1_3_,4);
                          local_34 = 1;
                          goto LAB_0132ebec;
                        }
                        uVar7 = uVar7 | (int)pcVar5[9] << 0x1f;
                        uVar6 = 10;
                      }
                    }
                  }
                }
              }
              else {
                uVar6 = 5;
              }
            }
          }
        }
        else {
          uVar7 = ((int)uVar6 >> 0x1f) << 7 | uVar6 >> 0x19;
          uVar2 = uVar2 & 0x7f | uVar6 << 7;
          uVar6 = 2;
        }
      }
      else {
        uVar7 = (int)uVar2 >> 0x1f;
        uVar6 = 1;
      }
      if (uVar3 < uVar6) {
LAB_0132ef9c:
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("assertion failed: amt <= self.limit_within_buf - self.pos_within_buf",0x44,
                     &DAT_01890e80);
      }
      *(uint *)(param_2 + 0x38) = uVar6 + iVar1;
    }
    param_1[2] = uVar2;
    param_1[3] = uVar7;
    *param_1 = 2;
    return;
  case 1:
    FUN_0132e008(&local_38,param_2,&local_28,8);
    if (local_38 == 4) {
      param_1[2] = local_28;
      param_1[3] = local_24;
      *param_1 = 1;
      return;
    }
    *param_1 = 4;
    goto LAB_0132edcc;
  case 2:
    iVar1 = *(int *)(param_2 + 0x38);
    uVar3 = *(int *)(param_2 + 0x3c) - iVar1;
    if (*(int *)(param_2 + 0x3c) == iVar1) {
LAB_0132ec18:
      FUN_0132d5a8(&local_38);
      if (local_38 == 1) {
LAB_0132ec38:
        *param_1 = 4;
        param_1[1] = local_34;
        param_1[2] = local_30;
        param_1[3] = local_2c;
        return;
      }
      uVar2 = local_30;
    }
    else {
      pcVar5 = (char *)(*(int *)(param_2 + 0x20) + iVar1);
      uVar2 = (uint)*pcVar5;
      if ((int)uVar2 < 0) {
        if (uVar3 < 2) goto LAB_0132ec18;
        uVar6 = (uint)pcVar5[1];
        if ((int)uVar6 < 0) {
          if (uVar3 < 10) goto LAB_0132ec18;
          uVar2 = uVar2 & 0x7f | (uVar6 & 0x7f) << 7 | ((int)pcVar5[2] & 0x7fU) << 0xe;
          uVar6 = 3;
          if (0x7fffffff < (uint)(int)pcVar5[2]) {
            uVar2 = uVar2 | ((int)pcVar5[3] & 0x7fU) << 0x15;
            uVar6 = 4;
            if (0x7fffffff < (uint)(int)pcVar5[3]) {
              uVar6 = 5;
              uVar2 = uVar2 | (int)pcVar5[4] << 0x1c;
              if (0x7fffffff < (uint)(int)pcVar5[4]) {
                if (pcVar5[5] < '\0') {
                  if (pcVar5[6] < '\0') {
                    if (pcVar5[7] < '\0') {
                      if (pcVar5[8] < '\0') {
                        if (pcVar5[9] < '\0') {
                          local_2c = 4;
                          local_34 = 1;
                          local_30 = CONCAT31(local_30._1_3_,4);
                          goto LAB_0132ec38;
                        }
                        uVar6 = 10;
                      }
                      else {
                        uVar6 = 9;
                      }
                    }
                    else {
                      uVar6 = 8;
                    }
                  }
                  else {
                    uVar6 = 7;
                  }
                }
                else {
                  uVar6 = 6;
                }
              }
            }
          }
        }
        else {
          uVar2 = uVar2 & 0x7f | uVar6 << 7;
          uVar6 = 2;
        }
      }
      else {
        uVar6 = 1;
      }
      if (uVar3 < uVar6) goto LAB_0132ef9c;
      *(uint *)(param_2 + 0x38) = uVar6 + iVar1;
    }
    local_20 = 0;
    local_24 = 1;
    local_28 = 0;
    FUN_0132dad8(&local_38,param_2,uVar2,&local_28);
    if (local_38 == 4) {
      uVar4 = 3;
      local_48 = local_28;
      uStack_44 = local_24;
      uStack_40 = local_20;
    }
    else {
      uVar4 = 4;
      local_48 = local_38;
      uStack_44 = local_34;
      uStack_40 = local_30;
      if (local_28 != 0) {
        thunk_FUN_016d3fb4(local_24);
      }
    }
    local_38 = local_48;
    local_34 = uStack_44;
    local_30 = uStack_40;
    break;
  default:
    *(undefined1 *)((int)param_1 + 9) = param_3;
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = 4;
    param_1[1] = 1;
    return;
  case 5:
    uVar4 = 4;
    FUN_0132e008(&local_38,param_2,&local_28,4);
    if (local_38 == 4) {
      *param_1 = 0;
      param_1[1] = local_28;
      return;
    }
  }
  *param_1 = uVar4;
LAB_0132edcc:
  param_1[1] = local_38;
  param_1[2] = local_34;
  param_1[3] = local_30;
  return;
}

