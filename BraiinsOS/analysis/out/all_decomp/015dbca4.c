// FUN_015dbca4 @ 015dbca4 size=5416 calls_out=0 calls_in=3
// strings: 

void FUN_015dbca4(undefined4 *param_1,uint3 *param_2)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  uint3 uVar4;
  uint *puVar5;
  uint3 *puVar6;
  uint uVar7;
  uint uVar8;
  uint3 *puVar9;
  uint uVar10;
  uint3 *puVar11;
  uint uVar12;
  uint3 *puVar13;
  uint uVar14;
  uint3 *puVar15;
  uint uVar16;
  uint3 *puVar17;
  byte *pbVar18;
  undefined4 uVar19;
  uint3 *puVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint3 *puVar24;
  uint3 *puVar25;
  uint3 *puVar26;
  uint uVar27;
  uint3 *puVar28;
  uint3 *puVar29;
  uint3 *puVar30;
  uint3 *unaff_r9;
  uint3 *unaff_r10;
  uint3 *puVar31;
  uint3 *in_r12;
  bool bVar32;
  uint3 *local_b4;
  uint3 *local_b0;
  uint3 *local_ac;
  uint3 *local_a8;
  uint3 *local_a4;
  uint3 *local_a0;
  uint3 *local_9c;
  uint3 *local_98;
  uint3 *local_94;
  uint3 *local_90;
  uint3 *local_8c;
  uint3 *local_88;
  uint3 *local_84;
  uint3 *local_80;
  uint3 *local_7c;
  uint3 *local_78;
  uint3 *local_48;
  uint3 *local_44;
  uint3 *local_30;
  uint local_2c;
  uint3 *local_28;
  uint3 *local_24;
  
  local_44 = *(uint3 **)param_2;
  local_30 = *(uint3 **)(param_2 + 5);
  local_48 = *(uint3 **)(param_2 + 1);
  local_24 = *(uint3 **)(param_2 + 6);
  local_28 = *(uint3 **)(param_2 + 7);
  puVar5 = param_1 + 2;
  puVar26 = *(uint3 **)(param_2 + 2);
  puVar20 = *(uint3 **)(param_2 + 4);
  uVar12 = (int)local_30 * -8 & 0x38;
  uVar14 = 0xffffffff;
  puVar24 = *(uint3 **)(param_2 + 3);
  puVar28 = (uint3 *)(0xffffffff >> uVar12);
  local_2c = 0;
  puVar6 = (uint3 *)((int)puVar26 + (int)puVar20);
  uVar12 = uVar12 - 0x20;
  uVar7 = (int)puVar24 - (int)puVar20;
  uVar8 = (uint)local_30 & 0xff;
  if (-1 < (int)uVar12) {
    uVar14 = 0xffffffff >> (uVar12 & 0xff);
  }
  puVar17 = puVar24;
  if (-1 < (int)uVar12) {
    puVar28 = (uint3 *)0x0;
  }
LAB_015dbd58:
  puVar11 = local_24;
