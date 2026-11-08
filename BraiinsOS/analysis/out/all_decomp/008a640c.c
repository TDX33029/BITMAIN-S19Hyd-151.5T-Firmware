// FUN_008a640c @ 008a640c size=2276 calls_out=16 calls_in=0
// strings: 

longlong FUN_008a640c(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined2 uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  undefined1 uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  code *pcVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ushort *puVar25;
  char *pcVar26;
  int *unaff_r9;
  undefined4 *puVar27;
  uint uVar28;
  bool bVar29;
  undefined8 uVar30;
  ulonglong uVar31;
  uint local_64;
  uint local_60;
  undefined1 auStack_5c [12];
  undefined4 local_50;
  undefined4 local_4c;
  uint *local_48;
  undefined1 *local_44;
  undefined4 *local_40;
  code *local_3c;
  undefined4 *local_38;
  code *local_34;
  uint *local_30;
  undefined1 *local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0xf)) {
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01863714);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01863714);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x1e)) {
    case 0:
      uVar20 = param_1[0x10];
      uVar18 = param_1[0x11];
      iVar13 = param_1[0x12];
      puVar27 = (undefined4 *)param_1[0x13];
      goto LAB_008a6a18;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01864dac);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01864dac);
    case 3:
      goto switchD_008a660c_caseD_3;
    case 4:
      uVar30 = *(undefined8 *)(param_1 + 0x1f);
      goto LAB_008a6b90;
    }
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x1e)) {
    case 0:
      goto switchD_008a6648_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01864dac);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01864dac);
    case 3:
      goto switchD_008a6648_caseD_3;
    case 4:
      uVar30 = *(undefined8 *)(param_1 + 0x1f);
      goto LAB_008a6994;
    }
  }
  uVar22 = param_1[3];
  param_1[4] = param_1[2];
  param_1[5] = *param_1;
  param_1[6] = param_1[1];
  param_1[7] = uVar22;
  iVar13 = *(int *)(param_1[2] + 0x154);
  puVar27 = *(undefined4 **)(iVar13 + 0xc);
  uVar28 = *(uint *)(iVar13 + 0x10);
  local_64 = uVar22;
  if (uVar28 == 0) {
    unaff_r9 = (int *)FUN_009cc698(&DAT_0034aec2,0xf);
  }
  else {
    uVar23 = 0;
    if (uVar28 != 1) {
      uVar15 = 0;
      uVar24 = uVar28;
      do {
        uVar23 = uVar15 + (uVar24 >> 1);
        uVar14 = (**(code **)((puVar27 + uVar23 * 2)[1] + 0x28))(puVar27[uVar23 * 2]);
        if (uVar22 < uVar14) {
          uVar23 = uVar15;
        }
        uVar24 = uVar24 - (uVar24 >> 1);
        uVar15 = uVar23;
      } while (1 < uVar24);
    }
    puVar17 = puVar27 + uVar23 * 2;
    uVar15 = (**(code **)(puVar17[1] + 0x28))(*puVar17);
    unaff_r9 = puVar17 + 1;
    if (uVar15 != uVar22) {
      if (uVar15 < uVar22) {
        uVar23 = uVar23 + 1;
      }
      local_60 = uVar23;
      if ((uVar23 == 0) || (uVar28 <= uVar23)) {
        local_50 = (**(code **)(puVar27[1] + 0x28))(*puVar27);
        local_4c = (**(code **)(puVar27[uVar28 * 2 + -1] + 0x28))(puVar27[uVar28 * 2 + -2]);
        local_30 = &local_60;
        local_38 = &local_4c;
        local_40 = &local_50;
        local_48 = &local_64;
        local_2c = &LAB_00fac484;
        local_34 = FUN_00f5c9c8;
        local_3c = FUN_00f5c9c8;
        local_44 = &LAB_00fac484;
        FUN_00600d2c(auStack_5c,&DAT_005790de,&local_48);
        unaff_r9 = (int *)FUN_009cc4c8(auStack_5c);
        goto LAB_008a67a4;
      }
      puVar27 = puVar27 + uVar23 * 2;
      uVar28 = (**(code **)(puVar27[-1] + 0x28))(puVar27[-2]);
      uVar23 = (**(code **)(puVar27[1] + 0x28))(*puVar27);
      uVar15 = uVar23 - uVar22;
      if (uVar23 < uVar22 || uVar15 == 0) {
        uVar15 = uVar22 - uVar23;
      }
      uVar23 = uVar28 - uVar22;
      if (uVar28 < uVar22 || uVar23 == 0) {
        uVar23 = uVar22 - uVar28;
      }
      puVar17 = puVar27 + -2;
      unaff_r9 = puVar27 + -1;
      if (uVar15 < uVar23) {
        puVar17 = puVar27;
        unaff_r9 = puVar27 + 1;
      }
    }
    uVar30 = (**(code **)(*unaff_r9 + 0x18))(*puVar17);
    puVar27 = (undefined4 *)uVar30;
    (**(code **)((int)((ulonglong)uVar30 >> 0x20) + 0xc))(&local_48,puVar27);
    if ((puVar27 == (undefined4 *)0x0) ||
       ((local_48 != (uint *)0x8a7f705f || local_40 != (undefined4 *)0xdbccb2ec) ||
        (local_44 != (undefined1 *)0x53bceb79 || local_3c != (code *)0x21873720))) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00344e94,0x23,&DAT_01863704);
    }
    uVar18 = puVar27[1];
    uVar20 = *(undefined4 *)((int)puVar27 + 10);
    uVar21 = *(undefined4 *)((int)puVar27 + 0xe);
    uVar6 = *(undefined2 *)(puVar27 + 2);
    uVar12 = *(undefined1 *)((int)puVar27 + 0x12);
    param_1[8] = *puVar27;
    param_1[9] = uVar18;
    *(undefined1 *)((int)param_1 + 0x32) = uVar12;
    *(undefined4 *)((int)param_1 + 0x2e) = uVar21;
    *(undefined4 *)((int)param_1 + 0x2a) = uVar20;
    *(undefined2 *)(param_1 + 10) = uVar6;
    iVar13 = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 2;
    do {
      param_1[0xd] = iVar13 + 1;
      uVar20 = param_1[5];
      iVar13 = *(int *)(param_1[4] + 0x150);
      param_1[0x10] = uVar20;
      iVar13 = iVar13 + 8;
      puVar27 = param_1 + 9;
      uVar18 = param_1[6];
      *(undefined1 *)(param_1 + 0x1e) = 0;
      param_1[0x11] = uVar18;
      param_1[0x12] = iVar13;
      param_1[0x13] = puVar27;
LAB_008a6a18:
      param_1[0x15] = uVar20;
      param_1[0x16] = uVar18;
      param_1[0x14] = iVar13;
      param_1[0x17] = puVar27;
      puVar17 = (undefined4 *)FUN_016d38c8(4,1);
      if (puVar17 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,4);
      }
      param_1[0x18] = 4;
      param_1[0x19] = puVar17;
      param_1[0x1a] = 4;
      param_1[0x1b] = 0x70;
      param_1[0x1c] = 4;
      *puVar17 = *puVar27;
      *(undefined1 *)(param_1 + 0x2d) = 0;
      param_1[0x1f] = iVar13 + 0xc;
