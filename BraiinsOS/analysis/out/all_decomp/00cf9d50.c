// FUN_00cf9d50 @ 00cf9d50 size=2668 calls_out=11 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x00cfa72c) */

void FUN_00cf9d50(uint *param_1,uint *param_2,int param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  double *pdVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  undefined *puVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 *puVar12;
  undefined *puVar13;
  int iVar14;
  int iVar15;
  char cVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  uint *puVar20;
  uint *puVar21;
  uint uVar22;
  bool bVar23;
  uint uVar24;
  uint uVar25;
  bool bVar26;
  double dVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_9c;
  uint *local_98;
  uint local_94;
  uint local_90;
  undefined4 *local_88;
  uint local_84;
  uint local_80;
  uint local_7c [2];
  uint *local_74;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  uint *local_64;
  uint local_60;
  uint local_5c;
  undefined4 *local_58 [2];
  int local_50;
  undefined4 *local_4c;
  undefined4 local_48;
  uint local_44;
  
  puVar11 = (uint *)*param_2;
  local_5c = 0;
  local_90 = 0;
  local_98 = (uint *)0x0;
  if (puVar11 != (uint *)0x0) {
    local_5c = param_2[2];
    local_70 = param_2[1];
    local_68 = 0;
    local_7c[1] = 0;
    local_74 = puVar11;
    local_64 = puVar11;
    local_60 = local_70;
  }
  local_7c[0] = (uint)(puVar11 != (uint *)0x0);
  local_6c = local_7c[0];
  if (param_3 != 0) {
LAB_00cf9fe4:
    uVar29 = FUN_00c38b6c(local_7c);
    puVar11 = (uint *)uVar29;
    if (puVar11 != (uint *)0x0) {
      uVar22 = *puVar11;
      uVar5 = FUN_018462e8(puVar11[1],param_3);
      dVar27 = *(double *)((ulonglong)uVar29 >> 0x20);
      if (local_98 != (uint *)0x0) {
        puVar11 = local_98;
        uVar19 = local_94;
        do {
          uVar25 = 0xffffffff;
          iVar15 = (uint)*(ushort *)((int)puVar11 + 0xb6) << 3;
          puVar7 = puVar11;
          do {
            uVar17 = (uint)*(ushort *)((int)puVar11 + 0xb6);
            puVar6 = puVar11;
            if (iVar15 == 0) goto joined_r0x00cfa0a4;
            uVar17 = *puVar7;
            uVar24 = puVar7[1];
            cVar16 = (uVar22 >= uVar17 && uVar22 != uVar17) - (uVar22 < uVar17);
            iVar15 = iVar15 + -8;
            if (uVar22 == uVar17) {
              cVar16 = (uVar5 >= uVar24 && uVar5 != uVar24) - (uVar5 < uVar24);
            }
            uVar25 = uVar25 + 1;
            puVar7 = puVar7 + 2;
          } while (cVar16 == '\x01');
          uVar17 = uVar25;
          if (cVar16 == '\0') goto LAB_00cf9fd4;
joined_r0x00cfa0a4:
          uVar25 = uVar17;
          if (uVar19 == 0) goto LAB_00cfa0f8;
          uVar19 = uVar19 - 1;
          puVar11 = (uint *)puVar11[uVar25 + 0x2e];
        } while( true );
      }
      uVar18 = 0xb8;
      puVar6 = (uint *)thunk_FUN_016d4a50(0xb8);
      if (puVar6 == (uint *)0x0) goto LAB_00cfa6ec;
      uVar25 = 0;
      *puVar6 = uVar22;
      *(undefined2 *)((int)puVar6 + 0xb6) = 1;
      puVar6[0x2c] = 0;
      puVar6[0x16] = 0;
      puVar6[0x17] = 0;
      puVar6[1] = uVar5;
      local_94 = 0;
      local_98 = puVar6;
      goto LAB_00cf9fc4;
    }
    goto LAB_00cf9dd8;
  }
  iVar15 = FUN_00c38b6c(local_7c);
  if (iVar15 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faf2a4(&DAT_01877530);
  }
LAB_00cf9dd8:
  local_80 = 0;
  local_88 = (undefined4 *)0x0;
  local_5c = 0;
  if (local_98 != (uint *)0x0) {
    local_60 = local_94;
    local_70 = local_94;
    local_64 = local_98;
    local_68 = 0;
    local_74 = local_98;
    local_7c[1] = 0;
    local_5c = local_90;
  }
  local_7c[0] = (uint)(local_98 != (uint *)0x0);
  local_6c = local_7c[0];
LAB_00cf9e5c:
  uVar29 = FUN_00c38b6c(local_7c);
  if ((uint *)uVar29 == (uint *)0x0) {
    *param_1 = (uint)local_98;
    param_1[1] = local_94;
    param_1[2] = local_90;
    param_1[3] = (uint)local_88;
    param_1[4] = local_84;
    param_1[5] = local_80;
    return;
  }
  uVar5 = *(uint *)uVar29;
  dVar27 = *(double *)((ulonglong)uVar29 >> 0x20);
  if (local_88 != (undefined4 *)0x0) {
    uVar22 = local_84;
    puVar12 = local_88;
    do {
      uVar19 = (uint)*(ushort *)((int)puVar12 + 0x8a);
      iVar15 = uVar19 << 2;
      iVar3 = 0x17;
      do {
        iVar14 = iVar3;
        if (iVar15 == 0) goto LAB_00cf9ed8;
        iVar15 = iVar15 + -4;
        bVar26 = uVar5 < (uint)puVar12[iVar14];
        bVar23 = !bVar26 && uVar5 != puVar12[iVar14];
        iVar3 = iVar14 + 1;
      } while ((char)(bVar23 - bVar26) == '\x01');
      if (bVar23 == bVar26) {
        pdVar4 = (double *)(puVar12 + (iVar14 + -0x17) * 2);
        goto LAB_00cf9e4c;
      }
      uVar19 = iVar14 - 0x17;
LAB_00cf9ed8:
      if (uVar22 == 0) goto LAB_00cf9ef0;
      uVar22 = uVar22 - 1;
      puVar12 = (undefined4 *)puVar12[uVar19 + 0x24];
    } while( true );
  }
  goto LAB_00cf9f28;
code_r0x00cfa370:
  *(undefined2 *)((int)puVar7 + 0xb6) = 0;
  puVar7[0x2c] = 0;
  uVar19 = (uint)*(ushort *)((int)puVar9 + 0xb6) + ~local_9c;
  *(short *)((int)puVar7 + 0xb6) = (short)uVar19;
  if (0xb < uVar19) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar19,0xb,&DAT_018ac47c);
  }
  uVar24 = puVar9[local_9c * 2];
  uVar17 = (puVar9 + local_9c * 2)[1];
  uVar29 = *(undefined8 *)(puVar9 + local_9c * 2 + 0x16);
  FUN_016dd1aa(puVar7,puVar9 + (local_9c + 1) * 2,uVar19 * 8);
  FUN_016dd1aa(puVar7 + 0x16,puVar9 + (local_9c + 1) * 2 + 0x16,uVar19 * 8);
  *(short *)((int)puVar9 + 0xb6) = (short)local_9c;
  uVar19 = (uint)*(ushort *)((int)puVar7 + 0xb6);
  iVar15 = uVar19 + 1;
  if (0xb < uVar19) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,iVar15,0xc,&DAT_018ac48c);
  }
  if (uVar22 - local_9c != iVar15) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
  }
  local_b0 = local_b0 + 1;
  FUN_016dd1aa(puVar7 + 0x2e,puVar9 + local_9c + 0x2f,iVar15 * 4);
  uVar22 = 0;
  do {
    uVar10 = (puVar7 + 0x2e)[uVar22];
    *(short *)(uVar10 + 0xb4) = (short)uVar22;
    *(uint **)(uVar10 + 0xb0) = puVar7;
    if (uVar19 <= uVar22) break;
    uVar22 = uVar22 + 1;
  } while (uVar22 <= uVar19);
  puVar11 = puVar7;
  if (!bVar23) {
    puVar11 = puVar9;
  }
  puVar21 = puVar11 + uVar5 * 2;
  uVar19 = (uint)*(ushort *)((int)puVar11 + 0xb6);
  uVar22 = uVar5 + 1;
  if (uVar5 < uVar19) {
    FUN_016dd52c(puVar11 + uVar22 * 2,puVar21);
    FUN_016dd52c(puVar11 + uVar22 * 2 + 0x16,puVar11 + uVar5 * 2 + 0x16,(uVar19 - uVar5) * 8);
    puVar11[uVar5 * 2] = local_a8;
    puVar21[1] = local_ac;
    *(undefined8 *)(puVar11 + uVar5 * 2 + 0x16) = uVar28;
    FUN_016dd52c(puVar11 + uVar5 + 0x30,puVar11 + uVar5 + 0x2f,(uVar19 - uVar5) * 4);
  }
  else {
    puVar21[1] = local_ac;
    puVar11[uVar5 * 2] = local_a8;
    *(undefined8 *)(puVar11 + uVar5 * 2 + 0x16) = uVar28;
  }
  puVar11[uVar5 + 0x2f] = (uint)puVar20;
  *(short *)((int)puVar11 + 0xb6) = (short)(uVar19 + 1);
  if (uVar22 < uVar19 + 2) {
    do {
      uVar22 = uVar5 + 1;
      uVar5 = puVar11[uVar5 + 0x2f];
      *(short *)(uVar5 + 0xb4) = (short)uVar22;
      *(uint **)(uVar5 + 0xb0) = puVar11;
      uVar5 = uVar22;
    } while (uVar19 + 1 != uVar22);
  }
  puVar21 = puVar9 + 0x2c;
  puVar11 = puVar9;
  puVar9 = (uint *)*puVar21;
  puVar20 = puVar7;
  uVar28 = uVar29;
  local_ac = uVar17;
  local_a8 = uVar24;
  if ((uint *)*puVar21 == (uint *)0x0) goto LAB_00cfa57c;
  goto LAB_00cfa2f0;