LAB_015dbd64:
  if (local_28 == (uint3 *)0x0) {
LAB_015dcf40:
    uVar19 = 0;
    goto LAB_015dd170;
  }
  puVar15 = (uint3 *)((int)puVar11 + 1);
  if ((byte)param_2[8] == 0) {
    switch((uint)local_30 & 0xff) {
    case 1:
      unaff_r10 = (uint3 *)((int)puVar11 + 1);
      puVar31 = (uint3 *)(uint)(byte)*puVar11;
      *(byte **)(param_2 + 7) = (byte *)((int)local_28 + -1);
      *(uint3 **)(param_2 + 6) = unaff_r10;
      if ((byte *)((int)local_28 + -1) == (byte *)0x0) {
LAB_015dd038:
        puVar17 = (uint3 *)0x0;
        uVar14 = ((uint)local_30 & 0xff) << 8 | 0x13;
        goto LAB_015dd048;
      }
      local_28 = (uint3 *)((int)local_28 + -2);
      puVar30 = (uint3 *)((int)puVar11 + 2);
      unaff_r9 = (uint3 *)(uint)*(byte *)((int)puVar11 + 1);
      break;
    case 2:
      if (local_28 == (uint3 *)&DAT_00000001) {
LAB_015dcf48:
        puVar17 = (uint3 *)0x0;
        uVar14 = 0x13;
        unaff_r10 = puVar11;
        goto LAB_015dd020;
      }
      unaff_r10 = (uint3 *)((int)puVar11 + 2);
      puVar31 = (uint3 *)(uint)(ushort)*puVar11;
      *(ushort **)(param_2 + 7) = (ushort *)((int)local_28 + -2);
      *(uint3 **)(param_2 + 6) = unaff_r10;
      if ((ushort *)((int)local_28 + -2) < &SUB_00000002) goto LAB_015dd038;
      local_28 = local_28 + -1;
      puVar30 = puVar11 + 1;
      unaff_r9 = (uint3 *)(uint)*(ushort *)((int)puVar11 + 2);
      break;
    default:
      uVar14 = 0x19;
LAB_015dd020:
      uVar14 = uVar14 | ((uint)local_30 & 0xff) << 8;
LAB_015dd048:
      local_24 = (uint3 *)(uVar14 & 0xff);
      local_30 = (uint3 *)(uVar14 >> 8);
      local_2c = 0;
      unaff_r9 = unaff_r10;
      puVar31 = unaff_r10;
      goto switchD_015dc318_caseD_3;
    case 4:
      if (local_28 < &DAT_00000004) goto LAB_015dcf48;
      unaff_r10 = puVar11 + 1;
      puVar31 = *(uint3 **)puVar11;
      *(uint3 **)(param_2 + 7) = local_28 + -1;
      *(uint3 **)(param_2 + 6) = unaff_r10;
      if (local_28 + -1 < &DAT_00000004) goto LAB_015dd038;
      local_28 = local_28 + -2;
      puVar30 = puVar11 + 2;
      unaff_r9 = *(uint3 **)(puVar11 + 1);
      break;
    case 8:
      if (local_28 < &DAT_00000008) goto LAB_015dcf48;
      unaff_r10 = puVar11 + 2;
      uVar4 = *puVar11;
      *(uint3 **)(param_2 + 7) = local_28 + -2;
      *(uint3 **)(param_2 + 6) = unaff_r10;
      if (local_28 + -2 <= &DAT_00000007) goto LAB_015dd038;
      bVar1 = *(byte *)((int)puVar11 + 7);
      puVar30 = puVar11 + 4;
      uVar12 = *(uint *)((int)puVar11 + 3);
      local_28 = local_28 + -4;
      *(uint3 **)(param_2 + 6) = puVar30;
      *(uint3 **)(param_2 + 7) = local_28;
      puVar15 = (uint3 *)(uVar12 >> 8 | (uint)bVar1 << 0x18);
      puVar31 = (uint3 *)((uint)uVar4 | uVar12 << 0x18);
      puVar17 = (uint3 *)(*(uint *)((int)puVar11 + 0xb) >> 8 |
                         (uint)*(byte *)((int)puVar11 + 0xf) << 0x18);
      unaff_r9 = (uint3 *)((uint)*unaff_r10 | *(uint *)((int)puVar11 + 0xb) << 0x18);
      goto LAB_015dbfb0;
    }
    puVar15 = (uint3 *)0x0;
    *(uint3 **)(param_2 + 6) = puVar30;
    *(uint3 **)(param_2 + 7) = local_28;
    puVar17 = (uint3 *)0x0;
LAB_015dbfb0:
    if ((unaff_r9 == (uint3 *)0x0 && puVar31 == (uint3 *)0x0) &&
        (puVar17 == (uint3 *)0x0 && puVar15 == (uint3 *)0x0)) {
switchD_015dbd9c_caseD_0:
      *(undefined4 *)(param_2 + 6) = 1;
      *(undefined4 *)(param_2 + 7) = 0;
      goto LAB_015dcf40;
    }
    unaff_r10 = puVar15;
    puVar9 = puVar31;
    if (((uint)puVar31 ^ uVar14) == 0 && ((uint)puVar15 ^ (uint)puVar28) == 0) {
      unaff_r10 = puVar17;
      puVar9 = unaff_r9;
    }
    puVar15 = (uint3 *)(uint)(((uint)puVar31 ^ uVar14) == 0 && ((uint)puVar15 ^ (uint)puVar28) == 0)
    ;
    goto LAB_015dc744;
  }
  puVar9 = (uint3 *)(uint)(byte)*puVar11;
  if (&DAT_00000007 < puVar9) {
    local_24 = (uint3 *)0x18;
    puVar31 = unaff_r10;
    local_30 = puVar9;
    goto switchD_015dc318_caseD_3;
  }
  puVar31 = (uint3 *)((int)local_28 + -1);
  switch(puVar9) {
  case (uint3 *)0x0:
    goto switchD_015dbd9c_caseD_0;
  case (uint3 *)0x1:
    if (puVar31 == (uint3 *)0x0) goto LAB_015dcf5c;
    in_r12 = (uint3 *)0x0;
    uVar12 = 0;
    uVar27 = 0;
    puVar29 = (uint3 *)((int)local_28 + -2);
    while( true ) {
      puVar30 = (uint3 *)((int)puVar15 + 1);
      unaff_r9 = (uint3 *)(uint)(byte)*puVar15;
      if ((uVar27 == 0x3f) && (&DAT_00000001 < unaff_r9)) {
        local_24 = (uint3 *)0x6;
        goto LAB_015dce90;
      }
      uVar23 = uVar27 & 0x3f;
      uVar22 = (uint)unaff_r9 & 0x7f;
      uVar16 = uVar23 - 0x20;
      uVar10 = uVar22 << uVar23;
      if (-1 < (int)uVar16) {
        uVar10 = 0;
      }
      in_r12 = (uint3 *)(uVar10 | (uint)in_r12);
      puVar17 = (uint3 *)(uVar22 >> (0x20 - uVar23 & 0xff));
      if (-1 < (int)uVar16) {
        puVar17 = (uint3 *)(uVar22 << (uVar16 & 0xff));
      }
      uVar12 = (uint)puVar17 | uVar12;
      if ((uint)(int)(char)(byte)*puVar15 < 0x80000000) break;
      uVar27 = uVar27 + 7;
      bVar32 = puVar29 == (uint3 *)0x0;
      puVar29 = (uint3 *)((int)puVar29 + -1);
      puVar15 = puVar30;
      if (bVar32) {
        puVar15 = (uint3 *)((int)puVar11 + (int)local_28);
        *(uint3 **)(param_2 + 6) = puVar15;
        *(undefined4 *)(param_2 + 7) = 0;
        local_30 = unaff_r9;
        goto LAB_015dcf5c;
      }
    }
    *(uint3 **)(param_2 + 6) = puVar30;
    *(uint3 **)(param_2 + 7) = puVar29;
    if (uVar12 == 0) {
      puVar15 = (uint3 *)&SUB_00000002;
      unaff_r10 = (uint3 *)0x0;
      puVar9 = local_28;
      local_28 = puVar29;
      goto LAB_015dc738;
    }
    local_24 = (uint3 *)0x38;
    break;
  case (uint3 *)0x2:
    if (puVar31 == (uint3 *)0x0) goto LAB_015dcf5c;
    puVar30 = (uint3 *)((int)local_28 + -3);
    iVar21 = 0;
    in_r12 = (uint3 *)0x0;
    uVar27 = 0;
    uVar12 = 0;
    while( true ) {
      bVar1 = *(byte *)((int)puVar11 + (1 - iVar21));
      puVar9 = (uint3 *)(uint)bVar1;
      if ((uVar12 == 0x3f) && (&DAT_00000001 < puVar9)) goto LAB_015dce5c;
      uVar22 = uVar12 & 0x3f;
      puVar29 = (uint3 *)((int)puVar15 + 1);
      uVar16 = (uint)puVar9 & 0x7f;
      unaff_r9 = (uint3 *)(uVar22 - 0x20);
      uVar10 = uVar16 << uVar22;
      if (-1 < (int)unaff_r9) {
        uVar10 = 0;
      }
      in_r12 = (uint3 *)(uVar10 | (uint)in_r12);
      puVar17 = (uint3 *)(uVar16 >> (0x20 - uVar22 & 0xff));
      if (-1 < (int)unaff_r9) {
        puVar17 = (uint3 *)(uVar16 << ((uint)unaff_r9 & 0xff));
      }
      uVar27 = (uint)puVar17 | uVar27;
      if ((uint)(int)(char)bVar1 < 0x80000000) break;
      puVar30 = (uint3 *)((int)puVar30 + -1);
      uVar12 = uVar12 + 7;
      iVar21 = iVar21 + -1;
      puVar15 = puVar29;
      if (1 - (int)local_28 == iVar21) goto LAB_015dce68;
    }
    pbVar18 = (byte *)((int)local_28 + iVar21 + -2);
    *(uint3 **)(param_2 + 6) = puVar29;
    *(byte **)(param_2 + 7) = pbVar18;
    if (uVar27 == 0) {
      if (pbVar18 == (byte *)0x0) {
LAB_015dcffc:
        local_2c = 0;
        local_24 = (uint3 *)0x13;
        puVar17 = (uint3 *)0x0;
        unaff_r9 = puVar29;
        puVar31 = puVar29;
      }
      else {
        unaff_r9 = (uint3 *)((int)puVar31 + iVar21);
        puVar9 = (uint3 *)0x0;
        unaff_r10 = (uint3 *)0x0;
        uVar12 = 0;
        local_28 = puVar30;
        while( true ) {
          puVar30 = (uint3 *)((int)puVar29 + 1);
          puVar11 = (uint3 *)(uint)(byte)*puVar29;
          if ((uVar12 == 0x3f) && (&DAT_00000001 < puVar11)) {
            local_24 = (uint3 *)0x6;
            local_2c = 0;
            puVar17 = local_9c;
            unaff_r9 = local_98;
            puVar31 = unaff_r10;
            goto switchD_015dc318_caseD_3;
          }
          uVar27 = uVar12 & 0x3f;
          uVar16 = (uint)puVar11 & 0x7f;
          uVar10 = uVar27 - 0x20;
          puVar17 = (uint3 *)(uVar16 << uVar27);
          if (-1 < (int)uVar10) {
            puVar17 = (uint3 *)0x0;
          }
          puVar9 = (uint3 *)((uint)puVar17 | (uint)puVar9);
          uVar27 = uVar16 >> (0x20 - uVar27 & 0xff);
          if (-1 < (int)uVar10) {
            uVar27 = uVar16 << (uVar10 & 0xff);
          }
          unaff_r10 = (uint3 *)(uVar27 | (uint)unaff_r10);
          if (-1 < (char)(byte)*puVar29) break;
          uVar12 = uVar12 + 7;
          bVar32 = local_28 == (uint3 *)0x0;
          local_28 = (uint3 *)((int)local_28 + -1);
          puVar29 = puVar30;
          if (bVar32) {
            puVar29 = (uint3 *)((int)puVar15 + (int)unaff_r9);
LAB_015dcfec:
            *(uint3 **)(param_2 + 6) = puVar29;
            *(undefined4 *)(param_2 + 7) = 0;
            local_30 = puVar11;
            goto LAB_015dcffc;
          }
        }
        local_2c = 0;
        local_24 = (uint3 *)0x38;
        *(uint3 **)(param_2 + 6) = puVar30;
        *(uint3 **)(param_2 + 7) = local_28;
        puVar31 = unaff_r10;
        if (unaff_r10 == (uint3 *)0x0) {
          puVar15 = (uint3 *)0x3;
          local_9c = (uint3 *)0x0;
          local_98 = puVar9;
          goto LAB_015dc738;
        }
      }
      break;
    }
    local_24 = (uint3 *)0x38;
    goto LAB_015dce90;
  case (uint3 *)0x3:
    if (puVar31 == (uint3 *)0x0) goto LAB_015dcf5c;
    puVar29 = (uint3 *)((int)local_28 + -3);
    iVar21 = 0;
    in_r12 = (uint3 *)0x0;
    uVar27 = 0;
    uVar12 = 0;
    while( true ) {
      bVar1 = *(byte *)((int)puVar11 + (1 - iVar21));
      puVar9 = (uint3 *)(uint)bVar1;
      if ((uVar12 == 0x3f) && (&DAT_00000001 < puVar9)) goto LAB_015dce5c;
      puVar17 = (uint3 *)(uVar12 & 0x3f);
      unaff_r9 = (uint3 *)((int)puVar15 + 1);
      uVar16 = (uint)puVar9 & 0x7f;
      puVar30 = puVar17 + -8;
      uVar10 = uVar16 << (int)puVar17;
      if (-1 < (int)puVar30) {
        uVar10 = 0;
      }
      in_r12 = (uint3 *)(uVar10 | (uint)in_r12);
      uVar10 = uVar16 >> (0x20U - (int)puVar17 & 0xff);
      if (-1 < (int)puVar30) {
        uVar10 = uVar16 << ((uint)puVar30 & 0xff);
      }
      uVar27 = uVar10 | uVar27;
      if ((uint)(int)(char)bVar1 < 0x80000000) break;
      puVar29 = (uint3 *)((int)puVar29 + -1);
      uVar12 = uVar12 + 7;
      iVar21 = iVar21 + -1;
      puVar15 = unaff_r9;
      if (1 - (int)local_28 == iVar21) goto LAB_015dce68;
    }
    pbVar18 = (byte *)((int)local_28 + iVar21 + -2);
    *(uint3 **)(param_2 + 6) = unaff_r9;
    *(byte **)(param_2 + 7) = pbVar18;
    if (uVar27 != 0) {
      local_24 = (uint3 *)0x38;
      goto LAB_015dce90;
    }
    if (pbVar18 == (byte *)0x0) {
      puVar29 = unaff_r9;
      goto LAB_015dcffc;
    }
    puVar9 = (uint3 *)0x0;
    unaff_r10 = (uint3 *)0x0;
    uVar12 = 0;
    local_28 = puVar29;
LAB_015dc4d0:
    puVar30 = (uint3 *)((int)unaff_r9 + 1);
    puVar11 = (uint3 *)(uint)(byte)*unaff_r9;
    if ((uVar12 == 0x3f) && (&DAT_00000001 < puVar11)) {
      local_8c = local_94;
      local_88 = local_90;
LAB_015dcfa8:
      local_2c = 0;
      puVar25 = local_8c;
      unaff_r9 = local_88;
LAB_015dcfb0:
      local_24 = (uint3 *)0x6;
      puVar17 = puVar25;
      puVar31 = unaff_r10;
      break;
    }
    uVar10 = uVar12 & 0x3f;
    uVar16 = (uint)puVar11 & 0x7f;
    puVar17 = (uint3 *)(uVar10 - 0x20);
    uVar27 = uVar16 << uVar10;
    if (-1 < (int)puVar17) {
      uVar27 = 0;
    }
    puVar9 = (uint3 *)(uVar27 | (uint)puVar9);
    uVar27 = uVar16 >> (0x20 - uVar10 & 0xff);
    if (-1 < (int)puVar17) {
      uVar27 = uVar16 << ((uint)puVar17 & 0xff);
    }
    unaff_r10 = (uint3 *)(uVar27 | (uint)unaff_r10);
    if ((char)(byte)*unaff_r9 < '\0') goto code_r0x015dc518;
    puVar15 = (uint3 *)&DAT_00000004;
    *(uint3 **)(param_2 + 6) = puVar30;
    *(uint3 **)(param_2 + 7) = local_28;
    unaff_r9 = puVar30;
    local_94 = unaff_r10;
    local_90 = puVar9;
    goto LAB_015dc738;
  case (uint3 *)0x4:
    if (puVar31 != (uint3 *)0x0) {
      puVar13 = (uint3 *)((int)local_28 + -3);
      unaff_r9 = (uint3 *)(1 - (int)local_28);
      puVar25 = (uint3 *)0x0;
      puVar9 = (uint3 *)0x0;
      unaff_r10 = (uint3 *)0x0;
      uVar12 = 0;
      in_r12 = puVar15;
      while( true ) {
        bVar1 = *(byte *)((int)puVar11 + (1 - (int)puVar25));
        puVar17 = (uint3 *)(uint)bVar1;
        if ((uVar12 == 0x3f) && (&DAT_00000001 < puVar17)) goto LAB_015dcfb0;
        puVar29 = (uint3 *)((int)in_r12 + 1);
        uVar16 = uVar12 & 0x3f;
        uVar22 = (uint)puVar17 & 0x7f;
        uVar10 = uVar16 - 0x20;
        uVar27 = uVar22 << uVar16;
        if (-1 < (int)uVar10) {
          uVar27 = 0;
        }
        puVar9 = (uint3 *)(uVar27 | (uint)puVar9);
        uVar27 = uVar22 >> (0x20 - uVar16 & 0xff);
        if (-1 < (int)uVar10) {
          uVar27 = uVar22 << (uVar10 & 0xff);
        }
        unaff_r10 = (uint3 *)(uVar27 | (uint)unaff_r10);
        if ((uint)(int)(char)bVar1 < 0x80000000) break;
        puVar25 = (uint3 *)((int)puVar25 + -1);
        puVar13 = (uint3 *)((int)puVar13 + -1);
        uVar12 = uVar12 + 7;
        in_r12 = puVar29;
        if (unaff_r9 == puVar25) {
          local_30 = puVar17;
          goto LAB_015dcedc;
        }
      }
      pbVar18 = (byte *)((int)((int)local_28 + -2) + (int)puVar25);
      *(uint3 **)(param_2 + 6) = puVar29;
      *(byte **)(param_2 + 7) = pbVar18;
      if (pbVar18 == (byte *)0x0) goto LAB_015dd130;
      unaff_r9 = (uint3 *)0x0;
      uVar12 = 0;
      puVar17 = (uint3 *)0x0;
      while( true ) {
        puVar30 = (uint3 *)((int)puVar29 + 1);
        puVar11 = (uint3 *)(uint)(byte)*puVar29;
        if ((uVar12 == 0x3f) && (&DAT_00000001 < puVar11)) goto LAB_015dcfa8;
        uVar10 = uVar12 & 0x3f;
        uVar16 = (uint)puVar11 & 0x7f;
        uVar22 = uVar10 - 0x20;
        uVar27 = uVar16 << uVar10;
        if (-1 < (int)uVar22) {
          uVar27 = 0;
        }
        unaff_r9 = (uint3 *)(uVar27 | (uint)unaff_r9);
        uVar27 = uVar16 >> (0x20 - uVar10 & 0xff);
        if (-1 < (int)uVar22) {
          uVar27 = uVar16 << (uVar22 & 0xff);
        }
        puVar17 = (uint3 *)(uVar27 | (uint)puVar17);
        if (-1 < (char)(byte)*puVar29) break;
        uVar12 = uVar12 + 7;
        bVar32 = puVar13 == (uint3 *)0x0;
        puVar13 = (uint3 *)((int)puVar13 + -1);
        puVar29 = puVar30;
        if (bVar32) {
          puVar29 = (uint3 *)((int)in_r12 + (int)((int)puVar31 + (int)puVar25));
          *(uint3 **)(param_2 + 6) = puVar29;
          *(undefined4 *)(param_2 + 7) = 0;
          local_30 = puVar11;
          goto LAB_015dd130;
        }
      }
      puVar15 = (uint3 *)&DAT_00000005;
      *(uint3 **)(param_2 + 6) = puVar30;
      *(uint3 **)(param_2 + 7) = puVar13;
      local_8c = puVar17;
      local_88 = unaff_r9;
      local_28 = puVar13;
      goto LAB_015dc738;
    }
    goto LAB_015dcf5c;
  case (uint3 *)0x5:
    uVar12 = ((uint)local_30 & 0xff) - 1;
    if (7 < uVar12) {
switchD_015dc318_default:
      local_24 = (uint3 *)0x19;
      break;
    }
    in_r12 = (uint3 *)(&switchD_015dc024::switchdataD_015dc028)[uVar12];
    local_24 = (uint3 *)0x19;
    switch((uint)local_30 & 0xff) {
    case 1:
      if (puVar31 == (uint3 *)0x0) goto LAB_015dd0bc;
      puVar9 = (uint3 *)(uint)*(byte *)((int)puVar11 + 1);
      local_28 = (uint3 *)((int)local_28 + -2);
      puVar30 = (uint3 *)((int)puVar11 + 2);
      *(uint3 **)(param_2 + 6) = puVar30;
      *(uint3 **)(param_2 + 7) = local_28;
      break;
    case 2:
      if (local_28 < (uint3 *)0x3) goto LAB_015dd094;
      local_28 = (uint3 *)((int)local_28 + -3);
      puVar30 = (uint3 *)((int)puVar11 + 3);
      *(uint3 **)(param_2 + 6) = puVar30;
      *(uint3 **)(param_2 + 7) = local_28;
      puVar9 = (uint3 *)(uint)*(ushort *)((int)puVar11 + 1);
      break;
    default:
      goto switchD_015dc318_caseD_3;
    case 4:
      if (local_28 < &DAT_00000005) goto LAB_015dd080;
      local_28 = (uint3 *)((int)local_28 + -5);
      puVar30 = (uint3 *)((int)puVar11 + 5);
      *(uint3 **)(param_2 + 6) = puVar30;
      *(uint3 **)(param_2 + 7) = local_28;
      puVar9 = *(uint3 **)((int)puVar11 + 1);
      break;
    case 8:
      if (local_28 < &DAT_00000009) goto LAB_015dd0a8;
      uVar4 = puVar11[2];
      local_28 = (uint3 *)((int)local_28 + -9);
      uVar12 = *(uint *)(puVar11 + 1);
      puVar30 = (uint3 *)((int)puVar11 + 9);
      bVar1 = *(byte *)((int)puVar11 + 3);
      *(uint3 **)(param_2 + 7) = local_28;
      unaff_r10 = (uint3 *)((uint)(byte)uVar4 << 0x18 | uVar12 >> 8);
      uVar2 = *(ushort *)puVar15;
      *(uint3 **)(param_2 + 6) = puVar30;
      puVar9 = (uint3 *)((uint)CONCAT12(bVar1,uVar2) | uVar12 << 0x18);
      goto LAB_015dc5c4;
    }
    unaff_r10 = (uint3 *)0x0;
LAB_015dc5c4:
    puVar15 = (uint3 *)&DAT_00000001;
LAB_015dc738:
LAB_015dc744:
    local_2c = (uint)puVar9 >> 0x10;
    uVar12 = (uint)puVar9 >> 8;
    puVar31 = unaff_r10;
    puVar11 = puVar30;
    switch(puVar15) {
    default:
      goto switchD_015dc74c_caseD_0;
    case (uint3 *)0x1:
      local_44 = (uint3 *)(local_2c << 0x10 | (uVar12 & 0xff) << 8 | (uint)puVar9 & 0xff);
      local_48 = unaff_r10;
      break;
    case (uint3 *)0x2:
      if (puVar24 < puVar20) {
        puVar17 = (uint3 *)0x0;
        uVar27 = 0x13;
        local_a4 = puVar26;
        goto LAB_015dd2c4;
      }
      uVar12 = (uint)((ulonglong)uVar8 * ZEXT48(in_r12));
      if ((int)((ulonglong)uVar8 * ZEXT48(in_r12) >> 0x20) != 0) {
        uVar27 = 0x38;
        local_a4 = param_2;
        goto LAB_015dd2c4;
      }
      if (uVar7 < uVar12) {
        puVar17 = (uint3 *)0x0;
        uVar27 = 0x13;
        local_a4 = puVar6;
        goto LAB_015dd2c4;
      }
      if (7 < ((uint)local_30 & 0xff) - 1) {
switchD_015dc8c4_caseD_3:
        uVar27 = 0x19;
        local_a4 = local_b0;
        puVar17 = local_b4;
        goto LAB_015dd2c4;
      }
      puVar15 = (uint3 *)((int)puVar6 + uVar12);
      uVar27 = uVar7 - uVar12;
      switch((uint)local_30 & 0xff) {
      case 1:
        if (uVar7 == uVar12) {
LAB_015dd244:
          puVar17 = (uint3 *)0x0;
          uVar27 = 0x13;
          local_a4 = puVar15;
          goto LAB_015dd2c4;
        }
        local_b0 = (uint3 *)(uint)(byte)*puVar15;
        break;
      case 2:
        if (uVar27 < 2) goto LAB_015dd244;
        local_b0 = (uint3 *)(uint)(ushort)*puVar15;
        break;
      default:
        goto switchD_015dc8c4_caseD_3;
      case 4:
        if (uVar27 < 4) goto LAB_015dd244;
        local_b0 = *(uint3 **)puVar15;
        break;
      case 8:
        if (uVar27 < 8) goto LAB_015dd244;
        local_b4 = (uint3 *)(*(uint *)((int)puVar15 + 3) >> 8 |
                            (uint)*(byte *)((int)puVar15 + 7) << 0x18);
        local_b0 = (uint3 *)((uint)*puVar15 | *(uint *)((int)puVar15 + 3) << 0x18);
        goto LAB_015dc9fc;
      }
      local_b4 = (uint3 *)0x0;
LAB_015dc9fc:
      local_44 = local_b0;
      local_48 = local_b4;
      break;
    case (uint3 *)0x3:
      if (puVar24 < puVar20) {
        uVar27 = 0x13;
        local_80 = (uint3 *)0x0;
        local_84 = puVar26;
      }
      else {
        uVar10 = (uint)((ulonglong)uVar8 * ZEXT48(in_r12));
        if ((int)((ulonglong)uVar8 * ZEXT48(in_r12) >> 0x20) != 0) {
          uVar27 = 0x38;
          goto switchD_015dcb04_caseD_2;
        }
        if (uVar7 < uVar10) {
          uVar27 = 0x13;
          local_80 = (uint3 *)0x0;
          local_84 = puVar6;
          goto switchD_015dcb04_caseD_2;
        }
        uVar27 = 0x19;
        uVar16 = ((uint)local_30 & 0xff) - 1;
        if (7 < uVar16) goto switchD_015dcb04_caseD_2;
        puVar15 = (uint3 *)((int)puVar6 + uVar10);
        uVar22 = uVar7 - uVar10;
        switch(uVar16) {
        case 0:
          if (uVar7 == uVar10) break;
          puVar29 = (uint3 *)(uint)(byte)*puVar15;
          puVar31 = (uint3 *)0x0;
LAB_015dcc74:
          lVar3 = (ulonglong)uVar8 *
                  (ulonglong)(local_2c << 0x10 | (uVar12 & 0xff) << 8 | (uint)puVar9 & 0xff);
          uVar12 = (uint)lVar3;
          puVar15 = puVar29;
          if ((int)((ulonglong)lVar3 >> 0x20) != 0) {
            uVar27 = 0x38;
switchD_015dccd0_caseD_2:
            local_a4 = local_ac;
            puVar17 = local_a8;
            goto LAB_015dd2c4;
          }
          if (uVar7 < uVar12) {
            uVar27 = 0x13;
            local_a8 = (uint3 *)0x0;
            local_ac = puVar6;
            goto switchD_015dccd0_caseD_2;
          }
          uVar27 = 0x19;
          if (7 < uVar16) goto switchD_015dccd0_caseD_2;
          puVar15 = (uint3 *)((int)puVar6 + uVar12);
          uVar10 = uVar7 - uVar12;
          switch(uVar16) {
          case 0:
            if (uVar7 == uVar12) {
LAB_015dd2ac:
              uVar27 = 0x13;
              local_a8 = (uint3 *)0x0;
              local_ac = puVar15;
              goto switchD_015dccd0_caseD_2;
            }
            local_ac = (uint3 *)(uint)(byte)*puVar15;
            break;
          case 1:
            if (uVar10 < 2) goto LAB_015dd2ac;
            local_ac = (uint3 *)(uint)(ushort)*puVar15;
            break;
          default:
            goto switchD_015dccd0_caseD_2;
          case 3:
            if (uVar10 < 4) goto LAB_015dd2ac;
            local_ac = *(uint3 **)puVar15;
            break;
          case 7:
            if (uVar10 < 8) goto LAB_015dd2ac;
            local_a8 = (uint3 *)(*(uint *)((int)puVar15 + 3) >> 8 |
                                (uint)*(byte *)((int)puVar15 + 7) << 0x18);
            local_ac = (uint3 *)((uint)*puVar15 | *(uint *)((int)puVar15 + 3) << 0x18);
            goto LAB_015dce14;
          }
          local_a8 = (uint3 *)0x0;
LAB_015dce14:
          puVar11 = local_a8;
          puVar15 = local_ac;
          local_84 = puVar29;
          local_80 = puVar31;
          goto LAB_015dce18;
        case 1:
          if (1 < uVar22) {
            puVar29 = (uint3 *)(uint)(ushort)*puVar15;
LAB_015dcc70:
            puVar31 = (uint3 *)0x0;
            goto LAB_015dcc74;
          }
          break;
        default:
          goto switchD_015dcb04_caseD_2;
        case 3:
          if (3 < uVar22) {
            puVar29 = *(uint3 **)puVar15;
            goto LAB_015dcc70;
          }
          break;
        case 7:
          if (7 < uVar22) {
            puVar31 = (uint3 *)(*(uint *)((int)puVar15 + 3) >> 8 |
                               (uint)*(byte *)((int)puVar15 + 7) << 0x18);
            puVar29 = (uint3 *)((uint)*puVar15 | *(uint *)((int)puVar15 + 3) << 0x18);
            goto LAB_015dcc74;
          }
        }
        uVar27 = 0x13;
        local_80 = (uint3 *)0x0;
        local_84 = puVar15;
      }
switchD_015dcb04_caseD_2:
      local_a4 = local_84;
      puVar17 = local_80;
LAB_015dd2c4:
      *param_1 = 2;
      param_1[1] = 0;
      *puVar5 = uVar27 | uVar8 << 8;
      param_1[3] = puVar15;
      param_1[4] = local_a4;
      param_1[5] = puVar17;
      return;
    case (uint3 *)0x4:
      if (puVar24 < puVar20) {
        uVar27 = 0x13;
        local_a0 = (uint3 *)0x0;
        local_a4 = puVar26;
switchD_015dcbac_caseD_3:
        puVar17 = local_a0;
        goto LAB_015dd2c4;
      }
      uVar10 = (uint)((ulonglong)uVar8 * ZEXT48(in_r12));
      if ((int)((ulonglong)uVar8 * ZEXT48(in_r12) >> 0x20) != 0) {
        uVar27 = 0x38;
        goto switchD_015dcbac_caseD_3;
      }
      if (uVar7 < uVar10) {
        uVar27 = 0x13;
        local_a0 = (uint3 *)0x0;
        local_a4 = puVar6;
        goto switchD_015dcbac_caseD_3;
      }
      puVar15 = (uint3 *)0xffffffff;
      uVar27 = 0x19;
      if (7 < ((uint)local_30 & 0xff) - 1) goto switchD_015dcbac_caseD_3;
      puVar15 = (uint3 *)((int)puVar6 + uVar10);
      uVar16 = uVar7 - uVar10;
      switch((uint)local_30 & 0xff) {
      case 1:
        if (uVar7 == uVar10) {
LAB_015dd254:
          uVar27 = 0x13;
          local_a0 = (uint3 *)0x0;
          local_a4 = puVar15;
          goto switchD_015dcbac_caseD_3;
        }
        puVar29 = (uint3 *)(uint)(byte)*puVar15;
        break;
      case 2:
        if (uVar16 < 2) goto LAB_015dd254;
        puVar29 = (uint3 *)(uint)(ushort)*puVar15;
        break;
      default:
        goto switchD_015dcbac_caseD_3;
      case 4:
        if (uVar16 < 4) goto LAB_015dd254;
        puVar29 = *(uint3 **)puVar15;
        break;
      case 8:
        if (uVar16 < 8) goto LAB_015dd254;
        puVar31 = (uint3 *)(*(uint *)((int)puVar15 + 3) >> 8 |
                           (uint)*(byte *)((int)puVar15 + 7) << 0x18);
        puVar29 = (uint3 *)((uint)*puVar15 | *(uint *)((int)puVar15 + 3) << 0x18);
        goto LAB_015dcd64;
      }
      puVar31 = (uint3 *)0x0;
LAB_015dcd64:
      uVar12 = local_2c << 0x10 | (uVar12 & 0xff) << 8 | (uint)puVar9 & 0xff;
      puVar11 = (uint3 *)((uint)((byte *)((int)unaff_r10 + (int)puVar31) +
                                CARRY4(uVar12,(uint)puVar29)) & (uint)puVar28);
      puVar15 = (uint3 *)((uint)(uVar12 + (int)puVar29) & uVar14);
      local_a4 = puVar29;
      local_a0 = puVar31;
      goto LAB_015dce18;
    case (uint3 *)0x6:
      puVar29 = (uint3 *)(local_2c << 0x10 | (uVar12 & 0xff) << 8 | (uint)puVar9 & 0xff);
      puVar11 = puVar17;
      puVar15 = unaff_r9;
      goto LAB_015dce18;
    case (uint3 *)0x7:
      puVar29 = (uint3 *)(local_2c << 0x10 | (uVar12 & 0xff) << 8 | (uint)puVar9 & 0xff);
      puVar11 = (uint3 *)((uint)puVar28 &
                         (uint)((byte *)((int)unaff_r10 + (int)puVar17) +
                               CARRY4((uint)puVar29,(uint)unaff_r9)));
      puVar15 = (uint3 *)(uVar14 & (uint)((int)puVar29 + (int)unaff_r9));
      goto LAB_015dce18;
    }
    *(uint3 **)param_2 = local_44;
    *(uint3 **)(param_2 + 1) = local_48;
    goto LAB_015dbd64;
  case (uint3 *)0x6:
    uVar12 = ((uint)local_30 & 0xff) - 1;
    if (7 < uVar12) goto switchD_015dc318_default;
    in_r12 = (uint3 *)(&switchD_015dc28c::switchdataD_015dc290)[uVar12];
    local_24 = (uint3 *)0x19;
    switch((uint)local_30 & 0xff) {
    case 1:
      if (puVar31 == (uint3 *)0x0) goto LAB_015dd0bc;
      puVar9 = (uint3 *)(uint)*(byte *)((int)puVar11 + 1);
      puVar29 = (uint3 *)((int)puVar11 + 2);
      *(ushort **)(param_2 + 7) = (ushort *)((int)local_28 + -2);
      *(uint3 **)(param_2 + 6) = puVar29;
      if ((ushort *)((int)local_28 + -2) != (ushort *)0x0) {
        unaff_r9 = (uint3 *)(uint)*(byte *)((int)puVar11 + 2);
        puVar30 = (uint3 *)((int)puVar11 + 3);
        local_28 = (uint3 *)((int)local_28 + -3);
        *(uint3 **)(param_2 + 6) = puVar30;
        *(uint3 **)(param_2 + 7) = local_28;
LAB_015dc72c:
        puVar17 = (uint3 *)0x0;
        puVar15 = (uint3 *)&DAT_00000006;
        unaff_r10 = (uint3 *)0x0;
        goto LAB_015dc738;
      }
      break;
    case 2:
      if (local_28 < (uint3 *)0x3) goto LAB_015dd094;
      puVar9 = (uint3 *)(uint)*(ushort *)((int)puVar11 + 1);
      puVar29 = (uint3 *)((int)puVar11 + 3);
      *(byte **)(param_2 + 7) = (byte *)((int)local_28 + -3);
      *(uint3 **)(param_2 + 6) = puVar29;
      if ((byte *)0x1 < (byte *)((int)local_28 + -3)) {
        local_28 = (uint3 *)((int)local_28 + -5);
        puVar30 = (uint3 *)((int)puVar11 + 5);
        *(uint3 **)(param_2 + 6) = puVar30;
        *(uint3 **)(param_2 + 7) = local_28;
        unaff_r9 = (uint3 *)(uint)*(ushort *)((int)puVar11 + 3);
        goto LAB_015dc72c;
      }
      break;
    default:
      goto switchD_015dc318_caseD_3;
    case 4:
      if (local_28 < &DAT_00000005) goto LAB_015dd080;
      puVar9 = *(uint3 **)((int)puVar11 + 1);
      puVar29 = (uint3 *)((int)puVar11 + 5);
      *(byte **)(param_2 + 7) = (byte *)((int)local_28 + -5);
      *(uint3 **)(param_2 + 6) = puVar29;
      if ((byte *)0x3 < (byte *)((int)local_28 + -5)) {
        local_28 = (uint3 *)((int)local_28 + -9);
        puVar30 = (uint3 *)((int)puVar11 + 9);
        *(uint3 **)(param_2 + 6) = puVar30;
        *(uint3 **)(param_2 + 7) = local_28;
        unaff_r9 = *(uint3 **)((int)puVar11 + 5);
        goto LAB_015dc72c;
      }
      break;
    case 8:
      if (local_28 < &DAT_00000009) goto LAB_015dd0a8;
      bVar1 = *(byte *)((int)puVar11 + 3);
      puVar29 = (uint3 *)((int)puVar11 + 9);
      *(byte **)(param_2 + 7) = (byte *)((int)local_28 + -9);
      *(uint3 **)(param_2 + 6) = puVar29;
      if ((byte *)0x7 < (byte *)((int)local_28 + -9)) {
        in_r12 = (uint3 *)(uint)(byte)puVar11[2];
        puVar30 = (uint3 *)((int)puVar11 + 0x11);
        local_28 = (uint3 *)((int)local_28 + -0x11);
        uVar12 = *(uint *)(puVar11 + 3);
        unaff_r10 = (uint3 *)((int)in_r12 << 0x18 | *(uint *)(puVar11 + 1) >> 8);
        uVar4 = puVar11[4];
        puVar9 = (uint3 *)((uint)CONCAT12(bVar1,*(ushort *)puVar15) | *(uint *)(puVar11 + 1) << 0x18
                          );
        *(uint3 **)(param_2 + 6) = puVar30;
        puVar17 = (uint3 *)(uVar12 >> 8 | (uint)(byte)uVar4 << 0x18);
        uVar4 = *puVar29;
        *(uint3 **)(param_2 + 7) = local_28;
        puVar15 = (uint3 *)&DAT_00000006;
        unaff_r9 = (uint3 *)((uint)uVar4 | uVar12 << 0x18);
        goto LAB_015dc738;
      }
    }
LAB_015dd130:
    local_24 = (uint3 *)0x13;
    local_2c = 0;
    puVar17 = (uint3 *)0x0;
    unaff_r9 = puVar29;
    puVar31 = puVar29;
    break;
  case (uint3 *)0x7:
    local_24 = (uint3 *)0x19;
    switch((uint)local_30 & 0xff) {
    case 1:
      if (puVar31 == (uint3 *)0x0) {
LAB_015dd0bc:
        local_30 = (uint3 *)&DAT_00000001;
        break;
      }
      puVar31 = (uint3 *)((int)local_28 + -2);
      puVar29 = (uint3 *)((int)puVar11 + 2);
      puVar9 = (uint3 *)(uint)*(byte *)((int)puVar11 + 1);
LAB_015dc7a4:
      unaff_r10 = (uint3 *)0x0;
      *(uint3 **)(param_2 + 6) = puVar29;
      *(uint3 **)(param_2 + 7) = puVar31;
LAB_015dc7ac:
      if (puVar31 == (uint3 *)0x0) goto LAB_015dd130;
      unaff_r9 = (uint3 *)0x0;
      uVar12 = 0;
      in_r12 = (uint3 *)0x0;
      puVar11 = puVar29;
      local_28 = puVar31;
      while( true ) {
        local_28 = (uint3 *)((int)local_28 + -1);
        puVar30 = (uint3 *)((int)puVar11 + 1);
        puVar15 = (uint3 *)(uint)(byte)*puVar11;
        if ((uVar12 == 0x3f) && (&DAT_00000001 < puVar15)) {
          *(uint3 **)(param_2 + 6) = puVar30;
          *(uint3 **)(param_2 + 7) = local_28;
          local_24 = (uint3 *)0x6;
          local_2c = 0;
          puVar17 = local_7c;
          unaff_r9 = local_78;
          puVar31 = unaff_r10;
          goto switchD_015dc318_caseD_3;
        }
        uVar22 = uVar12 & 0x3f;
        uVar16 = (uint)puVar15 & 0x7f;
        uVar10 = uVar22 - 0x20;
        uVar27 = uVar16 << uVar22;
        if (-1 < (int)uVar10) {
          uVar27 = 0;
        }
        unaff_r9 = (uint3 *)(uVar27 | (uint)unaff_r9);
        uVar27 = uVar16 >> (0x20 - uVar22 & 0xff);
        if (-1 < (int)uVar10) {
          uVar27 = uVar16 << (uVar10 & 0xff);
        }
        puVar17 = (uint3 *)(uVar27 | (uint)in_r12);
        if ((uint)(int)(char)(byte)*puVar11 < 0x80000000) break;
        uVar12 = uVar12 + 7;
        in_r12 = puVar17;
        puVar11 = puVar30;
        if (local_28 == (uint3 *)0x0) {
          puVar29 = (uint3 *)((int)puVar29 + (int)puVar31);
          *(uint3 **)(param_2 + 6) = puVar29;
          *(undefined4 *)(param_2 + 7) = 0;
          local_30 = puVar15;
          goto LAB_015dd130;
        }
      }
      puVar15 = (uint3 *)&DAT_00000007;
      *(uint3 **)(param_2 + 6) = puVar30;
      *(uint3 **)(param_2 + 7) = local_28;
      local_7c = puVar17;
      local_78 = unaff_r9;
      goto LAB_015dc744;
    case 2:
      if (&SUB_00000002 < local_28) {
        puVar31 = (uint3 *)((int)local_28 + -3);
        puVar29 = (uint3 *)((int)puVar11 + 3);
        puVar9 = (uint3 *)(uint)*(ushort *)((int)puVar11 + 1);
        goto LAB_015dc7a4;
      }
LAB_015dd094:
      local_30 = (uint3 *)&SUB_00000002;
      break;
    case 3:
    case 5:
    case 6:
    case 7:
      goto switchD_015dc318_caseD_3;
    case 4:
      if (&DAT_00000005 <= local_28) {
        puVar31 = (uint3 *)((int)local_28 + -5);
        puVar29 = (uint3 *)((int)puVar11 + 5);
        puVar9 = *(uint3 **)((int)puVar11 + 1);
        goto LAB_015dc7a4;
      }
LAB_015dd080:
      local_30 = (uint3 *)&DAT_00000004;
      break;
    case 8:
      if (&DAT_00000009 <= local_28) {
        puVar31 = (uint3 *)((int)local_28 + -9);
        uVar12 = *(uint *)(puVar11 + 1);
        uVar4 = *puVar15;
        unaff_r10 = (uint3 *)((uint)(byte)puVar11[2] << 0x18 | uVar12 >> 8);
        puVar29 = (uint3 *)((int)puVar11 + 9);
        *(uint3 **)(param_2 + 7) = puVar31;
        puVar9 = (uint3 *)((uint)uVar4 | uVar12 << 0x18);
        *(uint3 **)(param_2 + 6) = puVar29;
        goto LAB_015dc7ac;
      }
LAB_015dd0a8:
      local_30 = (uint3 *)&DAT_00000008;
      break;
    default:
      goto switchD_015dc318_default;
    }
    local_24 = (uint3 *)0x13;
    puVar17 = (uint3 *)0x0;
    unaff_r9 = puVar15;
    puVar31 = puVar15;
  }
  goto switchD_015dc318_caseD_3;
