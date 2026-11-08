// FUN_01818114 @ 01818114 size=2200 calls_out=0 calls_in=1
// strings: invalid distance code | invalid literal/length code | invalid distance too far back

undefined8 FUN_01818114(undefined4 *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  byte *pbVar25;
  uint uVar26;
  undefined4 *puVar27;
  undefined1 *puVar28;
  undefined4 *puVar29;
  int iVar30;
  undefined4 *puVar31;
  undefined1 *puVar32;
  int local_58;
  uint local_2c;
  
  iVar9 = param_1[4];
  iVar21 = param_1[7];
  puVar18 = (undefined4 *)param_1[3];
  pbVar25 = (byte *)*param_1;
  puVar10 = (undefined4 *)((int)puVar18 + iVar9 + -0x101);
  uVar11 = *(uint *)(iVar21 + 0x58);
  pbVar7 = pbVar25 + param_1[1] + -5;
  iVar24 = *(int *)(iVar21 + 0x54);
  iVar12 = *(int *)(iVar21 + 0x2c);
  uVar13 = *(uint *)(iVar21 + 0x30);
  uVar14 = *(uint *)(iVar21 + 0x34);
  uVar8 = *(uint *)(iVar21 + 0x40);
  puVar15 = *(undefined4 **)(iVar21 + 0x38);
  iVar5 = *(int *)(iVar21 + 0x50);
  uVar3 = *(uint *)(iVar21 + 0x5c);
  local_2c = *(uint *)(iVar21 + 0x3c);
  puVar19 = puVar18;
LAB_018181b4:
  if (uVar8 < 0xf) {
    bVar2 = *pbVar25;
    uVar26 = uVar8 + 8;
    pbVar1 = pbVar25 + 1;
    pbVar25 = pbVar25 + 2;
    uVar4 = uVar8 & 0xff;
    uVar8 = uVar8 + 0x10;
    local_2c = local_2c + ((uint)bVar2 << uVar4) + ((uint)*pbVar1 << (uVar26 & 0xff));
  }
  uVar4 = local_2c & ~(-1 << (uVar11 & 0xff));
  iVar30 = iVar5 + uVar4 * 4;
  uVar4 = (uint)*(byte *)(iVar5 + uVar4 * 4);
  uVar8 = uVar8 - *(byte *)(iVar30 + 1);
  local_2c = local_2c >> (uint)*(byte *)(iVar30 + 1);
  if (uVar4 != 0) {
    do {
      if ((uVar4 & 0x10) != 0) {
        uVar4 = uVar4 & 0xf;
        uVar26 = (uint)*(ushort *)(iVar30 + 2);
        if (uVar4 != 0) {
          if (uVar8 < uVar4) {
            local_2c = local_2c + ((uint)*pbVar25 << (uVar8 & 0xff));
            uVar8 = uVar8 + 8;
            pbVar25 = pbVar25 + 1;
          }
          uVar8 = uVar8 - uVar4;
          uVar26 = uVar26 + (local_2c & ~(-1 << uVar4));
          local_2c = local_2c >> uVar4;
        }
        if (uVar8 < 0xf) {
          bVar2 = *pbVar25;
          uVar22 = uVar8 + 8;
          pbVar1 = pbVar25 + 1;
          pbVar25 = pbVar25 + 2;
          uVar4 = uVar8 & 0xff;
          uVar8 = uVar8 + 0x10;
          local_2c = local_2c + ((uint)bVar2 << uVar4) + ((uint)*pbVar1 << (uVar22 & 0xff));
        }
        uVar4 = local_2c & ~(-1 << (uVar3 & 0xff));
        iVar30 = iVar24 + uVar4 * 4;
        bVar2 = *(byte *)(iVar24 + uVar4 * 4);
        uVar4 = (uint)bVar2;
        uVar8 = uVar8 - *(byte *)(iVar30 + 1);
        local_2c = local_2c >> (uint)*(byte *)(iVar30 + 1);
        if ((bVar2 & 0x10) == 0) goto LAB_018182f8;
        goto LAB_01818430;
      }
      if ((uVar4 & 0x40) != 0) {
        if ((uVar4 & 0x20) == 0) {
          param_1[6] = "invalid literal/length code";
          uVar6 = 0x3f51;
        }
        else {
          uVar6 = 0x3f3f;
        }
        *(undefined4 *)(iVar21 + 4) = uVar6;
        goto LAB_01818324;
      }
      iVar16 = (local_2c & ~(-1 << uVar4)) + (uint)*(ushort *)(iVar30 + 2);
      iVar30 = iVar5 + iVar16 * 4;
      uVar4 = (uint)*(byte *)(iVar5 + iVar16 * 4);
      uVar8 = uVar8 - *(byte *)(iVar30 + 1);
      local_2c = local_2c >> (uint)*(byte *)(iVar30 + 1);
    } while (uVar4 != 0);
  }
  puVar20 = (undefined4 *)((int)puVar19 + 1);
  *(char *)puVar19 = (char)*(undefined2 *)(iVar30 + 2);
  goto LAB_018183ac;
  while( true ) {
    iVar16 = (local_2c & ~(-1 << uVar4)) + (uint)*(ushort *)(iVar30 + 2);
    iVar30 = iVar24 + iVar16 * 4;
    bVar2 = *(byte *)(iVar24 + iVar16 * 4);
    uVar4 = (uint)bVar2;
    uVar8 = uVar8 - *(byte *)(iVar30 + 1);
    local_2c = local_2c >> (uint)*(byte *)(iVar30 + 1);
    if ((bVar2 & 0x10) != 0) break;
LAB_018182f8:
    if ((uVar4 & 0x40) != 0) {
      param_1[6] = "invalid distance code";
      *(undefined4 *)(iVar21 + 4) = 0x3f51;
      goto LAB_01818324;
    }
  }
LAB_01818430:
  uVar4 = uVar4 & 0xf;
  if (uVar8 < uVar4) {
    local_2c = local_2c + ((uint)*pbVar25 << (uVar8 & 0xff));
    uVar22 = uVar8 + 8;
    if (uVar22 < uVar4) {
      uVar8 = uVar8 + 0x10;
      pbVar1 = pbVar25 + 1;
      pbVar25 = pbVar25 + 2;
      local_2c = local_2c + ((uint)*pbVar1 << (uVar22 & 0xff));
    }
    else {
      pbVar25 = pbVar25 + 1;
      uVar8 = uVar22;
    }
  }
  uVar8 = uVar8 - uVar4;
  uVar22 = local_2c & ~(-1 << uVar4);
  local_2c = local_2c >> uVar4;
  uVar22 = uVar22 + *(ushort *)(iVar30 + 2);
  uVar4 = (int)puVar19 - (int)((int)puVar18 + (iVar9 - param_2));
  if (uVar22 <= uVar4) {
    puVar32 = (undefined1 *)((int)puVar19 - uVar22);
    do {
      puVar28 = puVar32;
      puVar27 = puVar19;
      *(undefined1 *)puVar27 = *puVar28;
      puVar20 = (undefined4 *)((int)puVar27 + 3);
      uVar26 = uVar26 - 3;
      *(undefined1 *)((int)puVar27 + 1) = puVar28[1];
      *(undefined1 *)((int)puVar27 + 2) = puVar28[2];
      puVar19 = puVar20;
      puVar32 = puVar28 + 3;
    } while (2 < uVar26);
    if (uVar26 != 0) {
      *(undefined1 *)((int)puVar27 + 3) = puVar28[3];
      if (uVar26 == 2) {
        puVar20 = (undefined4 *)((int)puVar27 + 5);
        *(undefined1 *)(puVar27 + 1) = puVar28[4];
      }
      else {
        puVar20 = puVar27 + 1;
      }
    }
    goto LAB_018183ac;
  }
  uVar23 = uVar22 - uVar4;
  if ((uVar13 < uVar23) && (*(int *)(iVar21 + 0x1bc4) != 0)) {
    param_1[6] = "invalid distance too far back";
    *(undefined4 *)(iVar21 + 4) = 0x3f51;
    goto LAB_01818324;
  }
  iVar30 = uVar4 - uVar22;
  puVar20 = puVar19;
  if (uVar14 == 0) {
    iVar16 = iVar12 + iVar30;
    puVar27 = (undefined4 *)((int)puVar15 + iVar16);
    if (uVar26 <= uVar23) goto joined_r0x018184b8;
    if ((uVar23 - 1 < 6) || ((uint)((int)puVar19 - (int)((int)puVar15 + iVar16 + 1)) < 3)) {
      puVar32 = (undefined1 *)((int)puVar19 + -1);
      puVar20 = puVar27;
      do {
        puVar29 = (undefined4 *)((int)puVar20 + 1);
        puVar32 = puVar32 + 1;
        *puVar32 = *(undefined1 *)puVar20;
        puVar20 = puVar29;
      } while (puVar29 != (undefined4 *)((int)puVar27 + uVar23));
    }
    else {
      uVar4 = uVar23 & 0xfffffffc;
      puVar17 = (undefined4 *)(uVar4 + (int)puVar19);
      puVar20 = puVar27;
      puVar29 = puVar19;
      do {
        puVar31 = puVar29 + 1;
        *puVar29 = *puVar20;
        puVar20 = puVar20 + 1;
        puVar29 = puVar31;
      } while (puVar17 != puVar31);
      if (uVar23 != uVar4) {
        *(undefined1 *)puVar17 = *(undefined1 *)((int)puVar27 + (uVar23 & 0xfffffffc));
        if ((uVar23 - uVar4 != 1) &&
           (*(undefined1 *)((int)puVar17 + 1) = *(undefined1 *)((int)puVar27 + uVar4 + 1),
           uVar23 - uVar4 != 2)) {
          *(undefined1 *)((int)puVar17 + 2) = *(undefined1 *)((int)puVar27 + uVar4 + 2);
        }
      }
    }
LAB_01818830:
    uVar26 = uVar26 + iVar30;
    puVar20 = (undefined4 *)((int)puVar19 + uVar23);
    puVar27 = (undefined4 *)((int)((int)puVar19 + uVar23) - uVar22);
    goto joined_r0x018184b8;
  }
  if (uVar23 <= uVar14) {
    puVar27 = (undefined4 *)((int)puVar15 + uVar14 + iVar30);
    if (uVar26 <= uVar23) goto joined_r0x018184b8;
    if ((uVar23 - 1 < 6) || ((uint)((int)puVar19 - (int)((int)puVar15 + uVar14 + iVar30 + 1)) < 3))
    {
      puVar32 = (undefined1 *)((int)puVar19 + -1);
      puVar20 = puVar27;
      do {
        puVar29 = (undefined4 *)((int)puVar20 + 1);
        puVar32 = puVar32 + 1;
        *puVar32 = *(undefined1 *)puVar20;
        puVar20 = puVar29;
      } while (puVar29 != (undefined4 *)((int)puVar27 + uVar23));
    }
    else {
      uVar4 = uVar23 & 0xfffffffc;
      puVar29 = (undefined4 *)((int)puVar27 + uVar4);
      do {
        puVar17 = puVar27 + 1;
        *puVar20 = *puVar27;
        puVar27 = puVar17;
        puVar20 = puVar20 + 1;
      } while (puVar29 != puVar17);
      if (uVar23 != uVar4) {
        *(undefined1 *)((int)puVar19 + (uVar23 & 0xfffffffc)) = *(undefined1 *)puVar29;
        if ((uVar23 - uVar4 != 1) &&
           (*(undefined1 *)((int)puVar19 + uVar4 + 1) = *(undefined1 *)((int)puVar29 + 1),
           uVar23 - uVar4 != 2)) {
          *(undefined1 *)((int)puVar19 + uVar4 + 2) = *(undefined1 *)((int)puVar29 + 2);
        }
      }
    }
    goto LAB_01818830;
  }
  uVar23 = uVar23 - uVar14;
  iVar16 = iVar12 + uVar14 + iVar30;
  puVar27 = (undefined4 *)((int)puVar15 + iVar16);
  if (uVar26 <= uVar23) goto joined_r0x018184b8;
  uVar26 = uVar26 + uVar14 + iVar30;
  if ((uVar23 - 1 < 6) || ((uint)((int)puVar19 - (int)((int)puVar15 + iVar16 + 1)) < 3)) {
    puVar32 = (undefined1 *)((int)puVar19 + -1);
    puVar20 = puVar27;
    do {
      puVar29 = (undefined4 *)((int)puVar20 + 1);
      puVar32 = puVar32 + 1;
      *puVar32 = *(undefined1 *)puVar20;
      puVar20 = puVar29;
    } while (puVar29 != (undefined4 *)((int)puVar27 + uVar23));
  }
  else {
    uVar4 = uVar23 & 0xfffffffc;
    puVar20 = puVar27;
    puVar29 = puVar19;
    do {
      puVar17 = puVar29;
      puVar29 = puVar17 + 1;
      *puVar17 = *puVar20;
      puVar20 = puVar20 + 1;
    } while (puVar29 != (undefined4 *)(uVar4 + (int)puVar19));
    if (uVar23 != uVar4) {
      *(undefined1 *)puVar29 = *(undefined1 *)((int)puVar27 + (uVar23 & 0xfffffffc));
      if ((uVar23 - uVar4 != 1) &&
         (*(undefined1 *)((int)puVar17 + 5) = *(undefined1 *)((int)puVar27 + uVar4 + 1),
         uVar23 - uVar4 != 2)) {
        *(undefined1 *)((int)puVar17 + 6) = *(undefined1 *)((int)puVar27 + uVar4 + 2);
      }
    }
  }
  puVar20 = (undefined4 *)((int)puVar19 + uVar23);
  puVar27 = puVar15;
  if (uVar26 <= uVar14) goto joined_r0x018184b8;
  uVar26 = uVar26 - uVar14;
  if (uVar14 - 1 < 6) {
    local_58 = (int)puVar20 - (int)puVar15;
LAB_0181897c:
    puVar19 = puVar15;
    do {
      puVar27 = (undefined4 *)((int)puVar19 + 1);
      *(undefined1 *)((int)puVar19 + local_58) = *(undefined1 *)puVar19;
      puVar19 = puVar27;
    } while (puVar27 != (undefined4 *)((int)puVar15 + uVar14));
  }
  else {
    local_58 = (int)puVar20 - (int)puVar15;
    if (local_58 - 1U < 3) goto LAB_0181897c;
    uVar4 = uVar14 & 0xfffffffc;
    puVar27 = (undefined4 *)(uVar4 + (int)puVar15);
    puVar19 = puVar15;
    do {
      *(undefined4 *)(local_58 + (int)puVar19) = *puVar19;
      puVar19 = puVar19 + 1;
    } while (puVar27 != puVar19);
    if (uVar14 != uVar4) {
      *(undefined1 *)(puVar20 + (uVar14 >> 2)) = *(undefined1 *)(puVar15 + (uVar14 >> 2));
      if ((uVar14 - uVar4 != 1) &&
         (*(undefined1 *)((int)puVar20 + uVar4 + 1) = *(undefined1 *)((int)puVar27 + 1),
         uVar14 - uVar4 != 2)) {
        *(undefined1 *)((int)puVar20 + uVar4 + 2) = *(undefined1 *)((int)puVar27 + 2);
      }
    }
  }
  puVar20 = (undefined4 *)((int)puVar20 + uVar14);
  puVar27 = (undefined4 *)((int)puVar20 - uVar22);
  if (2 < uVar26) {
    do {
      *(undefined1 *)puVar20 = *(undefined1 *)puVar27;
      *(undefined1 *)((int)puVar20 + 1) = *(undefined1 *)((int)puVar27 + 1);
      *(undefined1 *)((int)puVar20 + 2) = *(undefined1 *)((int)puVar27 + 2);
      uVar26 = uVar26 - 3;
      puVar20 = (undefined4 *)((int)puVar20 + 3);
      puVar27 = (undefined4 *)((int)puVar27 + 3);
joined_r0x018184b8:
    } while (2 < uVar26);
    if (uVar26 == 0) goto LAB_018183ac;
  }
  *(undefined1 *)puVar20 = *(undefined1 *)puVar27;
  if (uVar26 == 2) {
    *(undefined1 *)((int)puVar20 + 1) = *(undefined1 *)((int)puVar27 + 1);
    puVar20 = (undefined4 *)((int)puVar20 + 2);
  }
  else {
    puVar20 = (undefined4 *)((int)puVar20 + 1);
  }
LAB_018183ac:
  puVar19 = puVar20;
  if (pbVar7 <= pbVar25 || puVar10 <= puVar20) {
LAB_01818324:
    pbVar25 = pbVar25 + -(uVar8 >> 3);
    *param_1 = pbVar25;
    if (pbVar25 < pbVar7) {
      iVar5 = (int)pbVar7 - (int)pbVar25;
    }
    else {
      iVar5 = -((int)pbVar25 - (int)pbVar7);
    }
    param_1[1] = iVar5 + 5;
    param_1[3] = puVar19;
    if (puVar19 < puVar10) {
      iVar5 = (int)puVar10 - (int)puVar19;
    }
    else {
      iVar5 = -((int)puVar19 - (int)puVar10);
    }
    param_1[4] = iVar5 + 0x101;
    *(uint *)(iVar21 + 0x3c) = local_2c & ~(-1 << (uVar8 & 7));
    *(uint *)(iVar21 + 0x40) = uVar8 & 7;
    return 0;
  }
  goto LAB_018181b4;
}