LAB_00cf9ef0:
  if (puVar12 == (undefined4 *)0x0) {
LAB_00cf9f28:
    puVar12 = (undefined4 *)thunk_FUN_016d4a50(0x90);
    if (puVar12 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x90);
    }
    iVar15 = 0;
    *(undefined2 *)((int)puVar12 + 0x8a) = 1;
    puVar12[0x16] = 0;
    puVar12[0x17] = uVar5;
    *puVar12 = 0;
    puVar12[1] = 0;
    local_84 = 0;
    local_88 = puVar12;
  }
  else {
    local_48 = 0;
    local_4c = puVar12;
    local_44 = uVar19;
    FUN_00c4390c(0,local_58,&local_4c,uVar5,&local_88);
    puVar12 = local_58[0];
    iVar15 = local_50;
  }
  pdVar4 = (double *)(puVar12 + iVar15 * 2);
  local_80 = local_80 + 1;
LAB_00cf9e4c:
  *pdVar4 = 1.0 / dVar27 + *pdVar4;
  goto LAB_00cf9e5c;
LAB_00cfa0f8:
  uVar1 = *(ushort *)((int)puVar11 + 0xb6);
  uVar19 = (uint)uVar1;
  if (uVar19 < 0xb) {
    uVar17 = uVar25 + 1;
    if (uVar17 <= uVar19) {
      iVar15 = (uVar19 - uVar25) * 8;
      FUN_016dd52c(puVar11 + uVar17 * 2,puVar11 + uVar25 * 2,iVar15);
      FUN_016dd52c(puVar11 + uVar17 * 2 + 0x16,puVar11 + uVar25 * 2 + 0x16,iVar15);
    }
    (puVar11 + uVar25 * 2)[1] = uVar5;
    puVar7 = puVar11 + uVar25 * 2;
    *puVar7 = uVar22;
    puVar7[0x16] = 0;
    puVar7[0x17] = 0;
    *(ushort *)((int)puVar11 + 0xb6) = uVar1 + 1;
LAB_00cf9fc4:
    local_90 = local_90 + 1;
LAB_00cf9fd4:
    *(double *)(puVar6 + uVar25 * 2 + 0x16) = dVar27 + *(double *)(puVar6 + uVar25 * 2 + 0x16);
    goto LAB_00cf9fe4;
  }
  uVar19 = 4;
  bVar23 = false;
  if (4 < uVar25) {
    if (uVar25 == 5) {
      uVar19 = 5;
    }
    else {
      if (uVar25 == 6) {
        uVar19 = 5;
        uVar25 = 0;
      }
      else {
        uVar25 = uVar25 - 7;
        uVar19 = 6;
      }
      bVar23 = true;
    }
  }
  uVar18 = 0xb8;
  puVar7 = (uint *)thunk_FUN_016d4a50(0xb8);
  if (puVar7 == (uint *)0x0) {
LAB_00cfa6ec:
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,uVar18);
  }
  *(undefined2 *)((int)puVar7 + 0xb6) = 0;
  puVar7[0x2c] = 0;
  uVar17 = (uint)*(ushort *)((int)puVar11 + 0xb6) + ~uVar19;
  *(short *)((int)puVar7 + 0xb6) = (short)uVar17;
  if (0xb < uVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar17,0xb,&DAT_018ac47c);
  }
  local_a8 = puVar11[uVar19 * 2];
  local_ac = (puVar11 + uVar19 * 2)[1];
  uVar29 = *(undefined8 *)(puVar11 + uVar19 * 2 + 0x16);
  FUN_016dd1aa(puVar7,puVar11 + (uVar19 + 1) * 2,uVar17 * 8);
  FUN_016dd1aa(puVar7 + 0x16,puVar11 + (uVar19 + 1) * 2 + 0x16,uVar17 * 8);
  *(short *)((int)puVar11 + 0xb6) = (short)uVar19;
  puVar6 = puVar7;
  if (!bVar23) {
    puVar6 = puVar11;
  }
  uVar1 = *(ushort *)((int)puVar6 + 0xb6);
  if (uVar25 < uVar1) {
    iVar15 = (uVar1 - uVar25) * 8;
    FUN_016dd52c(puVar6 + (uVar25 + 1) * 2,puVar6 + uVar25 * 2,iVar15);
    FUN_016dd52c(puVar6 + (uVar25 + 1) * 2 + 0x16,puVar6 + uVar25 * 2 + 0x16,iVar15);
  }
  (puVar6 + uVar25 * 2)[1] = uVar5;
  puVar9 = puVar6 + uVar25 * 2;
  *puVar9 = uVar22;
  puVar9[0x16] = 0;
  puVar9[0x17] = 0;
  *(ushort *)((int)puVar6 + 0xb6) = uVar1 + 1;
  if ((uint *)puVar11[0x2c] != (uint *)0x0) {
    local_b0 = 0;
    puVar9 = (uint *)puVar11[0x2c];
    puVar20 = puVar7;
    uVar28 = uVar29;
LAB_00cfa2f0:
    uVar22 = (uint)*(ushort *)((int)puVar9 + 0xb6);
    uVar5 = (uint)(ushort)puVar11[0x2d];
    if (uVar22 < 0xb) {
      puVar11 = puVar9 + uVar5 * 2;
      uVar19 = uVar5 + 1;
      if (uVar5 < uVar22) {
        iVar15 = (uVar22 - uVar5) * 8;
        FUN_016dd52c(puVar9 + uVar19 * 2,puVar11,iVar15);
        FUN_016dd52c(puVar9 + uVar19 * 2 + 0x16,puVar9 + uVar5 * 2 + 0x16,iVar15);
        puVar9[uVar5 * 2] = local_a8;
        puVar11[1] = local_ac;
        *(undefined8 *)(puVar9 + uVar5 * 2 + 0x16) = uVar28;
        FUN_016dd52c(puVar9 + uVar5 + 0x30,puVar9 + uVar5 + 0x2f,(uVar22 - uVar5) * 4);
      }
      else {
        puVar11[1] = local_ac;
        puVar9[uVar5 * 2] = local_a8;
        *(undefined8 *)(puVar9 + uVar5 * 2 + 0x16) = uVar28;
      }
      *(short *)((int)puVar9 + 0xb6) = (short)(uVar22 + 1);
      puVar9[uVar5 + 0x2f] = (uint)puVar20;
      if (uVar19 < uVar22 + 2) {
        do {
          uVar19 = puVar9[uVar5 + 0x2f];
          uVar5 = uVar5 + 1;
          *(short *)(uVar19 + 0xb4) = (short)uVar5;
          *(uint **)(uVar19 + 0xb0) = puVar9;
        } while (uVar22 + 1 != uVar5);
      }
      goto LAB_00cf9fc4;
    }
    bVar23 = false;
    if (uVar5 < 5) {
      local_9c = 4;
    }
    else if (uVar5 == 5) {
      local_9c = 5;
    }
    else if (uVar5 == 6) {
      bVar23 = true;
      uVar5 = 0;
      local_9c = 5;
    }
    else {
      uVar5 = uVar5 - 7;
      bVar23 = true;
      local_9c = 6;
    }
    uVar18 = 0xe8;
    puVar7 = (uint *)thunk_FUN_016d4a50(0xe8);
    if (puVar7 != (uint *)0x0) goto code_r0x00cfa370;
    goto LAB_00cfa6ec;
  }
  local_b0 = 0;
