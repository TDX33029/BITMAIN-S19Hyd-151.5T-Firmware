// FUN_01b8e430 @ 01b8e430 size=2200 calls_out=9 calls_in=1
// strings: 

uint FUN_01b8e430(int param_1,undefined2 *param_2,int param_3,uint param_4,uint param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  uint *puVar14;
  uint uVar15;
  undefined2 *puVar16;
  undefined4 uVar17;
  uint *puVar18;
  int iVar19;
  uint *puVar20;
  uint *puVar21;
  uint uVar22;
  uint *puVar23;
  int local_1ac;
  uint *local_198;
  int local_194;
  int local_190;
  int local_18c;
  int local_180;
  uint local_178;
  uint *local_174;
  int local_170;
  int local_16c [2];
  int local_164;
  uint local_160 [4];
  uint local_150 [33];
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_34;
  int local_2c;
  
  local_2c = DAT_01d53560;
  iVar10 = param_1 + 0x2f4;
  uVar1 = FUN_01b89e74(param_1 + 0x2f4,*(undefined4 *)(param_1 + 0x860),
                       *(undefined4 *)(param_1 + 0x864),param_1 + 0xbc,local_160 + 4,
                       *(undefined4 *)(param_1 + 0x948),0x22d8);
  if (0xffffff88 < uVar1) goto LAB_01b8e990;
  iVar11 = *(int *)(param_1 + 0x860);
  iVar12 = *(int *)(param_1 + 0x864);
  uVar13 = *(undefined4 *)(param_1 + 8);
  local_174 = *(uint **)(param_1 + 0x2f4);
  puVar14 = *(uint **)(param_1 + 0x2f8);
  local_180 = *(int *)(param_1 + 0x2fc);
  iVar9 = *(int *)(param_1 + 0x300);
  iVar5 = (int)puVar14 - (int)local_174 >> 3;
  local_18c = *(int *)(param_1 + 0x304);
  local_190 = *(int *)(param_1 + 0x308);
  local_194 = *(int *)(param_1 + 0x30c);
  bVar8 = local_150[0] == 2;
  puVar16 = param_2;
  puVar18 = local_174;
  local_178 = param_4;
  if (iVar5 == 0) {
    iVar19 = 1;
LAB_01b8e738:
    iVar3 = 0;
    piVar7 = &local_164;
    local_170 = 0;
    iVar9 = iVar9 - local_180;
    iVar5 = (int)puVar14 - (int)puVar18 >> 3;
    for (iVar6 = 0; iVar5 != iVar6; iVar6 = iVar6 + 1) {
      piVar7 = (int *)FUN_01b8de78(piVar7,iVar10,puVar18 + iVar6 * 2);
      iVar3 = iVar3 + local_160[0];
    }
    uVar1 = FUN_01b8e030(iVar12,local_160 + 4,puVar18,iVar5,local_180,iVar9,local_18c,local_190,
                         local_194,param_1 + 0xbc,puVar16,(int)param_2 + (param_3 - (int)puVar16),
                         uVar13,bVar8,iVar19,&local_164,&local_170,param_6);
    if (0xffffff88 < uVar1) goto LAB_01b8e990;
    uVar2 = iVar9 + iVar3;
    if (uVar1 != 0 && uVar1 < uVar2) {
      puVar16 = (undefined2 *)((int)puVar16 + uVar1);
      local_178 = local_178 + uVar2;
      if (local_164 != 0) {
        bVar8 = false;
      }
      puVar18 = puVar14;
      if (local_170 != 0) {
        iVar19 = 0;
      }
    }
    if (bVar8 != false) {
      FUN_01bed4e2(iVar12,iVar11,0x408);
    }
    if ((iVar19 == 0) || (((1 < local_c8 - 1U && (1 < local_c0 - 1U)) && (1 < local_c4 - 1U)))) {
      if (local_178 < param_4 + param_5) {
        iVar5 = (param_4 + param_5) - local_178;
        uVar1 = iVar5 + 3;
        if ((uint)((int)param_2 + (param_3 - (int)puVar16)) < uVar1) {
          uVar1 = 0xffffffba;
          goto LAB_01b8e990;
        }
        param_6 = param_6 + iVar5 * 8;
        *puVar16 = (short)param_6;
        *(char *)(puVar16 + 1) = (char)((uint)param_6 >> 0x10);
        FUN_01bed4e2((int)puVar16 + 3,local_178);
        if (0xffffff88 < uVar1) goto LAB_01b8e990;
        puVar16 = (undefined2 *)((int)puVar16 + uVar1);
        if (puVar18 < puVar14) {
          local_160[1] = *(uint *)(iVar11 + 0x11e8);
          local_160[2] = *(uint *)(iVar11 + 0x11ec);
          local_160[3] = *(uint *)(iVar11 + 0x11f0);
          piVar7 = &local_164;
          for (; local_174 < puVar18; local_174 = local_174 + 2) {
            uVar1 = *local_174;
            piVar7 = (int *)FUN_01b8de78(piVar7,iVar10,local_174);
            if (uVar1 < 4) {
              if (local_164 != 0) {
                uVar1 = uVar1 - 1;
              }
              if (uVar1 != 0) {
                if (uVar1 == 3) {
                  uVar2 = local_160[1] - 1;
LAB_01b8ec98:
                  local_160[3] = local_160[2];
                }
                else {
                  uVar22 = uVar1;
                  if (uVar1 == 1) {
                    uVar22 = local_160[3];
                  }
                  uVar2 = local_160[uVar1 + 1];
                  local_160[3] = uVar22;
                  if (uVar1 != 1) goto LAB_01b8ec98;
                }
                local_160[2] = local_160[1];
                local_160[1] = uVar2;
              }
            }
            else {
              local_160[3] = local_160[2];
              local_160[2] = local_160[1];
              local_160[1] = uVar1 - 3;
            }
          }
          *(uint *)(iVar12 + 0x11e8) = local_160[1];
          *(uint *)(iVar12 + 0x11ec) = local_160[2];
          *(uint *)(iVar12 + 0x11f0) = local_160[3];
        }
      }
      uVar1 = (int)puVar16 - (int)param_2;
      goto LAB_01b8e990;
    }
  }
  else {
    uVar17 = *(undefined4 *)(param_1 + 0x948);
    iVar19 = iVar9 - local_180;
    uVar1 = *(uint *)(param_1 + 0xf0);
    local_164 = 0xff;
    if (local_150[0] == 0) {
LAB_01b8e598:
      iVar6 = iVar19;
    }
    else {
      iVar6 = 1;
      if (local_150[0] != 1) {
        if (local_150[0] - 2 < 2) {
          uVar2 = FUN_01b83060(uVar17,&local_164,local_180,iVar19,uVar17,0x22d8);
          if (0xffffff88 < uVar2) goto LAB_01b8e598;
          iVar6 = FUN_01b846ac(iVar12,uVar17,local_164);
          if (local_150[0] == 2) {
            iVar6 = iVar6 + local_cc;
          }
          iVar6 = iVar6 + 3;
        }
        else {
          iVar6 = 0;
        }
      }
    }
    iVar3 = FUN_01b8dedc(local_c4,local_194,0x1f,iVar5,iVar12 + 0x408,0,&DAT_00562e48,5,0x1c,uVar17)
    ;
    local_1ac = FUN_01b8dedc(local_c8,local_18c,0x23,iVar5,iVar12 + 0xcb8,&DAT_00562f6a,
                             &DAT_00562f22,6,0x23,uVar17);
    iVar4 = FUN_01b8dedc(local_c0,local_190,0x34,iVar5,iVar12 + 0x70c,&DAT_00562eec,&DAT_00562e82,6,
                         0x34,uVar17);
    iVar3 = local_34 + 6 + iVar6 + iVar3 + local_1ac;
    if (iVar19 == 0) {
      local_1ac = 0x100;
    }
    uVar2 = iVar3 + iVar4;
    if (iVar19 != 0) {
      local_1ac = FUN_01bf1250(iVar6 << 8,iVar19);
    }
    if (uVar2 <= param_5) {
      uVar22 = 0;
      iVar19 = 1;
      iVar5 = FUN_01bf1250((uVar2 - iVar6) * 0x100,iVar5);
      if (uVar1 < 0x53c) {
        uVar1 = 0x53c;
      }
      iVar6 = FUN_01bf1250(uVar2 + (uVar1 >> 1));
      if (iVar6 == 0) {
        iVar6 = 1;
      }
      uVar2 = FUN_01bf1250(uVar2 * 0x100,iVar6);
      while( true ) {
        if (iVar6 - 1U <= uVar22) break;
        if (uVar22 == 0) {
          iVar3 = 0x7800;
        }
        else {
          iVar3 = 0;
        }
        uVar1 = local_1ac * (uint)(ushort)puVar18[1] + iVar3 + iVar5;
        if (uVar2 < uVar1) {
          uVar15 = 1;
        }
        else {
          iVar3 = (uint)*(ushort *)((int)puVar18 + 6) + (uint)(ushort)puVar18[1] + 3;
          puVar23 = puVar18;
          for (uVar15 = 1; uVar15 < (uint)((int)puVar14 - (int)puVar18 >> 3); uVar15 = uVar15 + 1) {
            uVar1 = uVar1 + local_1ac * (uint)(ushort)puVar23[3] + iVar5;
            iVar3 = iVar3 + (uint)*(ushort *)((int)puVar23 + 0xe) + (uint)(ushort)puVar23[3] + 3;
            if ((uVar2 < uVar1) && (uVar1 < (uint)(iVar3 * 0x100))) break;
            puVar23 = puVar23 + 2;
          }
        }
        puVar23 = puVar18 + uVar15 * 2;
        if (puVar14 == puVar23) break;
        iVar3 = 0;
        local_170 = 0;
        puVar20 = puVar18;
        do {
          puVar21 = puVar20 + 2;
          FUN_01b8de78(local_16c,iVar10,puVar20);
          iVar3 = iVar3 + local_16c[0];
          puVar20 = puVar21;
        } while (puVar21 != puVar23);
        iVar4 = 0;
        piVar7 = &local_164;
        local_198 = puVar18;
        do {
          piVar7 = (int *)FUN_01b8de78(piVar7,iVar10,local_198);
          local_198 = local_198 + 2;
          iVar4 = iVar4 + local_160[0];
        } while (local_198 != puVar23);
        uVar1 = FUN_01b8e030(iVar12,local_160 + 4,puVar18,uVar15,local_180,iVar3,local_18c,local_190
                             ,local_194,param_1 + 0xbc,puVar16,
                             (int)param_2 + (param_3 - (int)puVar16),uVar13,bVar8,iVar19,piVar7,
                             &local_170,0);
        if (0xffffff88 < uVar1) goto LAB_01b8e990;
        if (uVar1 != 0 && uVar1 < (uint)(iVar4 + iVar3)) {
          puVar16 = (undefined2 *)((int)puVar16 + uVar1);
          local_178 = local_178 + iVar4 + iVar3;
          local_180 = local_180 + iVar3;
          local_18c = local_18c + uVar15;
          local_190 = local_190 + uVar15;
          local_194 = local_194 + uVar15;
          if (local_164 != 0) {
            bVar8 = false;
          }
          puVar18 = local_198;
          if (local_170 != 0) {
            iVar19 = 0;
          }
        }
        uVar22 = uVar22 + 1;
      }
      goto LAB_01b8e738;
    }
  }
  uVar1 = 0;
LAB_01b8e990:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar1;
}

