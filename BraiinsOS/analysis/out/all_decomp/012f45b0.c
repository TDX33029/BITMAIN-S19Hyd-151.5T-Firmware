// FUN_012f45b0 @ 012f45b0 size=3972 calls_out=21 calls_in=3
// strings: assertion failed: limit >= self.limit | assertion failed: amt <= self.limit_within_buf - self.pos_within_buf

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012f45b0(uint *param_1,int param_2,int param_3)

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
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined4 *puVar16;
  bool bVar17;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint local_4c;
  uint local_48;
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
LAB_012f4684:
  if (*(int *)(param_3 + 0x38) == *(int *)(param_3 + 0x3c)) {
    FUN_0132e9b8(&local_58,param_3);
    if (local_58 != 4) {
      param_1[2] = local_50;
      *param_1 = local_58;
      *(char *)(param_1 + 1) = (char)local_54;
      *(char *)((int)param_1 + 7) = (char)(local_54 >> 0x18);
      *(short *)((int)param_1 + 5) = (short)(local_54 >> 8);
      return;
    }
    if (*(int *)(param_3 + 0x3c) == *(int *)(param_3 + 0x38)) {
      *param_1 = 4;
      return;
    }
  }
  FUN_0129a648(&local_58,param_3);
  uVar7 = local_50 & 0xff;
  if (local_58 != 4) {
    *(undefined1 *)((int)param_1 + 0xb) = local_50._3_1_;
    *(undefined2 *)((int)param_1 + 9) = local_50._1_2_;
    *(undefined1 *)(param_1 + 2) = (undefined1)local_50;
    *param_1 = local_58;
    param_1[1] = local_54;
    return;
  }
  switch(local_54) {
  case 1:
    if (uVar7 != 2) {
LAB_012f528c:
      local_54 = CONCAT31(CONCAT21(local_54._2_2_,(undefined1)local_50),1);
      local_58 = 1;
      goto LAB_012f529c;
    }
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined1 *)(param_2 + 0xc) = 1;
    iVar8 = param_2;
    goto LAB_012f4674;
  case 2:
    if (uVar7 != 2) goto LAB_012f528c;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined1 *)(param_2 + 0x1c) = 1;
    iVar8 = param_2 + 0x10;
    goto LAB_012f4674;
  case 3:
    FUN_013388b0(&local_58,uVar7,param_3,param_2 + 0x20);
    break;
  case 4:
    FUN_0133934c(&local_58,uVar7,param_3,param_2 + 0x48);
    break;
  case 5:
    FUN_013389d0(&local_58,uVar7,param_3,param_2 + 0x58);
    break;
  case 6:
    if (uVar7 == 2) {
      if (*(uint *)(param_3 + 0x40) < *(uint *)(param_3 + 0x44)) {
        uVar12 = *(uint *)(param_2 + 0x70);
        uVar7 = *(uint *)(param_2 + 0x74);
        *(uint *)(param_3 + 0x40) = *(uint *)(param_3 + 0x40) + 1;
        if (uVar7 == uVar12) {
          local_2c = 0;
          local_30 = 0;
          local_40 = 0;
          local_3c = 0;
          local_38 = 0;
          local_34 = local_34 & 0xffffff00;
          local_44 = 4;
          local_48 = 0;
          local_4c = local_4c & 0xffffff00;
          local_50 = 0;
          local_54 = 1;
          local_58 = 0;
          uVar5 = uVar7;
          if (uVar7 == *(uint *)(param_2 + 0x68)) {
            FUN_0132f86c((uint *)(param_2 + 0x68));
            uVar5 = *(uint *)(param_2 + 0x74);
          }
          iVar15 = *(int *)(param_2 + 0x6c);
          puVar2 = (uint *)(iVar15 + uVar7 * 0x30);
          *puVar2 = local_58;
          puVar2[1] = local_54;
          puVar2[2] = local_50;
          puVar2[3] = local_4c;
          puVar2[4] = local_48;
          puVar2[5] = local_44;
          puVar2[6] = local_40;
          puVar2[7] = local_3c;
          puVar2[8] = local_38;
          puVar2[9] = local_34;
          puVar2[10] = local_30;
          puVar2[0xb] = local_2c;
          uVar12 = uVar7 + 1;
          *(uint *)(param_2 + 0x70) = uVar12;
          uVar7 = uVar5;
        }
        else {
          if (uVar12 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar7,uVar12,&DAT_01890558);
          }
          iVar15 = *(int *)(param_2 + 0x6c);
          iVar8 = iVar15 + uVar7 * 0x30;
          *(undefined1 *)(iVar8 + 0x24) = 0;
          *(undefined4 *)(iVar8 + 0x1c) = 0;
          *(undefined1 *)(iVar8 + 0xc) = 0;
          FUN_0133497c(*(undefined4 *)(iVar8 + 0x28));
        }
        uVar5 = uVar7 + 1;
        *(uint *)(param_2 + 0x74) = uVar5;
        if (uVar12 < uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar5,uVar12,&DAT_01890578);
        }
        if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_01890568);
        }
        iVar8 = *(int *)(param_3 + 0x38);
        uVar12 = *(int *)(param_3 + 0x3c) - iVar8;
        if (*(int *)(param_3 + 0x3c) == iVar8) {
LAB_012f49e8:
          FUN_0132d5a8(&local_58,param_3);
          if (local_58 != 0) {
            local_b4 = local_50;
            local_c0 = local_4c;
            *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
            if (local_54 != 4) goto LAB_012f53d4;
            goto LAB_012f4684;
          }
          uVar14 = *(uint *)(param_3 + 0x38);
          uVar5 = local_50;
          uVar6 = local_4c;
        }
        else {
          pcVar10 = (char *)(*(int *)(param_3 + 0x20) + iVar8);
          uVar5 = (uint)*pcVar10;
          if ((int)uVar5 < 0) {
            if (uVar12 < 2) goto LAB_012f49e8;
            uVar14 = (uint)pcVar10[1];
            if ((int)uVar14 < 0) {
              if (uVar12 < 10) goto LAB_012f49e8;
              uVar6 = 0;
              uVar5 = uVar5 & 0x7f | (uVar14 & 0x7f) << 7 | ((int)pcVar10[2] & 0x7fU) << 0xe;
              uVar14 = 3;
              if (0x7fffffff < (uint)(int)pcVar10[2]) {
                uVar5 = uVar5 | ((int)pcVar10[3] & 0x7fU) << 0x15;
                uVar14 = 4;
                if (pcVar10[3] < 0) {
                  uVar14 = (uint)pcVar10[4];
                  uVar5 = uVar5 | uVar14 << 0x1c;
                  uVar6 = (uVar14 & 0x7f) >> 4;
                  if ((int)uVar14 < 0) {
                    uVar6 = uVar6 | ((int)pcVar10[5] & 0x7fU) << 3;
                    uVar14 = 6;
                    if (0x7fffffff < (uint)(int)pcVar10[5]) {
                      uVar6 = uVar6 | ((int)pcVar10[6] & 0x7fU) << 10;
                      uVar14 = 7;
                      if (0x7fffffff < (uint)(int)pcVar10[6]) {
                        uVar6 = uVar6 | ((int)pcVar10[7] & 0x7fU) << 0x11;
                        uVar14 = 8;
                        if (0x7fffffff < (uint)(int)pcVar10[7]) {
                          uVar6 = uVar6 | ((int)pcVar10[8] & 0x7fU) << 0x18;
                          uVar14 = 9;
                          if (0x7fffffff < (uint)(int)pcVar10[8]) {
                            if (pcVar10[9] < 0) {
                              local_50 = CONCAT31(local_50._1_3_,4);
                              local_b4 = local_50;
                              local_c0 = local_4c;
                              *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
                              goto LAB_012f53d0;
                            }
                            uVar6 = uVar6 | (int)pcVar10[9] << 0x1f;
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
          if (uVar12 < uVar14) goto LAB_012f5490;
          uVar14 = uVar14 + iVar8;
          *(uint *)(param_3 + 0x38) = uVar14;
        }
        uVar9 = *puVar4;
        uVar12 = uVar9 + uVar14;
        uVar13 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar9,uVar14);
        uVar14 = uVar12 + uVar5;
        uVar11 = uVar13 + uVar6 + (uint)CARRY4(uVar12,uVar5);
        if (!CARRY4(uVar13,uVar6) && !CARRY4(uVar13 + uVar6,(uint)CARRY4(uVar12,uVar5))) {
          uVar12 = *puVar3;
          uVar5 = *(uint *)(param_3 + 0x34);
          if (uVar11 < uVar5 || uVar5 - uVar11 < (uint)(uVar14 <= uVar12)) {
            *puVar3 = uVar14;
            *(uint *)(param_3 + 0x34) = uVar11;
            uVar6 = *(uint *)(param_3 + 0x24);
            uVar13 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar9,uVar6);
            bVar17 = uVar9 + uVar6 <= uVar14;
            if (uVar11 <= uVar13 && (uint)bVar17 <= uVar11 - uVar13) {
              uVar6 = uVar14 - uVar9;
            }
            *(uint *)(param_3 + 0x3c) = uVar6;
            FUN_0131ca50(&local_58,iVar15 + uVar7 * 0x30,param_3,uVar11 - (uVar13 + !bVar17));
            if (local_58 != 4) {
              local_b4 = local_54;
              local_c0 = local_50;
              *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
              local_54 = local_58;
              goto LAB_012f53d4;
            }
            if (uVar5 <= *(uint *)(param_3 + 0x34) &&
                (uint)(*puVar3 <= uVar12) <= uVar5 - *(uint *)(param_3 + 0x34)) goto LAB_012f5478;
            uVar6 = *(uint *)(param_3 + 0x24);
            iVar8 = *(int *)(param_3 + 0x40);
            uVar7 = *puVar4;
            *puVar3 = uVar12;
            *(uint *)(param_3 + 0x34) = uVar5;
            uVar14 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar7,uVar6);
            bVar17 = uVar14 < uVar5 || uVar5 - uVar14 < (uint)(uVar7 + uVar6 <= uVar12);
LAB_012f501c:
            iVar8 = iVar8 + -1;
            if (!bVar17) {
              uVar6 = uVar12 - uVar7;
            }
LAB_012f5020:
            *(uint *)(param_3 + 0x3c) = uVar6;
            *(int *)(param_3 + 0x40) = iVar8;
            goto LAB_012f4684;
          }
        }
        *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
        local_c0 = 0;
        local_b4 = 9;
      }
      else {
        local_b4 = local_b4 & 0xffffff00 | 7;
      }
    }
    else {
      local_b4 = local_b4 & 0xffff0000 | uVar7 << 8 | 1;
    }
LAB_012f53d0:
    local_54 = 1;
LAB_012f53d4:
    *param_1 = local_54;
    *puVar1 = local_b4;
    param_1[2] = local_c0;
    return;
  case 7:
    FUN_01339858(&local_58,uVar7,param_3,param_2 + 0x78);
    break;
  case 8:
    if (uVar7 == 2) {
      uVar7 = *(uint *)(param_3 + 0x40);
      if (uVar7 < *(uint *)(param_3 + 0x44)) {
        puVar16 = *(undefined4 **)(param_2 + 0x98);
        *(undefined1 *)(param_2 + 0x9c) = 1;
        *(uint *)(param_3 + 0x40) = uVar7 + 1;
        if (puVar16 == (undefined4 *)0x0) {
          puVar16 = (undefined4 *)thunk_FUN_016d4a50(0xc4);
          if (puVar16 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0xc4);
          }
          puVar16[0x29] = 8;
          puVar16[0x28] = 0;
          puVar16[0x2e] = 0x2020202;
          puVar16[0x2f] = 0x2020202;
          *(undefined1 *)(puVar16 + 0x27) = 0;
          puVar16[0x24] = 0;
          puVar16[0x25] = 1;
          puVar16[0x26] = 0;
          *(undefined1 *)(puVar16 + 0x23) = 0;
          puVar16[0x20] = 0;
          puVar16[0x21] = 1;
          puVar16[0x22] = 0;
          *(undefined1 *)(puVar16 + 0x1f) = 0;
          puVar16[0x1c] = 0;
          puVar16[0x1d] = 1;
          puVar16[0x1e] = 0;
          *(undefined1 *)(puVar16 + 0x1b) = 0;
          puVar16[0x18] = 0;
          puVar16[0x19] = 1;
          puVar16[0x1a] = 0;
          *(undefined1 *)(puVar16 + 0x17) = 0;
          puVar16[0x14] = 0;
          puVar16[0x15] = 1;
          puVar16[0x16] = 0;
          *(undefined1 *)(puVar16 + 0x13) = 0;
          puVar16[0x10] = 0;
          puVar16[0x11] = 1;
          puVar16[0x12] = 0;
          *(undefined1 *)(puVar16 + 0xf) = 0;
          puVar16[0xc] = 0;
          puVar16[0xd] = 1;
          puVar16[0xe] = 0;
          *(undefined1 *)(puVar16 + 0xb) = 0;
          puVar16[8] = 0;
          puVar16[9] = 1;
          puVar16[10] = 0;
          *(undefined1 *)(puVar16 + 7) = 0;
          puVar16[4] = 0;
          puVar16[5] = 1;
          puVar16[6] = 0;
          *(undefined1 *)(puVar16 + 3) = 0;
          *puVar16 = 0;
          puVar16[1] = 1;
          puVar16[2] = 0;
          puVar16[0x2d] = 0;
          puVar16[0x2c] = 0;
          puVar16[0x2b] = 0;
          puVar16[0x2a] = 0;
          *(undefined2 *)(puVar16 + 0x30) = 2;
          *(undefined4 **)(param_2 + 0x98) = puVar16;
          iVar8 = *(int *)(param_3 + 0x38);
          uVar7 = *(int *)(param_3 + 0x3c) - iVar8;
          if (uVar7 != 0) goto LAB_012f4b54;
LAB_012f4dac:
          FUN_0132d5a8(&local_58,param_3);
          if (local_58 != 0) {
            local_b0 = local_50;
            local_bc = local_4c;
            *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
            if (local_54 != 4) goto LAB_012f5390;
            goto LAB_012f4684;
          }
          uVar5 = *(uint *)(param_3 + 0x38);
          uVar12 = local_50;
          uVar14 = local_4c;
        }
        else {
          *(undefined1 *)((int)puVar16 + 0xba) = 2;
          *(undefined1 *)((int)puVar16 + 0xc1) = 0;
          *(undefined2 *)(puVar16 + 0x2e) = 0x202;
          *(undefined1 *)(puVar16 + 7) = 0;
          *(undefined1 *)(puVar16 + 3) = 0;
          *(undefined4 *)((int)puVar16 + 0xbb) = 0x2020202;
          *(undefined1 *)(puVar16 + 0xb) = 0;
          *(undefined2 *)((int)puVar16 + 0xbf) = 0x202;
          puVar16[0x2b] = 0;
          *(undefined1 *)(puVar16 + 0x27) = 0;
          *(undefined1 *)(puVar16 + 0x23) = 0;
          *(undefined1 *)(puVar16 + 0x1f) = 0;
          *(undefined1 *)(puVar16 + 0x1b) = 0;
          *(undefined1 *)(puVar16 + 0x17) = 0;
          *(undefined1 *)(puVar16 + 0x13) = 0;
          *(undefined1 *)(puVar16 + 0xf) = 0;
          FUN_0133497c(puVar16[0x2c]);
          iVar8 = *(int *)(param_3 + 0x38);
          uVar7 = *(int *)(param_3 + 0x3c) - iVar8;
          if (uVar7 == 0) goto LAB_012f4dac;
LAB_012f4b54:
          pcVar10 = (char *)(*(int *)(param_3 + 0x20) + iVar8);
          uVar12 = (uint)*pcVar10;
          if ((int)uVar12 < 0) {
            if (uVar7 < 2) goto LAB_012f4dac;
            uVar5 = (uint)pcVar10[1];
            if ((int)uVar5 < 0) {
              if (uVar7 < 10) goto LAB_012f4dac;
              uVar14 = 0;
              uVar12 = uVar12 & 0x7f | (uVar5 & 0x7f) << 7 | ((int)pcVar10[2] & 0x7fU) << 0xe;
              uVar5 = 3;
              if (0x7fffffff < (uint)(int)pcVar10[2]) {
                uVar12 = uVar12 | ((int)pcVar10[3] & 0x7fU) << 0x15;
                uVar5 = 4;
                if (0x7fffffff < (uint)(int)pcVar10[3]) {
                  uVar5 = (uint)pcVar10[4];
                  uVar12 = uVar12 | uVar5 << 0x1c;
                  uVar14 = (uVar5 & 0x7f) >> 4;
                  if ((int)uVar5 < 0) {
                    uVar14 = uVar14 | ((int)pcVar10[5] & 0x7fU) << 3;
                    uVar5 = 6;
                    if (0x7fffffff < (uint)(int)pcVar10[5]) {
                      uVar14 = uVar14 | ((int)pcVar10[6] & 0x7fU) << 10;
                      uVar5 = 7;
                      if (0x7fffffff < (uint)(int)pcVar10[6]) {
                        uVar14 = uVar14 | ((int)pcVar10[7] & 0x7fU) << 0x11;
                        uVar5 = 8;
                        if (0x7fffffff < (uint)(int)pcVar10[7]) {
                          uVar14 = uVar14 | ((int)pcVar10[8] & 0x7fU) << 0x18;
                          uVar5 = 9;
                          if (0x7fffffff < (uint)(int)pcVar10[8]) {
                            if (pcVar10[9] < 0) {
                              local_50 = CONCAT31(local_50._1_3_,4);
                              local_b0 = local_50;
                              local_bc = local_4c;
                              *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
                              goto LAB_012f538c;
                            }
                            uVar14 = uVar14 | (int)pcVar10[9] << 0x1f;
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
              uVar12 = uVar12 & 0x7f | uVar5 << 7;
              uVar5 = 2;
            }
          }
          else {
            uVar14 = (int)uVar12 >> 0x1f;
            uVar5 = 1;
          }
          if (uVar7 < uVar5) {
LAB_012f5490:
                    /* WARNING: Subroutine does not return */
            FUN_00faa464("assertion failed: amt <= self.limit_within_buf - self.pos_within_buf",0x44
                         ,&DAT_01890e80);
          }
          uVar5 = uVar5 + iVar8;
          *(uint *)(param_3 + 0x38) = uVar5;
        }
        uVar9 = *puVar4;
        uVar6 = uVar9 + uVar5;
        uVar13 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar9,uVar5);
        uVar7 = uVar6 + uVar12;
        uVar5 = uVar13 + uVar14 + (uint)CARRY4(uVar6,uVar12);
        if (!CARRY4(uVar13,uVar14) && !CARRY4(uVar13 + uVar14,(uint)CARRY4(uVar6,uVar12))) {
          uVar12 = *puVar3;
          uVar14 = *(uint *)(param_3 + 0x34);
          if (uVar5 < uVar14 || uVar14 - uVar5 < (uint)(uVar7 <= uVar12)) {
            uVar13 = *(uint *)(param_3 + 0x24);
            *puVar3 = uVar7;
            *(uint *)(param_3 + 0x34) = uVar5;
            uVar6 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar9,uVar13);
            if (uVar5 <= uVar6 && (uint)(uVar9 + uVar13 <= uVar7) <= uVar5 - uVar6) {
              uVar13 = uVar7 - uVar9;
            }
            *(uint *)(param_3 + 0x3c) = uVar13;
            FUN_012fb8ac(&local_58,puVar16,param_3);
            if (local_58 != 4) {
              local_b0 = local_54;
              local_bc = local_50;
              *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
              local_54 = local_58;
              goto LAB_012f5390;
            }
            if (uVar14 <= *(uint *)(param_3 + 0x34) &&
                (uint)(*puVar3 <= uVar12) <= uVar14 - *(uint *)(param_3 + 0x34)) {
LAB_012f5478:
                    /* WARNING: Subroutine does not return */
              FUN_00faa464("assertion failed: limit >= self.limit",0x25,&DAT_01890650);
            }
            uVar6 = *(uint *)(param_3 + 0x24);
            uVar7 = *puVar4;
            *puVar3 = uVar12;
            *(uint *)(param_3 + 0x34) = uVar14;
            iVar8 = *(int *)(param_3 + 0x40) + -1;
            uVar5 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar7,uVar6);
            if (uVar14 <= uVar5 && (uint)(uVar7 + uVar6 <= uVar12) <= uVar14 - uVar5) {
              uVar6 = uVar12 - uVar7;
            }
            goto LAB_012f5020;
          }
        }
        *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
        local_bc = 0;
        local_b0 = 9;
      }
      else {
        local_b0 = local_b0 & 0xffffff00 | 7;
      }
    }
    else {
      local_b0 = local_b0 & 0xffff0000 | uVar7 << 8 | 1;
    }
LAB_012f538c:
    local_54 = 1;
LAB_012f5390:
    *param_1 = local_54;
    *puVar1 = local_b0;
    param_1[2] = local_bc;
    return;
  case 9:
    if (uVar7 != 2) {
      local_ac = local_ac & 0xffff0000 | uVar7 << 8 | 1;
LAB_012f5348:
      local_54 = 1;
      goto LAB_012f534c;
    }
    uVar7 = *(uint *)(param_3 + 0x40);
    if (*(uint *)(param_3 + 0x44) <= uVar7) {
      local_ac = local_ac & 0xffffff00 | 7;
      goto LAB_012f5348;
    }
    puVar16 = *(undefined4 **)(param_2 + 0xa0);
    *(undefined1 *)(param_2 + 0xa4) = 1;
    *(uint *)(param_3 + 0x40) = uVar7 + 1;
    if (puVar16 != (undefined4 *)0x0) {
      puVar16[3] = 0;
      FUN_0133497c(puVar16[4]);
      iVar8 = *(int *)(param_3 + 0x38);
      uVar7 = *(int *)(param_3 + 0x3c) - iVar8;
      if (uVar7 == 0) goto LAB_012f4f1c;
LAB_012f4bc4:
      pcVar10 = (char *)(*(int *)(param_3 + 0x20) + iVar8);
      uVar12 = (uint)*pcVar10;
      if ((int)uVar12 < 0) {
        if (uVar7 < 2) goto LAB_012f4f1c;
        uVar5 = (uint)pcVar10[1];
        if ((int)uVar5 < 0) {
          if (uVar7 < 10) goto LAB_012f4f1c;
          uVar14 = 0;
          uVar12 = uVar12 & 0x7f | (uVar5 & 0x7f) << 7 | ((int)pcVar10[2] & 0x7fU) << 0xe;
          uVar5 = 3;
          if (0x7fffffff < (uint)(int)pcVar10[2]) {
            uVar12 = uVar12 | ((int)pcVar10[3] & 0x7fU) << 0x15;
            uVar5 = 4;
            if (0x7fffffff < (uint)(int)pcVar10[3]) {
              uVar5 = (uint)pcVar10[4];
              uVar12 = uVar12 | uVar5 << 0x1c;
              uVar14 = (uVar5 & 0x7f) >> 4;
              if ((int)uVar5 < 0) {
                uVar14 = uVar14 | ((int)pcVar10[5] & 0x7fU) << 3;
                uVar5 = 6;
                if (0x7fffffff < (uint)(int)pcVar10[5]) {
                  uVar14 = uVar14 | ((int)pcVar10[6] & 0x7fU) << 10;
                  uVar5 = 7;
                  if (0x7fffffff < (uint)(int)pcVar10[6]) {
                    uVar14 = uVar14 | ((int)pcVar10[7] & 0x7fU) << 0x11;
                    uVar5 = 8;
                    if (0x7fffffff < (uint)(int)pcVar10[7]) {
                      uVar14 = uVar14 | ((int)pcVar10[8] & 0x7fU) << 0x18;
                      uVar5 = 9;
                      if (pcVar10[8] < 0) {
                        if (pcVar10[9] < 0) {
                          local_50 = CONCAT31(local_50._1_3_,4);
                          local_ac = local_50;
                          local_b8 = local_4c;
                          *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
                          goto LAB_012f5348;
                        }
                        uVar14 = uVar14 | (int)pcVar10[9] << 0x1f;
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
          uVar12 = uVar12 & 0x7f | uVar5 << 7;
          uVar5 = 2;
        }
      }
      else {
        uVar14 = (int)uVar12 >> 0x1f;
        uVar5 = 1;
      }
      if (uVar7 < uVar5) goto LAB_012f5490;
      uVar5 = uVar5 + iVar8;
      *(uint *)(param_3 + 0x38) = uVar5;
LAB_012f4f70:
      uVar9 = *puVar4;
      uVar6 = uVar9 + uVar5;
      uVar13 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar9,uVar5);
      uVar7 = uVar6 + uVar12;
      uVar5 = uVar13 + uVar14 + (uint)CARRY4(uVar6,uVar12);
      if (!CARRY4(uVar13,uVar14) && !CARRY4(uVar13 + uVar14,(uint)CARRY4(uVar6,uVar12))) {
        uVar12 = *puVar3;
        uVar14 = *(uint *)(param_3 + 0x34);
        if (uVar5 < uVar14 || uVar14 - uVar5 < (uint)(uVar7 <= uVar12)) {
          uVar13 = *(uint *)(param_3 + 0x24);
          *puVar3 = uVar7;
          *(uint *)(param_3 + 0x34) = uVar5;
          uVar6 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar9,uVar13);
          if (uVar5 <= uVar6 && (uint)(uVar9 + uVar13 <= uVar7) <= uVar5 - uVar6) {
            uVar13 = uVar7 - uVar9;
          }
          *(uint *)(param_3 + 0x3c) = uVar13;
          FUN_013064fc(&local_58,puVar16,param_3);
          if (local_58 == 4) {
            if (uVar14 <= *(uint *)(param_3 + 0x34) &&
                (uint)(*puVar3 <= uVar12) <= uVar14 - *(uint *)(param_3 + 0x34)) goto LAB_012f5478;
            uVar6 = *(uint *)(param_3 + 0x24);
            iVar8 = *(int *)(param_3 + 0x40);
            uVar7 = *puVar4;
            *puVar3 = uVar12;
            *(uint *)(param_3 + 0x34) = uVar14;
            uVar5 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar7,uVar6);
            bVar17 = uVar5 < uVar14 || uVar14 - uVar5 < (uint)(uVar7 + uVar6 <= uVar12);
            goto LAB_012f501c;
          }
          local_ac = local_54;
          local_b8 = local_50;
          *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
          local_54 = local_58;
          goto LAB_012f534c;
        }
      }
      *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
      local_b8 = 0;
      local_ac = 9;
      goto LAB_012f5348;
    }
    puVar16 = (undefined4 *)thunk_FUN_016d4a50(0x18);
    if (puVar16 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x18);
    }
    *puVar16 = 0;
    puVar16[3] = 0;
    puVar16[1] = 4;
    puVar16[2] = 0;
    puVar16[4] = 0;
    puVar16[5] = 0;
    *(undefined4 **)(param_2 + 0xa0) = puVar16;
    iVar8 = *(int *)(param_3 + 0x38);
    uVar7 = *(int *)(param_3 + 0x3c) - iVar8;
    if (uVar7 != 0) goto LAB_012f4bc4;
LAB_012f4f1c:
    FUN_0132d5a8(&local_58,param_3);
    if (local_58 == 0) {
      uVar5 = *(uint *)(param_3 + 0x38);
      uVar12 = local_50;
      uVar14 = local_4c;
      goto LAB_012f4f70;
    }
    local_ac = local_50;
    local_b8 = local_4c;
    *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
    if (local_54 != 4) {
LAB_012f534c:
      *param_1 = local_54;
      *puVar1 = local_ac;
      param_1[2] = local_b8;
      return;
    }
    goto LAB_012f4684;
  case 10:
    iVar8 = param_2 + 0x30;
    goto LAB_012f491c;
  case 0xb:
    iVar8 = param_2 + 0x3c;
LAB_012f491c:
    FUN_01338310(&local_58,uVar7,param_3,iVar8);
    break;
  case 0xc:
    if (uVar7 != 2) goto LAB_012f528c;
    *(undefined4 *)(param_2 + 0x90) = 0;
    *(undefined1 *)(param_2 + 0x94) = 1;
    iVar8 = param_2 + 0x88;
LAB_012f4674:
    FUN_0132e8a8(&local_58,param_3,iVar8);
    break;
  default:
    FUN_01337f28(&local_58,local_54,uVar7,param_3,param_2 + 0xa8);
  }
  if (local_58 != 4) {
LAB_012f529c:
    *param_1 = local_58;
    param_1[1] = local_54;
    param_1[2] = local_50;
    return;
  }
  goto LAB_012f4684;
}

