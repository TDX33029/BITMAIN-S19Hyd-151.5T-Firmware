// FUN_010d74fc @ 010d74fc size=3116 calls_out=10 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool FUN_010d74fc(int *param_1,int param_2,uint param_3,int param_4,uint param_5,undefined4 param_6,
                 uint param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,int param_11
                 ,undefined1 *param_12)

{
  int iVar1;
  uint *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  uint *puVar19;
  int iVar20;
  bool bVar21;
  bool bVar22;
  undefined8 uVar23;
  uint *local_1c0;
  uint local_1a8 [4];
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  uint local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  uint auStack_178 [2];
  uint *local_170;
  uint local_130;
  undefined1 *local_12c;
  uint local_128;
  uint uStack_124;
  uint local_f4;
  undefined1 *local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  undefined1 *local_d4;
  uint *local_d0;
  undefined1 *local_c8;
  uint local_c4;
  uint uStack_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_a8;
  int local_a4;
  undefined4 local_70;
  undefined1 *local_6c;
  undefined4 local_68;
  undefined1 local_64;
  int local_60;
  int local_5c;
  int *local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  int *local_30;
  uint local_2c;
  byte local_28;
  undefined1 local_27;
  
  local_184 = param_8;
  local_188 = param_7;
  local_17c = param_10;
  iVar1 = param_1[8];
  piVar13 = param_1 + 10;
  if (param_1[9] == 0) {
    piVar13 = (int *)param_1[10];
  }
  local_30 = (int *)0x0;
  if (iVar1 != 2) {
    local_30 = piVar13;
  }
  local_180 = param_9;
  piVar12 = param_1 + 2;
  if (param_1[1] == 0) {
    piVar12 = (int *)param_1[2];
  }
  piVar14 = param_1 + 0x25;
  if (param_1[0x24] == 0) {
    piVar14 = (int *)param_1[0x25];
  }
  local_54 = *piVar14;
  local_50 = piVar14[1];
  local_4c = piVar14[3];
  local_48 = piVar14[4];
  local_58 = param_1 + 0x18;
  if (param_1[0x17] == 0) {
    local_58 = (int *)param_1[0x18];
  }
  bVar21 = iVar1 == 2;
  if (bVar21) {
    iVar1 = 0;
  }
  local_28 = (byte)iVar1;
  local_2c = (uint)*(byte *)((int)param_1 + 0xae);
  if (!bVar21) {
    local_28 = *(byte *)((int)piVar13 + 0x32);
  }
  local_40 = 0;
  local_3c = 1;
  if (*param_1 != 0) {
    local_3c = piVar12[3];
  }
  local_5c = param_4 + param_5 * 4;
  local_44 = 1;
  local_38 = 0;
  if (*param_1 != 0) {
    local_44 = *piVar12;
    local_40 = piVar12[1];
    local_38 = piVar12[4];
  }
  local_27 = 2;
  local_28 = local_28 & 1;
  local_34 = 0;
  local_70 = 0;
  local_b8 = 0;
  local_64 = 0;
  local_68 = 0;
  local_6c = &DAT_00110000;
  local_60 = param_4;
  FUN_010dc03c(&local_b8,0xffff,0);
  FUN_016dd1aa(auStack_178,&local_b8,0x94);
  local_d8 = 0;
  piVar13 = param_1 + 0x2d;
  if (param_1[0x2c] == 0) {
    piVar13 = (int *)param_1[0x2d];
  }
  puVar19 = (uint *)((uint)auStack_178 | 4);
  local_e0 = *piVar13;
  local_d0 = &local_188;
  local_dc = piVar13[1];
  local_1c0 = (uint *)(param_2 + 4);
  puVar2 = (uint *)(param_2 + 0x3f8);
  local_e4 = &DAT_00110000;
  local_d4 = (undefined1 *)(uint)*(ushort *)(param_1 + 0x2b);
  do {
    uVar7 = local_128;
    puVar17 = local_12c;
    uVar16 = local_130;
    puVar10 = puVar19;
    if (0x11 < local_130) {
      uVar16 = auStack_178[1];
      puVar10 = local_170;
    }
    if (local_f4 < uVar16) {
      uVar7 = puVar10[local_f4];
      local_f4 = local_f4 + 1;
      if (local_130 < 0x12) {
        uVar16 = local_130;
        puVar10 = &local_130;
        if (local_f4 == local_130) goto LAB_010d77b0;
      }
      else if (local_f4 == auStack_178[1]) {
        uVar16 = auStack_178[1];
        puVar10 = puVar19;
LAB_010d77b0:
        local_f4 = 0;
        if (uVar16 != 0) {
          *puVar10 = 0;
        }
      }
      puVar17 = (undefined1 *)(uVar7 & 0xffffff);
      if (0xffffff < uVar7) goto LAB_010d7ec0;
      puVar18 = (undefined1 *)0x0;
      uVar7 = 0;
      local_e4 = puVar17;
    }
    else {
      local_12c = &DAT_00110000;
      if (puVar17 == &DAT_00110000) {
LAB_010d7fdc:
        if (0x11 < local_130) {
          thunk_FUN_016d3fb4(local_170);
        }
        if (local_d8 != 0) {
          thunk_FUN_016d3fb4(local_e0);
        }
        uVar7 = *puVar2;
        if (0xfd < uVar7) {
          uVar7 = *(uint *)(param_2 + 4);
          local_1c0 = *(uint **)(param_2 + 8);
        }
        if (uVar7 < param_3) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(param_3,uVar7,uVar7,&DAT_01885758);
        }
        uVar11 = 0;
        uVar16 = uVar7 - param_3;
        if (param_5 < uVar7 - param_3) {
          uVar16 = param_5;
        }
        if (uVar16 == 0) goto LAB_010d80b4;
        uVar11 = 0;
        break;
      }
      puVar18 = puVar17;
      if (puVar17 < local_d4 || local_128 < 2) {
LAB_010d776c:
        FUN_010dc890(&local_c8,auStack_178);
        if (local_c8 == &DAT_00110000) goto LAB_010d7eb8;
        if (local_c8 < local_d4) {
          local_12c = local_c8;
          local_128 = local_c4;
          uStack_124 = uStack_c0;
          goto LAB_010d7eb8;
        }
        if (((local_c4 & 0xffffff00) == 0xd800) || (local_c4 - 1 < 2)) {
          local_12c = local_c8;
          local_128 = local_c4;
          uStack_124 = uStack_c0;
        }
        else {
          local_12c = local_c8;
          local_128 = local_c4;
          uStack_124 = uStack_c0;
          if (local_c4 - 0x11c3 < 0xffffff9e) goto LAB_010d7eb8;
        }
      }
      else if (((uStack_124 & 1) == 0) && (0xffff < local_128)) {
        if ((local_128 & 0xffff) == 0) goto LAB_010d776c;
        if ((local_128 & 0xffff) != 1) {
          bVar22 = (undefined1 *)0xffffff73 < puVar17 + -0x1ffc;
          bVar21 = puVar17 == (undefined1 *)0x1f70;
          if (!bVar22 || bVar21) {
            bVar22 = (undefined1 *)0xffffffcc < puVar17 + -0xfb4f;
            bVar21 = puVar17 + -0xfb4f == (undefined1 *)0xffffffcd;
          }
          if ((!bVar22 || bVar21) &&
             ((local_128 >> 0x10 & 0x7f) != 0x3c || (local_128 >> 0x10) - 0xc00 < 0xfffffd00))
          goto LAB_010d776c;
        }
      }
    }
    do {
      puVar3 = local_e4;
      bVar21 = false;
      puVar17 = (undefined1 *)0x0;
      local_e4 = &DAT_00110000;
      if (puVar3 == &DAT_00110000) goto LAB_010d78b8;
LAB_010d78ac:
      local_e4 = &DAT_00110000;
      iVar20 = local_dc;
      iVar1 = local_e0;
LAB_010d7938:
      uVar11 = local_130;
      puVar10 = local_170;
      uVar16 = auStack_178[1];
      uVar7 = local_130;
      puVar6 = puVar19;
      if (0x11 < local_130) {
        uVar7 = auStack_178[1];
        puVar6 = local_170;
      }
      while (uVar9 = local_f4, local_f4 < uVar7) {
        uVar15 = puVar6[local_f4];
        local_b0 = 0;
        local_b4 = 0;
        local_b8 = 1;
        uVar4 = uVar15 & 0xffffff;
        local_a4 = iVar20;
        uVar8 = uVar4 - 0x1161;
        local_a8 = iVar1;
        if (0x9e < uVar8) {
          if (uVar4 < 0x10000) {
            iVar5 = FUN_010d2a9c(&local_b8,uVar15);
          }
          else {
            uVar4 = FUN_010d2a9c(&local_b8,(uVar4 >> 10) - 0x2840);
            if ((uVar4 | 2) != 3) goto LAB_010d7b18;
            iVar5 = FUN_010d2a9c(&local_b8,uVar15 & 0x3ff | 0xffffdc00);
          }
          if (iVar5 == 1) {
            if (puVar3 < (undefined1 *)0x10000) {
              uVar23 = FUN_010d2a9c(&local_b8,puVar3);
            }
            else {
              uVar4 = FUN_010d2a9c(&local_b8,((uint)puVar3 >> 10) - 0x2840);
              if ((uVar4 | 2) != 3) goto LAB_010d7b18;
              uVar23 = FUN_010d2a9c(&local_b8,(uint)puVar3 & 0x3ff | 0xffffdc00);
            }
            puVar17 = (undefined1 *)((ulonglong)uVar23 >> 0x20);
            if ((((int)uVar23 == 2) && (0xffef07ff < ((uint)puVar17 ^ 0xd800) - 0x110000)) &&
               (puVar17 != &DAT_00110000)) goto LAB_010d7978;
          }
LAB_010d7b18:
          if (uVar11 < 0x12) {
            uVar16 = uVar11;
          }
          if (uVar16 < uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464(&DAT_00387c07,0x1c,&DAT_018857d8);
          }
          iVar1 = 0x48;
          if (0x11 < uVar11) {
            iVar1 = 4;
          }
          iVar20 = uVar16 - uVar9;
          *(undefined4 *)((int)auStack_178 + iVar1) = 0;
          if (iVar20 != 0) {
            puVar6 = &local_130;
            if (local_130 < 0x12) {
              puVar10 = puVar19;
              uVar7 = local_130;
              if (uVar9 != local_130) goto LAB_010d7bbc;
            }
            else {
              uVar7 = auStack_178[1];
              if (uVar9 == auStack_178[1]) {
                puVar6 = puVar19;
              }
              else {
LAB_010d7bbc:
                FUN_016dd52c(puVar10 + uVar7,puVar10 + uVar9,iVar20 * 4);
                uVar16 = uVar7 + iVar20;
                if (0x11 < local_130) {
                  puVar6 = puVar19;
                }
              }
            }
            *puVar6 = uVar16;
          }
          local_f4 = 0;
          if (uVar15 >> 0x18 != 0) {
            uVar16 = 1;
            uVar7 = uVar15 >> 0x18;
            do {
              while( true ) {
                uVar11 = local_130;
                uVar9 = local_130;
                puVar10 = puVar19;
                if (0x11 < local_130) {
                  uVar9 = auStack_178[1];
                  puVar10 = local_170;
                }
                if (uVar9 <= uVar16) {
                  puVar17 = puVar3;
                  puVar18 = local_12c;
                  uVar7 = local_128;
                  puVar3 = local_e4;
                  if (0x11 < local_130) {
                    uVar11 = auStack_178[1];
                  }
                  goto joined_r0x010d7d90;
                }
                uVar4 = puVar10[uVar16];
                uVar9 = uVar4 >> 0x18;
                if (uVar9 == 0) goto LAB_010d7eb4;
                if (uVar7 == uVar9) break;
                local_a8 = local_e0;
                local_b0 = 0;
                local_b4 = 0;
                local_a4 = local_dc;
                local_b8 = 1;
                if (0xffff < (uVar4 & 0xffffff)) {
                  uVar8 = FUN_010d2a9c(&local_b8,((uVar4 & 0xffffff) >> 10) - 0x2840);
                  if ((uVar8 | 2) != 3) goto LAB_010d7bfc;
                  uVar4 = uVar4 & 0x3ff | 0xffffdc00;
                }
                iVar1 = FUN_010d2a9c(&local_b8,uVar4);
                if (iVar1 != 1) goto LAB_010d7bfc;
                if (puVar3 < (undefined1 *)0x10000) {
                  uVar23 = FUN_010d2a9c(&local_b8,puVar3);
                }
                else {
                  uVar4 = FUN_010d2a9c(&local_b8,((uint)puVar3 >> 10) - 0x2840);
                  if ((uVar4 | 2) != 3) goto LAB_010d7bfc;
                  uVar23 = FUN_010d2a9c(&local_b8,(uint)puVar3 & 0x3ff | 0xffffdc00);
                }
                puVar17 = (undefined1 *)((ulonglong)uVar23 >> 0x20);
                if ((((int)uVar23 != 2) || (((uint)puVar17 ^ 0xd800) - 0x110000 < 0xffef0800)) ||
                   (puVar17 == &DAT_00110000)) goto LAB_010d7bfc;
                puVar6 = puVar19;
                puVar10 = &local_130;
                if (0x11 < uVar11) {
                  puVar6 = local_170;
                  puVar10 = puVar19;
                  uVar11 = auStack_178[1];
                }
                if (uVar11 <= uVar16) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa464(&DAT_00387c23,0x1d,&DAT_018857e8);
                }
                *puVar10 = uVar11 - 1;
                FUN_016dd52c(puVar6 + uVar16,puVar6 + uVar16 + 1,(uVar11 + ~uVar16) * 4);
                puVar3 = puVar17;
              }
              uVar9 = uVar7;
LAB_010d7bfc:
              uVar16 = uVar16 + 1;
              uVar7 = uVar9;
            } while( true );
          }
LAB_010d7eb4:
          puVar17 = puVar3;
          goto LAB_010d7eb8;
        }
        if (uVar8 < 0x15) {
          if ((undefined1 *)0x12 < puVar3 + -0x1100) goto LAB_010d7b18;
          puVar17 = (undefined1 *)((int)(puVar3 + -0x1100) * 0x24c + uVar8 * 0x1c + 0xac00);
        }
        else {
          if (((0x1a < uVar4 - 0x11a8) || ((undefined1 *)0x2ba3 < puVar3 + -0xac00)) ||
             ((uint)(puVar3 + -0xac00) % 0x1c != 0)) goto LAB_010d7b18;
          puVar17 = puVar3 + (uVar4 - 0x11a7);
        }
LAB_010d7978:
        puVar3 = puVar17;
        local_f4 = uVar9 + 1;
      }
      if (uVar11 < 0x12) {
        uVar16 = uVar11;
      }
      if (uVar16 != 0) {
        iVar1 = 0x48;
        if (0x11 < uVar11) {
          iVar1 = 4;
        }
        *(undefined4 *)((int)auStack_178 + iVar1) = 0;
        uVar11 = local_130;
      }
      local_f4 = 0;
      puVar17 = puVar3;
      puVar18 = local_12c;
      uVar7 = local_128;
      puVar3 = local_e4;
      if (0x11 < uVar11) {
        uVar11 = auStack_178[1];
      }
joined_r0x010d7d90:
      local_128 = uVar7;
      if (((uVar11 == 0) && (puVar18 != &DAT_00110000)) && (local_d4 <= puVar18)) {
        if (0x61 < uVar7 - 0x1161) {
          uVar11 = uVar7 & 0xffffff00;
          bVar21 = 0xd7ff < uVar11;
          uVar16 = uVar7;
          if (uVar11 != 0xd800) {
            uVar16 = uVar7 - 1;
            bVar21 = uVar16 != 0;
          }
          if (bVar21 && (uVar11 != 0xd800 && uVar16 != 1)) goto LAB_010d7fa0;
        }
        bVar21 = true;
        local_12c = &DAT_00110000;
        local_e4 = &DAT_00110000;
        if (puVar3 == &DAT_00110000) {
LAB_010d78b8:
          local_e4 = &DAT_00110000;
          puVar18 = (undefined1 *)FUN_010dc03c(auStack_178,puVar18,uVar7);
          iVar20 = local_dc;
          iVar1 = local_e0;
          if (bVar21) {
            local_a4 = local_dc;
            local_b8 = 1;
            puVar3 = puVar18 + -0x1161;
            local_a8 = local_e0;
            local_b0 = 0;
            local_b4 = 0;
            if (puVar3 < (undefined1 *)0x9f) {
              if (puVar3 < (undefined1 *)0x15) {
                if ((undefined1 *)0x12 < puVar17 + -0x1100) goto LAB_010d7fb0;
                puVar3 = (undefined1 *)
                         ((int)(puVar17 + -0x1100) * 0x24c + (int)puVar3 * 0x1c + 0xac00);
              }
              else {
                if ((((undefined1 *)0x1a < puVar18 + -0x11a8) ||
                    ((undefined1 *)0x2ba3 < puVar17 + -0xac00)) ||
                   ((uint)(puVar17 + -0xac00) % 0x1c != 0)) goto LAB_010d7fb0;
                puVar3 = puVar17 + (int)puVar18 + -0x11a7;
              }
            }
            else {
              puVar3 = (undefined1 *)FUN_010d3134(&local_b8,puVar17,puVar18);
              if (puVar3 == &DAT_00110000) {
LAB_010d7fb0:
                local_e4 = puVar18;
                goto LAB_010d7eb8;
              }
            }
          }
          else {
            puVar3 = puVar18;
          }
          goto LAB_010d7938;
        }
        goto LAB_010d78ac;
      }
LAB_010d7fa0:
      local_12c = puVar18;
      local_e4 = puVar3;
LAB_010d7eb8:
      if (puVar17 == &DAT_00110000) goto LAB_010d7fdc;
LAB_010d7ec0:
      if (puVar17 < (undefined1 *)0x80) {
        local_1a8[0] = *local_d0;
        local_1a8[1] = local_d0[1];
        local_1a8[2] = local_d0[2];
        local_18c = 0;
        local_190 = 0;
        local_194 = 0;
        local_198 = 0;
        local_1a8[3] = local_d0[3];
        if ((local_1a8[((uint)puVar17 & 0x7f) >> 5] >> ((uint)puVar17 & 0x1f) & 1) != 0)
        goto LAB_010d7f0c;
LAB_010d7f54:
        uVar16 = *puVar2;
        uVar7 = uVar16;
        if (0xfd < uVar16) goto LAB_010d7f64;
LAB_010d7f38:
        uVar16 = 0xfd;
        puVar10 = local_1c0;
        puVar6 = puVar2;
      }
      else {
        if (puVar17 != (undefined1 *)0xfffd) goto LAB_010d7f54;
LAB_010d7f0c:
        if (param_11 != 0) {
          if (0x11 < local_130) {
            thunk_FUN_016d3fb4(local_170);
          }
          if (local_d8 != 0) {
            thunk_FUN_016d3fb4(local_e0);
          }
          return true;
        }
        puVar17 = (undefined1 *)0xfffd;
        *param_12 = 1;
        uVar16 = *puVar2;
        uVar7 = uVar16;
        if (uVar16 < 0xfe) goto LAB_010d7f38;
LAB_010d7f64:
        uVar7 = *(uint *)(param_2 + 4);
        puVar10 = *(uint **)(param_2 + 8);
        puVar6 = local_1c0;
      }
      if (uVar7 == uVar16) {
        FUN_010da1f8(param_2);
        uVar7 = *(uint *)(param_2 + 4);
        puVar10 = *(uint **)(param_2 + 8);
        puVar6 = local_1c0;
      }
      puVar10[uVar7] = (uint)puVar17;
      *puVar6 = *puVar6 + 1;
      uVar7 = 0;
      puVar18 = (undefined1 *)0x0;
    } while (local_e4 != &DAT_00110000);
  } while( true );
LAB_010d8054:
  if (local_1c0[param_3 + uVar11] != *(uint *)(param_4 + uVar11 * 4)) {
    local_1c0[param_3 + uVar11] = 0xfffd;
LAB_010d80b4:
    bVar21 = uVar11 < uVar16;
    if ((bVar21) && (param_11 == 0)) {
      *param_12 = 1;
LAB_010d80d8:
      bVar21 = false;
    }
    return bVar21;
  }
  uVar11 = uVar11 + 1;
  if (uVar16 == uVar11) goto LAB_010d80d8;
  goto LAB_010d8054;
}

