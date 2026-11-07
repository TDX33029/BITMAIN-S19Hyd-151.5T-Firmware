// FUN_013113e4 @ 013113e4 size=3588 calls_out=18 calls_in=2
// strings: assertion failed: limit >= self.limit | assertion failed: amt <= self.limit_within_buf - self.pos_within_buf

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_013113e4(uint *param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  puVar1 = param_1 + 1;
  puVar3 = (uint *)(param_3 + 0x30);
  puVar4 = (uint *)(param_3 + 0x28);
LAB_01311468:
  if (*(int *)(param_3 + 0x38) == *(int *)(param_3 + 0x3c)) {
    FUN_0132e9b8(&local_50,param_3);
    if (local_50 != 4) {
      param_1[2] = local_48;
      *param_1 = local_50;
      *(char *)(param_1 + 1) = (char)local_4c;
      *(char *)((int)param_1 + 7) = (char)(local_4c >> 0x18);
      *(short *)((int)param_1 + 5) = (short)(local_4c >> 8);
      return;
    }
    if (*(int *)(param_3 + 0x3c) == *(int *)(param_3 + 0x38)) {
      *param_1 = 4;
      return;
    }
  }
  FUN_0129a648(&local_50,param_3);
  uVar8 = local_48 & 0xff;
  if (local_50 != 4) {
    *(undefined1 *)((int)param_1 + 0xb) = local_48._3_1_;
    *(undefined2 *)((int)param_1 + 9) = local_48._1_2_;
    *(undefined1 *)(param_1 + 2) = (undefined1)local_48;
    *param_1 = local_50;
    param_1[1] = local_4c;
    return;
  }
  switch(local_4c) {
  case 1:
    if (uVar8 != 2) {
      local_4c = CONCAT31(CONCAT21(local_4c._2_2_,(undefined1)local_48),1);
      local_50 = 1;
      goto LAB_01311f40;
    }
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined1 *)(param_2 + 0xc) = 1;
    FUN_0132e8a8(&local_50,param_3,param_2);
    break;
  case 2:
    if (uVar8 == 2) {
      if (*(uint *)(param_3 + 0x40) < *(uint *)(param_3 + 0x44)) {
        uVar12 = *(uint *)(param_2 + 0x18);
        uVar8 = *(uint *)(param_2 + 0x1c);
        *(uint *)(param_3 + 0x40) = *(uint *)(param_3 + 0x40) + 1;
        if (uVar8 == uVar12) {
          local_3c = local_3c & 0xffffff00;
          local_40 = 0;
          local_44 = 1;
          local_48 = 0;
          local_2c = 0;
          local_30 = 0;
          local_34 = local_34 & 0xffffff00;
          local_38 = 0;
          local_50 = 0;
          uVar16 = uVar8;
          if (uVar8 == *(uint *)(param_2 + 0x10)) {
            FUN_0132f7ac((uint *)(param_2 + 0x10));
            uVar16 = *(uint *)(param_2 + 0x1c);
          }
          iVar14 = *(int *)(param_2 + 0x14);
          puVar2 = (uint *)(iVar14 + uVar8 * 0x28);
          *puVar2 = local_50;
          puVar2[1] = local_4c;
          puVar2[2] = local_48;
          puVar2[3] = local_44;
          puVar2[4] = local_40;
          puVar2[5] = local_3c;
          puVar2[6] = local_38;
          puVar2[7] = local_34;
          puVar2[8] = local_30;
          puVar2[9] = local_2c;
          uVar12 = uVar8 + 1;
          *(uint *)(param_2 + 0x18) = uVar12;
          uVar8 = uVar16;
        }
        else {
          if (uVar12 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar8,uVar12,&DAT_01890558);
          }
          iVar14 = *(int *)(param_2 + 0x14);
          puVar5 = (undefined4 *)(iVar14 + uVar8 * 0x28);
          *puVar5 = 0;
          *(undefined1 *)(puVar5 + 5) = 0;
          *(undefined1 *)(puVar5 + 7) = 0;
          FUN_0133497c(puVar5[8]);
        }
        uVar16 = uVar8 + 1;
        *(uint *)(param_2 + 0x1c) = uVar16;
        if (uVar12 < uVar16) {
LAB_013120f4:
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar16,uVar12,&DAT_01890578);
        }
        if (uVar16 == 0) {
LAB_01312108:
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_01890568);
        }
        iVar9 = *(int *)(param_3 + 0x38);
        uVar12 = *(int *)(param_3 + 0x3c) - iVar9;
        if (*(int *)(param_3 + 0x3c) == iVar9) {
LAB_01311794:
          FUN_0132d5a8(&local_50,param_3);
          if (local_50 != 0) {
            local_84 = local_48;
            local_90 = local_44;
            *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
            if (local_4c != 4) goto LAB_01312020;
            goto LAB_01311468;
          }
          uVar6 = *(uint *)(param_3 + 0x38);
          uVar16 = local_48;
          uVar15 = local_44;
        }
        else {
          pcVar11 = (char *)(*(int *)(param_3 + 0x20) + iVar9);
          uVar16 = (uint)*pcVar11;
          if ((int)uVar16 < 0) {
            if (uVar12 < 2) goto LAB_01311794;
            uVar6 = (uint)pcVar11[1];
            if ((int)uVar6 < 0) {
              if (uVar12 < 10) goto LAB_01311794;
              uVar15 = 0;
              uVar16 = uVar16 & 0x7f | (uVar6 & 0x7f) << 7 | ((int)pcVar11[2] & 0x7fU) << 0xe;
              uVar6 = 3;
              if (0x7fffffff < (uint)(int)pcVar11[2]) {
                uVar16 = uVar16 | ((int)pcVar11[3] & 0x7fU) << 0x15;
                uVar6 = 4;
                if (0x7fffffff < (uint)(int)pcVar11[3]) {
                  uVar6 = (uint)pcVar11[4];
                  uVar16 = uVar16 | uVar6 << 0x1c;
                  uVar15 = (uVar6 & 0x7f) >> 4;
                  if ((int)uVar6 < 0) {
                    uVar15 = uVar15 | ((int)pcVar11[5] & 0x7fU) << 3;
                    uVar6 = 6;
                    if (0x7fffffff < (uint)(int)pcVar11[5]) {
                      uVar15 = uVar15 | ((int)pcVar11[6] & 0x7fU) << 10;
                      uVar6 = 7;
                      if (0x7fffffff < (uint)(int)pcVar11[6]) {
                        uVar15 = uVar15 | ((int)pcVar11[7] & 0x7fU) << 0x11;
                        uVar6 = 8;
                        if (0x7fffffff < (uint)(int)pcVar11[7]) {
                          uVar15 = uVar15 | ((int)pcVar11[8] & 0x7fU) << 0x18;
                          uVar6 = 9;
                          if (0x7fffffff < (uint)(int)pcVar11[8]) {
                            if (pcVar11[9] < 0) {
                              local_48 = CONCAT31(local_48._1_3_,4);
                              local_84 = local_48;
                              local_90 = local_44;
                              *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
                              goto LAB_0131201c;
                            }
                            uVar15 = uVar15 | (int)pcVar11[9] << 0x1f;
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
              uVar15 = ((int)uVar6 >> 0x1f) << 7 | uVar6 >> 0x19;
              uVar16 = uVar16 & 0x7f | uVar6 << 7;
              uVar6 = 2;
            }
          }
          else {
            uVar15 = (int)uVar16 >> 0x1f;
            uVar6 = 1;
          }
          if (uVar12 < uVar6) goto LAB_0131212c;
          uVar6 = uVar6 + iVar9;
          *(uint *)(param_3 + 0x38) = uVar6;
        }
        uVar10 = *puVar4;
        uVar7 = uVar10 + uVar6;
        uVar6 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar10,uVar6);
        uVar12 = uVar7 + uVar16;
        uVar13 = uVar6 + uVar15 + (uint)CARRY4(uVar7,uVar16);
        if (!CARRY4(uVar6,uVar15) && !CARRY4(uVar6 + uVar15,(uint)CARRY4(uVar7,uVar16))) {
          uVar16 = *puVar3;
          uVar6 = *(uint *)(param_3 + 0x34);
          if (uVar13 < uVar6 || uVar6 - uVar13 < (uint)(uVar12 <= uVar16)) {
            *puVar3 = uVar12;
            *(uint *)(param_3 + 0x34) = uVar13;
            uVar15 = *(uint *)(param_3 + 0x24);
            uVar7 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar10,uVar15);
            bVar17 = uVar10 + uVar15 <= uVar12;
            if (uVar13 <= uVar7 && (uint)bVar17 <= uVar13 - uVar7) {
              uVar15 = uVar12 - uVar10;
            }
            *(uint *)(param_3 + 0x3c) = uVar15;
            FUN_0131fc1c(&local_50,iVar14 + uVar8 * 0x28,param_3,uVar13 - (uVar7 + !bVar17));
            if (local_50 != 4) {
              local_84 = local_4c;
              local_90 = local_48;
              *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
              local_4c = local_50;
              goto LAB_01312020;
            }
            if (uVar6 <= *(uint *)(param_3 + 0x34) &&
                (uint)(*puVar3 <= uVar16) <= uVar6 - *(uint *)(param_3 + 0x34)) goto LAB_01312114;
            uVar15 = *(uint *)(param_3 + 0x24);
            uVar8 = *puVar4;
            *puVar3 = uVar16;
            *(uint *)(param_3 + 0x34) = uVar6;
            uVar12 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar8,uVar15);
            if (uVar6 <= uVar12 && (uint)(uVar8 + uVar15 <= uVar16) <= uVar6 - uVar12) {
              uVar15 = uVar16 - uVar8;
            }
            *(uint *)(param_3 + 0x3c) = uVar15;
            *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
            goto LAB_01311468;
          }
        }
        *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
        local_90 = 0;
        local_84 = 9;
      }
      else {
        local_84 = local_84 & 0xffffff00 | 7;
      }
    }
    else {
      local_84 = local_84 & 0xffff0000 | uVar8 << 8 | 1;
    }
LAB_0131201c:
    local_4c = 1;
LAB_01312020:
    *param_1 = local_4c;
    *puVar1 = local_84;
    param_1[2] = local_90;
    return;
  case 3:
    if (uVar8 == 2) {
      uVar8 = *(uint *)(param_3 + 0x40);
      if (uVar8 < *(uint *)(param_3 + 0x44)) {
        puVar5 = *(undefined4 **)(param_2 + 0x40);
        *(undefined1 *)(param_2 + 0x44) = 1;
        *(uint *)(param_3 + 0x40) = uVar8 + 1;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x1c);
          if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x1c);
          }
          *puVar5 = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          puVar5[4] = 0;
          puVar5[5] = 0;
          puVar5[1] = 8;
          *(undefined2 *)(puVar5 + 6) = 0x202;
          *(undefined4 **)(param_2 + 0x40) = puVar5;
          iVar14 = *(int *)(param_3 + 0x38);
          uVar8 = *(int *)(param_3 + 0x3c) - iVar14;
          if (uVar8 != 0) goto LAB_01311894;
LAB_01311b6c:
          FUN_0132d5a8(&local_50,param_3);
          if (local_50 != 0) {
            local_7c = local_48;
            local_88 = local_44;
            *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
            if (local_4c != 4) goto LAB_01311fdc;
            goto LAB_01311468;
          }
          uVar16 = *(uint *)(param_3 + 0x38);
          uVar12 = local_48;
          uVar6 = local_44;
        }
        else {
          puVar5[3] = 0;
          *(undefined2 *)(puVar5 + 6) = 0x202;
          FUN_0133497c(puVar5[4]);
          iVar14 = *(int *)(param_3 + 0x38);
          uVar8 = *(int *)(param_3 + 0x3c) - iVar14;
          if (uVar8 == 0) goto LAB_01311b6c;
LAB_01311894:
          pcVar11 = (char *)(*(int *)(param_3 + 0x20) + iVar14);
          uVar12 = (uint)*pcVar11;
          if ((int)uVar12 < 0) {
            if (uVar8 < 2) goto LAB_01311b6c;
            uVar16 = (uint)pcVar11[1];
            if ((int)uVar16 < 0) {
              if (uVar8 < 10) goto LAB_01311b6c;
              uVar6 = 0;
              uVar12 = uVar12 & 0x7f | (uVar16 & 0x7f) << 7 | ((int)pcVar11[2] & 0x7fU) << 0xe;
              uVar16 = 3;
              if (0x7fffffff < (uint)(int)pcVar11[2]) {
                uVar12 = uVar12 | ((int)pcVar11[3] & 0x7fU) << 0x15;
                uVar16 = 4;
                if (0x7fffffff < (uint)(int)pcVar11[3]) {
                  uVar16 = (uint)pcVar11[4];
                  uVar12 = uVar12 | uVar16 << 0x1c;
                  uVar6 = (uVar16 & 0x7f) >> 4;
                  if ((int)uVar16 < 0) {
                    uVar6 = uVar6 | ((int)pcVar11[5] & 0x7fU) << 3;
                    uVar16 = 6;
                    if (0x7fffffff < (uint)(int)pcVar11[5]) {
                      uVar6 = uVar6 | ((int)pcVar11[6] & 0x7fU) << 10;
                      uVar16 = 7;
                      if (0x7fffffff < (uint)(int)pcVar11[6]) {
                        uVar6 = uVar6 | ((int)pcVar11[7] & 0x7fU) << 0x11;
                        uVar16 = 8;
                        if (0x7fffffff < (uint)(int)pcVar11[7]) {
                          uVar6 = uVar6 | ((int)pcVar11[8] & 0x7fU) << 0x18;
                          uVar16 = 9;
                          if (0x7fffffff < (uint)(int)pcVar11[8]) {
                            if (pcVar11[9] < 0) {
                              local_48 = CONCAT31(local_48._1_3_,4);
                              local_7c = local_48;
                              local_88 = local_44;
                              *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
                              goto LAB_01311fd8;
                            }
                            uVar6 = uVar6 | (int)pcVar11[9] << 0x1f;
                            uVar16 = 10;
                          }
                        }
                      }
                    }
                  }
                  else {
                    uVar16 = 5;
                  }
                }
              }
            }
            else {
              uVar6 = ((int)uVar16 >> 0x1f) << 7 | uVar16 >> 0x19;
              uVar12 = uVar12 & 0x7f | uVar16 << 7;
              uVar16 = 2;
            }
          }
          else {
            uVar6 = (int)uVar12 >> 0x1f;
            uVar16 = 1;
          }
          if (uVar8 < uVar16) {
LAB_0131212c:
                    /* WARNING: Subroutine does not return */
            FUN_00faa464("assertion failed: amt <= self.limit_within_buf - self.pos_within_buf",0x44
                         ,&DAT_01890e80);
          }
          uVar16 = uVar16 + iVar14;
          *(uint *)(param_3 + 0x38) = uVar16;
        }
        uVar7 = *puVar4;
        uVar15 = uVar7 + uVar16;
        uVar10 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar7,uVar16);
        uVar8 = uVar15 + uVar12;
        uVar16 = uVar10 + uVar6 + (uint)CARRY4(uVar15,uVar12);
        if (!CARRY4(uVar10,uVar6) && !CARRY4(uVar10 + uVar6,(uint)CARRY4(uVar15,uVar12))) {
          uVar12 = *puVar3;
          uVar6 = *(uint *)(param_3 + 0x34);
          if (uVar16 < uVar6 || uVar6 - uVar16 < (uint)(uVar8 <= uVar12)) {
            uVar10 = *(uint *)(param_3 + 0x24);
            *puVar3 = uVar8;
            *(uint *)(param_3 + 0x34) = uVar16;
            uVar15 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar7,uVar10);
            if (uVar16 <= uVar15 && (uint)(uVar7 + uVar10 <= uVar8) <= uVar16 - uVar15) {
              uVar10 = uVar8 - uVar7;
            }
            *(uint *)(param_3 + 0x3c) = uVar10;
            FUN_012f968c(&local_50,puVar5,param_3);
            if (local_50 != 4) {
              local_7c = local_4c;
              local_88 = local_48;
              *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
              local_4c = local_50;
              goto LAB_01311fdc;
            }
            if (uVar6 <= *(uint *)(param_3 + 0x34) &&
                (uint)(*puVar3 <= uVar12) <= uVar6 - *(uint *)(param_3 + 0x34)) {
LAB_01312114:
                    /* WARNING: Subroutine does not return */
              FUN_00faa464("assertion failed: limit >= self.limit",0x25,&DAT_01890650);
            }
            uVar15 = *(uint *)(param_3 + 0x24);
            uVar8 = *puVar4;
            *puVar3 = uVar12;
            *(uint *)(param_3 + 0x34) = uVar6;
            uVar16 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar8,uVar15);
            if (uVar6 <= uVar16 && (uint)(uVar8 + uVar15 <= uVar12) <= uVar6 - uVar16) {
              uVar15 = uVar12 - uVar8;
            }
            *(uint *)(param_3 + 0x3c) = uVar15;
            *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
            goto LAB_01311468;
          }
        }
        *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
        local_88 = 0;
        local_7c = 9;
      }
      else {
        local_7c = local_7c & 0xffffff00 | 7;
      }
    }
    else {
      local_7c = local_7c & 0xffff0000 | uVar8 << 8 | 1;
    }
