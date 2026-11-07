// FUN_0131ca50 @ 0131ca50 size=2468 calls_out=16 calls_in=2
// strings: assertion failed: limit >= self.limit | assertion failed: amt <= self.limit_within_buf - self.pos_within_buf

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0131ca50(uint *param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  undefined4 *puVar14;
  bool bVar15;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_68;
  uint local_64;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  
  puVar13 = (uint *)(param_3 + 0x30);
  puVar1 = (uint *)(param_3 + 0x28);
LAB_0131cac0:
  while( true ) {
    if (*(int *)(param_3 + 0x38) == *(int *)(param_3 + 0x3c)) {
      FUN_0132e9b8(&local_68,param_3);
      if (local_68 != 4) {
        param_1[2] = local_60;
        *param_1 = local_68;
        *(char *)(param_1 + 1) = (char)local_64;
        *(char *)((int)param_1 + 7) = (char)(local_64 >> 0x18);
        *(short *)((int)param_1 + 5) = (short)(local_64 >> 8);
        return;
      }
      if (*(int *)(param_3 + 0x3c) == *(int *)(param_3 + 0x38)) {
        *param_1 = 4;
        return;
      }
    }
    FUN_0129a648(&local_68,param_3);
    uVar2 = local_60 & 0xff;
    if (local_68 != 4) {
      *(undefined1 *)((int)param_1 + 0xb) = local_60._3_1_;
      *(undefined2 *)((int)param_1 + 9) = local_60._1_2_;
      *(undefined1 *)(param_1 + 2) = (undefined1)local_60;
      *param_1 = local_68;
      param_1[1] = local_64;
      return;
    }
    if (local_64 != 1) break;
    if (uVar2 != 2) {
      local_64 = CONCAT31((uint3)local_60 & 0xff,1);
      local_68 = 1;
      goto LAB_0131d21c;
    }
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined1 *)(param_2 + 0xc) = 1;
    FUN_0132e8a8(&local_68,param_3,param_2);
    if (local_68 != 4) {
LAB_0131d21c:
      *param_1 = local_68;
      param_1[1] = local_64;
      param_1[2] = local_60;
      return;
    }
  }
  if (local_64 != 2) {
    if (local_64 != 3) {
      FUN_01337f28(&local_68,local_64,uVar2,param_3,param_2 + 0x28);
      if (local_68 != 4) goto LAB_0131d21c;
      goto LAB_0131cac0;
    }
    if (uVar2 == 2) {
      uVar2 = *(uint *)(param_3 + 0x40);
      if (uVar2 < *(uint *)(param_3 + 0x44)) {
        puVar14 = *(undefined4 **)(param_2 + 0x20);
        *(undefined1 *)(param_2 + 0x24) = 1;
        *(uint *)(param_3 + 0x40) = uVar2 + 1;
        if (puVar14 == (undefined4 *)0x0) {
          puVar14 = (undefined4 *)thunk_FUN_016d4a50(0x1c);
          if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x1c);
          }
          *puVar14 = 0;
          puVar14[2] = 0;
          puVar14[3] = 0;
          puVar14[4] = 0;
          puVar14[5] = 0;
          puVar14[1] = 8;
          *(undefined1 *)(puVar14 + 6) = 2;
          *(undefined4 **)(param_2 + 0x20) = puVar14;
          iVar3 = *(int *)(param_3 + 0x38);
          uVar2 = *(int *)(param_3 + 0x3c) - iVar3;
          if (uVar2 == 0) goto LAB_0131cee0;
LAB_0131cdec:
          pcVar9 = (char *)(*(int *)(param_3 + 0x20) + iVar3);
          uVar7 = (uint)*pcVar9;
          if ((int)uVar7 < 0) {
            if (uVar2 < 2) goto LAB_0131cee0;
            uVar10 = (uint)pcVar9[1];
            if ((int)uVar10 < 0) {
              if (uVar2 < 10) goto LAB_0131cee0;
              uVar12 = 0;
              uVar7 = uVar7 & 0x7f | (uVar10 & 0x7f) << 7 | ((int)pcVar9[2] & 0x7fU) << 0xe;
              uVar10 = 3;
              if (0x7fffffff < (uint)(int)pcVar9[2]) {
                uVar7 = uVar7 | ((int)pcVar9[3] & 0x7fU) << 0x15;
                uVar10 = 4;
                if (0x7fffffff < (uint)(int)pcVar9[3]) {
                  uVar10 = (uint)pcVar9[4];
                  uVar7 = uVar7 | uVar10 << 0x1c;
                  uVar12 = (uVar10 & 0x7f) >> 4;
                  if ((int)uVar10 < 0) {
                    uVar12 = uVar12 | ((int)pcVar9[5] & 0x7fU) << 3;
                    uVar10 = 6;
                    if (0x7fffffff < (uint)(int)pcVar9[5]) {
                      uVar12 = uVar12 | ((int)pcVar9[6] & 0x7fU) << 10;
                      uVar10 = 7;
                      if (0x7fffffff < (uint)(int)pcVar9[6]) {
                        uVar12 = uVar12 | ((int)pcVar9[7] & 0x7fU) << 0x11;
                        uVar10 = 8;
                        if (0x7fffffff < (uint)(int)pcVar9[7]) {
                          uVar12 = uVar12 | ((int)pcVar9[8] & 0x7fU) << 0x18;
                          uVar10 = 9;
                          if (0x7fffffff < (uint)(int)pcVar9[8]) {
                            if (pcVar9[9] < 0) {
                              local_60 = CONCAT31(local_60._1_3_,4);
                              local_88 = local_60;
                              local_90 = local_5c;
                              *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
                              goto LAB_0131d278;
                            }
                            uVar12 = uVar12 | (int)pcVar9[9] << 0x1f;
                            uVar10 = 10;
                          }
                        }
                      }
                    }
                  }
                  else {
                    uVar10 = 5;
                  }
                }
              }
            }
            else {
              uVar7 = uVar7 & 0x7f | uVar10 << 7;
              uVar12 = ((int)uVar10 >> 0x1f) << 7 | uVar10 >> 0x19;
              uVar10 = 2;
            }
          }
          else {
            uVar12 = (int)uVar7 >> 0x1f;
            uVar10 = 1;
          }
          if (uVar2 < uVar10) {
LAB_0131d364:
                    /* WARNING: Subroutine does not return */
            FUN_00faa464("assertion failed: amt <= self.limit_within_buf - self.pos_within_buf",0x44
                         ,&DAT_01890e80);
          }
          uVar10 = uVar10 + iVar3;
          *(uint *)(param_3 + 0x38) = uVar10;
        }
        else {
          puVar14[3] = 0;
          *(undefined1 *)(puVar14 + 6) = 2;
          FUN_0133497c(puVar14[4]);
          iVar3 = *(int *)(param_3 + 0x38);
          uVar2 = *(int *)(param_3 + 0x3c) - iVar3;
          if (uVar2 != 0) goto LAB_0131cdec;
LAB_0131cee0:
          FUN_0132d5a8(&local_68,param_3);
          if (local_68 != 0) {
            local_88 = local_60;
            local_90 = local_5c;
            *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
            if (local_64 != 4) goto LAB_0131d2c4;
            goto LAB_0131cac0;
          }
          uVar10 = *(uint *)(param_3 + 0x38);
          uVar7 = local_60;
          uVar12 = local_5c;
        }
        uVar4 = *puVar1;
        uVar11 = uVar4 + uVar10;
        uVar6 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar4,uVar10);
        uVar2 = uVar11 + uVar7;
        uVar10 = uVar6 + uVar12 + (uint)CARRY4(uVar11,uVar7);
        if (!CARRY4(uVar6,uVar12) && !CARRY4(uVar6 + uVar12,(uint)CARRY4(uVar11,uVar7))) {
          uVar7 = *puVar13;
          uVar12 = *(uint *)(param_3 + 0x34);
          if (uVar10 < uVar12 || uVar12 - uVar10 < (uint)(uVar2 <= uVar7)) {
            uVar11 = *(uint *)(param_3 + 0x24);
            *puVar13 = uVar2;
            *(uint *)(param_3 + 0x34) = uVar10;
            uVar6 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar4,uVar11);
            if (uVar10 <= uVar6 && (uint)(uVar4 + uVar11 <= uVar2) <= uVar10 - uVar6) {
              uVar11 = uVar2 - uVar4;
            }
            *(uint *)(param_3 + 0x3c) = uVar11;
            FUN_01304eec(&local_68,puVar14,param_3);
            if (local_68 != 4) {
              local_88 = local_64;
              local_90 = local_60;
              *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
              local_64 = local_68;
              goto LAB_0131d2c4;
            }
            goto LAB_0131cf7c;
          }
        }
        *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
        local_90 = 0;
        local_88 = 9;
      }
      else {
        local_88 = local_88 & 0xffffff00 | 7;
      }
    }
    else {
      local_88 = local_88 & 0xffff0000 | uVar2 << 8 | 1;
    }
