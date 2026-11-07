// FUN_01308804 @ 01308804 size=4712 calls_out=22 calls_in=2
// strings: assertion failed: limit >= self.limit | assertion failed: amt <= self.limit_within_buf - self.pos_within_buf

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01308804(uint *param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  bool bVar17;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  puVar1 = param_1 + 1;
  puVar2 = (uint *)(param_3 + 0x30);
  puVar3 = (uint *)(param_3 + 0x28);
LAB_013088b4:
  if (*(int *)(param_3 + 0x38) == *(int *)(param_3 + 0x3c)) {
    FUN_0132e9b8(&local_48,param_3);
    if (local_48 != 4) {
      param_1[2] = local_40;
      *param_1 = local_48;
      *(char *)(param_1 + 1) = (char)local_44;
      *(char *)((int)param_1 + 7) = (char)(local_44 >> 0x18);
      *(short *)((int)param_1 + 5) = (short)(local_44 >> 8);
      return;
    }
    if (*(int *)(param_3 + 0x3c) == *(int *)(param_3 + 0x38)) {
      *param_1 = 4;
      return;
    }
  }
  FUN_0129a648(&local_48,param_3);
  uVar7 = local_40 & 0xff;
  if (local_48 != 4) {
    *(undefined1 *)((int)param_1 + 0xb) = local_40._3_1_;
    *(undefined2 *)((int)param_1 + 9) = local_40._1_2_;
    *(undefined1 *)(param_1 + 2) = (undefined1)local_40;
    *param_1 = local_48;
    param_1[1] = local_44;
    return;
  }
  switch(local_44) {
  case 1:
    if (uVar7 != 2) {
      local_44 = CONCAT31(CONCAT21(local_44._2_2_,(undefined1)local_40),1);
      local_48 = 1;
      goto LAB_01309708;
    }
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined1 *)(param_2 + 0xc) = 1;
    FUN_0132e8a8(&local_48,param_3,param_2);
    break;
  case 2:
    iVar16 = param_2 + 0x10;
    goto LAB_01308aec;
  case 3:
    FUN_0133934c(&local_48,uVar7,param_3,param_2 + 0x30);
    break;
  case 4:
    FUN_013389d0(&local_48,uVar7,param_3,param_2 + 0x40);
    break;
  case 5:
    if (uVar7 == 2) {
      if (*(uint *)(param_3 + 0x40) < *(uint *)(param_3 + 0x44)) {
        uVar14 = *(uint *)(param_2 + 0x58);
        uVar7 = *(uint *)(param_2 + 0x5c);
        *(uint *)(param_3 + 0x40) = *(uint *)(param_3 + 0x40) + 1;
        if (uVar7 == uVar14) {
          local_2c = 0;
          local_30 = 0;
          local_34 = (uint)local_34._1_3_ << 8;
          local_38 = 0;
          local_40 = 0;
          local_48 = 0;
          uVar13 = uVar7;
          if (uVar7 == *(uint *)(param_2 + 0x50)) {
            FUN_0132f688((uint *)(param_2 + 0x50));
            uVar13 = *(uint *)(param_2 + 0x5c);
          }
          iVar16 = *(int *)(param_2 + 0x54);
          puVar15 = (uint *)(iVar16 + uVar7 * 0x20);
          *puVar15 = local_48;
          puVar15[1] = local_44;
          puVar15[2] = local_40;
          puVar15[3] = local_3c;
          puVar15[4] = local_38;
          puVar15[5] = local_34;
          puVar15[6] = local_30;
          puVar15[7] = local_2c;
          uVar14 = uVar7 + 1;
          *(uint *)(param_2 + 0x58) = uVar14;
          uVar7 = uVar13;
        }
        else {
          if (uVar14 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar7,uVar14,&DAT_01890558);
          }
          iVar16 = *(int *)(param_2 + 0x54);
          puVar4 = (undefined4 *)(iVar16 + uVar7 * 0x20);
          *puVar4 = 0;
          *(undefined1 *)(puVar4 + 5) = 0;
          puVar4[2] = 0;
          FUN_0133497c(puVar4[6]);
        }
        uVar13 = uVar7 + 1;
        *(uint *)(param_2 + 0x5c) = uVar13;
        if (uVar14 < uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar13,uVar14,&DAT_01890578);
        }
        if (uVar13 == 0) {
LAB_01309960:
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_01890568);
        }
        iVar8 = *(int *)(param_3 + 0x38);
        uVar14 = *(int *)(param_3 + 0x3c) - iVar8;
        if (*(int *)(param_3 + 0x3c) == iVar8) {
LAB_01308c3c:
          FUN_0132d5a8(&local_48,param_3);
          if (local_48 != 0) {
            local_98 = local_40;
            local_a8 = local_3c;
            *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
            if (local_44 != 4) goto LAB_01309898;
            goto LAB_013088b4;
          }
          uVar5 = *(uint *)(param_3 + 0x38);
          uVar13 = local_40;
          uVar12 = local_3c;
        }
        else {
          pcVar10 = (char *)(*(int *)(param_3 + 0x20) + iVar8);
          uVar13 = (uint)*pcVar10;
          if ((int)uVar13 < 0) {
            if (uVar14 < 2) goto LAB_01308c3c;
            uVar5 = (uint)pcVar10[1];
            if ((int)uVar5 < 0) {
              if (uVar14 < 10) goto LAB_01308c3c;
              uVar12 = 0;
              uVar13 = uVar13 & 0x7f | (uVar5 & 0x7f) << 7 | ((int)pcVar10[2] & 0x7fU) << 0xe;
              uVar5 = 3;
              if (0x7fffffff < (uint)(int)pcVar10[2]) {
                uVar13 = uVar13 | ((int)pcVar10[3] & 0x7fU) << 0x15;
                uVar5 = 4;
                if (0x7fffffff < (uint)(int)pcVar10[3]) {
                  uVar5 = (uint)pcVar10[4];
                  uVar13 = uVar13 | uVar5 << 0x1c;
                  uVar12 = (uVar5 & 0x7f) >> 4;
                  if ((int)uVar5 < 0) {
                    uVar12 = uVar12 | ((int)pcVar10[5] & 0x7fU) << 3;
                    uVar5 = 6;
                    if (0x7fffffff < (uint)(int)pcVar10[5]) {
                      uVar12 = uVar12 | ((int)pcVar10[6] & 0x7fU) << 10;
                      uVar5 = 7;
                      if (0x7fffffff < (uint)(int)pcVar10[6]) {
                        uVar12 = uVar12 | ((int)pcVar10[7] & 0x7fU) << 0x11;
                        uVar5 = 8;
                        if (0x7fffffff < (uint)(int)pcVar10[7]) {
                          uVar12 = uVar12 | ((int)pcVar10[8] & 0x7fU) << 0x18;
                          uVar5 = 9;
                          if (0x7fffffff < (uint)(int)pcVar10[8]) {
                            if (pcVar10[9] < 0) {
                              local_40 = CONCAT31(local_40._1_3_,4);
                              local_98 = local_40;
                              local_a8 = local_3c;
                              *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
                              goto LAB_01309894;
                            }
                            uVar12 = uVar12 | (int)pcVar10[9] << 0x1f;
                            uVar5 = 10;
                          }
                        }
                      }
                    }
                  }
                  else {
                    uVar5 = 5;
                  }
                }
              }
            }
            else {
              uVar12 = ((int)uVar5 >> 0x1f) << 7 | uVar5 >> 0x19;
              uVar13 = uVar13 & 0x7f | uVar5 << 7;
              uVar5 = 2;
            }
          }
          else {
            uVar12 = (int)uVar13 >> 0x1f;
            uVar5 = 1;
          }
          if (uVar14 < uVar5) goto LAB_01309998;
          uVar5 = uVar5 + iVar8;
          *(uint *)(param_3 + 0x38) = uVar5;
        }
        uVar9 = *puVar3;
        uVar6 = uVar9 + uVar5;
        uVar5 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar9,uVar5);
        uVar14 = uVar6 + uVar13;
        uVar11 = uVar5 + uVar12 + (uint)CARRY4(uVar6,uVar13);
        if (!CARRY4(uVar5,uVar12) && !CARRY4(uVar5 + uVar12,(uint)CARRY4(uVar6,uVar13))) {
          uVar13 = *puVar2;
          uVar5 = *(uint *)(param_3 + 0x34);
          if (uVar11 < uVar5 || uVar5 - uVar11 < (uint)(uVar14 <= uVar13)) {
            uVar6 = *(uint *)(param_3 + 0x24);
            *puVar2 = uVar14;
            *(uint *)(param_3 + 0x34) = uVar11;
            uVar12 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar9,uVar6);
            bVar17 = uVar9 + uVar6 <= uVar14;
            if (uVar11 <= uVar12 && (uint)bVar17 <= uVar11 - uVar12) {
              uVar6 = uVar14 - uVar9;
            }
            *(uint *)(param_3 + 0x3c) = uVar6;
            FUN_013235ec(&local_48,iVar16 + uVar7 * 0x20,param_3,uVar11 - (uVar12 + !bVar17));
            if (local_48 != 4) {
              local_98 = local_44;
              local_a8 = local_40;
              *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
              local_44 = local_48;
              goto LAB_01309898;
            }
            if (uVar5 <= *(uint *)(param_3 + 0x34) &&
                (uint)(*puVar2 <= uVar13) <= uVar5 - *(uint *)(param_3 + 0x34)) goto LAB_0130996c;
            uVar12 = *(uint *)(param_3 + 0x24);
            uVar7 = *puVar3;
            *puVar2 = uVar13;
            *(uint *)(param_3 + 0x34) = uVar5;
            iVar16 = *(int *)(param_3 + 0x40) + -1;
            uVar14 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar7,uVar12);
            if (uVar5 <= uVar14 && (uint)(uVar7 + uVar12 <= uVar13) <= uVar5 - uVar14) {
              uVar12 = uVar13 - uVar7;
            }
