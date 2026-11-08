// FUN_0129f2e8 @ 0129f2e8 size=6268 calls_out=17 calls_in=2
// strings: assertion failed: limit >= self.limit | assertion failed: amt <= self.limit_within_buf - self.pos_within_buf

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0129f2e8(uint *param_1,undefined4 *param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined4 *puVar16;
  bool bVar17;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_50;
  uint local_4c;
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
  do {
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
    uVar7 = local_48 & 0xff;
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
      if (uVar7 == 2) {
        if (*(uint *)(param_3 + 0x40) < *(uint *)(param_3 + 0x44)) {
          uVar11 = param_2[6];
          uVar7 = param_2[7];
          *(uint *)(param_3 + 0x40) = *(uint *)(param_3 + 0x40) + 1;
          if (uVar7 == uVar11) {
            local_2c = 0;
            local_30 = 0;
            local_34 = local_34 & 0xffffff00;
            local_38 = 0;
            local_3c = 1;
            local_40 = 0;
            local_44 = local_44 & 0xffffff00;
            local_48 = 0;
            local_4c = 1;
            local_50 = 0;
            uVar5 = uVar7;
            if (uVar7 == param_2[4]) {
              FUN_012bda90(param_2 + 4);
              uVar5 = param_2[7];
            }
            iVar15 = param_2[5];
            puVar2 = (uint *)(iVar15 + uVar7 * 0x28);
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
            uVar11 = uVar7 + 1;
            param_2[6] = uVar11;
            uVar7 = uVar5;
          }
          else {
            if (uVar11 <= uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar7,uVar11,&DAT_01890558);
            }
            iVar15 = param_2[5];
            iVar8 = iVar15 + uVar7 * 0x28;
            *(undefined1 *)(iVar8 + 0x1c) = 0;
            *(undefined1 *)(iVar8 + 0xc) = 0;
            FUN_0133497c(*(undefined4 *)(iVar8 + 0x20));
          }
          uVar5 = uVar7 + 1;
          param_2[7] = uVar5;
          if (uVar11 < uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,uVar5,uVar11,&DAT_01890578);
          }
          if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_01890568);
          }
          iVar8 = *(int *)(param_3 + 0x38);
          uVar11 = *(int *)(param_3 + 0x3c) - iVar8;
          if (*(int *)(param_3 + 0x3c) == iVar8) {
LAB_0129f6c0:
            FUN_0132d5a8(&local_50,param_3);
            if (local_50 != 0) {
              local_bc = local_48;
              local_d4 = local_44;
              *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
              uVar7 = local_4c;
              if (local_4c != 4) goto LAB_012a09f4;
              break;
            }
            uVar14 = *(uint *)(param_3 + 0x38);
            uVar5 = local_48;
            uVar6 = local_44;
          }
          else {
            pcVar12 = (char *)(*(int *)(param_3 + 0x20) + iVar8);
            uVar5 = (uint)*pcVar12;
            if ((int)uVar5 < 0) {
              if (uVar11 < 2) goto LAB_0129f6c0;
              uVar14 = (uint)pcVar12[1];
              if ((int)uVar14 < 0) {
                if (uVar11 < 10) goto LAB_0129f6c0;
                uVar6 = 0;
                uVar5 = uVar5 & 0x7f | (uVar14 & 0x7f) << 7 | ((int)pcVar12[2] & 0x7fU) << 0xe;
                uVar14 = 3;
                if (0x7fffffff < (uint)(int)pcVar12[2]) {
                  uVar5 = uVar5 | ((int)pcVar12[3] & 0x7fU) << 0x15;
                  uVar14 = 4;
                  if (0x7fffffff < (uint)(int)pcVar12[3]) {
                    uVar14 = (uint)pcVar12[4];
                    uVar5 = uVar5 | uVar14 << 0x1c;
                    uVar6 = (uVar14 & 0x7f) >> 4;
                    if ((int)uVar14 < 0) {
                      uVar6 = uVar6 | ((int)pcVar12[5] & 0x7fU) << 3;
                      uVar14 = 6;
                      if (0x7fffffff < (uint)(int)pcVar12[5]) {
                        uVar6 = uVar6 | ((int)pcVar12[6] & 0x7fU) << 10;
                        uVar14 = 7;
                        if (0x7fffffff < (uint)(int)pcVar12[6]) {
                          uVar6 = uVar6 | ((int)pcVar12[7] & 0x7fU) << 0x11;
                          uVar14 = 8;
                          if (0x7fffffff < (uint)(int)pcVar12[7]) {
                            uVar6 = uVar6 | ((int)pcVar12[8] & 0x7fU) << 0x18;
                            uVar14 = 9;
                            if (0x7fffffff < (uint)(int)pcVar12[8]) {
                              if (pcVar12[9] < 0) {
                                local_48 = CONCAT31(local_48._1_3_,4);
                                local_bc = local_48;
                                local_d4 = local_44;
                                *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
                                goto LAB_012a0790;
                              }
                              uVar6 = uVar6 | (int)pcVar12[9] << 0x1f;
                              uVar14 = 10;
                            }
                          }
                        }
                      }
                    }
                    else {
                      uVar14 = 5;
                    }
                  }
                }
              }
              else {
                uVar6 = ((int)uVar14 >> 0x1f) << 7 | uVar14 >> 0x19;
                uVar5 = uVar5 & 0x7f | uVar14 << 7;
                uVar14 = 2;
              }
            }
            else {
              uVar6 = (int)uVar5 >> 0x1f;
              uVar14 = 1;
            }
            if (uVar11 < uVar14) {
LAB_012a0a2c:
                    /* WARNING: Subroutine does not return */
              FUN_00faa464("assertion failed: amt <= self.limit_within_buf - self.pos_within_buf",
                           0x44,&DAT_01890e80);
            }
            uVar14 = uVar14 + iVar8;
            *(uint *)(param_3 + 0x38) = uVar14;
          }
          uVar13 = *puVar4;
          uVar9 = uVar13 + uVar14;
          uVar14 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar13,uVar14);
          uVar11 = uVar9 + uVar5;
          uVar10 = uVar14 + uVar6 + (uint)CARRY4(uVar9,uVar5);
          if (CARRY4(uVar14,uVar6) || CARRY4(uVar14 + uVar6,(uint)CARRY4(uVar9,uVar5))) {
LAB_012a0894:
            local_4c = local_a0 & 0xffffff00 | 9;
            local_50 = 1;
            local_48 = local_a4;
          }
          else {
            uVar5 = *puVar3;
            uVar14 = *(uint *)(param_3 + 0x34);
            if (uVar14 <= uVar10 && (uint)(uVar11 <= uVar5) <= uVar14 - uVar10) goto LAB_012a0894;
            *puVar3 = uVar11;
            *(uint *)(param_3 + 0x34) = uVar10;
            uVar6 = *(uint *)(param_3 + 0x24);
            uVar9 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar13,uVar6);
            bVar17 = uVar13 + uVar6 <= uVar11;
            if (uVar10 <= uVar9 && (uint)bVar17 <= uVar10 - uVar9) {
              uVar6 = uVar11 - uVar13;
            }
            *(uint *)(param_3 + 0x3c) = uVar6;
            FUN_0129b32c(&local_50,iVar15 + uVar7 * 0x28,param_3,uVar10 - (uVar9 + !bVar17));
            if (local_50 == 4) {
              if (uVar14 <= *(uint *)(param_3 + 0x34) &&
                  (uint)(*puVar3 <= uVar5) <= uVar14 - *(uint *)(param_3 + 0x34)) goto LAB_012a0a14;
              uVar6 = *(uint *)(param_3 + 0x24);
              uVar7 = *puVar4;
              *puVar3 = uVar5;
              *(uint *)(param_3 + 0x34) = uVar14;
              uVar11 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar7,uVar6);
              if (uVar14 <= uVar11 && (uint)(uVar7 + uVar6 <= uVar5) <= uVar14 - uVar11) {
                uVar6 = uVar5 - uVar7;
              }
              *(uint *)(param_3 + 0x3c) = uVar6;
              *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
              local_a4 = uVar14;
              local_a0 = uVar5;
              break;
            }
          }
          *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
          uVar7 = local_50;
          local_d4 = local_48;
          local_bc = local_4c;
          goto LAB_012a09f4;
        }
        local_bc = local_bc & 0xffffff00 | 7;
      }
      else {
        local_bc = local_bc & 0xffff0000 | uVar7 << 8 | 1;
      }