LAB_0131d278:
    local_64 = 1;
LAB_0131d2c4:
    *param_1 = local_64;
    param_1[1] = local_88;
    param_1[2] = local_90;
    return;
  }
  if (uVar2 == 2) {
    if (*(uint *)(param_3 + 0x40) < *(uint *)(param_3 + 0x44)) {
      uVar7 = *(uint *)(param_2 + 0x18);
      uVar2 = *(uint *)(param_2 + 0x1c);
      *(uint *)(param_3 + 0x40) = *(uint *)(param_3 + 0x40) + 1;
      if (uVar2 == uVar7) {
        local_28 = 0x202;
        local_34 = 0;
        local_38 = 0;
        local_3c = 0;
        local_40 = 0;
        local_44 = 1;
        local_48 = 0;
        local_4c = 0;
        local_50 = 0;
        local_54 = 1;
        local_58 = 0;
        local_5c = local_5c & 0xffffff00;
        local_60 = 0;
        local_64 = 1;
        local_68 = 0;
        local_2c = 0;
        local_30 = 0;
        uVar10 = uVar2;
        if (uVar2 == *(uint *)(param_2 + 0x10)) {
          FUN_0132f628((uint *)(param_2 + 0x10));
          uVar10 = *(uint *)(param_2 + 0x1c);
        }
        iVar5 = *(int *)(param_2 + 0x14);
        FUN_016dd1aa(iVar5 + uVar2 * 0x44,&local_68,0x44);
        uVar7 = uVar2 + 1;
        *(uint *)(param_2 + 0x18) = uVar7;
        uVar2 = uVar10;
      }
      else {
        if (uVar7 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar2,uVar7,&DAT_01890558);
        }
        iVar5 = *(int *)(param_2 + 0x14);
        iVar3 = iVar5 + uVar2 * 0x44;
        *(undefined2 *)(iVar3 + 0x40) = 0x202;
        *(undefined1 *)(iVar3 + 0x34) = 0;
        *(undefined1 *)(iVar3 + 0x2c) = 0;
        *(undefined1 *)(iVar3 + 0x1c) = 0;
        *(undefined1 *)(iVar3 + 0xc) = 0;
        FUN_0133497c(*(undefined4 *)(iVar3 + 0x38));
      }
      uVar10 = uVar2 + 1;
      *(uint *)(param_2 + 0x1c) = uVar10;
      if (uVar7 < uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar10,uVar7,&DAT_01890578);
      }
      if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01890568);
      }
      iVar3 = *(int *)(param_3 + 0x38);
      uVar7 = *(int *)(param_3 + 0x3c) - iVar3;
      if (*(int *)(param_3 + 0x3c) == iVar3) {
LAB_0131ccd0:
        FUN_0132d5a8(&local_68,param_3);
        if (local_68 != 0) {
          local_8c = local_60;
          local_94 = local_5c;
          *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
          if (local_64 != 4) goto LAB_0131d308;
          goto LAB_0131cac0;
        }
        uVar4 = *(uint *)(param_3 + 0x38);
        uVar10 = local_60;
        uVar12 = local_5c;
      }
      else {
        pcVar9 = (char *)(*(int *)(param_3 + 0x20) + iVar3);
        uVar10 = (uint)*pcVar9;
        if ((int)uVar10 < 0) {
          if (uVar7 < 2) goto LAB_0131ccd0;
          uVar12 = (uint)pcVar9[1];
          if ((int)uVar12 < 0) {
            if (uVar7 < 10) goto LAB_0131ccd0;
            uVar4 = 3;
            uVar10 = uVar10 & 0x7f | (uVar12 & 0x7f) << 7 | ((int)pcVar9[2] & 0x7fU) << 0xe;
            uVar12 = 0;
            if (0x7fffffff < (uint)(int)pcVar9[2]) {
              uVar10 = uVar10 | ((int)pcVar9[3] & 0x7fU) << 0x15;
              uVar4 = 4;
              if (0x7fffffff < (uint)(int)pcVar9[3]) {
                uVar4 = (uint)pcVar9[4];
                uVar10 = uVar10 | uVar4 << 0x1c;
                uVar12 = (uVar4 & 0x7f) >> 4;
                if ((int)uVar4 < 0) {
                  uVar12 = uVar12 | ((int)pcVar9[5] & 0x7fU) << 3;
                  uVar4 = 6;
                  if (0x7fffffff < (uint)(int)pcVar9[5]) {
                    uVar12 = uVar12 | ((int)pcVar9[6] & 0x7fU) << 10;
                    uVar4 = 7;
                    if (0x7fffffff < (uint)(int)pcVar9[6]) {
                      uVar12 = uVar12 | ((int)pcVar9[7] & 0x7fU) << 0x11;
                      uVar4 = 8;
                      if (0x7fffffff < (uint)(int)pcVar9[7]) {
                        uVar12 = uVar12 | ((int)pcVar9[8] & 0x7fU) << 0x18;
                        uVar4 = 9;
                        if (0x7fffffff < (uint)(int)pcVar9[8]) {
                          if (pcVar9[9] < 0) {
                            local_60 = CONCAT31(local_60._1_3_,4);
                            local_8c = local_60;
                            local_94 = local_5c;
                            *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
                            goto LAB_0131d29c;
                          }
                          uVar12 = uVar12 | (int)pcVar9[9] << 0x1f;
                          uVar4 = 10;
                        }
                      }
                    }
                  }
                }
                else {
                  uVar4 = 5;
                }
              }
            }
          }
          else {
            uVar10 = uVar10 & 0x7f | uVar12 << 7;
            uVar12 = ((int)uVar12 >> 0x1f) << 7 | uVar12 >> 0x19;
            uVar4 = 2;
          }
        }
        else {
          uVar12 = (int)uVar10 >> 0x1f;
          uVar4 = 1;
        }
        if (uVar7 < uVar4) goto LAB_0131d364;
        uVar4 = uVar4 + iVar3;
        *(uint *)(param_3 + 0x38) = uVar4;
      }
      uVar6 = *puVar1;
      uVar7 = uVar6 + uVar4;
      uVar8 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar6,uVar4);
      uVar4 = uVar7 + uVar10;
      uVar11 = uVar8 + uVar12 + (uint)CARRY4(uVar7,uVar10);
      if (!CARRY4(uVar8,uVar12) && !CARRY4(uVar8 + uVar12,(uint)CARRY4(uVar7,uVar10))) {
        uVar7 = *puVar13;
        uVar12 = *(uint *)(param_3 + 0x34);
        if (!(uVar11 < uVar12 || uVar12 - uVar11 < (uint)(uVar4 <= uVar7))) goto LAB_0131d280;
        *puVar13 = uVar4;
        *(uint *)(param_3 + 0x34) = uVar11;
        uVar10 = *(uint *)(param_3 + 0x24);
        uVar8 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar6,uVar10);
        bVar15 = uVar6 + uVar10 <= uVar4;
        if (uVar11 <= uVar8 && (uint)bVar15 <= uVar11 - uVar8) {
          uVar10 = uVar4 - uVar6;
        }
        *(uint *)(param_3 + 0x3c) = uVar10;
        FUN_0131aeb4(&local_68,iVar5 + uVar2 * 0x44,param_3,uVar11 - (uVar8 + !bVar15));
        if (local_68 != 4) {
          local_8c = local_64;
          local_94 = local_60;
          *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
          local_64 = local_68;
          goto LAB_0131d308;
        }
