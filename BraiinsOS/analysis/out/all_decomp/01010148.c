// FUN_01010148 @ 01010148 size=2188 calls_out=10 calls_in=1
// strings: 

undefined4 FUN_01010148(uint *param_1,uint *param_2)

{
  ushort uVar1;
  bool bVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ushort *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ushort *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint **local_210;
  uint local_200;
  uint local_1fc;
  uint *local_1e8;
  uint *local_1d0;
  undefined4 local_1cc;
  uint local_1c8;
  uint *local_1c4;
  uint local_1c0;
  uint local_1bc;
  uint local_1b8;
  undefined1 auStack_1b4 [92];
  uint *local_158;
  undefined4 local_154;
  uint local_150;
  uint *local_f8 [2];
  uint *local_f0 [2];
  undefined1 auStack_e8 [96];
  undefined1 auStack_88 [100];
  
  uVar16 = param_2[0x16];
  uVar17 = param_2[0x17];
  if (uVar17 == 0) {
    uVar14 = uVar16 - 1;
    if (uVar14 < param_1[2]) {
LAB_01010178:
      if (*param_2 == 0) {
        return 1;
      }
      uVar16 = param_2[1];
      uVar17 = param_2[2];
LAB_01010294:
      FUN_0100fcd4(uVar16,uVar17,8,0x10);
      return 1;
    }
    if (uVar14 == param_1[2]) {
      puVar4 = param_2;
      if (param_1[5] != 0) {
        puVar4 = (uint *)param_1[3];
      }
      if (!(param_1[5] == 0 || puVar4 == (uint *)0x0)) {
        uVar17 = param_1[4];
        do {
          uVar8 = 0xffffffff;
          uVar18 = (uint)*(ushort *)((int)puVar4 + 0x4d6);
          iVar10 = uVar18 << 3;
          puVar3 = puVar4;
          do {
            if (iVar10 == 0) goto LAB_01010390;
            uVar7 = *puVar3;
            uVar13 = puVar3[1];
            iVar10 = iVar10 + -8;
            uVar8 = uVar8 + 1;
            puVar3 = puVar3 + 2;
            uVar7 = (uint)(uVar13 == 0 && (uVar16 <= uVar7) <= uVar13) -
                    (uint)((uint)(uVar7 <= uVar16) <= -uVar13);
          } while (uVar7 == 1);
          if ((uVar7 & 0xff) == 0) goto LAB_01010178;
          uVar18 = uVar8;
LAB_01010390:
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          puVar4 = (uint *)puVar4[uVar18 + 0x136];
        } while( true );
      }
      if (uVar14 == *param_1) {
        FUN_0100ff5c(param_1);
      }
      FUN_016dd1aa(uVar14 * 0x68 + param_1[1],param_2,0x68);
      param_1[2] = uVar16;
      return 0;
    }
  }
  local_1c4 = param_1 + 3;
  puVar4 = (uint *)*local_1c4;
  if (puVar4 != (uint *)0x0) {
    uVar14 = param_1[4];
    do {
      local_1c8 = (uint)*(ushort *)((int)puVar4 + 0x4d6);
      uVar18 = 0xffffffff;
      iVar10 = local_1c8 << 3;
      puVar3 = puVar4;
      do {
        if (iVar10 == 0) goto LAB_01010264;
        uVar8 = *puVar3;
        uVar7 = puVar3[1];
        iVar10 = iVar10 + -8;
        uVar18 = uVar18 + 1;
        puVar3 = puVar3 + 2;
        uVar8 = (uint)(uVar7 <= uVar17 && (uint)(uVar16 <= uVar8) <= uVar7 - uVar17) -
                (uint)(uVar17 <= uVar7 && (uint)(uVar8 <= uVar16) <= uVar17 - uVar7);
      } while (uVar8 == 1);
      local_1c8 = uVar18;
      if ((uVar8 & 0xff) == 0) {
        if (*param_2 == 0) {
          return 1;
        }
        uVar16 = param_2[1];
        uVar17 = param_2[2];
        goto LAB_01010294;
      }
LAB_01010264:
      if (uVar14 == 0) goto LAB_010103a8;
      uVar14 = uVar14 - 1;
      puVar4 = (uint *)puVar4[local_1c8 + 0x136];
    } while( true );
  }
  local_1d0 = (uint *)0x0;
  puVar4 = (uint *)FUN_0100fcb0();
  *(undefined2 *)((int)puVar4 + 0x4d6) = 1;
  puVar4[0x134] = 0;
  param_1[3] = (uint)puVar4;
  param_1[4] = 0;
  *puVar4 = uVar16;
  puVar4[1] = uVar17;
  FUN_016dd1aa(puVar4 + 0x16,param_2,0x68);
  goto LAB_010102ec;
LAB_010103a8:
  puVar11 = (ushort *)((int)puVar4 + 0x4d6);
  bVar2 = false;
  local_1cc = 0;
  local_1d0 = puVar4;
  if (*puVar11 < 0xb) {
    FUN_0100fe74(auStack_88,&local_1d0,uVar16,uVar17,param_2);
  }
  else {
    uVar14 = 4;
    uVar18 = local_1c8;
    if (4 < local_1c8) {
      if (local_1c8 == 5) {
        uVar14 = 5;
      }
      else {
        if (local_1c8 == 6) {
          uVar14 = 5;
          uVar18 = 0;
        }
        else {
          uVar18 = local_1c8 - 7;
          uVar14 = 6;
        }
        bVar2 = true;
      }
    }
    local_1e8 = (uint *)FUN_0100fcb0();
    *(undefined2 *)((int)local_1e8 + 0x4d6U) = 0;
    local_1e8[0x134] = 0;
    uVar9 = puVar4[uVar14 * 2];
    uVar8 = (puVar4 + uVar14 * 2)[1];
    uVar12 = ~uVar14 + (uint)*puVar11;
    *(undefined2 *)((int)local_1e8 + 0x4d6U) = (short)uVar12;
    puVar3 = puVar4 + uVar14 * 0x1a + 0x16;
    uVar7 = *puVar3;
    uVar5 = puVar3[1];
    uVar13 = puVar3[2];
    FUN_016dd1aa(auStack_88,puVar3 + 3,0x5c);
    if (0xb < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar12,0xb,&DAT_018ab358);
    }
    FUN_016dd1aa(local_1e8,puVar4 + (uVar14 + 1) * 2,uVar12 * 8);
    FUN_016dd1aa(local_1e8 + 0x16,puVar4 + (uVar14 + 1) * 0x1a + 0x16,uVar12 * 0x68);
    *puVar11 = (ushort)uVar14;
    FUN_016dd1aa(auStack_e8,auStack_88,0x5c);
    local_154 = 0;
    local_158 = local_1e8;
    if (!bVar2) {
      local_158 = puVar4;
    }
    local_150 = uVar18;
    FUN_0100fe74(auStack_88,&local_158,uVar16,uVar17,param_2);
    if (uVar7 != 2) {
      local_1c0 = uVar7;
      local_1bc = uVar5;
      local_1b8 = uVar13;
      FUN_016dd1aa(auStack_1b4,auStack_e8,0x5c);
      puVar3 = (uint *)puVar4[0x134];
      if (puVar3 == (uint *)0x0) {
        uVar16 = 0;
      }
      else {
        uVar16 = 0;
        local_200 = uVar8;
        local_1fc = uVar9;
        do {
          uVar17 = (uint)(ushort)puVar4[0x135];
          puVar11 = (ushort *)((int)puVar3 + 0x4d6);
          uVar1 = *puVar11;
          if (uVar1 < 0xb) {
            FUN_0100fd20(puVar3,uVar17,local_1fc,local_200,&local_1c0,local_1e8);
            goto LAB_010102ec;
          }
          local_210 = local_f0;
          uVar14 = 4;
          if (4 < uVar17) {
            if (uVar17 == 5) {
              uVar14 = 5;
            }
            else if (uVar17 == 6) {
              uVar17 = 0;
              uVar14 = 5;
              local_210 = local_f8;
            }
            else {
              local_210 = local_f8;
              uVar17 = uVar17 - 7;
              uVar14 = 6;
            }
          }
          puVar4 = (uint *)FUN_0100fe50();
          puVar15 = (ushort *)((int)puVar4 + 0x4d6);
          *puVar15 = 0;
          puVar4[0x134] = 0;
          uVar9 = puVar3[uVar14 * 2];
          uVar8 = (puVar3 + uVar14 * 2)[1];
          uVar18 = ~uVar14 + (uint)*puVar11;
          *puVar15 = (ushort)uVar18;
          puVar6 = puVar3 + uVar14 * 0x1a + 0x16;
          uVar7 = *puVar6;
          uVar5 = puVar6[1];
          uVar13 = puVar6[2];
          FUN_016dd1aa(auStack_88,puVar6 + 3,0x5c);
          if (0xb < uVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,uVar18,0xb,&DAT_018ab358);
          }
          FUN_016dd1aa(puVar4,puVar3 + (uVar14 + 1) * 2,uVar18 * 8);
          FUN_016dd1aa(puVar4 + 0x16,puVar3 + (uVar14 + 1) * 0x1a + 0x16,uVar18 * 0x68);
          *puVar11 = (ushort)uVar14;
          FUN_016dd1aa(auStack_e8,auStack_88,0x5c);
          uVar18 = (uint)*puVar15;
          iVar10 = uVar18 + 1;
          if (0xb < uVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,iVar10,0xc,&DAT_018ab368);
          }
          if (uVar1 - uVar14 != iVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464(&DAT_004194bf,0x28,&DAT_018ab348);
          }
          uVar16 = uVar16 + 1;
          FUN_016dd1aa(puVar4 + 0x136,puVar3 + uVar14 + 0x137,iVar10 * 4);
          uVar14 = 0;
          do {
            uVar12 = (puVar4 + 0x136)[uVar14];
            *(short *)(uVar12 + 0x4d4) = (short)uVar14;
            *(uint **)(uVar12 + 0x4d0) = puVar4;
            if (uVar18 <= uVar14) break;
            uVar14 = uVar14 + 1;
          } while (uVar14 <= uVar18);
          FUN_016dd1aa(auStack_88,auStack_e8,0x5c);
          local_f8[0] = puVar4;
          local_f0[0] = puVar3;
          FUN_0100fd20(*local_210,uVar17,local_1fc,local_200,&local_1c0,local_1e8);
          FUN_016dd1aa(&local_158,auStack_88,0x5c);
          puVar4 = local_f0[0];
          if (uVar7 == 2) goto LAB_010102ec;
          local_1e8 = local_f8[0];
          local_1c0 = uVar7;
          local_1bc = uVar5;
          local_1b8 = uVar13;
          FUN_016dd1aa(auStack_1b4,&local_158,0x5c);
          puVar3 = (uint *)puVar4[0x134];
          local_200 = uVar8;
          local_1fc = uVar9;
        } while (puVar3 != (uint *)0x0);
      }
      uVar17 = param_1[3];
      if (uVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018ab2e8);
      }
      uVar14 = param_1[4];
      puVar4 = (uint *)FUN_0100fe50();
      *(undefined2 *)((int)puVar4 + 0x4d6) = 0;
      puVar4[0x136] = uVar17;
      puVar4[0x134] = 0;
      if (0xfffffffe < uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018ab318);
      }
      *(undefined2 *)(uVar17 + 0x4d4) = 0;
      *(uint **)(uVar17 + 0x4d0) = puVar4;
      param_1[3] = (uint)puVar4;
      param_1[4] = uVar14 + 1;
      if (uVar16 != uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00413115,0x30,&DAT_018ab308);
      }
      puVar4[0x16] = uVar7;
      puVar4[0x17] = uVar5;
      *(undefined2 *)((int)puVar4 + 0x4d6) = 1;
      puVar4[0x18] = uVar13;
      *puVar4 = uVar9;
      puVar4[1] = uVar8;
      FUN_016dd1aa(puVar4 + 0x19,auStack_1b4,0x5c);
      puVar4[0x137] = (uint)local_1e8;
      *(undefined2 *)(local_1e8 + 0x135) = 1;
      local_1e8[0x134] = (uint)puVar4;
    }
  }
LAB_010102ec:
  param_1[5] = param_1[5] + 1;
  return 0;
}

