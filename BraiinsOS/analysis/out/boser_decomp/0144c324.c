// FUN_0144c324 @ 0144c324 size=2440 calls_out=10 calls_in=1
// strings: assertion failed: end <= len

bool FUN_0144c324(int *param_1,int param_2,undefined4 param_3,int param_4,uint param_5,
                 undefined4 param_6,uint param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,int param_11,undefined1 *param_12)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint *puVar7;
  int *piVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  undefined1 *puVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int *piVar20;
  bool bVar21;
  bool bVar22;
  undefined8 uVar23;
  uint local_1c0 [4];
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  uint local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined1 auStack_190 [152];
  uint local_f8 [2];
  uint *local_f0;
  uint local_b0;
  undefined1 *local_ac;
  uint local_a8;
  byte local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  uint local_74;
  int *local_70;
  uint local_6c;
  byte local_68;
  undefined1 local_67;
  undefined1 *local_64;
  int local_60;
  int local_5c;
  undefined4 uStack_58;
  undefined1 *local_54;
  uint *local_50;
  undefined1 *local_48;
  uint local_44;
  undefined4 uStack_40;
  uint *local_3c;
  uint *local_38;
  uint *local_34;
  uint local_30;
  int local_2c;
  int local_28;
  
  local_194 = param_10;
  local_1a0 = param_7;
  iVar15 = param_1[8];
  local_198 = param_9;
  piVar14 = param_1 + 10;
  if (param_1[9] == 0) {
    piVar14 = (int *)param_1[10];
  }
  local_19c = param_8;
  local_70 = (int *)0x0;
  if (iVar15 != 2) {
    local_70 = piVar14;
  }
  piVar20 = param_1 + 2;
  if (param_1[1] == 0) {
    piVar20 = (int *)param_1[2];
  }
  piVar8 = param_1 + 0x25;
  if (param_1[0x24] == 0) {
    piVar8 = (int *)param_1[0x25];
  }
  local_6c = (uint)*(byte *)((int)param_1 + 0xae);
  local_9c = param_4 + param_5 * 4;
  local_78 = 0;
  local_98 = (int)(param_1 + 0x18);
  if (param_1[0x17] == 0) {
    local_98 = param_1[0x18];
  }
  local_68 = 0;
  local_7c = 1;
  if (iVar15 != 2) {
    local_68 = *(byte *)((int)piVar14 + 0x32);
  }
  local_94 = *piVar8;
  local_90 = piVar8[1];
  if (iVar15 != 2) {
    local_68 = local_68 & 1;
  }
  local_84 = 1;
  local_8c = piVar8[3];
  local_88 = piVar8[4];
  local_80 = 0;
  if (*param_1 != 0) {
    local_84 = *piVar20;
    local_80 = piVar20[1];
    local_7c = piVar20[3];
    local_78 = piVar20[4];
  }
  local_67 = 2;
  local_74 = 0;
  local_b0 = 0;
  local_f8[0] = 0;
  local_a4 = 0;
  local_a8 = 0;
  local_ac = &DAT_00110000;
  local_a0 = param_4;
  FUN_01450764(local_f8,0xffff,0);
  FUN_01bed4e2(auStack_190,local_f8,0x94);
  uVar1 = *(ushort *)(param_1 + 0x2b);
  piVar14 = param_1 + 0x2d;
  if (param_1[0x2c] == 0) {
    piVar14 = (int *)param_1[0x2d];
  }
  iVar15 = *piVar14;
  iVar18 = piVar14[1];
  FUN_01bed4e2(local_f8,auStack_190,0x94);
  local_50 = &local_1a0;
  local_54 = (undefined1 *)(uint)uVar1;
  local_60 = iVar15;
  local_5c = iVar18;
  uStack_58 = 0;
  local_64 = &DAT_00110000;
  puVar9 = (uint *)(param_2 + 4);
  puVar3 = (uint *)((uint)local_f8 | 4);
  do {
    puVar16 = local_ac;
    puVar4 = (undefined1 *)0x0;
    uVar17 = 0;
    if (local_64 != &DAT_00110000) goto LAB_0144c6d0;
    uVar10 = local_b0;
    puVar11 = puVar3;
    if (0x11 < local_b0) {
      uVar10 = local_f8[1];
      puVar11 = local_f0;
    }
    if (local_74 < uVar10) {
      uVar10 = puVar11[local_74];
      local_74 = local_74 + 1;
      if (local_b0 < 0x12) {
        uVar13 = local_b0;
        puVar11 = &local_b0;
        if (local_74 == local_b0) goto LAB_0144c5fc;
      }
      else if (local_74 == local_f8[1]) {
        uVar13 = local_f8[1];
        puVar11 = puVar3;
LAB_0144c5fc:
        local_74 = 0;
        if (uVar13 != 0) {
          *puVar11 = 0;
        }
      }
      puVar16 = (undefined1 *)(uVar10 & 0xffffff);
      if (uVar10 < 0x1000000) {
        puVar4 = (undefined1 *)0x0;
        local_64 = puVar16;
LAB_0144c6d0:
        bVar22 = false;
        puVar16 = (undefined1 *)0x0;
LAB_0144c6d4:
        puVar5 = local_64;
        local_64 = &DAT_00110000;
        if (puVar5 == &DAT_00110000) {
          puVar4 = (undefined1 *)FUN_01450764(local_f8,puVar4,uVar17);
          iVar18 = local_5c;
          iVar15 = local_60;
          if (bVar22) {
            local_28 = local_5c;
            local_3c = (uint *)&DAT_00000001;
            puVar5 = puVar4 + -0x1161;
            local_2c = local_60;
            local_34 = (uint *)0x0;
            local_38 = (uint *)0x0;
            if (puVar5 < (undefined1 *)0x9f) {
              if (puVar5 < (undefined1 *)0x15) {
                if ((undefined1 *)0x12 < puVar16 + -0x1100) goto LAB_0144cbc8;
                puVar5 = (undefined1 *)
                         ((int)(puVar16 + -0x1100) * 0x24c + (int)puVar5 * 0x1c + 0xac00);
              }
              else {
                if ((((undefined1 *)0x1a < puVar4 + -0x11a8) ||
                    ((undefined1 *)0x2ba3 < puVar16 + -0xac00)) ||
                   ((uint)(puVar16 + -0xac00) % 0x1c != 0)) {
LAB_0144cbc8:
                  local_64 = puVar4;
                  goto LAB_0144cacc;
                }
                puVar5 = puVar16 + (int)puVar4 + -0x11a7;
              }
            }
            else {
              puVar5 = (undefined1 *)FUN_01447618(&local_3c,puVar16,puVar4);
              if (puVar5 == &DAT_00110000) goto LAB_0144cbc8;
            }
          }
          else {
            puVar5 = puVar4;
          }
        }
        else {
          iVar15 = local_60;
          iVar18 = local_5c;
        }
        uVar13 = local_b0;
        puVar11 = local_f0;
        uVar10 = local_f8[1];
        puVar16 = puVar5;
        uVar17 = local_b0;
        puVar7 = puVar3;
        if (0x11 < local_b0) {
          uVar17 = local_f8[1];
          puVar7 = local_f0;
        }
        while (uVar2 = local_74, local_74 < uVar17) {
          uVar19 = puVar7[local_74];
          local_34 = (uint *)0x0;
          local_38 = (uint *)0x0;
          local_3c = (uint *)&DAT_00000001;
          uVar12 = uVar19 & 0xffffff;
          local_28 = iVar18;
          uVar6 = uVar12 - 0x1161;
          local_2c = iVar15;
          if (uVar6 < 0x9f) {
            if (uVar6 < 0x15) {
              if ((undefined1 *)0x12 < puVar16 + -0x1100) goto LAB_0144c874;
              puVar4 = (undefined1 *)((int)(puVar16 + -0x1100) * 0x24c + uVar6 * 0x1c + 0xac00);
            }
            else {
              if (((0x1a < uVar12 - 0x11a8) || ((undefined1 *)0x2ba3 < puVar16 + -0xac00)) ||
                 ((uint)(puVar16 + -0xac00) % 0x1c != 0)) {
LAB_0144c874:
                if (uVar13 < 0x12) {
                  puVar7 = &local_b0;
                }
                else {
                  puVar7 = puVar3;
                  uVar13 = uVar10;
                }
                if (uVar13 < uVar2) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb0ec("assertion failed: end <= len",0x1c,&DAT_01cf90c4);
                }
                *puVar7 = 0;
                local_34 = local_f8;
                local_2c = uVar13 - uVar2;
                local_3c = puVar11;
                if (local_b0 < 0x12) {
                  local_3c = puVar3;
                }
                local_38 = local_3c + uVar2;
                local_30 = uVar2;
                FUN_01448eec(&local_3c);
                local_74 = 0;
                if (uVar19 < 0x1000000) goto LAB_0144cacc;
                uVar19 = uVar19 >> 0x18;
                uVar17 = 1;
                goto LAB_0144c930;
              }
              puVar4 = puVar16 + (uVar12 - 0x11a7);
            }
          }
          else {
            puVar4 = (undefined1 *)FUN_01447618(&local_3c,puVar16);
            if (puVar4 == &DAT_00110000) goto LAB_0144c874;
          }
          puVar16 = puVar4;
          local_74 = uVar2 + 1;
        }
        if (uVar13 < 0x12) {
          uVar10 = uVar13;
        }
        if (uVar10 != 0) {
          iVar15 = 0x48;
          if (0x11 < uVar13) {
            iVar15 = 4;
          }
          *(undefined4 *)((int)local_f8 + iVar15) = 0;
          uVar13 = local_b0;
        }
        local_74 = 0;
        goto LAB_0144c9e4;
      }
    }
    else {
      bVar22 = local_ac == &DAT_00110000;
      local_ac = &DAT_00110000;
      if (bVar22) {
LAB_0144cbf0:
        FUN_0144c2f4(local_f8);
        uVar23 = FUN_0144ee2c(param_2,param_3,&DAT_01cf922c);
        uVar17 = (uint)((ulonglong)uVar23 >> 0x20);
        if (param_5 < uVar17) {
          uVar17 = param_5;
        }
        if (uVar17 == 0) {
          return false;
        }
        uVar10 = 0;
        while (*(int *)((int)uVar23 + uVar10 * 4) == *(int *)(param_4 + uVar10 * 4)) {
          uVar10 = uVar10 + 1;
          if (uVar17 == uVar10) {
            return false;
          }
        }
        bVar22 = uVar10 < uVar17;
        *(undefined4 *)((int)uVar23 + uVar10 * 4) = 0xfffd;
        if (bVar22) {
          if (param_11 == 0) {
            *param_12 = 1;
            return false;
          }
          return bVar22;
        }
        return bVar22;
      }
      puVar4 = puVar16;
      uVar17 = local_a8;
      if (local_54 <= puVar16 && 1 < local_a8) {
        if ((local_a4 & 1) != 0) goto LAB_0144c6d0;
        uVar10 = local_a8 >> 0x10;
        if (uVar10 == 0) goto LAB_0144c6d0;
        if ((local_a8 & 0xffff) != 0) {
          if ((local_a8 & 0xffff) == 1) goto LAB_0144c6d0;
          bVar21 = (undefined1 *)0xffffff73 < puVar16 + -0x1ffc;
          bVar22 = puVar16 == (undefined1 *)0x1f70;
          if (!bVar21 || bVar22) {
            bVar21 = (undefined1 *)0xffffffcc < puVar16 + -0xfb4f;
            bVar22 = puVar16 + -0xfb4f == (undefined1 *)0xffffffcd;
          }
          if ((bVar21 && !bVar22) || ((uVar10 & 0x7f) == 0x3c && 0xfffffcff < uVar10 - 0xc00))
          goto LAB_0144c6d0;
        }
      }
      FUN_014511f0(&local_48,local_f8);
      if (local_48 != &DAT_00110000) {
        local_a4 = (byte)uStack_40;
        if (local_48 < local_54) {
          local_ac = local_48;
          local_a8 = local_44;
        }
        else {
          if ((local_44 - 1 < 2) || ((local_44 & 0xffffff00) == 0xd800)) {
            local_ac = local_48;
            local_a8 = local_44;
            goto LAB_0144c6d0;
          }
          local_ac = local_48;
          local_a8 = local_44;
          if (local_44 - 0x1161 < 0x62) goto LAB_0144c6d0;
        }
      }
LAB_0144cacc:
      if (puVar16 == &DAT_00110000) goto LAB_0144cbf0;
    }
    if (puVar16 < (undefined1 *)0x80) {
      local_1c0[3] = local_50[3];
      local_1c0[0] = *local_50;
      local_1c0[1] = local_50[1];
      local_1c0[2] = local_50[2];
      local_1a4 = 0;
      local_1a8 = 0;
      local_1ac = 0;
      local_1b0 = 0;
      if ((local_1c0[((uint)puVar16 & 0x7f) >> 5] >> ((uint)puVar16 & 0x1f) & 1) != 0)
      goto LAB_0144cb30;
    }
    else if (puVar16 == (undefined1 *)0xfffd) {
LAB_0144cb30:
      if (param_11 != 0) {
        FUN_0144c2f4(local_f8);
        return true;
      }
      puVar16 = (undefined1 *)0xfffd;
      *param_12 = 1;
    }
    uVar17 = *(uint *)(param_2 + 0x3f8);
    if (uVar17 < 0xfe) {
      uVar13 = 0xfd;
      uVar10 = uVar17;
      puVar11 = puVar9;
      puVar7 = (uint *)(param_2 + 0x3f8);
    }
    else {
      uVar10 = *(uint *)(param_2 + 4);
      puVar11 = *(uint **)(param_2 + 8);
      puVar7 = puVar9;
      uVar13 = uVar17;
    }
    if (uVar10 == uVar13) {
      FUN_0144e898(param_2);
      uVar10 = *(uint *)(param_2 + 4);
      puVar11 = *(uint **)(param_2 + 8);
      puVar7 = puVar9;
    }
    puVar11[uVar10] = (uint)puVar16;
    *puVar7 = *puVar7 + 1;
  } while( true );