LAB_01311fd8:
    local_4c = 1;
LAB_01311fdc:
    *param_1 = local_4c;
    *puVar1 = local_7c;
    param_1[2] = local_88;
    return;
  case 4:
    if (uVar8 != 2) {
      local_80 = local_80 & 0xffff0000 | uVar8 << 8 | 1;
LAB_01312060:
      local_4c = 1;
      goto LAB_01312064;
    }
    if (*(uint *)(param_3 + 0x44) <= *(uint *)(param_3 + 0x40)) {
      local_80 = local_80 & 0xffffff00 | 7;
      goto LAB_01312060;
    }
    uVar12 = *(uint *)(param_2 + 0x28);
    uVar8 = *(uint *)(param_2 + 0x2c);
    *(uint *)(param_3 + 0x40) = *(uint *)(param_3 + 0x40) + 1;
    if (uVar8 == uVar12) {
      local_3c = 0;
      local_40 = 0;
      local_48 = 0;
      local_50 = 0;
      uVar16 = uVar8;
      if (uVar8 == *(uint *)(param_2 + 0x20)) {
        FUN_0132f5c8((uint *)(param_2 + 0x20));
        uVar16 = *(uint *)(param_2 + 0x2c);
      }
      iVar14 = *(int *)(param_2 + 0x24);
      puVar2 = (uint *)(iVar14 + uVar8 * 0x18);
      *puVar2 = local_50;
      puVar2[1] = local_4c;
      puVar2[2] = local_48;
      puVar2[3] = local_44;
      puVar2[4] = local_40;
      puVar2[5] = local_3c;
      uVar12 = uVar8 + 1;
      *(uint *)(param_2 + 0x28) = uVar12;
      uVar8 = uVar16;
    }
    else {
      if (uVar12 <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar8,uVar12,&DAT_01890558);
      }
      iVar14 = *(int *)(param_2 + 0x24);
      puVar5 = (undefined4 *)(iVar14 + uVar8 * 0x18);
      *puVar5 = 0;
      puVar5[2] = 0;
      FUN_0133497c(puVar5[4]);
    }
    uVar16 = uVar8 + 1;
    *(uint *)(param_2 + 0x2c) = uVar16;
    if (uVar12 < uVar16) goto LAB_013120f4;
    if (uVar16 == 0) goto LAB_01312108;
    iVar9 = *(int *)(param_3 + 0x38);
    uVar12 = *(int *)(param_3 + 0x3c) - iVar9;
    if (*(int *)(param_3 + 0x3c) != iVar9) {
      pcVar11 = (char *)(*(int *)(param_3 + 0x20) + iVar9);
      uVar16 = (uint)*pcVar11;
      if ((int)uVar16 < 0) {
        if (uVar12 < 2) goto LAB_013116f4;
        uVar6 = (uint)pcVar11[1];
        if ((int)uVar6 < 0) {
          if (uVar12 < 10) goto LAB_013116f4;
          uVar15 = 0;
          uVar16 = uVar16 & 0x7f | (uVar6 & 0x7f) << 7 | ((int)pcVar11[2] & 0x7fU) << 0xe;
          uVar6 = 3;
          if (0x7fffffff < (uint)(int)pcVar11[2]) {
            uVar16 = uVar16 | ((int)pcVar11[3] & 0x7fU) << 0x15;
            uVar6 = 4;
            if (0x7fffffff < (uint)(int)pcVar11[3]) {
              uVar6 = (uint)pcVar11[4];
              uVar16 = uVar16 | uVar6 << 0x1c;
              uVar15 = (uVar6 & 0x7f) >> 4;
              if ((int)uVar6 < 0) {
                uVar15 = uVar15 | ((int)pcVar11[5] & 0x7fU) << 3;
                uVar6 = 6;
                if (0x7fffffff < (uint)(int)pcVar11[5]) {
                  uVar15 = uVar15 | ((int)pcVar11[6] & 0x7fU) << 10;
                  uVar6 = 7;
                  if (0x7fffffff < (uint)(int)pcVar11[6]) {
                    uVar15 = uVar15 | ((int)pcVar11[7] & 0x7fU) << 0x11;
                    uVar6 = 8;
                    if (0x7fffffff < (uint)(int)pcVar11[7]) {
                      uVar15 = uVar15 | ((int)pcVar11[8] & 0x7fU) << 0x18;
                      uVar6 = 9;
                      if (0x7fffffff < (uint)(int)pcVar11[8]) {
                        if (pcVar11[9] < 0) {
                          local_48 = CONCAT31(local_48._1_3_,4);
                          local_80 = local_48;
                          local_8c = local_44;
                          *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
                          goto LAB_01312060;
                        }
                        uVar15 = uVar15 | (int)pcVar11[9] << 0x1f;
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
          uVar15 = ((int)uVar6 >> 0x1f) << 7 | uVar6 >> 0x19;
          uVar16 = uVar16 & 0x7f | uVar6 << 7;
          uVar6 = 2;
        }
      }
      else {
        uVar15 = (int)uVar16 >> 0x1f;
        uVar6 = 1;
      }
      if (uVar12 < uVar6) goto LAB_0131212c;
      uVar6 = uVar6 + iVar9;
      *(uint *)(param_3 + 0x38) = uVar6;
LAB_013118dc:
      uVar10 = *puVar4;
      uVar7 = uVar10 + uVar6;
      uVar13 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar10,uVar6);
      uVar12 = uVar7 + uVar16;
      uVar6 = uVar13 + uVar15 + (uint)CARRY4(uVar7,uVar16);
      if (!CARRY4(uVar13,uVar15) && !CARRY4(uVar13 + uVar15,(uint)CARRY4(uVar7,uVar16))) {
        uVar16 = *puVar3;
        uVar15 = *(uint *)(param_3 + 0x34);
        if (uVar6 < uVar15 || uVar15 - uVar6 < (uint)(uVar12 <= uVar16)) {
          uVar13 = *(uint *)(param_3 + 0x24);
          *puVar3 = uVar12;
          *(uint *)(param_3 + 0x34) = uVar6;
          uVar7 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar10,uVar13);
          bVar17 = uVar10 + uVar13 <= uVar12;
          if (uVar6 <= uVar7 && (uint)bVar17 <= uVar6 - uVar7) {
            uVar13 = uVar12 - uVar10;
          }
          *(uint *)(param_3 + 0x3c) = uVar13;
          FUN_012f7e90(&local_50,iVar14 + uVar8 * 0x18,param_3,uVar6 - (uVar7 + !bVar17));
          if (local_50 != 4) {
            local_80 = local_4c;
            local_8c = local_48;
            *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
            local_4c = local_50;
            goto LAB_01312064;
          }
          if (uVar15 <= *(uint *)(param_3 + 0x34) &&
              (uint)(*puVar3 <= uVar16) <= uVar15 - *(uint *)(param_3 + 0x34)) goto LAB_01312114;
          uVar6 = *(uint *)(param_3 + 0x24);
          uVar8 = *puVar4;
          *puVar3 = uVar16;
          *(uint *)(param_3 + 0x34) = uVar15;
          uVar12 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar8,uVar6);
          if (uVar15 <= uVar12 && (uint)(uVar8 + uVar6 <= uVar16) <= uVar15 - uVar12) {
            uVar6 = uVar16 - uVar8;
          }
          *(uint *)(param_3 + 0x3c) = uVar6;
          *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
          goto LAB_01311468;
        }
      }
      *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
      local_8c = 0;
      local_80 = 9;
      goto LAB_01312060;
    }
LAB_013116f4:
    FUN_0132d5a8(&local_50,param_3);
    if (local_50 == 0) {
      uVar6 = *(uint *)(param_3 + 0x38);
      uVar16 = local_48;
      uVar15 = local_44;
      goto LAB_013118dc;
    }
    local_80 = local_48;
    local_8c = local_44;
    *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
    if (local_4c != 4) {
LAB_01312064:
      *param_1 = local_4c;
      *puVar1 = local_80;
      param_1[2] = local_8c;
      return;
    }
    goto LAB_01311468;
  case 5:
    FUN_013388b0(&local_50,uVar8,param_3,param_2 + 0x30);
    break;
  default:
    FUN_01337f28(&local_50,local_4c,uVar8,param_3,param_2 + 0x48);
  }
  if (local_50 != 4) {
LAB_01311f40:
    *param_1 = local_50;
    param_1[1] = local_4c;
    param_1[2] = local_48;
    return;
  }
  goto LAB_01311468;
}

