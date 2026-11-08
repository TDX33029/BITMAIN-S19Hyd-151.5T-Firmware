// FUN_017a40a4 @ 017a40a4 size=2940 calls_out=10 calls_in=1
// strings: 

/* WARNING: Type propagation algorithm not settling */

uint FUN_017a40a4(int param_1,undefined2 *param_2,int param_3,uint param_4,uint param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  byte *pbVar17;
  byte *pbVar16;
  int iVar18;
  undefined4 uVar19;
  undefined1 *puVar20;
  int iVar21;
  uint uVar22;
  int local_1d8;
  int local_1b8;
  int *local_1b0;
  uint local_1ac;
  uint *local_1a0;
  int local_194;
  int local_190;
  uint local_18c;
  byte *local_184;
  byte *local_180;
  byte *local_17c;
  int local_178;
  undefined2 *local_170;
  uint *local_16c;
  int local_168;
  uint local_164 [5];
  int local_150 [33];
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_34;
  int local_2c;
  
  iVar1 = param_1 + 0xbc;
  local_2c = DAT_018ddaf8;
  uVar2 = FUN_0179d3f0(param_1 + 0x2f4,*(undefined4 *)(param_1 + 0x860),
                       *(undefined4 *)(param_1 + 0x864),iVar1,local_150,
                       *(undefined4 *)(param_1 + 0x948),0x22d8);
  if (0xffffff88 < uVar2) goto LAB_017a412c;
  puVar7 = *(uint **)(param_1 + 0x2f4);
  puVar3 = *(uint **)(param_1 + 0x2f8);
  iVar8 = *(int *)(param_1 + 0x860);
  uVar22 = (int)puVar3 - (int)puVar7 >> 3;
  iVar9 = *(int *)(param_1 + 0x864);
  local_194 = *(int *)(param_1 + 0x2fc);
  iVar21 = *(int *)(param_1 + 0x300);
  bVar6 = local_150[0] == 2;
  uVar10 = *(undefined4 *)(param_1 + 8);
  uVar2 = iVar21 - local_194;
  local_180 = *(byte **)(param_1 + 0x304);
  local_184 = *(byte **)(param_1 + 0x308);
  local_17c = *(byte **)(param_1 + 0x30c);
  local_16c = puVar7;
  local_1ac = param_4;
  if (uVar22 != 0) {
    local_164[0] = 0xff;
    puVar14 = *(uint **)(param_1 + 0xf0);
    local_1a0 = puVar14;
    if (local_150[0] == 0) {
      local_1a0 = local_164;
    }
    uVar19 = *(undefined4 *)(param_1 + 0x948);
    if (local_150[0] == 0) {
LAB_017a49e4:
      uVar11 = uVar2;
    }
    else {
      uVar11 = 1;
      if (local_150[0] != 1) {
        if (local_150[0] - 2U < 2) {
          local_1a0 = local_164;
          uVar11 = FUN_01794f44(uVar19,local_1a0,local_194,uVar2,uVar19,0x22d8);
          if (0xffffff88 < uVar11) goto LAB_017a49e4;
          iVar15 = FUN_01796e04(iVar9,uVar19,local_164[0]);
          if (local_150[0] == 2) {
            iVar15 = iVar15 + local_cc;
          }
          uVar11 = iVar15 + 3;
          goto LAB_017a4514;
        }
        uVar11 = 0;
      }
      local_1a0 = local_164;
    }
LAB_017a4514:
    iVar15 = local_c4;
    local_164[0] = 0x1f;
    FUN_01794dfc(uVar19,local_1a0,local_17c,uVar22,uVar19,0x22d8);
    if (iVar15 == 0) {
      if (local_164[0] < 0x1d) {
        local_18c = FUN_017a2e48(&DAT_00451634,5,uVar19);
        goto LAB_017a4ad4;
      }
LAB_017a4554:
      local_18c = uVar22 * 10;
    }
    else {
      if (iVar15 - 2U < 2) {
        local_18c = FUN_017a2d7c(iVar9 + 0x408,uVar19,local_164[0]);
LAB_017a4ad4:
        if (0xffffff88 < local_18c) goto LAB_017a4554;
      }
      else {
        local_18c = 0;
      }
      pbVar17 = local_17c;
      if (local_17c < local_17c + uVar22) {
        do {
          pbVar16 = pbVar17 + 1;
          local_18c = local_18c + *pbVar17;
          pbVar17 = pbVar16;
        } while (local_17c + uVar22 != pbVar16);
      }
      local_18c = local_18c >> 3;
    }
    iVar15 = local_c8;
    local_164[0] = 0x23;
    FUN_01794dfc(uVar19,local_1a0,local_180,uVar22,uVar19,0x22d8);
    if (iVar15 == 0) {
      if (local_164[0] < 0x24) {
        uVar4 = FUN_017a2e48(&DAT_00451714,6,uVar19);
        goto LAB_017a4a70;
      }
LAB_017a45a0:
      local_170 = (undefined2 *)(uVar22 * 10);
    }
    else {
      if (iVar15 - 2U < 2) {
        uVar4 = FUN_017a2d7c(iVar9 + 0xcb8,uVar19,local_164[0]);
LAB_017a4a70:
        if (0xffffff88 < uVar4) goto LAB_017a45a0;
      }
      else {
        uVar4 = 0;
      }
      pbVar17 = local_180;
      if (local_180 < local_180 + uVar22) {
        do {
          pbVar16 = pbVar17 + 1;
          uVar4 = uVar4 + (byte)(&DAT_0045175c)[*pbVar17];
          pbVar17 = pbVar16;
        } while (local_180 + uVar22 != pbVar16);
      }
      local_170 = (undefined2 *)(uVar4 >> 3);
    }
    iVar15 = local_c0;
    local_164[0] = 0x34;
    FUN_01794dfc(uVar19,local_1a0,local_184,uVar22,uVar19,0x22d8);
    if (iVar15 == 0) {
      if (local_164[0] < 0x35) {
        uVar4 = FUN_017a2e48(&DAT_00451670,6,uVar19);
        goto LAB_017a4a10;
      }
LAB_017a45ec:
      uVar4 = uVar22 * 10;
    }
    else {
      if (iVar15 - 2U < 2) {
        uVar4 = FUN_017a2d7c(iVar9 + 0x70c,uVar19,local_164[0]);
LAB_017a4a10:
        if (0xffffff88 < uVar4) goto LAB_017a45ec;
      }
      else {
        uVar4 = 0;
      }
      pbVar17 = local_184;
      if (local_184 < local_184 + uVar22) {
        do {
          pbVar16 = pbVar17 + 1;
          uVar4 = uVar4 + (byte)(&DAT_004516dc)[*pbVar17];
          pbVar17 = pbVar16;
        } while (local_184 + uVar22 != pbVar16);
      }
      uVar4 = uVar4 >> 3;
    }
    iVar15 = uVar11 + local_18c + local_34 + 6;
    local_1d8 = iVar15;
    if (uVar2 == 0) {
      local_1d8 = 0x100;
    }
    uVar4 = iVar15 + uVar4 + (int)local_170;
    if (uVar2 != 0) {
      local_1d8 = FUN_018462e8(uVar11 << 8,uVar2);
    }
    if (uVar4 <= param_5) {
      if (puVar14 < (uint *)0x53c) {
        puVar14 = (uint *)0x53c;
      }
      uVar5 = FUN_018462e8(uVar4 + ((uint)puVar14 >> 1));
      if (uVar5 < 2) goto LAB_017a41f4;
      iVar15 = FUN_018462e8((uVar4 - uVar11) * 0x100,uVar22);
      uVar11 = FUN_018462e8(uVar4 * 0x100,uVar5);
      local_18c = 0;
      local_190 = 1;
      local_1b8 = param_3;
      local_170 = param_2;
      do {
        local_1b0 = &local_168;
        puVar14 = local_16c + 2;
        if (local_18c == 0) {
          iVar12 = 0x7800;
        }
        else {
          iVar12 = 0;
        }
        uVar22 = (int)puVar3 - (int)local_16c >> 3;
        uVar2 = local_1d8 * (uint)(ushort)local_16c[1] + iVar12 + iVar15;
        if ((uVar11 < uVar2) || ((uint)((int)puVar3 - (int)local_16c) < 9)) {
          uVar4 = 1;
        }
        else {
          uVar4 = 1;
          iVar12 = (uint)*(ushort *)((int)local_16c + 6) + (uint)(ushort)local_16c[1] + 3;
          do {
            iVar12 = iVar12 + (uint)*(ushort *)((int)puVar14 + 6) + (uint)(ushort)puVar14[1] + 3;
            uVar2 = uVar2 + local_1d8 * (uint)(ushort)puVar14[1] + iVar15;
            if ((uVar11 < uVar2) && (uVar2 < (uint)(iVar12 * 0x100))) goto LAB_017a4778;
            uVar4 = uVar4 + 1;
            puVar14 = puVar14 + 2;
          } while (uVar4 < uVar22);
          puVar14 = local_16c + uVar4 * 2;
        }
LAB_017a4778:
        if (puVar3 == puVar14) {
          uVar2 = iVar21 - local_194;
          local_178 = local_1b8;
          goto LAB_017a4214;
        }
        local_164[0] = 0;
        iVar12 = 0;
        puVar13 = local_16c;
        do {
          uVar2 = (uint)(ushort)puVar13[1];
          if ((*(int *)(param_1 + 0x31c) == (int)puVar13 - *(int *)(param_1 + 0x2f4) >> 3) &&
             (*(int *)(param_1 + 0x318) == 1)) {
            uVar2 = uVar2 + 0x10000;
          }
          puVar13 = puVar13 + 2;
          iVar12 = iVar12 + uVar2;
        } while (puVar13 != local_16c + uVar4 * 2);
        iVar18 = 0;
        puVar13 = local_16c;
        do {
          puVar20 = (undefined1 *)(*(ushort *)((int)puVar13 + 6) + 3);
          if (*(int *)(param_1 + 0x31c) == (int)puVar13 - *(int *)(param_1 + 0x2f4) >> 3) {
            if (*(int *)(param_1 + 0x318) == 2) {
              puVar20 = &DAT_00010003 + *(ushort *)((int)puVar13 + 6);
            }
          }
          puVar13 = puVar13 + 2;
          iVar18 = iVar18 + (int)puVar20;
        } while (puVar13 != local_16c + uVar4 * 2);
        local_178 = local_1b8;
        uVar2 = FUN_017a3bd4(iVar9,local_150,local_16c,uVar4,local_194,iVar12,local_180,local_184,
                             local_17c,iVar1,local_170,local_1b8,uVar10,bVar6,local_190,local_1b0,
                             local_1a0,0);
        if (0xffffff88 < uVar2) goto LAB_017a412c;
        if (uVar2 != 0 && uVar2 < (uint)(iVar18 + iVar12)) {
          if (local_168 != 0) {
            bVar6 = false;
          }
          if (local_164[0] != 0) {
            local_190 = 0;
          }
          local_170 = (undefined2 *)((int)local_170 + uVar2);
          local_1ac = local_1ac + iVar18 + iVar12;
          uVar22 = (int)puVar3 - (int)puVar14 >> 3;
          local_180 = local_180 + uVar4;
          local_194 = local_194 + iVar12;
          local_178 = (int)param_2 + (param_3 - (int)local_170);
          local_184 = local_184 + uVar4;
          local_17c = local_17c + uVar4;
          local_16c = puVar14;
        }
        local_18c = local_18c + 1;
        local_1b8 = local_178;
      } while (local_18c < uVar5 - 1);
      uVar2 = iVar21 - local_194;
      goto LAB_017a4214;
    }
LAB_017a4984:
    uVar2 = 0;
    goto LAB_017a412c;
  }
  local_1a0 = local_164;
LAB_017a41f4:
  local_190 = 1;
  local_178 = param_3;
  local_170 = param_2;
LAB_017a4214:
  local_1b0 = &local_168;
  iVar21 = 0;
  local_164[0] = 0;
  if (puVar3 == local_16c) {
    uVar11 = uVar2;
  }
  else {
    uVar11 = 0;
    puVar14 = local_16c;
    do {
      puVar20 = (undefined1 *)(*(ushort *)((int)puVar14 + 6) + 3);
      if (*(int *)(param_1 + 0x31c) == (int)puVar14 - *(int *)(param_1 + 0x2f4) >> 3) {
        if (*(int *)(param_1 + 0x318) == 2) {
          puVar20 = &DAT_00010003 + *(ushort *)((int)puVar14 + 6);
        }
      }
      uVar11 = uVar11 + 1;
      iVar21 = iVar21 + (int)puVar20;
      puVar14 = puVar14 + 2;
    } while (uVar11 < uVar22);
    uVar11 = iVar21 + uVar2;
  }
  uVar2 = FUN_017a3bd4(iVar9,local_150,local_16c,uVar22,local_194,uVar2,local_180,local_184,
                       local_17c,iVar1,local_170,local_178,uVar10,bVar6,local_190,local_1b0,
                       local_1a0,param_6);
  if (0xffffff88 < uVar2) goto LAB_017a412c;
  if (uVar2 == 0 || uVar11 <= uVar2) {
LAB_017a4310:
    if (bVar6 != false) {
      FUN_016dd1aa(iVar9,iVar8,0x408);
    }
LAB_017a432c:
    if ((local_190 != 0) && (((local_c8 - 1U < 2 || (local_c0 - 1U < 2)) || (local_c4 - 1U < 2))))
    goto LAB_017a4984;
  }
  else {
    local_1ac = local_1ac + uVar11;
    local_170 = (undefined2 *)((int)local_170 + uVar2);
    local_16c = puVar3;
    if (local_168 == 0) {
      if (local_164[0] == 0) goto LAB_017a4310;
      if (bVar6 != false) {
        FUN_016dd1aa(iVar9,iVar8,0x408);
      }
    }
    else if (local_164[0] == 0) goto LAB_017a432c;
  }
  if (local_1ac < param_4 + param_5) {
    iVar1 = (param_4 + param_5) - local_1ac;
    uVar2 = iVar1 + 3;
    if ((uint)((int)param_2 + (param_3 - (int)local_170)) < uVar2) {
      uVar2 = 0xffffffba;
      goto LAB_017a412c;
    }
    param_6 = param_6 + iVar1 * 8;
    *local_170 = (short)param_6;
    *(char *)(local_170 + 1) = (char)((uint)param_6 >> 0x10);
    uVar22 = 0x17a43c0;
    FUN_016dd1aa();
    if (0xffffff88 < uVar2) goto LAB_017a412c;
    local_170 = (undefined2 *)((int)local_170 + uVar2);
    if (local_16c < puVar3) {
      local_164[1] = *(uint *)(iVar8 + 0x11e8);
      local_164[2] = *(uint *)(iVar8 + 0x11ec);
      local_164[3] = *(uint *)(iVar8 + 0x11f0);
      if (puVar7 < local_16c) {
        do {
          uVar2 = *puVar7;
          if ((*(int *)(param_1 + 0x31c) == (int)puVar7 - *(int *)(param_1 + 0x2f4) >> 3) &&
             (*(int *)(param_1 + 0x318) == 1)) {
            if (3 < uVar2) goto LAB_017a4480;
            uVar2 = uVar2 - 1;
            if (uVar2 != 0) {
LAB_017a4434:
              if (uVar2 == 1) {
                uVar22 = local_164[3];
              }
              uVar11 = local_164[uVar2 + 1];
              if (uVar2 != 1) goto LAB_017a444c;
              goto LAB_017a4450;
            }
          }
          else if (uVar2 < 4) {
            if ((short)puVar7[1] != 0) {
              uVar2 = uVar2 - 1;
            }
            if (uVar2 != 0) {
              if (uVar2 != 3) goto LAB_017a4434;
              uVar11 = local_164[1] - 1;
LAB_017a444c:
              uVar22 = local_164[2];
LAB_017a4450:
              local_164[3] = uVar22;
              local_164[2] = local_164[1];
              local_164[1] = uVar11;
            }
          }
          else {
LAB_017a4480:
            local_164[3] = local_164[2];
            local_164[2] = local_164[1];
            local_164[1] = uVar2 - 3;
          }
          puVar7 = puVar7 + 2;
        } while (puVar7 < local_16c);
      }
      *(uint *)(iVar9 + 0x11e8) = local_164[1];
      *(uint *)(iVar9 + 0x11ec) = local_164[2];
      *(uint *)(iVar9 + 0x11f0) = local_164[3];
    }
  }
  uVar2 = (int)local_170 - (int)param_2;
LAB_017a412c:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar2;
}