LAB_0131cf7c:
        if (uVar12 <= *(uint *)(param_3 + 0x34) &&
            (uint)(*puVar13 <= uVar7) <= uVar12 - *(uint *)(param_3 + 0x34)) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464("assertion failed: limit >= self.limit",0x25,&DAT_01890650);
        }
        uVar4 = *(uint *)(param_3 + 0x24);
        uVar2 = *puVar1;
        *puVar13 = uVar7;
        *(uint *)(param_3 + 0x34) = uVar12;
        uVar10 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar2,uVar4);
        if (uVar12 <= uVar10 && (uint)(uVar2 + uVar4 <= uVar7) <= uVar12 - uVar10) {
          uVar4 = uVar7 - uVar2;
        }
        *(uint *)(param_3 + 0x3c) = uVar4;
        *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
        goto LAB_0131cac0;
      }
LAB_0131d280:
      *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
      local_94 = 0;
      local_8c = 9;
    }
    else {
      local_8c = local_8c & 0xffffff00 | 7;
    }
  }
  else {
    local_8c = local_8c & 0xffff0000 | uVar2 << 8 | 1;
  }
LAB_0131d29c:
  local_64 = 1;
LAB_0131d308:
  *param_1 = local_64;
  param_1[1] = local_8c;
  param_1[2] = local_94;
  return;
}