switchD_008a660c_caseD_3:
      iVar13 = FUN_007d67b8(param_1 + 0x1f,param_2);
      if (iVar13 == 0) {
        *(undefined1 *)(param_1 + 0x1e) = 3;
LAB_008a6ca4:
        uVar12 = 3;
LAB_008a6d04:
        *(undefined1 *)(param_1 + 0xf) = uVar12;
        return CONCAT44(unaff_r9,1);
      }
      param_1[0x1d] = iVar13;
      if (*(char *)(param_1 + 0x2d) == '\x03') {
        cVar5 = *(char *)(param_1 + 0x2c);
        bVar29 = cVar5 == '\x03';
        if (bVar29) {
          cVar5 = *(char *)(param_1 + 0x23);
        }
        if (bVar29 && cVar5 == '\x04') {
          FUN_0163c790(param_1 + 0x24);
          if (param_1[0x25] != 0) {
            (**(code **)(param_1[0x25] + 0xc))(param_1[0x26]);
          }
        }
      }
      if (param_1[0x15] == 1) {
        uVar22 = *(int *)param_1[0x14] * param_1[0x16];
        if (0xff < uVar22) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_0034b2fb,0x2e,&local_48,&DAT_0186b108,&DAT_0186afe8);
        }
      }
      else {
        uVar22 = (uint)*(byte *)((int *)param_1[0x14] + 1);
      }
      uVar30 = (**(code **)(*(int *)(param_1[0x1d] + 0x20) + 0x14))
                         (*(undefined4 *)(param_1[0x1d] + 0x1c),param_1[0x15],uVar22,param_1[0x1b],
                          param_1[0x1c],param_1[0x19],param_1[0x1a]);
      *(undefined8 *)(param_1 + 0x1f) = uVar30;