LAB_00cfa57c:
  if (local_98 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac44c);
  }
  puVar11 = (uint *)thunk_FUN_016d4a50(0xe8);
  if (puVar11 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0xe8);
  }
  puVar11[0x2e] = (uint)local_98;
  *(undefined2 *)((int)puVar11 + 0xb6) = 0;
  puVar11[0x2c] = 0;
  if (0xfffffffe < local_94) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018af438);
  }
  *(undefined2 *)(local_98 + 0x2d) = 0;
  local_98[0x2c] = (uint)puVar11;
  if (local_b0 == local_94) {
    uVar5 = (uint)*(ushort *)((int)puVar11 + 0xb6);
    if (uVar5 < 0xb) {
      uVar2 = (undefined2)(uVar5 + 1);
      *(undefined2 *)((int)puVar11 + 0xb6) = uVar2;
      puVar9 = puVar11 + uVar5 * 2;
      *puVar9 = local_a8;
      puVar7[0x2c] = (uint)puVar11;
      puVar9[1] = local_ac;
      *(undefined8 *)(puVar9 + 0x16) = uVar29;
      (puVar11 + 0x2e)[uVar5 + 1] = (uint)puVar7;
      *(undefined2 *)(puVar7 + 0x2d) = uVar2;
      local_98 = puVar11;
      local_94 = local_94 + 1;
      goto LAB_00cf9fc4;
    }
    uVar18 = 0x20;
    puVar8 = &DAT_00565dd0;
    puVar13 = &DAT_018af428;
  }
  else {
    uVar18 = 0x30;
    puVar8 = &DAT_00413115;
    puVar13 = &DAT_018ac46c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa464(puVar8,uVar18,puVar13);
}