LAB_01309120:
            *(uint *)(param_3 + 0x3c) = uVar12;
            *(int *)(param_3 + 0x40) = iVar16;
            goto LAB_013088b4;
          }
        }
        *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
        local_a8 = 0;
        local_98 = 9;
      }
      else {
        local_98 = local_98 & 0xffffff00 | 7;
      }
    }
    else {
      local_98 = local_98 & 0xffff0000 | uVar7 << 8 | 1;
    }
LAB_01309894:
    local_44 = 1;
LAB_01309898:
    *param_1 = local_44;
    *puVar1 = local_98;
    param_1[2] = local_a8;
    return;
  case 6:
    iVar16 = param_2 + 0x20;
LAB_01308aec:
    FUN_01339858(&local_48,uVar7,param_3,iVar16);
    break;
  case 7:
    if (uVar7 == 2) {
      uVar7 = *(uint *)(param_3 + 0x40);
      if (uVar7 < *(uint *)(param_3 + 0x44)) {
        puVar4 = *(undefined4 **)(param_2 + 0x90);
        *(undefined1 *)(param_2 + 0x94) = 1;
        *(uint *)(param_3 + 0x40) = uVar7 + 1;
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)thunk_FUN_016d4a50(0x1c);
          if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x1c);
          }
          *puVar4 = 0;
          puVar4[2] = 0;
          puVar4[3] = 0;
          puVar4[4] = 0;
          puVar4[5] = 0;
          puVar4[1] = 8;
          puVar4[6] = 0x2020202;
          *(undefined4 **)(param_2 + 0x90) = puVar4;
          iVar16 = *(int *)(param_3 + 0x38);
          uVar7 = *(int *)(param_3 + 0x3c) - iVar16;
          if (uVar7 != 0) goto LAB_01308e98;