LAB_0144c930:
  uVar10 = local_b0;
  puVar11 = puVar3;
  if (0x11 < local_b0) {
    uVar10 = local_f8[1];
    puVar11 = local_f0;
  }
  if (uVar17 < uVar10) {
    uVar10 = puVar11[uVar17] >> 0x18;
    if (uVar10 == 0) goto LAB_0144cacc;
    if (uVar19 == uVar10) {
      uVar10 = uVar19;
LAB_0144c9b8:
      uVar19 = uVar10;
      uVar17 = uVar17 + 1;
    }
    else {
      local_2c = local_60;
      local_3c = (uint *)&DAT_00000001;
      local_28 = local_5c;
      local_34 = (uint *)0x0;
      local_38 = (uint *)0x0;
      puVar4 = (undefined1 *)FUN_01447618(&local_3c,puVar16,puVar11[uVar17] & 0xffffff);
      if (puVar4 == &DAT_00110000) goto LAB_0144c9b8;
      FUN_01448fcc(local_f8,uVar17);
      puVar16 = puVar4;
    }
    goto LAB_0144c930;
  }
  uVar13 = local_b0;
LAB_0144c9e4:
  puVar4 = local_ac;
  if (0x11 < uVar13) {
    uVar13 = local_f8[1];
  }
  if (((uVar13 != 0) || (local_ac == &DAT_00110000)) || (local_ac < local_54)) goto LAB_0144cacc;
  if (1 < local_a8 - 1) {
    uVar17 = local_a8 & 0xffffff00;
    bVar22 = 0xd7ff < uVar17;
    bVar21 = uVar17 != 0xd800;
    if (bVar21) {
      uVar17 = local_a8 - 0x1161;
      bVar22 = 0x60 < uVar17;
    }
    if (bVar22 && (bVar21 && uVar17 != 0x61)) goto LAB_0144cacc;
  }
  local_ac = &DAT_00110000;
  bVar22 = true;
  uVar17 = local_a8;
  goto LAB_0144c6d4;
}

