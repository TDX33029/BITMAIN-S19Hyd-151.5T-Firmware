// FUN_0083fe60 @ 0083fe60 size=2608 calls_out=4 calls_in=0
// strings: 

void FUN_0083fe60(uint *param_1,short param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  short *psVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint *puVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  bool bVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  uint local_128;
  uint local_120;
  undefined4 *local_a8;
  undefined4 **local_a4;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint local_78;
  uint local_74;
  uint uStack_70;
  uint uStack_6c;
  uint local_68;
  uint local_64;
  uint uStack_60;
  uint local_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  
  puVar25 = &DAT_018cca28;
  DataMemoryBarrier(0xb);
  if (DAT_018ccb20 != 0) {
    local_a4 = &local_a8;
    local_a8 = &DAT_018cca28;
    FUN_015eedc4(&DAT_018ccb20,1,&local_a4,&DAT_018608c8,&DAT_018ac9b8);
  }
  puVar21 = (uint *)((uint)&local_a0 | 4);
  iVar18 = 0;
  do {
    if (DAT_018ccb14 * 2 == iVar18) {
      iVar18 = 0;
      puVar25 = (uint *)&DAT_018ccb28;
      *param_1 = 2;
      param_1[1] = 0;
      DataMemoryBarrier(0xb);
      if (DAT_018ccc20 != 0) {
        local_a4 = &local_a8;
        local_a8 = (undefined4 *)&DAT_018ccb28;
        FUN_015eedc4(&DAT_018ccc20,1,&local_a4,&DAT_018608c8,&DAT_018ac9b8);
      }
      goto LAB_0083ff48;
    }
    psVar19 = (short *)(DAT_018ccb10 + iVar18);
    iVar18 = iVar18 + 2;
    iVar23 = DAT_018ccb10;
    uVar26 = DAT_018ccb14;
  } while (*psVar19 != param_2);
  goto LAB_00840234;
  while (psVar19 = (short *)(DAT_018ccc10 + iVar18), iVar18 = iVar18 + 2, iVar23 = DAT_018ccc10,
        uVar26 = DAT_018ccc14, *psVar19 != param_2) {
LAB_0083ff48:
    if (DAT_018ccc14 * 2 == iVar18) {
      iVar18 = 0;
      puVar25 = (uint *)&DAT_018ccc28;
      *param_1 = 2;
      param_1[1] = 0;
      DataMemoryBarrier(0xb);
      if (DAT_018ccd20 != 0) {
        local_a4 = &local_a8;
        local_a8 = (undefined4 *)&DAT_018ccc28;
        FUN_015eedc4(&DAT_018ccd20,1,&local_a4,&DAT_018608c8,&DAT_018ac9b8);
      }
      goto LAB_0083ff98;
    }
  }
  goto LAB_00840234;
  while (psVar19 = (short *)(DAT_018ccd10 + iVar18), iVar18 = iVar18 + 2, iVar23 = DAT_018ccd10,
        uVar26 = DAT_018ccd14, *psVar19 != param_2) {
LAB_0083ff98:
    if (DAT_018ccd14 * 2 == iVar18) {
      iVar18 = 0;
      puVar25 = (uint *)&DAT_018ccf28;
      *param_1 = 2;
      param_1[1] = 0;
      DataMemoryBarrier(0xb);
      if (DAT_018cd020 != 0) {
        local_a4 = &local_a8;
        local_a8 = (undefined4 *)&DAT_018ccf28;
        FUN_015eedc4(&DAT_018cd020,1,&local_a4,&DAT_018608c8,&DAT_018ac9b8);
      }
      goto LAB_0083ffe8;
    }
  }
  goto LAB_00840234;
  while (psVar19 = (short *)(DAT_018cd010 + iVar18), iVar18 = iVar18 + 2, iVar23 = DAT_018cd010,
        uVar26 = DAT_018cd014, *psVar19 != param_2) {
LAB_0083ffe8:
    if (DAT_018cd014 * 2 == iVar18) {
      iVar18 = 0;
      puVar25 = (uint *)&DAT_018cd228;
      *param_1 = 2;
      param_1[1] = 0;
      DataMemoryBarrier(0xb);
      if (DAT_018cd320 != 0) {
        local_a4 = &local_a8;
        local_a8 = (undefined4 *)&DAT_018cd228;
        FUN_015eedc4(&DAT_018cd320,1,&local_a4,&DAT_018608c8,&DAT_018ac9b8);
      }
      goto LAB_00840038;
    }
  }
  goto LAB_00840234;
  while (psVar19 = (short *)(DAT_018cd310 + iVar18), iVar18 = iVar18 + 2, iVar23 = DAT_018cd310,
        uVar26 = DAT_018cd314, *psVar19 != param_2) {
LAB_00840038:
    if (DAT_018cd314 * 2 == iVar18) {
      iVar18 = 0;
      puVar25 = (uint *)&DAT_018cd128;
      *param_1 = 2;
      param_1[1] = 0;
      DataMemoryBarrier(0xb);
      if (DAT_018cd220 != 0) {
        local_a4 = &local_a8;
        local_a8 = (undefined4 *)&DAT_018cd128;
        FUN_015eedc4(&DAT_018cd220,1,&local_a4,&DAT_018608c8,&DAT_018ac9b8);
      }
      goto LAB_00840088;
    }
  }
  goto LAB_00840234;
  while (psVar19 = (short *)(DAT_018cd210 + iVar18), iVar18 = iVar18 + 2, iVar23 = DAT_018cd210,
        uVar26 = DAT_018cd214, *psVar19 != param_2) {
LAB_00840088:
    if (DAT_018cd214 * 2 == iVar18) {
      iVar18 = 0;
      puVar25 = (uint *)&DAT_018cd328;
      *param_1 = 2;
      param_1[1] = 0;
      DataMemoryBarrier(0xb);
      if (DAT_018cd420 != 0) {
        local_a4 = &local_a8;
        local_a8 = (undefined4 *)&DAT_018cd328;
        FUN_015eedc4(&DAT_018cd420,1,&local_a4,&DAT_018608c8,&DAT_018ac9b8);
      }
      goto LAB_008400d8;
    }
  }
  goto LAB_00840234;
  while (psVar19 = (short *)(DAT_018cd410 + iVar18), iVar18 = iVar18 + 2, iVar23 = DAT_018cd410,
        uVar26 = DAT_018cd414, *psVar19 != param_2) {
LAB_008400d8:
    if (DAT_018cd414 * 2 == iVar18) {
      iVar18 = 0;
      puVar25 = (uint *)&DAT_018ccd28;
      *param_1 = 2;
      param_1[1] = 0;
      DataMemoryBarrier(0xb);
      if (DAT_018cce20 != 0) {
        local_a4 = &local_a8;
        local_a8 = (undefined4 *)&DAT_018ccd28;
        FUN_015eedc4(&DAT_018cce20,1,&local_a4,&DAT_018608c8,&DAT_018ac9b8);
      }
      goto LAB_00840128;
    }
  }
  goto LAB_00840234;
  while (psVar19 = (short *)(DAT_018cce10 + iVar18), iVar18 = iVar18 + 2, iVar23 = DAT_018cce10,
        uVar26 = DAT_018cce14, *psVar19 != param_2) {
LAB_00840128:
    if (DAT_018cce14 * 2 == iVar18) {
      iVar18 = 0;
      puVar25 = (uint *)&DAT_018cce28;
      *param_1 = 2;
      param_1[1] = 0;
      DataMemoryBarrier(0xb);
      if (DAT_018ccf20 != 0) {
        local_a4 = &local_a8;
        local_a8 = (undefined4 *)&DAT_018cce28;
        FUN_015eedc4(&DAT_018ccf20,1,&local_a4,&DAT_018608c8,&DAT_018ac9b8);
      }
      goto LAB_00840178;
    }
  }
  goto LAB_00840234;
LAB_008401c8:
  if (DAT_018cd114 * 2 != iVar18) goto code_r0x008401d0;
  iVar18 = 0;
  puVar25 = (uint *)&DAT_018cc928;
  *param_1 = 2;
  param_1[1] = 0;
  DataMemoryBarrier(0xb);
  if (DAT_018cca20 != 0) {
    local_a4 = &local_a8;
    local_a8 = (undefined4 *)&DAT_018cc928;
    FUN_015eedc4(&DAT_018cca20,1,&local_a4,&DAT_018608c8,&DAT_018ac9b8);
  }
  do {
    if (DAT_018cca14 * 2 == iVar18) {
      *param_1 = 2;
      param_1[1] = 0;
      return;
    }
    psVar19 = (short *)(DAT_018cca10 + iVar18);
    iVar18 = iVar18 + 2;
    iVar23 = DAT_018cca10;
    uVar26 = DAT_018cca14;
  } while (*psVar19 != param_2);
  goto LAB_00840234;
code_r0x008401d0:
  psVar19 = (short *)(DAT_018cd110 + iVar18);
  iVar18 = iVar18 + 2;
  iVar23 = DAT_018cd110;
  uVar26 = DAT_018cd114;
  if (*psVar19 == param_2) goto LAB_00840234;
  goto LAB_008401c8;
  while (psVar19 = (short *)(DAT_018ccf10 + iVar18), iVar18 = iVar18 + 2, iVar23 = DAT_018ccf10,
        uVar26 = DAT_018ccf14, *psVar19 != param_2) {
LAB_00840178:
    if (DAT_018ccf14 * 2 == iVar18) {
      iVar18 = 0;
      puVar25 = (uint *)&DAT_018cd028;
      *param_1 = 2;
      param_1[1] = 0;
      DataMemoryBarrier(0xb);
      if (DAT_018cd120 != 0) {
        local_a4 = &local_a8;
        local_a8 = (undefined4 *)&DAT_018cd028;
        FUN_015eedc4(&DAT_018cd120,1,&local_a4,&DAT_018608c8,&DAT_018ac9b8);
      }
      goto LAB_008401c8;
    }
  }
LAB_00840234:
  uVar29 = puVar25[0x2e];
  uVar27 = puVar25[0x30];
  uVar31 = *(undefined8 *)(puVar25 + 0x24);
  uVar32 = *(undefined8 *)(puVar25 + 0x26);
  uVar33 = *(undefined8 *)(puVar25 + 0x28);
  uVar2 = puVar25[0x2f];
  uVar3 = puVar25[0x2a];
  uVar4 = puVar25[0x2b];
  uVar5 = puVar25[0x2c];
  uVar20 = puVar25[0x1d];
  uVar22 = puVar25[0x1e];
  uVar24 = puVar25[0x1f];
  *puVar21 = puVar25[0x1c];
  puVar21[1] = uVar20;
  puVar21[2] = uVar22;
  puVar21[3] = uVar24;
  uVar20 = puVar25[0x21];
  uVar22 = puVar25[0x22];
  uVar24 = puVar25[0x23];
  uVar6 = 0;
  puVar21[4] = puVar25[0x20];
  puVar21[5] = uVar20;
  puVar21[6] = uVar22;
  puVar21[7] = uVar24;
  uVar20 = uVar26 * 2;
  if (((int)uVar26 < 0) || (0x7ffffffe < uVar20)) {
LAB_0084032c:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar6,uVar20);
  }
  uVar22 = puVar25[0xc];
  uVar24 = puVar25[0xd];
  uVar7 = puVar25[0xe];
  uVar8 = puVar25[0x10];
  uVar9 = puVar25[0x11];
  uVar10 = puVar25[0x12];
  uVar11 = puVar25[0x18];
  uVar12 = puVar25[0x19];
  uVar13 = puVar25[0x1a];
  uVar14 = puVar25[0x14];
  uVar15 = puVar25[0x15];
  uVar16 = puVar25[0x16];
  if (uVar20 == 0) {
    uVar17 = 2;
    local_120 = 0;
  }
  else {
    uVar17 = thunk_FUN_016d4a50(uVar20);
    local_120 = uVar26;
    if (uVar17 == 0) {
      uVar6 = 2;
      goto LAB_0084032c;
    }
  }
  FUN_016dd1aa(uVar17,iVar23,uVar20);
  bVar30 = (*puVar25 & 1) == 0;
  if (bVar30) {
    uVar20 = puVar25[6];
  }
  else {
    local_78 = puVar25[2];
    local_74 = puVar25[3];
    uStack_70 = puVar25[4];
    uStack_6c = puVar25[5];
    uVar20 = puVar25[6];
  }
  bVar1 = (uVar20 & 1) == 0;
  if (bVar1) {
    uVar20 = puVar25[0x32];
  }
  else {
    local_5c = puVar25[0xb];
    local_68 = puVar25[8];
    local_64 = puVar25[9];
    uStack_60 = puVar25[10];
    uVar20 = puVar25[0x32];
  }
  if (uVar20 == 2) {
    uVar28 = 2;
  }
  else {
    local_128 = puVar25[0x38];
    uVar28 = 0;
    if ((uVar20 & 1) != 0) {
      local_58 = puVar25[0x33];
      uStack_54 = puVar25[0x34];
      uStack_50 = puVar25[0x35];
      uStack_4c = puVar25[0x36];
      uStack_48 = puVar25[0x37];
      uVar28 = 1;
    }
  }
  *param_1 = (uint)!bVar30;
  param_1[0x39] = local_120;
  param_1[3] = local_74;
  param_1[4] = uStack_70;
  param_1[5] = uStack_6c;
  param_1[0x3b] = uVar26;
  param_1[0x3a] = uVar17;
  param_1[6] = (uint)!bVar1;
  param_1[9] = local_64;
  param_1[10] = uStack_60;
  param_1[0xb] = local_5c;
  param_1[8] = local_68;
  param_1[1] = 0;
  param_1[7] = 0;
  param_1[0xc] = uVar22;
  param_1[0xd] = uVar24;
  param_1[0xe] = uVar7;
  param_1[0x10] = uVar8;
  param_1[0x11] = uVar9;
  param_1[0x12] = uVar10;
  param_1[0x14] = uVar14;
  param_1[0x15] = uVar15;
  param_1[0x16] = uVar16;
  param_1[0x18] = uVar11;
  param_1[0x19] = uVar12;
  param_1[2] = local_78;
  param_1[0x1a] = uVar13;
  uVar26 = puVar25[0x3c];
  param_1[0x1b] = local_a0;
  param_1[0x1c] = uStack_9c;
  param_1[0x1d] = uStack_98;
  param_1[0x1e] = uStack_94;
  param_1[0x1f] = local_90;
  param_1[0x20] = uStack_8c;
  param_1[0x21] = uStack_88;
  param_1[0x22] = uStack_84;
  param_1[0x23] = uStack_80;
  param_1[0x2a] = uVar3;
  param_1[0x2b] = uVar4;
  param_1[0x2e] = uVar29;
  param_1[0x2f] = uVar2;
  *(undefined8 *)(param_1 + 0x24) = uVar31;
  *(undefined8 *)(param_1 + 0x26) = uVar32;
  *(undefined8 *)(param_1 + 0x28) = uVar33;
  param_1[0x2c] = uVar5;
  param_1[0x32] = uVar28;
  param_1[0x30] = uVar27;
  param_1[0x33] = local_58;
  param_1[0x34] = uStack_54;
  param_1[0x35] = uStack_50;
  param_1[0x36] = uStack_4c;
  param_1[0x37] = uStack_48;
  *(short *)(param_1 + 0x3c) = (short)uVar26;
  param_1[0x38] = local_128;
  return;
}