LAB_008a6b90:
      uVar31 = (**(code **)((int)((ulonglong)uVar30 >> 0x20) + 0xc))((int)uVar30,param_2);
      unaff_r9 = (int *)(uVar31 >> 0x20);
      if ((uVar31 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x1e) = 4;
        goto LAB_008a6ca4;
      }
      puVar27 = (undefined4 *)param_1[0x20];
      uVar18 = param_1[0x1f];
      pcVar19 = (code *)*puVar27;
      if (pcVar19 != (code *)0x0) {
        (*pcVar19)(uVar18);
      }
      if (puVar27[1] != 0) {
        thunk_FUN_016d3fb4(uVar18);
      }
      pcVar26 = (char *)param_1[0x1d];
      if (*pcVar26 == '\0') {
        bVar29 = (bool)hasExclusiveAccess(pcVar26);
        if (!bVar29) goto LAB_008a6c60;
        *pcVar26 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_008a6c60:
        FUN_01280da8(pcVar26);
      }
      FUN_0128236c(pcVar26);
      FUN_0163af68(pcVar26,1,pcVar26);
      if (param_1[0x18] != 0) {
        thunk_FUN_016d3fb4(param_1[0x19]);
      }
      *(undefined1 *)(param_1 + 0x1e) = 1;
      if ((uVar31 & 1) != 0) goto LAB_008a6ca4;
      FUN_0081b77c(param_1 + 0x10);
      if (unaff_r9 != (int *)0x0) goto LAB_008a67a4;
      iVar13 = *(int *)(param_1[4] + 0x150);
      param_1[0x10] = param_1[5];
      param_1[0x12] = iVar13 + 8;
      param_1[0x11] = param_1[6];
      param_1[0x13] = param_1 + 10;
      *(undefined1 *)(param_1 + 0x1e) = 0;
switchD_008a6648_caseD_0:
      iVar13 = param_1[0x12];
      puVar25 = (ushort *)param_1[0x13];
      param_1[0x14] = iVar13;
      param_1[0x15] = param_1[0x10];
      param_1[0x16] = param_1[0x11];
      param_1[0x17] = puVar25;
      puVar16 = (uint *)FUN_016d38c8(4,1);
      if (puVar16 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,4);
      }
      uVar8 = puVar25[2];
      unaff_r9 = (int *)(uint)(byte)puVar25[1];
      bVar1 = *(byte *)((int)puVar25 + 3);
      bVar2 = *(byte *)((int)puVar25 + 5);
      param_1[0x1b] = 8;
      bVar3 = *(byte *)((int)puVar25 + 9);
      param_1[0x1c] = 4;
      param_1[0x1a] = 4;
      param_1[0x18] = 4;
      uVar9 = puVar25[5];
      uVar7 = *puVar25;
      uVar10 = puVar25[4];
      bVar4 = *(byte *)((int)puVar25 + 7);
      uVar11 = puVar25[3];
      param_1[0x1f] = iVar13 + 0xc;
      param_1[0x19] = puVar16;
      *(undefined1 *)(param_1 + 0x2d) = 0;
      *puVar16 = (uVar7 & 0xff) << 8 |
                 ((uint)(byte)uVar11 << 6 | (uint)bVar2 << 7 | (uint)bVar4 << 5 |
                 (uint)(byte)uVar10 << 4) & 0xff | uVar7 >> 8 & 0xf |
                 (((uint)(byte)uVar9 << 6 | (uint)bVar3 << 7) & 0xff | (uint)unaff_r9 & 0x3f) <<
                 0x10 | ((byte)uVar8 & 7 | (bVar1 & 7) << 4) << 0x18;