code_r0x015dc518:
  uVar12 = uVar12 + 7;
  bVar32 = local_28 == (uint3 *)0x0;
  local_28 = (uint3 *)((int)local_28 + -1);
  unaff_r9 = puVar30;
  if (bVar32) {
    puVar29 = (uint3 *)((int)puVar15 + (int)((int)puVar31 + iVar21));
    goto LAB_015dcfec;
  }
  goto LAB_015dc4d0;
LAB_015dce5c:
  local_24 = (uint3 *)0x6;
LAB_015dce90:
  goto switchD_015dc318_caseD_3;
switchD_015dc74c_caseD_0:
  if (local_48 <= puVar28 &&
      (uint)((uint3 *)(uVar14 & 0xfffffffe) <= local_44) <= (uint)((int)local_48 - (int)puVar28))
  goto LAB_015dca18;
  goto LAB_015dbd64;
LAB_015dca18:
  uVar12 = local_2c << 0x10 | (uVar12 & 0xff) << 8 | (uint)puVar9 & 0xff;
  puVar29 = (uint3 *)((uint)(uVar12 + (int)local_44) & uVar14);
  puVar31 = (uint3 *)((uint)((byte *)((int)unaff_r10 + (int)local_48) +
                            CARRY4(uVar12,(uint)local_44)) & (uint)puVar28);
  puVar11 = (uint3 *)((uint)((byte *)((int)local_48 + (int)puVar17) +
                            CARRY4((uint)local_44,(uint)unaff_r9)) & (uint)puVar28);
  puVar15 = (uint3 *)((uint)((int)local_44 + (int)unaff_r9) & uVar14);