LAB_01309250:
          FUN_0132d5a8(&local_48,param_3);
          if (local_48 != 0) {
            local_8c = local_40;
            local_9c = local_3c;
            *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
            if (local_44 != 4) goto LAB_013097cc;
            goto LAB_013088b4;
          }
          uVar13 = *(uint *)(param_3 + 0x38);
          uVar14 = local_40;
          uVar5 = local_3c;
        }
        else {
          puVar4[3] = 0;
          puVar4[6] = 0x2020202;
          FUN_0133497c(puVar4[4]);
          iVar16 = *(int *)(param_3 + 0x38);
          uVar7 = *(int *)(param_3 + 0x3c) - iVar16;
          if (uVar7 == 0) goto LAB_01309250;
LAB_01308e98:
          pcVar10 = (char *)(*(int *)(param_3 + 0x20) + iVar16);
          uVar14 = (uint)*pcVar10;
          if ((int)uVar14 < 0) {
            if (uVar7 < 2) goto LAB_01309250;
            uVar13 = (uint)pcVar10[1];
            if ((int)uVar13 < 0) {
              if (uVar7 < 10) goto LAB_01309250;
              uVar5 = 0;
              uVar14 = uVar14 & 0x7f | (uVar13 & 0x7f) << 7 | ((int)pcVar10[2] & 0x7fU) << 0xe;
              uVar13 = 3;
              if (0x7fffffff < (uint)(int)pcVar10[2]) {
                uVar14 = uVar14 | ((int)pcVar10[3] & 0x7fU) << 0x15;
                uVar13 = 4;
                if (0x7fffffff < (uint)(int)pcVar10[3]) {
                  uVar13 = (uint)pcVar10[4];
                  uVar14 = uVar14 | uVar13 << 0x1c;
                  uVar5 = (uVar13 & 0x7f) >> 4;
                  if ((int)uVar13 < 0) {
                    uVar5 = uVar5 | ((int)pcVar10[5] & 0x7fU) << 3;
                    uVar13 = 6;
                    if (0x7fffffff < (uint)(int)pcVar10[5]) {
                      uVar5 = uVar5 | ((int)pcVar10[6] & 0x7fU) << 10;
                      uVar13 = 7;
                      if (0x7fffffff < (uint)(int)pcVar10[6]) {
                        uVar5 = uVar5 | ((int)pcVar10[7] & 0x7fU) << 0x11;
                        uVar13 = 8;
                        if (0x7fffffff < (uint)(int)pcVar10[7]) {
                          uVar5 = uVar5 | ((int)pcVar10[8] & 0x7fU) << 0x18;
                          uVar13 = 9;
                          if (pcVar10[8] < 0) {
                            if (pcVar10[9] < 0) {
                              local_40 = CONCAT31(local_40._1_3_,4);
                              local_8c = local_40;
                              local_9c = local_3c;
                              *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
                              goto LAB_013097c8;
                            }
                            uVar5 = uVar5 | (int)pcVar10[9] << 0x1f;
                            uVar13 = 10;
                          }
                        }
                      }
                    }
                  }
                  else {
                    uVar13 = 5;
                  }
                }
              }
            }
            else {
              uVar5 = ((int)uVar13 >> 0x1f) << 7 | uVar13 >> 0x19;
              uVar14 = uVar14 & 0x7f | uVar13 << 7;
              uVar13 = 2;
            }
          }
          else {
            uVar5 = (int)uVar14 >> 0x1f;
            uVar13 = 1;
          }
          if (uVar7 < uVar13) {
LAB_01309998:
                    /* WARNING: Subroutine does not return */
            FUN_00faa464("assertion failed: amt <= self.limit_within_buf - self.pos_within_buf",0x44
                         ,&DAT_01890e80);
          }
          uVar13 = uVar13 + iVar16;
          *(uint *)(param_3 + 0x38) = uVar13;
        }
        uVar6 = *puVar3;
        uVar12 = uVar6 + uVar13;
        uVar9 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar6,uVar13);
        uVar7 = uVar12 + uVar14;
        uVar13 = uVar9 + uVar5 + (uint)CARRY4(uVar12,uVar14);
        if (!CARRY4(uVar9,uVar5) && !CARRY4(uVar9 + uVar5,(uint)CARRY4(uVar12,uVar14))) {
          uVar14 = *puVar2;
          uVar5 = *(uint *)(param_3 + 0x34);
          if (uVar13 < uVar5 || uVar5 - uVar13 < (uint)(uVar7 <= uVar14)) {
            uVar9 = *(uint *)(param_3 + 0x24);
            *puVar2 = uVar7;
            *(uint *)(param_3 + 0x34) = uVar13;
            uVar12 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar6,uVar9);
            if (uVar13 <= uVar12 && (uint)(uVar6 + uVar9 <= uVar7) <= uVar13 - uVar12) {
              uVar9 = uVar7 - uVar6;
            }
            *(uint *)(param_3 + 0x3c) = uVar9;
            FUN_0130364c(&local_48,puVar4,param_3);
            if (local_48 != 4) {
              local_8c = local_44;
              local_9c = local_40;
              *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
              local_44 = local_48;
              goto LAB_013097cc;
            }
            if (uVar5 <= *(uint *)(param_3 + 0x34) &&
                (uint)(*puVar2 <= uVar14) <= uVar5 - *(uint *)(param_3 + 0x34)) {
LAB_0130996c:
                    /* WARNING: Subroutine does not return */
              FUN_00faa464("assertion failed: limit >= self.limit",0x25,&DAT_01890650);
            }
            uVar12 = *(uint *)(param_3 + 0x24);
            uVar7 = *puVar3;
            *puVar2 = uVar14;
            *(uint *)(param_3 + 0x34) = uVar5;
            uVar13 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar7,uVar12);
            if (uVar5 <= uVar13 && (uint)(uVar7 + uVar12 <= uVar14) <= uVar5 - uVar13) {
              uVar12 = uVar14 - uVar7;
            }
            *(uint *)(param_3 + 0x3c) = uVar12;
            *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
            goto LAB_013088b4;
          }
        }
        *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
        local_9c = 0;
        local_8c = 9;
      }
      else {
        local_8c = local_8c & 0xffffff00 | 7;
      }
    }
    else {
      local_8c = local_8c & 0xffff0000 | uVar7 << 8 | 1;
    }