switchD_008a6648_caseD_3:
      iVar13 = FUN_007d67b8(param_1 + 0x1f,param_2);
      if (iVar13 == 0) {
        *(undefined1 *)(param_1 + 0x1e) = 3;
LAB_008a6d00:
        uVar12 = 4;
        goto LAB_008a6d04;
      }
      param_1[0x1d] = iVar13;
      if (*(char *)(param_1 + 0x2d) == '\x03') {
        cVar5 = *(char *)(param_1 + 0x2c);
        bVar29 = cVar5 == '\x03';
        if (bVar29) {
          cVar5 = *(char *)(param_1 + 0x23);
        }
        if (bVar29 && cVar5 == '\x04') {
          FUN_0163c790(param_1 + 0x24);
          if (param_1[0x25] != 0) {
            (**(code **)(param_1[0x25] + 0xc))(param_1[0x26]);
          }
        }
      }
      if (param_1[0x15] == 1) {
        uVar22 = *(int *)param_1[0x14] * param_1[0x16];
        if (0xff < uVar22) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_0034b2fb,0x2e,&local_48,&DAT_0186b108,&DAT_0186afe8);
        }
      }
      else {
        uVar22 = (uint)*(byte *)((int *)param_1[0x14] + 1);
      }
      uVar30 = (**(code **)(*(int *)(param_1[0x1d] + 0x20) + 0x14))
                         (*(undefined4 *)(param_1[0x1d] + 0x1c),param_1[0x15],uVar22,param_1[0x1b],
                          param_1[0x1c],param_1[0x19],param_1[0x1a]);
      *(undefined8 *)(param_1 + 0x1f) = uVar30;
LAB_008a6994:
      uVar31 = (**(code **)((int)((ulonglong)uVar30 >> 0x20) + 0xc))((int)uVar30,param_2);
      unaff_r9 = (int *)(uVar31 >> 0x20);
      if ((uVar31 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x1e) = 4;
        goto LAB_008a6d00;
      }
      puVar27 = (undefined4 *)param_1[0x20];
      uVar18 = param_1[0x1f];
      pcVar19 = (code *)*puVar27;
      if (pcVar19 != (code *)0x0) {
        (*pcVar19)(uVar18);
      }
      if (puVar27[1] != 0) {
        thunk_FUN_016d3fb4(uVar18);
      }
      pcVar26 = (char *)param_1[0x1d];
      if (*pcVar26 == '\0') {
        bVar29 = (bool)hasExclusiveAccess(pcVar26);
        if (!bVar29) goto LAB_008a6cbc;
        *pcVar26 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_008a6cbc:
        FUN_01280da8(pcVar26);
      }
      FUN_0128236c(pcVar26);
      FUN_0163af68(pcVar26,1,pcVar26);
      if (param_1[0x18] != 0) {
        thunk_FUN_016d3fb4(param_1[0x19]);
      }
      *(undefined1 *)(param_1 + 0x1e) = 1;
      if ((uVar31 & 1) != 0) goto LAB_008a6d00;
      FUN_0081b77c(param_1 + 0x10);
      if (unaff_r9 != (int *)0x0) goto LAB_008a67a4;
      iVar13 = param_1[0xd];
    } while (iVar13 < (int)param_1[0xe]);
    unaff_r9 = (int *)0x0;
  }
LAB_008a67a4:
  *(undefined1 *)(param_1 + 0xf) = 1;
  return ZEXT48(unaff_r9) << 0x20;
}