LAB_015dce18:
  local_24 = puVar30;
  if ((puVar31 <= puVar28 &&
       (uint)((uint3 *)(uVar14 & 0xfffffffe) <= puVar29) <= (uint)((int)puVar31 - (int)puVar28)) &&
     (puVar31 <= puVar11 && (uint)(puVar15 <= puVar29) <= (uint)((int)puVar31 - (int)puVar11))) {
    *param_1 = 1;
    param_1[1] = 0;
    *puVar5 = (uint)puVar29;
    param_1[3] = puVar31;
    param_1[4] = puVar15;
    param_1[5] = puVar11;
    return;
  }
  goto LAB_015dbd58;
LAB_015dce68:
  local_30 = puVar9;
LAB_015dcedc:
  puVar15 = (uint3 *)((int)puVar11 + (int)local_28);
  *(uint3 **)(param_2 + 6) = puVar15;
  *(undefined4 *)(param_2 + 7) = 0;
LAB_015dcf5c:
  local_24 = (uint3 *)0x13;
  puVar17 = (uint3 *)0x0;
  unaff_r9 = puVar15;
  puVar31 = puVar15;
switchD_015dc318_caseD_3:
  *(undefined4 *)(param_2 + 6) = 1;
  *(undefined4 *)(param_2 + 7) = 0;
  uVar19 = 2;
  *puVar5 = ((uint)local_30 & 0xff) << 8 | local_2c << 0x10 | (uint)local_24;
  param_1[3] = puVar31;
  param_1[4] = unaff_r9;
  param_1[5] = puVar17;
LAB_015dd170:
  *param_1 = uVar19;
  param_1[1] = 0;
  return;
}