LAB_013097c8:
    local_44 = 1;
LAB_013097cc:
    *param_1 = local_44;
    *puVar1 = local_8c;
    param_1[2] = local_9c;
    return;
  case 8:
    if (uVar7 == 2) {
      if (*(uint *)(param_3 + 0x40) < *(uint *)(param_3 + 0x44)) {
        uVar14 = *(uint *)(param_2 + 0x68);
        uVar7 = *(uint *)(param_2 + 0x6c);
        *(uint *)(param_3 + 0x40) = *(uint *)(param_3 + 0x40) + 1;
        if (uVar7 == uVar14) {
          local_2c = 0;
          local_30 = 0;
          local_34 = (uint)local_34._1_3_ << 8;
          local_38 = 0;
          local_3c = local_3c & 0xffffff00;
          local_40 = 0;
          local_44 = 1;
          local_48 = 0;
          uVar13 = uVar7;
          if (uVar7 == *(uint *)(param_2 + 0x60)) {
            FUN_0132f688((uint *)(param_2 + 0x60));
            uVar13 = *(uint *)(param_2 + 0x6c);
          }
          iVar8 = *(int *)(param_2 + 100);
          uVar14 = uVar7 + 1;
          puVar15 = (uint *)(iVar8 + uVar7 * 0x20);
          *puVar15 = local_48;
          puVar15[1] = local_44;
          puVar15[2] = local_40;
          puVar15[3] = local_3c;
          puVar15[4] = local_38;
          puVar15[5] = local_34;
          puVar15[6] = local_30;
          puVar15[7] = local_2c;
          *(uint *)(param_2 + 0x68) = uVar14;
          uVar7 = uVar13;
        }
        else {
          if (uVar14 <= uVar7) {
LAB_013099bc:
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar7,uVar14,&DAT_01890558);
          }
          iVar8 = *(int *)(param_2 + 100);
          iVar16 = iVar8 + uVar7 * 0x20;
          *(undefined1 *)(iVar16 + 0x14) = 0;
          *(undefined1 *)(iVar16 + 0xc) = 0;
          FUN_0133497c(*(undefined4 *)(iVar16 + 0x18));
        }
        uVar13 = uVar7 + 1;
        *(uint *)(param_2 + 0x6c) = uVar13;
        if (uVar14 < uVar13) {
LAB_0130994c:
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar13,uVar14,&DAT_01890578);
        }
        if (uVar13 == 0) goto LAB_01309960;
        iVar16 = *(int *)(param_3 + 0x38);
        uVar14 = *(int *)(param_3 + 0x3c) - iVar16;
        if (*(int *)(param_3 + 0x3c) == iVar16) {
LAB_01308cd0:
          FUN_0132d5a8(&local_48,param_3);
          if (local_48 != 0) {
            local_94 = local_40;
            local_a4 = local_3c;
            *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
            if (local_44 != 4) goto LAB_01309854;
            goto LAB_013088b4;
          }
          uVar5 = *(uint *)(param_3 + 0x38);
          uVar13 = local_40;
          uVar12 = local_3c;
        }
        else {
          pcVar10 = (char *)(*(int *)(param_3 + 0x20) + iVar16);
          uVar13 = (uint)*pcVar10;
          if ((int)uVar13 < 0) {
            if (uVar14 < 2) goto LAB_01308cd0;
            uVar5 = (uint)pcVar10[1];
            if ((int)uVar5 < 0) {
              if (uVar14 < 10) goto LAB_01308cd0;
              uVar12 = 0;
              uVar13 = uVar13 & 0x7f | (uVar5 & 0x7f) << 7 | ((int)pcVar10[2] & 0x7fU) << 0xe;
              uVar5 = 3;
              if (0x7fffffff < (uint)(int)pcVar10[2]) {
                uVar13 = uVar13 | ((int)pcVar10[3] & 0x7fU) << 0x15;
                uVar5 = 4;
                if (0x7fffffff < (uint)(int)pcVar10[3]) {
                  uVar5 = (uint)pcVar10[4];
                  uVar13 = uVar13 | uVar5 << 0x1c;
                  uVar12 = (uVar5 & 0x7f) >> 4;
                  if ((int)uVar5 < 0) {
                    uVar12 = uVar12 | ((int)pcVar10[5] & 0x7fU) << 3;
                    uVar5 = 6;
                    if (0x7fffffff < (uint)(int)pcVar10[5]) {
                      uVar12 = uVar12 | ((int)pcVar10[6] & 0x7fU) << 10;
                      uVar5 = 7;
                      if (0x7fffffff < (uint)(int)pcVar10[6]) {
                        uVar12 = uVar12 | ((int)pcVar10[7] & 0x7fU) << 0x11;
                        uVar5 = 8;
                        if (0x7fffffff < (uint)(int)pcVar10[7]) {
                          uVar12 = uVar12 | ((int)pcVar10[8] & 0x7fU) << 0x18;
                          uVar5 = 9;
                          if (0x7fffffff < (uint)(int)pcVar10[8]) {
                            if (pcVar10[9] < 0) {
                              local_40 = CONCAT31(local_40._1_3_,4);
                              local_94 = local_40;
                              local_a4 = local_3c;
                              *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
                              goto LAB_01309850;
                            }
                            uVar12 = uVar12 | (int)pcVar10[9] << 0x1f;
                            uVar5 = 10;
                          }
                        }
                      }
                    }
                  }
                  else {
                    uVar5 = 5;
                  }
                }
              }
            }
            else {
              uVar12 = ((int)uVar5 >> 0x1f) << 7 | uVar5 >> 0x19;
              uVar13 = uVar13 & 0x7f | uVar5 << 7;
              uVar5 = 2;
            }
          }
          else {
            uVar12 = (int)uVar13 >> 0x1f;
            uVar5 = 1;
          }
          if (uVar14 < uVar5) goto LAB_01309998;
          uVar5 = uVar5 + iVar16;
          *(uint *)(param_3 + 0x38) = uVar5;
        }
        uVar9 = *puVar3;
        uVar6 = uVar9 + uVar5;
        uVar5 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar9,uVar5);
        uVar14 = uVar6 + uVar13;
        uVar11 = uVar5 + uVar12 + (uint)CARRY4(uVar6,uVar13);
        if (!CARRY4(uVar5,uVar12) && !CARRY4(uVar5 + uVar12,(uint)CARRY4(uVar6,uVar13))) {
          uVar13 = *puVar2;
          uVar5 = *(uint *)(param_3 + 0x34);
          if (uVar11 < uVar5 || uVar5 - uVar11 < (uint)(uVar14 <= uVar13)) {
            uVar6 = *(uint *)(param_3 + 0x24);
            *puVar2 = uVar14;
            *(uint *)(param_3 + 0x34) = uVar11;
            uVar12 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar9,uVar6);
            bVar17 = uVar9 + uVar6 <= uVar14;
            if (uVar11 <= uVar12 && (uint)bVar17 <= uVar11 - uVar12) {
              uVar6 = uVar14 - uVar9;
            }
            *(uint *)(param_3 + 0x3c) = uVar6;
            FUN_013188ec(&local_48,iVar8 + uVar7 * 0x20,param_3,uVar11 - (uVar12 + !bVar17));
            if (local_48 != 4) {
              local_94 = local_44;
              local_a4 = local_40;
              *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
              local_44 = local_48;
              goto LAB_01309854;
            }
            if (uVar5 <= *(uint *)(param_3 + 0x34) &&
                (uint)(*puVar2 <= uVar13) <= uVar5 - *(uint *)(param_3 + 0x34)) goto LAB_0130996c;
            uVar12 = *(uint *)(param_3 + 0x24);
            iVar16 = *(int *)(param_3 + 0x40);
            uVar7 = *puVar3;
            *puVar2 = uVar13;
            *(uint *)(param_3 + 0x34) = uVar5;
            uVar14 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar7,uVar12);
            bVar17 = uVar14 < uVar5 || uVar5 - uVar14 < (uint)(uVar7 + uVar12 <= uVar13);