LAB_012a0790:
      uVar7 = 1;
LAB_012a09f4:
      *param_1 = uVar7;
      *puVar1 = local_bc;
      param_1[2] = local_d4;
      return;
    case 2:
      if (uVar7 == 2) {
        uVar7 = *(uint *)(param_3 + 0x40);
        if (uVar7 < *(uint *)(param_3 + 0x44)) {
          puVar16 = (undefined4 *)param_2[8];
          *(undefined1 *)(param_2 + 9) = 1;
          *(uint *)(param_3 + 0x40) = uVar7 + 1;
          if (puVar16 == (undefined4 *)0x0) {
            puVar16 = (undefined4 *)thunk_FUN_016d4a50(0x18);
            if (puVar16 == (undefined4 *)0x0) {
LAB_012a0a58:
                    /* WARNING: Subroutine does not return */
              FUN_00600874(8,0x18);
            }
            *puVar16 = 0;
            puVar16[1] = 0;
            puVar16[4] = 0;
            puVar16[5] = 0;
            param_2[8] = puVar16;
            iVar8 = *(int *)(param_3 + 0x38);
            uVar7 = *(int *)(param_3 + 0x3c) - iVar8;
            if (uVar7 != 0) goto LAB_0129f8bc;
LAB_012a003c:
            FUN_0132d5a8(&local_50,param_3);
            if (local_50 != 0) {
              local_b8 = local_48;
              local_d0 = local_44;
              *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
              uVar7 = local_4c;
              if (local_4c != 4) goto LAB_012a0940;
              break;
            }
            uVar5 = *(uint *)(param_3 + 0x38);
            uVar11 = local_48;
            uVar14 = local_44;
          }
          else {
            *puVar16 = 0;
            puVar16[1] = 0;
            FUN_0133497c(puVar16[4]);
            iVar8 = *(int *)(param_3 + 0x38);
            uVar7 = *(int *)(param_3 + 0x3c) - iVar8;
            if (uVar7 == 0) goto LAB_012a003c;
LAB_0129f8bc:
            pcVar12 = (char *)(*(int *)(param_3 + 0x20) + iVar8);
            uVar11 = (uint)*pcVar12;
            if ((int)uVar11 < 0) {
              if (uVar7 < 2) goto LAB_012a003c;
              uVar5 = (uint)pcVar12[1];
              if ((int)uVar5 < 0) {
                if (uVar7 < 10) goto LAB_012a003c;
                uVar14 = 0;
                uVar11 = uVar11 & 0x7f | (uVar5 & 0x7f) << 7 | ((int)pcVar12[2] & 0x7fU) << 0xe;
                uVar5 = 3;
                if (0x7fffffff < (uint)(int)pcVar12[2]) {
                  uVar11 = uVar11 | ((int)pcVar12[3] & 0x7fU) << 0x15;
                  uVar5 = 4;
                  if (0x7fffffff < (uint)(int)pcVar12[3]) {
                    uVar5 = (uint)pcVar12[4];
                    uVar11 = uVar11 | uVar5 << 0x1c;
                    uVar14 = (uVar5 & 0x7f) >> 4;
                    if ((int)uVar5 < 0) {
                      uVar14 = uVar14 | ((int)pcVar12[5] & 0x7fU) << 3;
                      uVar5 = 6;
                      if (0x7fffffff < (uint)(int)pcVar12[5]) {
                        uVar14 = uVar14 | ((int)pcVar12[6] & 0x7fU) << 10;
                        uVar5 = 7;
                        if (0x7fffffff < (uint)(int)pcVar12[6]) {
                          uVar14 = uVar14 | ((int)pcVar12[7] & 0x7fU) << 0x11;
                          uVar5 = 8;
                          if (0x7fffffff < (uint)(int)pcVar12[7]) {
                            uVar14 = uVar14 | ((int)pcVar12[8] & 0x7fU) << 0x18;
                            uVar5 = 9;
                            if (pcVar12[8] < 0) {
                              if (pcVar12[9] < 0) {
                                local_48 = CONCAT31(local_48._1_3_,4);
                                local_b8 = local_48;
                                local_d0 = local_44;
                                *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
                                goto LAB_012a07e4;
                              }
                              uVar14 = uVar14 | (int)pcVar12[9] << 0x1f;
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
                uVar14 = ((int)uVar5 >> 0x1f) << 7 | uVar5 >> 0x19;
                uVar11 = uVar11 & 0x7f | uVar5 << 7;
                uVar5 = 2;
              }
            }
            else {
              uVar14 = (int)uVar11 >> 0x1f;
              uVar5 = 1;
            }
            if (uVar7 < uVar5) goto LAB_012a0a2c;
            uVar5 = uVar5 + iVar8;
            *(uint *)(param_3 + 0x38) = uVar5;
          }
          uVar9 = *puVar4;
          uVar6 = uVar9 + uVar5;
          uVar13 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar9,uVar5);
          uVar7 = uVar6 + uVar11;
          uVar5 = uVar13 + uVar14 + (uint)CARRY4(uVar6,uVar11);
          if (CARRY4(uVar13,uVar14) || CARRY4(uVar13 + uVar14,(uint)CARRY4(uVar6,uVar11))) {
LAB_012a081c:
            local_4c = local_98 & 0xffffff00 | 9;
            local_50 = 1;
            local_48 = local_9c;
          }
          else {
            uVar11 = *puVar3;
            uVar14 = *(uint *)(param_3 + 0x34);
            if (uVar14 <= uVar5 && (uint)(uVar7 <= uVar11) <= uVar14 - uVar5) goto LAB_012a081c;
            uVar13 = *(uint *)(param_3 + 0x24);
            *puVar3 = uVar7;
            *(uint *)(param_3 + 0x34) = uVar5;
            uVar6 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar9,uVar13);
            if (uVar5 <= uVar6 && (uint)(uVar9 + uVar13 <= uVar7) <= uVar5 - uVar6) {
              uVar13 = uVar7 - uVar9;
            }
            *(uint *)(param_3 + 0x3c) = uVar13;
            FUN_0129ca9c(&local_50,puVar16,param_3);
            if (local_50 == 4) {
              if (uVar14 <= *(uint *)(param_3 + 0x34) &&
                  (uint)(*puVar3 <= uVar11) <= uVar14 - *(uint *)(param_3 + 0x34)) {
LAB_012a0a14:
                    /* WARNING: Subroutine does not return */
                FUN_00faa464("assertion failed: limit >= self.limit",0x25,&DAT_01890650);
              }
              uVar6 = *(uint *)(param_3 + 0x24);
              uVar7 = *puVar4;
              *puVar3 = uVar11;
              *(uint *)(param_3 + 0x34) = uVar14;
              uVar5 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar7,uVar6);
              if (uVar14 <= uVar5 && (uint)(uVar7 + uVar6 <= uVar11) <= uVar14 - uVar5) {
                uVar6 = uVar11 - uVar7;
              }
              *(uint *)(param_3 + 0x3c) = uVar6;
              *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
              local_9c = uVar14;
              local_98 = uVar11;
              break;
            }
          }
          *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
          uVar7 = local_50;
          local_d0 = local_48;
          local_b8 = local_4c;
          goto LAB_012a0940;
        }
        local_b8 = local_b8 & 0xffffff00 | 7;
      }
      else {
        local_b8 = local_b8 & 0xffff0000 | uVar7 << 8 | 1;
      }
LAB_012a07e4:
      uVar7 = 1;
LAB_012a0940:
      *param_1 = uVar7;
      *puVar1 = local_b8;
      param_1[2] = local_d0;
      return;
    case 3:
      if (uVar7 == 2) {
        uVar7 = *(uint *)(param_3 + 0x40);
        if (uVar7 < *(uint *)(param_3 + 0x44)) {
          puVar16 = (undefined4 *)param_2[10];
          *(undefined1 *)(param_2 + 0xb) = 1;
          *(uint *)(param_3 + 0x40) = uVar7 + 1;
          if (puVar16 == (undefined4 *)0x0) {
            puVar16 = (undefined4 *)thunk_FUN_016d4a50(0x18);
            if (puVar16 == (undefined4 *)0x0) goto LAB_012a0a58;
            *puVar16 = 0;
            puVar16[1] = 0;
            puVar16[4] = 0;
            puVar16[5] = 0;
            param_2[10] = puVar16;
            iVar8 = *(int *)(param_3 + 0x38);
            uVar7 = *(int *)(param_3 + 0x3c) - iVar8;
            if (uVar7 != 0) goto LAB_0129f7d8;
LAB_0129fd4c:
            FUN_0132d5a8(&local_50,param_3);
            if (local_50 != 0) {
              local_b4 = local_48;
              local_cc = local_44;
              *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
              uVar7 = local_4c;
              if (local_4c != 4) goto LAB_012a0904;
              break;
            }
            uVar5 = *(uint *)(param_3 + 0x38);
            uVar11 = local_48;
            uVar14 = local_44;
          }
          else {
            *puVar16 = 0;
            puVar16[1] = 0;
            FUN_0133497c(puVar16[4]);
            iVar8 = *(int *)(param_3 + 0x38);
            uVar7 = *(int *)(param_3 + 0x3c) - iVar8;
            if (uVar7 == 0) goto LAB_0129fd4c;
LAB_0129f7d8:
            pcVar12 = (char *)(*(int *)(param_3 + 0x20) + iVar8);
            uVar11 = (uint)*pcVar12;
            if ((int)uVar11 < 0) {
              if (uVar7 < 2) goto LAB_0129fd4c;
              uVar5 = (uint)pcVar12[1];
              if ((int)uVar5 < 0) {
                if (uVar7 < 10) goto LAB_0129fd4c;
                uVar14 = 0;
                uVar11 = uVar11 & 0x7f | (uVar5 & 0x7f) << 7 | ((int)pcVar12[2] & 0x7fU) << 0xe;
                uVar5 = 3;
                if (0x7fffffff < (uint)(int)pcVar12[2]) {
                  uVar11 = uVar11 | ((int)pcVar12[3] & 0x7fU) << 0x15;
                  uVar5 = 4;
                  if (0x7fffffff < (uint)(int)pcVar12[3]) {
                    uVar5 = (uint)pcVar12[4];
                    uVar11 = uVar11 | uVar5 << 0x1c;
                    uVar14 = (uVar5 & 0x7f) >> 4;
                    if ((int)uVar5 < 0) {
                      uVar14 = uVar14 | ((int)pcVar12[5] & 0x7fU) << 3;
                      uVar5 = 6;
                      if (0x7fffffff < (uint)(int)pcVar12[5]) {
                        uVar14 = uVar14 | ((int)pcVar12[6] & 0x7fU) << 10;
                        uVar5 = 7;
                        if (0x7fffffff < (uint)(int)pcVar12[6]) {
                          uVar14 = uVar14 | ((int)pcVar12[7] & 0x7fU) << 0x11;
                          uVar5 = 8;
                          if (0x7fffffff < (uint)(int)pcVar12[7]) {
                            uVar14 = uVar14 | ((int)pcVar12[8] & 0x7fU) << 0x18;
                            uVar5 = 9;
                            if (pcVar12[8] < 0) {
                              if (pcVar12[9] < 0) {
                                local_48 = CONCAT31(local_48._1_3_,4);
                                local_b4 = local_48;
                                local_cc = local_44;
                                *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
                                goto LAB_012a0814;
                              }
                              uVar14 = uVar14 | (int)pcVar12[9] << 0x1f;
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
                uVar14 = ((int)uVar5 >> 0x1f) << 7 | uVar5 >> 0x19;
                uVar11 = uVar11 & 0x7f | uVar5 << 7;
                uVar5 = 2;
              }
            }
            else {
              uVar14 = (int)uVar11 >> 0x1f;
              uVar5 = 1;
            }
            if (uVar7 < uVar5) goto LAB_012a0a2c;
            uVar5 = uVar5 + iVar8;
            *(uint *)(param_3 + 0x38) = uVar5;
          }
          uVar9 = *puVar4;
          uVar6 = uVar9 + uVar5;
          uVar13 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar9,uVar5);
          uVar7 = uVar6 + uVar11;
          uVar5 = uVar13 + uVar14 + (uint)CARRY4(uVar6,uVar11);
          if (CARRY4(uVar13,uVar14) || CARRY4(uVar13 + uVar14,(uint)CARRY4(uVar6,uVar11))) {
LAB_012a084c:
            local_4c = local_90 & 0xffffff00 | 9;
            local_50 = 1;
            local_48 = local_94;
          }
          else {
            uVar11 = *puVar3;
            uVar14 = *(uint *)(param_3 + 0x34);
            if (uVar14 <= uVar5 && (uint)(uVar7 <= uVar11) <= uVar14 - uVar5) goto LAB_012a084c;
            uVar13 = *(uint *)(param_3 + 0x24);
            *puVar3 = uVar7;
            *(uint *)(param_3 + 0x34) = uVar5;
            uVar6 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar9,uVar13);
            if (uVar5 <= uVar6 && (uint)(uVar9 + uVar13 <= uVar7) <= uVar5 - uVar6) {
              uVar13 = uVar7 - uVar9;
            }
            *(uint *)(param_3 + 0x3c) = uVar13;
            FUN_0129ca9c(&local_50,puVar16,param_3);
            if (local_50 == 4) {
              if (uVar14 <= *(uint *)(param_3 + 0x34) &&
                  (uint)(*puVar3 <= uVar11) <= uVar14 - *(uint *)(param_3 + 0x34))
              goto LAB_012a0a14;
              uVar6 = *(uint *)(param_3 + 0x24);
              uVar7 = *puVar4;
              *puVar3 = uVar11;
              *(uint *)(param_3 + 0x34) = uVar14;
              uVar5 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar7,uVar6);
              if (uVar14 <= uVar5 && (uint)(uVar7 + uVar6 <= uVar11) <= uVar14 - uVar5) {
                uVar6 = uVar11 - uVar7;
              }
              *(uint *)(param_3 + 0x3c) = uVar6;
              *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
              local_94 = uVar14;
              local_90 = uVar11;
              break;
            }
          }
          *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
          uVar7 = local_50;
          local_cc = local_48;
          local_b4 = local_4c;
          goto LAB_012a0904;
        }
        local_b4 = local_b4 & 0xffffff00 | 7;
      }
      else {
        local_b4 = local_b4 & 0xffff0000 | uVar7 << 8 | 1;
      }
LAB_012a0814:
      uVar7 = 1;
LAB_012a0904:
      *param_1 = uVar7;
      *puVar1 = local_b4;
      param_1[2] = local_cc;
      return;
    case 4:
      if (uVar7 == 2) {
        uVar7 = *(uint *)(param_3 + 0x40);
        if (uVar7 < *(uint *)(param_3 + 0x44)) {
          puVar16 = (undefined4 *)param_2[0xc];
          *(undefined1 *)(param_2 + 0xd) = 1;
          *(uint *)(param_3 + 0x40) = uVar7 + 1;
          if (puVar16 == (undefined4 *)0x0) {
            puVar16 = (undefined4 *)thunk_FUN_016d4a50(0x38);
            if (puVar16 == (undefined4 *)0x0) {
LAB_012a0a70:
                    /* WARNING: Subroutine does not return */
              FUN_00600874(8,0x38);
            }
            puVar16[4] = 0;
            puVar16[5] = 0;
            *puVar16 = 0;
            puVar16[1] = 0;
            puVar16[8] = 0;
            puVar16[9] = 8;
            puVar16[10] = 0;
            puVar16[0xb] = 0;
            puVar16[0xc] = 0;
            puVar16[0xd] = 0;
            param_2[0xc] = puVar16;
            iVar8 = *(int *)(param_3 + 0x38);
            uVar7 = *(int *)(param_3 + 0x3c) - iVar8;
            if (uVar7 != 0) goto LAB_0129f858;
LAB_0129fec4:
            FUN_0132d5a8(&local_50,param_3);
            if (local_50 != 0) {
              local_b0 = local_48;
              local_c8 = local_44;
              *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
              uVar7 = local_4c;
              if (local_4c != 4) goto LAB_012a08c8;
              break;
            }
            uVar5 = *(uint *)(param_3 + 0x38);
            uVar11 = local_48;
            uVar14 = local_44;
          }
          else {
            puVar16[4] = 0;
            puVar16[5] = 0;
            *puVar16 = 0;
            puVar16[1] = 0;
            puVar16[0xb] = 0;
            FUN_0133497c(puVar16[0xc]);
            iVar8 = *(int *)(param_3 + 0x38);
            uVar7 = *(int *)(param_3 + 0x3c) - iVar8;
            if (uVar7 == 0) goto LAB_0129fec4;
LAB_0129f858:
            pcVar12 = (char *)(*(int *)(param_3 + 0x20) + iVar8);
            uVar11 = (uint)*pcVar12;
            if ((int)uVar11 < 0) {
              if (uVar7 < 2) goto LAB_0129fec4;
              uVar5 = (uint)pcVar12[1];
              if ((int)uVar5 < 0) {
                if (uVar7 < 10) goto LAB_0129fec4;
                uVar14 = 0;
                uVar11 = uVar11 & 0x7f | (uVar5 & 0x7f) << 7 | ((int)pcVar12[2] & 0x7fU) << 0xe;
                uVar5 = 3;
                if (0x7fffffff < (uint)(int)pcVar12[2]) {
                  uVar11 = uVar11 | ((int)pcVar12[3] & 0x7fU) << 0x15;
                  uVar5 = 4;
                  if (0x7fffffff < (uint)(int)pcVar12[3]) {
                    uVar5 = (uint)pcVar12[4];
                    uVar11 = uVar11 | uVar5 << 0x1c;
                    uVar14 = (uVar5 & 0x7f) >> 4;
                    if ((int)uVar5 < 0) {
                      uVar14 = uVar14 | ((int)pcVar12[5] & 0x7fU) << 3;
                      uVar5 = 6;
                      if (0x7fffffff < (uint)(int)pcVar12[5]) {
                        uVar14 = uVar14 | ((int)pcVar12[6] & 0x7fU) << 10;
                        uVar5 = 7;
                        if (0x7fffffff < (uint)(int)pcVar12[6]) {
                          uVar14 = uVar14 | ((int)pcVar12[7] & 0x7fU) << 0x11;
                          uVar5 = 8;
                          if (0x7fffffff < (uint)(int)pcVar12[7]) {
                            uVar14 = uVar14 | ((int)pcVar12[8] & 0x7fU) << 0x18;
                            uVar5 = 9;
                            if (pcVar12[8] < 0) {
                              if (pcVar12[9] < 0) {
                                local_48 = CONCAT31(local_48._1_3_,4);
                                local_b0 = local_48;
                                local_c8 = local_44;
                                *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
                                goto LAB_012a07cc;
                              }
                              uVar14 = uVar14 | (int)pcVar12[9] << 0x1f;
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
                uVar14 = ((int)uVar5 >> 0x1f) << 7 | uVar5 >> 0x19;
                uVar11 = uVar11 & 0x7f | uVar5 << 7;
                uVar5 = 2;
              }
            }
            else {
              uVar14 = (int)uVar11 >> 0x1f;
              uVar5 = 1;
            }
            if (uVar7 < uVar5) goto LAB_012a0a2c;
            uVar5 = uVar5 + iVar8;
            *(uint *)(param_3 + 0x38) = uVar5;
          }
          uVar9 = *puVar4;
          uVar6 = uVar9 + uVar5;
          uVar13 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar9,uVar5);
          uVar7 = uVar6 + uVar11;
          uVar5 = uVar13 + uVar14 + (uint)CARRY4(uVar6,uVar11);
          if (CARRY4(uVar13,uVar14) || CARRY4(uVar13 + uVar14,(uint)CARRY4(uVar6,uVar11))) {
LAB_012a0834:
            local_4c = local_88 & 0xffffff00 | 9;
            local_50 = 1;
            local_48 = local_8c;
          }
          else {
            uVar11 = *puVar3;
            uVar14 = *(uint *)(param_3 + 0x34);
            if (uVar14 <= uVar5 && (uint)(uVar7 <= uVar11) <= uVar14 - uVar5) goto LAB_012a0834;
            uVar13 = *(uint *)(param_3 + 0x24);
            *puVar3 = uVar7;
            *(uint *)(param_3 + 0x34) = uVar5;
            uVar6 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar9,uVar13);
            if (uVar5 <= uVar6 && (uint)(uVar9 + uVar13 <= uVar7) <= uVar5 - uVar6) {
              uVar13 = uVar7 - uVar9;
            }
            *(uint *)(param_3 + 0x3c) = uVar13;
            FUN_012a2600(&local_50,puVar16,param_3);
            if (local_50 == 4) {
              if (uVar14 <= *(uint *)(param_3 + 0x34) &&
                  (uint)(*puVar3 <= uVar11) <= uVar14 - *(uint *)(param_3 + 0x34))
              goto LAB_012a0a14;
              uVar6 = *(uint *)(param_3 + 0x24);
              uVar7 = *puVar4;
              *puVar3 = uVar11;
              *(uint *)(param_3 + 0x34) = uVar14;
              uVar5 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar7,uVar6);
              if (uVar14 <= uVar5 && (uint)(uVar7 + uVar6 <= uVar11) <= uVar14 - uVar5) {
                uVar6 = uVar11 - uVar7;
              }
              *(uint *)(param_3 + 0x3c) = uVar6;
              *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
              local_8c = uVar14;
              local_88 = uVar11;
              break;
            }
          }
          *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
          uVar7 = local_50;
          local_c8 = local_48;
          local_b0 = local_4c;
          goto LAB_012a08c8;
        }
        local_b0 = local_b0 & 0xffffff00 | 7;
      }
      else {
        local_b0 = local_b0 & 0xffff0000 | uVar7 << 8 | 1;
      }
LAB_012a07cc:
      uVar7 = 1;
LAB_012a08c8:
      *param_1 = uVar7;
      *puVar1 = local_b0;
      param_1[2] = local_c8;
      return;
    case 5:
      if (uVar7 == 2) {
        uVar7 = *(uint *)(param_3 + 0x40);
        if (uVar7 < *(uint *)(param_3 + 0x44)) {
          puVar16 = (undefined4 *)param_2[0xe];
          *(undefined1 *)(param_2 + 0xf) = 1;
          *(uint *)(param_3 + 0x40) = uVar7 + 1;
          if (puVar16 == (undefined4 *)0x0) {
            puVar16 = (undefined4 *)thunk_FUN_016d4a50(0x18);
            if (puVar16 == (undefined4 *)0x0) goto LAB_012a0a58;
            *puVar16 = 0;
            puVar16[1] = 0;
            puVar16[4] = 0;
            puVar16[5] = 0;
            param_2[0xe] = puVar16;
            iVar8 = *(int *)(param_3 + 0x38);
            uVar7 = *(int *)(param_3 + 0x3c) - iVar8;
            if (uVar7 != 0) goto LAB_0129f774;
LAB_0129fbd4:
            FUN_0132d5a8(&local_50,param_3);
            if (local_50 != 0) {
              local_ac = local_48;
              local_c4 = local_44;
              *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
              uVar7 = local_4c;
              if (local_4c != 4) goto LAB_012a097c;
              break;
            }
            uVar5 = *(uint *)(param_3 + 0x38);
            uVar11 = local_48;
            uVar14 = local_44;
          }
          else {
            *puVar16 = 0;
            puVar16[1] = 0;
            FUN_0133497c(puVar16[4]);
            iVar8 = *(int *)(param_3 + 0x38);
            uVar7 = *(int *)(param_3 + 0x3c) - iVar8;
            if (uVar7 == 0) goto LAB_0129fbd4;
LAB_0129f774:
            pcVar12 = (char *)(*(int *)(param_3 + 0x20) + iVar8);
            uVar11 = (uint)*pcVar12;
            if ((int)uVar11 < 0) {
              if (uVar7 < 2) goto LAB_0129fbd4;
              uVar5 = (uint)pcVar12[1];
              if ((int)uVar5 < 0) {
                if (uVar7 < 10) goto LAB_0129fbd4;
                uVar14 = 0;
                uVar11 = uVar11 & 0x7f | (uVar5 & 0x7f) << 7 | ((int)pcVar12[2] & 0x7fU) << 0xe;
                uVar5 = 3;
                if (0x7fffffff < (uint)(int)pcVar12[2]) {
                  uVar11 = uVar11 | ((int)pcVar12[3] & 0x7fU) << 0x15;
                  uVar5 = 4;
                  if (0x7fffffff < (uint)(int)pcVar12[3]) {
                    uVar5 = (uint)pcVar12[4];
                    uVar11 = uVar11 | uVar5 << 0x1c;
                    uVar14 = (uVar5 & 0x7f) >> 4;
                    if ((int)uVar5 < 0) {
                      uVar14 = uVar14 | ((int)pcVar12[5] & 0x7fU) << 3;
                      uVar5 = 6;
                      if (0x7fffffff < (uint)(int)pcVar12[5]) {
                        uVar14 = uVar14 | ((int)pcVar12[6] & 0x7fU) << 10;
                        uVar5 = 7;
                        if (0x7fffffff < (uint)(int)pcVar12[6]) {
                          uVar14 = uVar14 | ((int)pcVar12[7] & 0x7fU) << 0x11;
                          uVar5 = 8;
                          if (0x7fffffff < (uint)(int)pcVar12[7]) {
                            uVar14 = uVar14 | ((int)pcVar12[8] & 0x7fU) << 0x18;
                            uVar5 = 9;
                            if (pcVar12[8] < 0) {
                              if (pcVar12[9] < 0) {
                                local_48 = CONCAT31(local_48._1_3_,4);
                                local_ac = local_48;
                                local_c4 = local_44;
                                *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
                                goto LAB_012a0778;
                              }
                              uVar14 = uVar14 | (int)pcVar12[9] << 0x1f;
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
                uVar14 = ((int)uVar5 >> 0x1f) << 7 | uVar5 >> 0x19;
                uVar11 = uVar11 & 0x7f | uVar5 << 7;
                uVar5 = 2;
              }
            }
            else {
              uVar14 = (int)uVar11 >> 0x1f;
              uVar5 = 1;
            }
            if (uVar7 < uVar5) goto LAB_012a0a2c;
            uVar5 = uVar5 + iVar8;
            *(uint *)(param_3 + 0x38) = uVar5;
          }
          uVar9 = *puVar4;
          uVar6 = uVar9 + uVar5;
          uVar13 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar9,uVar5);
          uVar7 = uVar6 + uVar11;
          uVar5 = uVar13 + uVar14 + (uint)CARRY4(uVar6,uVar11);
          if (CARRY4(uVar13,uVar14) || CARRY4(uVar13 + uVar14,(uint)CARRY4(uVar6,uVar11))) {
LAB_012a0864:
            local_4c = local_80 & 0xffffff00 | 9;
            local_50 = 1;
            local_48 = local_84;
          }
          else {
            uVar11 = *puVar3;
            uVar14 = *(uint *)(param_3 + 0x34);
            if (uVar14 <= uVar5 && (uint)(uVar7 <= uVar11) <= uVar14 - uVar5) goto LAB_012a0864;
            uVar13 = *(uint *)(param_3 + 0x24);
            *puVar3 = uVar7;
            *(uint *)(param_3 + 0x34) = uVar5;
            uVar6 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar9,uVar13);
            if (uVar5 <= uVar6 && (uint)(uVar9 + uVar13 <= uVar7) <= uVar5 - uVar6) {
              uVar13 = uVar7 - uVar9;
            }
            *(uint *)(param_3 + 0x3c) = uVar13;
            FUN_0129ca9c(&local_50,puVar16,param_3);
            if (local_50 == 4) {
              if (uVar14 <= *(uint *)(param_3 + 0x34) &&
                  (uint)(*puVar3 <= uVar11) <= uVar14 - *(uint *)(param_3 + 0x34))
              goto LAB_012a0a14;
              uVar6 = *(uint *)(param_3 + 0x24);
              uVar7 = *puVar4;
              *puVar3 = uVar11;
              *(uint *)(param_3 + 0x34) = uVar14;
              uVar5 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar7,uVar6);
              if (uVar14 <= uVar5 && (uint)(uVar7 + uVar6 <= uVar11) <= uVar14 - uVar5) {
                uVar6 = uVar11 - uVar7;
              }
              *(uint *)(param_3 + 0x3c) = uVar6;
              *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
              local_84 = uVar14;
              local_80 = uVar11;
              break;
            }
          }
          *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
          uVar7 = local_50;
          local_c4 = local_48;
          local_ac = local_4c;
          goto LAB_012a097c;
        }
        local_ac = local_ac & 0xffffff00 | 7;
      }
      else {
        local_ac = local_ac & 0xffff0000 | uVar7 << 8 | 1;
      }
LAB_012a0778:
      uVar7 = 1;
LAB_012a097c:
      *param_1 = uVar7;
      *puVar1 = local_ac;
      param_1[2] = local_c4;
      return;
    case 6:
      if (uVar7 != 0) {
        *(undefined1 *)((int)param_1 + 5) = (undefined1)local_48;
        *(undefined1 *)(param_1 + 1) = 1;
        *param_1 = 1;
        return;
      }
      FUN_0132e53c(&local_50,param_3);
      if (local_50 != 0) {
        *puVar1 = local_48;
        param_1[2] = local_44;
        *param_1 = local_4c;
        return;
      }
      param_2[2] = local_48;
      param_2[3] = local_44;
      *param_2 = 1;
      param_2[1] = 0;
      break;
    case 7:
      if (uVar7 == 2) {
        uVar7 = *(uint *)(param_3 + 0x40);
        if (uVar7 < *(uint *)(param_3 + 0x44)) {
          puVar16 = (undefined4 *)param_2[0x10];
          *(undefined1 *)(param_2 + 0x11) = 1;
          *(uint *)(param_3 + 0x40) = uVar7 + 1;
          if (puVar16 == (undefined4 *)0x0) {
            puVar16 = (undefined4 *)thunk_FUN_016d4a50(0x38);
            if (puVar16 == (undefined4 *)0x0) goto LAB_012a0a70;
            puVar16[4] = 0;
            puVar16[5] = 0;
            *puVar16 = 0;
            puVar16[1] = 0;
            puVar16[8] = 0;
            puVar16[9] = 8;
            puVar16[10] = 0;
            puVar16[0xb] = 0;
            puVar16[0xc] = 0;
            puVar16[0xd] = 0;
            param_2[0x10] = puVar16;
            iVar8 = *(int *)(param_3 + 0x38);
            uVar7 = *(int *)(param_3 + 0x3c) - iVar8;
            if (uVar7 != 0) goto LAB_0129f93c;
LAB_012a01b4:
            FUN_0132d5a8(&local_50,param_3);
            if (local_50 != 0) {
              local_a8 = local_48;
              local_c0 = local_44;
              *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
              uVar7 = local_4c;
              if (local_4c != 4) goto LAB_012a09b8;
              break;
            }
            uVar5 = *(uint *)(param_3 + 0x38);
            uVar11 = local_48;
            uVar14 = local_44;
          }
          else {
            puVar16[4] = 0;
            puVar16[5] = 0;
            *puVar16 = 0;
            puVar16[1] = 0;
            puVar16[0xb] = 0;
            FUN_0133497c(puVar16[0xc]);
            iVar8 = *(int *)(param_3 + 0x38);
            uVar7 = *(int *)(param_3 + 0x3c) - iVar8;
            if (uVar7 == 0) goto LAB_012a01b4;
LAB_0129f93c:
            pcVar12 = (char *)(*(int *)(param_3 + 0x20) + iVar8);
            uVar11 = (uint)*pcVar12;
            if ((int)uVar11 < 0) {
              if (uVar7 < 2) goto LAB_012a01b4;
              uVar5 = (uint)pcVar12[1];
              if ((int)uVar5 < 0) {
                if (uVar7 < 10) goto LAB_012a01b4;
                uVar14 = 0;
                uVar11 = uVar11 & 0x7f | (uVar5 & 0x7f) << 7 | ((int)pcVar12[2] & 0x7fU) << 0xe;
                uVar5 = 3;
                if (0x7fffffff < (uint)(int)pcVar12[2]) {
                  uVar11 = uVar11 | ((int)pcVar12[3] & 0x7fU) << 0x15;
                  uVar5 = 4;
                  if (0x7fffffff < (uint)(int)pcVar12[3]) {
                    uVar5 = (uint)pcVar12[4];
                    uVar11 = uVar11 | uVar5 << 0x1c;
                    uVar14 = (uVar5 & 0x7f) >> 4;
                    if ((int)uVar5 < 0) {
                      uVar14 = uVar14 | ((int)pcVar12[5] & 0x7fU) << 3;
                      uVar5 = 6;
                      if (0x7fffffff < (uint)(int)pcVar12[5]) {
                        uVar14 = uVar14 | ((int)pcVar12[6] & 0x7fU) << 10;
                        uVar5 = 7;
                        if (0x7fffffff < (uint)(int)pcVar12[6]) {
                          uVar14 = uVar14 | ((int)pcVar12[7] & 0x7fU) << 0x11;
                          uVar5 = 8;
                          if (0x7fffffff < (uint)(int)pcVar12[7]) {
                            uVar14 = uVar14 | ((int)pcVar12[8] & 0x7fU) << 0x18;
                            uVar5 = 9;
                            if (pcVar12[8] < 0) {
                              if (pcVar12[9] < 0) {
                                local_48 = CONCAT31(local_48._1_3_,4);
                                local_a8 = local_48;
                                local_c0 = local_44;
                                *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
                                goto LAB_012a07fc;
                              }
                              uVar14 = uVar14 | (int)pcVar12[9] << 0x1f;
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
                uVar14 = ((int)uVar5 >> 0x1f) << 7 | uVar5 >> 0x19;
                uVar11 = uVar11 & 0x7f | uVar5 << 7;
                uVar5 = 2;
              }
            }
            else {
              uVar14 = (int)uVar11 >> 0x1f;
              uVar5 = 1;
            }
            if (uVar7 < uVar5) goto LAB_012a0a2c;
            uVar5 = uVar5 + iVar8;
            *(uint *)(param_3 + 0x38) = uVar5;
          }
          uVar9 = *puVar4;
          uVar6 = uVar9 + uVar5;
          uVar13 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar9,uVar5);
          uVar7 = uVar6 + uVar11;
          uVar5 = uVar13 + uVar14 + (uint)CARRY4(uVar6,uVar11);
          if (CARRY4(uVar13,uVar14) || CARRY4(uVar13 + uVar14,(uint)CARRY4(uVar6,uVar11))) {
LAB_012a087c:
            local_4c = local_78 & 0xffffff00 | 9;
            local_50 = 1;
            local_48 = local_7c;
          }
          else {
            uVar11 = *puVar3;
            uVar14 = *(uint *)(param_3 + 0x34);
            if (uVar14 <= uVar5 && (uint)(uVar7 <= uVar11) <= uVar14 - uVar5) goto LAB_012a087c;
            uVar13 = *(uint *)(param_3 + 0x24);
            *puVar3 = uVar7;
            *(uint *)(param_3 + 0x34) = uVar5;
            uVar6 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar9,uVar13);
            if (uVar5 <= uVar6 && (uint)(uVar9 + uVar13 <= uVar7) <= uVar5 - uVar6) {
              uVar13 = uVar7 - uVar9;
            }
            *(uint *)(param_3 + 0x3c) = uVar13;
            FUN_012a5950(&local_50,puVar16,param_3);
            if (local_50 == 4) {
              if (uVar14 <= *(uint *)(param_3 + 0x34) &&
                  (uint)(*puVar3 <= uVar11) <= uVar14 - *(uint *)(param_3 + 0x34))
              goto LAB_012a0a14;
              uVar6 = *(uint *)(param_3 + 0x24);
              uVar7 = *puVar4;
              *puVar3 = uVar11;
              *(uint *)(param_3 + 0x34) = uVar14;
              uVar5 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar7,uVar6);
              if (uVar14 <= uVar5 && (uint)(uVar7 + uVar6 <= uVar11) <= uVar14 - uVar5) {
                uVar6 = uVar11 - uVar7;
              }
              *(uint *)(param_3 + 0x3c) = uVar6;
              *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
              local_7c = uVar14;
              local_78 = uVar11;
              break;
            }
          }
          *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
          uVar7 = local_50;
          local_c0 = local_48;
          local_a8 = local_4c;
          goto LAB_012a09b8;
        }
        local_a8 = local_a8 & 0xffffff00 | 7;
      }
      else {
        local_a8 = local_a8 & 0xffff0000 | uVar7 << 8 | 1;
      }
LAB_012a07fc:
      uVar7 = 1;
LAB_012a09b8:
      *param_1 = uVar7;
      *puVar1 = local_a8;
      param_1[2] = local_c0;
      return;
    default:
      FUN_01337f28(&local_50,local_4c,uVar7,param_3,param_2 + 0x12);
      if (local_50 != 4) {
        *param_1 = local_50;
        param_1[1] = local_4c;
        param_1[2] = local_48;
        return;
      }
    }
  } while( true );
}