LAB_0130911c:
            iVar16 = iVar16 + -1;
            if (!bVar17) {
              uVar12 = uVar13 - uVar7;
            }
            goto LAB_01309120;
          }
        }
        *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
        local_a4 = 0;
        local_94 = 9;
      }
      else {
        local_94 = local_94 & 0xffffff00 | 7;
      }
    }
    else {
      local_94 = local_94 & 0xffff0000 | uVar7 << 8 | 1;
    }
LAB_01309850:
    local_44 = 1;
LAB_01309854:
    *param_1 = local_44;
    *puVar1 = local_94;
    param_1[2] = local_a4;
    return;
  case 9:
    if (uVar7 != 2) {
      local_90 = local_90 & 0xffff0000 | uVar7 << 8 | 1;
LAB_0130980c:
      local_44 = 1;
      goto LAB_01309810;
    }
    if (*(uint *)(param_3 + 0x44) <= *(uint *)(param_3 + 0x40)) {
      local_90 = local_90 & 0xffffff00 | 7;
      goto LAB_0130980c;
    }
    uVar14 = *(uint *)(param_2 + 0x78);
    uVar7 = *(uint *)(param_2 + 0x7c);
    *(uint *)(param_3 + 0x40) = *(uint *)(param_3 + 0x40) + 1;
    if (uVar7 == uVar14) {
      local_34 = 0;
      local_38 = 0;
      local_40 = 0;
      local_48 = 0;
      uVar13 = uVar7;
      if (uVar7 == *(uint *)(param_2 + 0x70)) {
        FUN_0132f5c8((uint *)(param_2 + 0x70));
        uVar13 = *(uint *)(param_2 + 0x7c);
      }
      iVar16 = *(int *)(param_2 + 0x74);
      uVar14 = uVar7 + 1;
      puVar15 = (uint *)(iVar16 + uVar7 * 0x18);
      *puVar15 = local_48;
      puVar15[1] = local_44;
      puVar15[2] = local_40;
      puVar15[3] = local_3c;
      puVar15[4] = local_38;
      puVar15[5] = local_34;
      *(uint *)(param_2 + 0x78) = uVar14;
      uVar7 = uVar13;
    }
    else {
      if (uVar14 <= uVar7) goto LAB_013099bc;
      iVar16 = *(int *)(param_2 + 0x74);
      puVar4 = (undefined4 *)(iVar16 + uVar7 * 0x18);
      *puVar4 = 0;
      puVar4[2] = 0;
      FUN_0133497c(puVar4[4]);
    }
    uVar13 = uVar7 + 1;
    *(uint *)(param_2 + 0x7c) = uVar13;
    if (uVar14 < uVar13) goto LAB_0130994c;
    if (uVar13 == 0) goto LAB_01309960;
    iVar8 = *(int *)(param_3 + 0x38);
    uVar14 = *(int *)(param_3 + 0x3c) - iVar8;
    if (*(int *)(param_3 + 0x3c) != iVar8) {
      pcVar10 = (char *)(*(int *)(param_3 + 0x20) + iVar8);
      uVar13 = (uint)*pcVar10;
      if ((int)uVar13 < 0) {
        if (uVar14 < 2) goto LAB_01308d68;
        uVar5 = (uint)pcVar10[1];
        if ((int)uVar5 < 0) {
          if (uVar14 < 10) goto LAB_01308d68;
          uVar12 = 0;
          uVar13 = uVar13 & 0x7f | (uVar5 & 0x7f) << 7 | ((int)pcVar10[2] & 0x7fU) << 0xe;
          uVar5 = 3;
          if (0x7fffffff < (uint)(int)pcVar10[2]) {
            uVar13 = uVar13 | ((int)pcVar10[3] & 0x7fU) << 0x15;
            uVar5 = 4;
            if (0x7fffffff < (uint)(int)pcVar10[3]) {
              uVar5 = (uint)pcVar10[4];
              uVar13 = uVar13 | uVar5 << 0x1c;
              uVar12 = (uVar5 & 0x7f) >> 4;
              if ((int)uVar5 < 0) {
                uVar12 = uVar12 | ((int)pcVar10[5] & 0x7fU) << 3;
                uVar5 = 6;
                if (0x7fffffff < (uint)(int)pcVar10[5]) {
                  uVar12 = uVar12 | ((int)pcVar10[6] & 0x7fU) << 10;
                  uVar5 = 7;
                  if (0x7fffffff < (uint)(int)pcVar10[6]) {
                    uVar12 = uVar12 | ((int)pcVar10[7] & 0x7fU) << 0x11;
                    uVar5 = 8;
                    if (0x7fffffff < (uint)(int)pcVar10[7]) {
                      uVar12 = uVar12 | ((int)pcVar10[8] & 0x7fU) << 0x18;
                      uVar5 = 9;
                      if (0x7fffffff < (uint)(int)pcVar10[8]) {
                        if (pcVar10[9] < 0) {
                          local_40 = CONCAT31(local_40._1_3_,4);
                          local_90 = local_40;
                          local_a0 = local_3c;
                          *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
                          goto LAB_0130980c;
                        }
                        uVar12 = uVar12 | (int)pcVar10[9] << 0x1f;
                        uVar5 = 10;
                      }
                    }
                  }
                }
              }
              else {
                uVar5 = 5;
              }
            }
          }
        }
        else {
          uVar12 = ((int)uVar5 >> 0x1f) << 7 | uVar5 >> 0x19;
          uVar13 = uVar13 & 0x7f | uVar5 << 7;
          uVar5 = 2;
        }
      }
      else {
        uVar12 = (int)uVar13 >> 0x1f;
        uVar5 = 1;
      }
      if (uVar14 < uVar5) goto LAB_01309998;
      uVar5 = uVar5 + iVar8;
      *(uint *)(param_3 + 0x38) = uVar5;
LAB_01309068:
      uVar9 = *puVar3;
      uVar6 = uVar9 + uVar5;
      uVar5 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar9,uVar5);
      uVar14 = uVar6 + uVar13;
      uVar11 = uVar5 + uVar12 + (uint)CARRY4(uVar6,uVar13);
      if (!CARRY4(uVar5,uVar12) && !CARRY4(uVar5 + uVar12,(uint)CARRY4(uVar6,uVar13))) {
        uVar13 = *puVar2;
        uVar5 = *(uint *)(param_3 + 0x34);
        if (uVar11 < uVar5 || uVar5 - uVar11 < (uint)(uVar14 <= uVar13)) {
          *puVar2 = uVar14;
          *(uint *)(param_3 + 0x34) = uVar11;
          uVar6 = *(uint *)(param_3 + 0x24);
          uVar12 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar9,uVar6);
          bVar17 = uVar9 + uVar6 <= uVar14;
          if (uVar11 <= uVar12 && (uint)bVar17 <= uVar11 - uVar12) {
            uVar6 = uVar14 - uVar9;
          }
          *(uint *)(param_3 + 0x3c) = uVar6;
          FUN_012f7e90(&local_48,iVar16 + uVar7 * 0x18,param_3,uVar11 - (uVar12 + !bVar17));
          if (local_48 == 4) {
            if (uVar5 <= *(uint *)(param_3 + 0x34) &&
                (uint)(*puVar2 <= uVar13) <= uVar5 - *(uint *)(param_3 + 0x34)) goto LAB_0130996c;
            uVar12 = *(uint *)(param_3 + 0x24);
            iVar16 = *(int *)(param_3 + 0x40);
            uVar7 = *puVar3;
            *puVar2 = uVar13;
            *(uint *)(param_3 + 0x34) = uVar5;
            uVar14 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar7,uVar12);
            bVar17 = uVar14 < uVar5 || uVar5 - uVar14 < (uint)(uVar7 + uVar12 <= uVar13);
            goto LAB_0130911c;
          }
          local_90 = local_44;
          local_a0 = local_40;
          *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
          local_44 = local_48;
          goto LAB_01309810;
        }
      }
      *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
      local_a0 = 0;
      local_90 = 9;
      goto LAB_0130980c;
    }
LAB_01308d68:
    FUN_0132d5a8(&local_48,param_3);
    if (local_48 == 0) {
      uVar5 = *(uint *)(param_3 + 0x38);
      uVar13 = local_40;
      uVar12 = local_3c;
      goto LAB_01309068;
    }
    local_90 = local_40;
    local_a0 = local_3c;
    *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
    if (local_44 != 4) {
LAB_01309810:
      *param_1 = local_44;
      *puVar1 = local_90;
      param_1[2] = local_a0;
      return;
    }
    goto LAB_013088b4;
  case 10:
    FUN_013388b0(&local_48,uVar7,param_3,param_2 + 0x80);
    break;
  default:
    FUN_01337f28(&local_48,local_44,uVar7,param_3,param_2 + 0x98);
  }
  if (local_48 != 4) {
LAB_01309708:
    *param_1 = local_48;
    param_1[1] = local_44;
    param_1[2] = local_40;
    return;
  }
  goto LAB_013088b4;
}

