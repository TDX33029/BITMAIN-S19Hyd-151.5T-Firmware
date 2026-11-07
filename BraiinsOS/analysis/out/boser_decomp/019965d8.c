// FUN_019965d8 @ 019965d8 size=5268 calls_out=1 calls_in=3
// strings: 

void FUN_019965d8(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  longlong lVar5;
  uint3 uVar6;
  uint *puVar7;
  uint3 *****pppppuVar8;
  uint uVar9;
  uint3 *****pppppuVar10;
  uint3 *****pppppuVar11;
  uint3 ****ppppuVar12;
  uint uVar13;
  uint3 *****pppppuVar14;
  uint uVar15;
  uint3 *****pppppuVar16;
  uint uVar17;
  uint3 *****pppppuVar18;
  uint uVar19;
  undefined4 uVar20;
  uint3 *****pppppuVar21;
  uint3 *****pppppuVar22;
  undefined1 uVar23;
  int iVar24;
  uint3 *****pppppuVar25;
  uint3 *****pppppuVar26;
  uint uVar27;
  byte *pbVar28;
  uint uVar29;
  uint3 *****pppppuVar30;
  uint3 *****pppppuVar31;
  uint3 *****unaff_r9;
  uint3 *****pppppuVar32;
  uint3 *****pppppuVar33;
  uint3 *****pppppuVar34;
  uint3 *****pppppuVar35;
  uint3 *****pppppuVar36;
  uint3 *****pppppuVar37;
  bool bVar38;
  uint3 *****local_d4;
  uint3 *****local_d0;
  uint3 *****local_cc;
  uint3 *****local_c8;
  uint3 *****local_c4;
  uint3 *****local_c0;
  uint3 *****local_bc;
  uint3 *****local_b8;
  uint3 *****local_b4;
  uint3 *****local_b0;
  uint3 *****local_ac;
  uint3 *****local_a8;
  uint3 *****local_a4;
  uint3 *****local_a0;
  uint local_9c;
  uint3 *****local_68;
  uint3 *****local_64;
  uint3 *****local_58;
  uint local_50;
  uint3 *****local_4c;
  byte local_40 [8];
  uint3 *****local_38;
  uint3 *****local_34;
  byte *local_2c;
  int local_28;
  
  local_64 = (uint3 *****)*param_2;
  local_68 = (uint3 *****)param_2[1];
  local_58 = (uint3 *****)param_2[7];
  pppppuVar21 = (uint3 *****)param_2[4];
  local_4c = (uint3 *****)param_2[5];
  pppppuVar36 = (uint3 *****)param_2[6];
  puVar7 = param_1 + 2;
  pppppuVar25 = (uint3 *****)param_2[2];
  uVar15 = (int)local_4c * -8 & 0x38;
  uVar19 = 0xffffffff;
  cVar1 = *(char *)(param_2 + 8);
  pppppuVar30 = (uint3 *****)(0xffffffff >> uVar15);
  pppppuVar34 = (uint3 *****)param_2[3];
  uVar15 = uVar15 - 0x20;
  local_50 = 0;
  pppppuVar8 = (uint3 *****)((int)pppppuVar25 + (int)pppppuVar21);
  uVar9 = (int)pppppuVar34 - (int)pppppuVar21;
  pppppuVar10 = (uint3 *****)((uint)local_4c & 0xff);
  if (-1 < (int)uVar15) {
    uVar19 = 0xffffffff >> (uVar15 & 0xff);
  }
  if (-1 < (int)uVar15) {
    pppppuVar30 = (uint3 *****)0x0;
  }
  pppppuVar33 = (uint3 *****)&local_38;
  pppppuVar35 = pppppuVar21;
  pppppuVar26 = pppppuVar25;
  pppppuVar37 = pppppuVar36;
LAB_0199669c:
  pppppuVar32 = local_58;
  pppppuVar18 = pppppuVar36;
LAB_019966a4:
  if (pppppuVar32 == (uint3 *****)0x0) {
LAB_01997830:
    uVar20 = 0;
    goto LAB_01997970;
  }
  pppppuVar31 = (uint3 *****)((int)pppppuVar18 + 1);
  if (cVar1 == '\0') {
    switch((uint)local_4c & 0xff) {
    case 1:
      pppppuVar33 = (uint3 *****)((int)pppppuVar18 + 1);
      pppppuVar31 = (uint3 *****)(uint)*(byte *)pppppuVar18;
      param_2[7] = (byte *)((int)pppppuVar32 + -1);
      param_2[6] = pppppuVar33;
      if ((byte *)((int)pppppuVar32 + -1) == (byte *)0x0) {
LAB_019978d8:
        pppppuVar26 = (uint3 *****)0x0;
        uVar19 = ((uint)local_4c & 0xff) << 8 | 0x13;
        goto LAB_019978e8;
      }
      pppppuVar36 = (uint3 *****)((int)pppppuVar18 + 2);
      local_58 = (uint3 *****)((int)pppppuVar32 + -2);
      pppppuVar35 = (uint3 *****)(uint)*(byte *)((int)pppppuVar18 + 1);
      break;
    case 2:
      if (pppppuVar32 == (uint3 *****)&DAT_00000001) {
LAB_01997854:
        pppppuVar26 = (uint3 *****)0x0;
        uVar19 = 0x13;
        pppppuVar33 = pppppuVar18;
        goto LAB_019978c0;
      }
      pppppuVar33 = (uint3 *****)((int)pppppuVar18 + 2);
      pppppuVar31 = (uint3 *****)(uint)*(ushort *)pppppuVar18;
      param_2[7] = (ushort *)((int)pppppuVar32 + -2);
      param_2[6] = pppppuVar33;
      if ((ushort *)((int)pppppuVar32 + -2) <= &DAT_00000001) goto LAB_019978d8;
      pppppuVar36 = pppppuVar18 + 1;
      local_58 = pppppuVar32 + -1;
      pppppuVar35 = (uint3 *****)(uint)*(ushort *)((int)pppppuVar18 + 2);
      break;
    default:
      uVar19 = 0x19;
LAB_019978c0:
      uVar19 = uVar19 | ((uint)local_4c & 0xff) << 8;
LAB_019978e8:
      uVar15 = uVar19 & 0xff;
      local_4c = (uint3 *****)(uVar19 >> 8);
      local_50 = 0;
      pppppuVar22 = pppppuVar33;
      goto switchD_01996c48_caseD_3;
    case 4:
      if (pppppuVar32 < &SUB_00000004) goto LAB_01997854;
      pppppuVar33 = pppppuVar18 + 1;
      pppppuVar31 = (uint3 *****)*pppppuVar18;
      param_2[7] = pppppuVar32 + -1;
      param_2[6] = pppppuVar33;
      if (pppppuVar32 + -1 <= &DAT_00000003) goto LAB_019978d8;
      pppppuVar36 = pppppuVar18 + 2;
      local_58 = pppppuVar32 + -2;
      pppppuVar35 = (uint3 *****)pppppuVar18[1];
      break;
    case 8:
      if (pppppuVar32 < &DAT_00000008) goto LAB_01997854;
      uVar6 = *(uint3 *)pppppuVar18;
      pppppuVar33 = pppppuVar18 + 2;
      param_2[7] = pppppuVar32 + -2;
      param_2[6] = pppppuVar33;
      if (pppppuVar32 + -2 <= &DAT_00000007) goto LAB_019978d8;
      uVar15 = *(uint *)((int)pppppuVar18 + 3);
      pppppuVar36 = pppppuVar18 + 4;
      bVar2 = *(byte *)((int)pppppuVar18 + 7);
      local_58 = pppppuVar32 + -4;
      param_2[6] = pppppuVar36;
      pppppuVar31 = (uint3 *****)((uint)uVar6 | uVar15 << 0x18);
      param_2[7] = local_58;
      pppppuVar32 = (uint3 *****)(uVar15 >> 8 | (uint)bVar2 << 0x18);
      pppppuVar26 = (uint3 *****)
                    (*(uint *)((int)pppppuVar18 + 0xb) >> 8 |
                    (uint)*(byte *)((int)pppppuVar18 + 0xf) << 0x18);
      pppppuVar35 = (uint3 *****)
                    ((uint)*(uint3 *)pppppuVar33 | *(uint *)((int)pppppuVar18 + 0xb) << 0x18);
      goto LAB_019968fc;
    }
    pppppuVar32 = (uint3 *****)0x0;
    pppppuVar26 = (uint3 *****)0x0;
    param_2[6] = pppppuVar36;
    param_2[7] = local_58;
LAB_019968fc:
    if (!((pppppuVar35 == (uint3 *****)0x0 && pppppuVar31 == (uint3 *****)0x0) &&
         (pppppuVar26 == (uint3 *****)0x0 && pppppuVar32 == (uint3 *****)0x0))) {
      pppppuVar33 = pppppuVar32;
      pppppuVar37 = pppppuVar31;
      if (((uint)pppppuVar31 ^ uVar19) == 0 && ((uint)pppppuVar32 ^ (uint)pppppuVar30) == 0) {
        pppppuVar33 = pppppuVar26;
        pppppuVar37 = pppppuVar35;
      }
      uVar23 = ((uint)pppppuVar31 ^ uVar19) == 0 && ((uint)pppppuVar32 ^ (uint)pppppuVar30) == 0;
      goto LAB_01997084;
    }
switchD_019966d8_caseD_0:
    param_2[6] = 1;
    param_2[7] = 0;
    goto LAB_01997830;
  }
  pppppuVar36 = (uint3 *****)(uint)*(byte *)pppppuVar18;
  pppppuVar22 = pppppuVar35;
  if (&DAT_00000007 < pppppuVar36) {
    uVar15 = 0x18;
    local_4c = pppppuVar36;
    goto switchD_01996c48_caseD_3;
  }
  pppppuVar16 = (uint3 *****)((int)pppppuVar32 + -1);
  switch(pppppuVar36) {
  case (uint3 *****)0x0:
    goto switchD_019966d8_caseD_0;
  case (uint3 *****)0x1:
    if (pppppuVar16 == (uint3 *****)0x0) goto LAB_01997864;
    unaff_r9 = (uint3 *****)0x0;
    uVar15 = 0;
    uVar13 = 0;
    local_58 = (uint3 *****)((int)pppppuVar32 + -2);
    while( true ) {
      pppppuVar36 = (uint3 *****)((int)pppppuVar31 + 1);
      pppppuVar14 = (uint3 *****)(uint)*(byte *)pppppuVar31;
      if ((uVar13 == 0x3f) && (&DAT_00000001 < pppppuVar14)) {
        uVar15 = 6;
        goto switchD_01996c48_caseD_3;
      }
      uVar29 = uVar13 & 0x3f;
      uVar27 = (uint)pppppuVar14 & 0x7f;
      uVar17 = uVar29 - 0x20;
      pppppuVar35 = (uint3 *****)(uVar27 << uVar29);
      if (-1 < (int)uVar17) {
        pppppuVar35 = (uint3 *****)0x0;
      }
      unaff_r9 = (uint3 *****)((uint)pppppuVar35 | (uint)unaff_r9);
      pppppuVar26 = (uint3 *****)(uVar27 >> (0x20 - uVar29 & 0xff));
      if (-1 < (int)uVar17) {
        pppppuVar26 = (uint3 *****)(uVar27 << (uVar17 & 0xff));
      }
      uVar15 = (uint)pppppuVar26 | uVar15;
      pppppuVar22 = pppppuVar35;
      if ((uint)(int)(char)*(byte *)pppppuVar31 < 0x80000000) break;
      uVar13 = uVar13 + 7;
      bVar38 = local_58 == (uint3 *****)0x0;
      local_58 = (uint3 *****)((int)local_58 + -1);
      pppppuVar31 = pppppuVar36;
      if (bVar38) {
        param_2[6] = (byte *)((int)pppppuVar18 + (int)pppppuVar32);
        param_2[7] = 0;
LAB_019977c8:
        pppppuVar31 = (uint3 *****)((int)pppppuVar18 + (int)pppppuVar32);
        local_4c = pppppuVar14;
        goto LAB_019977ec;
      }
    }
    param_2[6] = pppppuVar36;
    param_2[7] = local_58;
    if (uVar15 != 0) goto LAB_019979e0;
    uVar23 = 2;
    pppppuVar33 = (uint3 *****)0x0;
LAB_01997074:
    goto LAB_01997084;
  case (uint3 *****)0x2:
    if (pppppuVar16 == (uint3 *****)0x0) goto LAB_01997864;
    local_58 = (uint3 *****)((int)pppppuVar32 + -3);
    pppppuVar22 = (uint3 *****)0x0;
    unaff_r9 = (uint3 *****)0x0;
    pppppuVar26 = (uint3 *****)0x0;
    uVar15 = 0;
    while( true ) {
      bVar2 = *(byte *)((int)pppppuVar18 + (1 - (int)pppppuVar22));
      pppppuVar14 = (uint3 *****)(uint)bVar2;
      if ((uVar15 == 0x3f) && (&DAT_00000001 < pppppuVar14)) {
        uVar15 = 6;
        pppppuVar33 = pppppuVar16;
        goto switchD_01996c48_caseD_3;
      }
      uVar17 = uVar15 & 0x3f;
      uVar27 = (uint)pppppuVar14 & 0x7f;
      uVar29 = uVar17 - 0x20;
      pppppuVar11 = (uint3 *****)((int)pppppuVar31 + 1);
      uVar13 = uVar27 << uVar17;
      if (-1 < (int)uVar29) {
        uVar13 = 0;
      }
      unaff_r9 = (uint3 *****)(uVar13 | (uint)unaff_r9);
      uVar13 = uVar27 >> (0x20 - uVar17 & 0xff);
      if (-1 < (int)uVar29) {
        uVar13 = uVar27 << (uVar29 & 0xff);
      }
      pppppuVar26 = (uint3 *****)(uVar13 | (uint)pppppuVar26);
      if ((uint)(int)(char)bVar2 < 0x80000000) break;
      local_58 = (uint3 *****)((int)local_58 + -1);
      uVar15 = uVar15 + 7;
      pppppuVar22 = (uint3 *****)((int)pppppuVar22 + -1);
      pppppuVar31 = pppppuVar11;
      if ((uint3 *****)(1 - (int)pppppuVar32) == pppppuVar22) {
        param_2[6] = (byte *)((int)pppppuVar18 + (int)pppppuVar32);
        param_2[7] = 0;
        goto LAB_019977c8;
      }
    }
    uVar15 = 0x38;
    pbVar28 = (byte *)((int)((int)pppppuVar32 + -2) + (int)pppppuVar22);
    param_2[6] = pppppuVar11;
    param_2[7] = pbVar28;
    pppppuVar33 = pppppuVar16;
    if (pppppuVar26 == (uint3 *****)0x0) {
      if (pbVar28 == (byte *)0x0) goto LAB_0199792c;
      pppppuVar37 = (uint3 *****)0x0;
      pppppuVar33 = (uint3 *****)0x0;
      uVar15 = 0;
      local_50 = 0;
      while( true ) {
        pppppuVar36 = (uint3 *****)((int)pppppuVar11 + 1);
        pppppuVar35 = (uint3 *****)(uint)*(byte *)pppppuVar11;
        if ((uVar15 == 0x3f) && (&DAT_00000001 < pppppuVar35)) {
          uVar15 = 6;
          pppppuVar22 = local_c0;
          pppppuVar26 = local_c4;
          goto switchD_01996c48_caseD_3;
        }
        uVar17 = uVar15 & 0x3f;
        uVar27 = (uint)pppppuVar35 & 0x7f;
        pppppuVar26 = (uint3 *****)(uVar17 - 0x20);
        uVar13 = uVar27 << uVar17;
        if (-1 < (int)pppppuVar26) {
          uVar13 = 0;
        }
        pppppuVar37 = (uint3 *****)(uVar13 | (uint)pppppuVar37);
        uVar13 = uVar27 >> (0x20 - uVar17 & 0xff);
        if (-1 < (int)pppppuVar26) {
          uVar13 = uVar27 << ((uint)pppppuVar26 & 0xff);
        }
        pppppuVar33 = (uint3 *****)(uVar13 | (uint)pppppuVar33);
        if (-1 < (char)*(byte *)pppppuVar11) break;
        uVar15 = uVar15 + 7;
        bVar38 = local_58 == (uint3 *****)0x0;
        pppppuVar11 = pppppuVar36;
        local_58 = (uint3 *****)((int)local_58 + -1);
        if (bVar38) goto LAB_01997838;
      }
      uVar15 = 0x38;
      param_2[6] = pppppuVar36;
      param_2[7] = local_58;
      pppppuVar22 = pppppuVar35;
      if (pppppuVar33 == (uint3 *****)0x0) {
        uVar23 = 3;
        local_c4 = (uint3 *****)0x0;
        local_c0 = pppppuVar37;
        goto LAB_01997074;
      }
    }
    break;
  case (uint3 *****)0x3:
    if (pppppuVar16 == (uint3 *****)0x0) goto LAB_01997864;
    local_58 = (uint3 *****)((int)pppppuVar32 + -3);
    pppppuVar22 = (uint3 *****)0x0;
    unaff_r9 = (uint3 *****)0x0;
    pppppuVar26 = (uint3 *****)0x0;
    uVar15 = 0;
    while( true ) {
      bVar2 = *(byte *)((int)pppppuVar18 + (1 - (int)pppppuVar22));
      pppppuVar36 = (uint3 *****)(uint)bVar2;
      if ((uVar15 == 0x3f) && (pppppuVar33 = pppppuVar16, &DAT_00000001 < pppppuVar36))
      goto LAB_0199773c;
      uVar27 = uVar15 & 0x3f;
      uVar17 = (uint)pppppuVar36 & 0x7f;
      uVar29 = uVar27 - 0x20;
      pppppuVar11 = (uint3 *****)((int)pppppuVar31 + 1);
      uVar13 = uVar17 << uVar27;
      if (-1 < (int)uVar29) {
        uVar13 = 0;
      }
      unaff_r9 = (uint3 *****)(uVar13 | (uint)unaff_r9);
      uVar13 = uVar17 >> (0x20 - uVar27 & 0xff);
      if (-1 < (int)uVar29) {
        uVar13 = uVar17 << (uVar29 & 0xff);
      }
      pppppuVar26 = (uint3 *****)(uVar13 | (uint)pppppuVar26);
      if ((uint)(int)(char)bVar2 < 0x80000000) break;
      local_58 = (uint3 *****)((int)local_58 + -1);
      uVar15 = uVar15 + 7;
      pppppuVar22 = (uint3 *****)((int)pppppuVar22 + -1);
      pppppuVar31 = pppppuVar11;
      if ((uint3 *****)(1 - (int)pppppuVar32) == pppppuVar22) {
        local_4c = pppppuVar36;
LAB_019977dc:
        pppppuVar31 = (uint3 *****)((int)pppppuVar18 + (int)pppppuVar32);
        param_2[6] = pppppuVar31;
        param_2[7] = 0;
        goto LAB_019977ec;
      }
    }
    pbVar28 = (byte *)((int)((int)pppppuVar32 + -2) + (int)pppppuVar22);
    param_2[6] = pppppuVar11;
    param_2[7] = pbVar28;
    pppppuVar33 = pppppuVar16;
    if (pppppuVar26 == (uint3 *****)0x0) {
      if (pbVar28 == (byte *)0x0) goto LAB_0199792c;
      local_50 = 0;
      pppppuVar37 = (uint3 *****)0x0;
      pppppuVar33 = (uint3 *****)0x0;
      uVar15 = 0;
      while( true ) {
        pppppuVar36 = (uint3 *****)((int)pppppuVar11 + 1);
        pppppuVar35 = (uint3 *****)(uint)*(byte *)pppppuVar11;
        if ((uVar15 == 0x3f) && (&DAT_00000001 < pppppuVar35)) {
          uVar15 = 6;
          pppppuVar22 = local_b8;
          pppppuVar26 = local_bc;
          goto switchD_01996c48_caseD_3;
        }
        uVar17 = uVar15 & 0x3f;
        uVar27 = (uint)pppppuVar35 & 0x7f;
        pppppuVar26 = (uint3 *****)(uVar17 - 0x20);
        uVar13 = uVar27 << uVar17;
        if (-1 < (int)pppppuVar26) {
          uVar13 = 0;
        }
        pppppuVar37 = (uint3 *****)(uVar13 | (uint)pppppuVar37);
        uVar13 = uVar27 >> (0x20 - uVar17 & 0xff);
        if (-1 < (int)pppppuVar26) {
          uVar13 = uVar27 << ((uint)pppppuVar26 & 0xff);
        }
        pppppuVar33 = (uint3 *****)(uVar13 | (uint)pppppuVar33);
        if (-1 < (char)*(byte *)pppppuVar11) break;
        uVar15 = uVar15 + 7;
        bVar38 = local_58 == (uint3 *****)0x0;
        pppppuVar11 = pppppuVar36;
        local_58 = (uint3 *****)((int)local_58 + -1);
        if (bVar38) goto LAB_01997838;
      }
      uVar23 = 4;
      param_2[6] = pppppuVar36;
      param_2[7] = local_58;
      local_bc = pppppuVar33;
      local_b8 = pppppuVar37;
      goto LAB_01997074;
    }
LAB_019979e0:
    uVar15 = 0x38;
    break;
  case (uint3 *****)0x4:
    if (pppppuVar16 != (uint3 *****)0x0) {
      local_58 = (uint3 *****)((int)pppppuVar32 + -3);
      iVar24 = 0;
      pppppuVar37 = (uint3 *****)0x0;
      pppppuVar33 = (uint3 *****)0x0;
      uVar15 = 0;
      while( true ) {
        bVar2 = *(byte *)((int)pppppuVar18 + (1 - iVar24));
        pppppuVar36 = (uint3 *****)(uint)bVar2;
        if (uVar15 == 0x3f) {
          pppppuVar22 = (uint3 *****)&DAT_0000003f;
          if (&DAT_00000001 < pppppuVar36) goto LAB_0199773c;
        }
        uVar13 = uVar15 & 0x3f;
        uVar17 = (uint)pppppuVar36 & 0x7f;
        uVar27 = uVar13 - 0x20;
        pppppuVar11 = (uint3 *****)((int)pppppuVar31 + 1);
        pppppuVar26 = (uint3 *****)(uVar17 << uVar13);
        if (-1 < (int)uVar27) {
          pppppuVar26 = (uint3 *****)0x0;
        }
        pppppuVar37 = (uint3 *****)((uint)pppppuVar26 | (uint)pppppuVar37);
        uVar13 = uVar17 >> (0x20 - uVar13 & 0xff);
        if (-1 < (int)uVar27) {
          uVar13 = uVar17 << (uVar27 & 0xff);
        }
        pppppuVar33 = (uint3 *****)(uVar13 | (uint)pppppuVar33);
        if ((uint)(int)(char)bVar2 < 0x80000000) break;
        iVar24 = iVar24 + -1;
        local_58 = (uint3 *****)((int)local_58 + -1);
        uVar15 = uVar15 + 7;
        pppppuVar31 = pppppuVar11;
        if (1 - (int)pppppuVar32 == iVar24) {
          local_4c = pppppuVar36;
          goto LAB_019977dc;
        }
      }
      pbVar28 = (byte *)((int)pppppuVar32 + iVar24 + -2);
      param_2[6] = pppppuVar11;
      param_2[7] = pbVar28;
      if (pbVar28 != (byte *)0x0) {
        pppppuVar35 = (uint3 *****)0x0;
        pppppuVar26 = (uint3 *****)0x0;
        uVar15 = 0;
        local_50 = 0;
        while( true ) {
          pppppuVar36 = (uint3 *****)((int)pppppuVar11 + 1);
          unaff_r9 = (uint3 *****)(uint)*(byte *)pppppuVar11;
          if ((uVar15 == 0x3f) && (&DAT_00000001 < unaff_r9)) {
            uVar15 = 6;
            pppppuVar22 = local_b0;
            pppppuVar26 = local_b4;
            goto switchD_01996c48_caseD_3;
          }
          uVar29 = uVar15 & 0x3f;
          uVar27 = (uint)unaff_r9 & 0x7f;
          uVar17 = uVar29 - 0x20;
          uVar13 = uVar27 << uVar29;
          if (-1 < (int)uVar17) {
            uVar13 = 0;
          }
          pppppuVar35 = (uint3 *****)(uVar13 | (uint)pppppuVar35);
          uVar13 = uVar27 >> (0x20 - uVar29 & 0xff);
          if (-1 < (int)uVar17) {
            uVar13 = uVar27 << (uVar17 & 0xff);
          }
          pppppuVar26 = (uint3 *****)(uVar13 | (uint)pppppuVar26);
          if (-1 < (char)*(byte *)pppppuVar11) break;
          uVar15 = uVar15 + 7;
          bVar38 = local_58 == (uint3 *****)0x0;
          pppppuVar11 = pppppuVar36;
          local_58 = (uint3 *****)((int)local_58 + -1);
          if (bVar38) {
            pppppuVar11 = (uint3 *****)((int)pppppuVar31 + (int)((int)pppppuVar16 + iVar24));
            param_2[6] = pppppuVar11;
            param_2[7] = 0;
            local_4c = unaff_r9;
            goto LAB_0199792c;
          }
        }
        uVar23 = 5;
        param_2[6] = pppppuVar36;
        param_2[7] = local_58;
        local_b4 = pppppuVar26;
        local_b0 = pppppuVar35;
        goto LAB_01997074;
      }
      goto LAB_0199792c;
    }
LAB_01997864:
LAB_019977ec:
    uVar15 = 0x13;
    pppppuVar22 = pppppuVar31;
    pppppuVar26 = (uint3 *****)0x0;
    pppppuVar33 = pppppuVar31;
    break;
  case (uint3 *****)0x5:
    uVar15 = 0x19;
    switch((uint)local_4c & 0xff) {
    case 1:
      if (pppppuVar16 != (uint3 *****)0x0) {
        local_58 = (uint3 *****)((int)pppppuVar32 + -2);
        pppppuVar37 = (uint3 *****)(uint)*(byte *)((int)pppppuVar18 + 1);
        pppppuVar36 = (uint3 *****)((int)pppppuVar18 + 2);
LAB_01996ef0:
        param_2[6] = pppppuVar36;
        param_2[7] = local_58;
        pppppuVar33 = (uint3 *****)0x0;
LAB_01996efc:
        uVar23 = 1;
        goto LAB_01997074;
      }
LAB_01997984:
      local_4c = (uint3 *****)&DAT_00000001;
      break;
    case 2:
      if (&DAT_00000003 <= pppppuVar32) {
        local_58 = (uint3 *****)((int)pppppuVar32 + -3);
        pppppuVar36 = (uint3 *****)((int)pppppuVar18 + 3);
        pppppuVar37 = (uint3 *****)(uint)*(ushort *)((int)pppppuVar18 + 1);
        goto LAB_01996ef0;
      }
LAB_019979b4:
      local_4c = (uint3 *****)0x2;
      break;
    default:
      goto switchD_01996c48_caseD_3;
    case 4:
      if (&DAT_00000005 <= pppppuVar32) {
        local_58 = (uint3 *****)((int)pppppuVar32 + -5);
        pppppuVar36 = (uint3 *****)((int)pppppuVar18 + 5);
        pppppuVar37 = *(uint3 ******)((int)pppppuVar18 + 1);
        goto LAB_01996ef0;
      }
LAB_01997994:
      local_4c = (uint3 *****)&SUB_00000004;
      break;
    case 8:
      if (&DAT_00000009 <= pppppuVar32) {
        local_58 = (uint3 *****)((int)pppppuVar32 + -9);
        bVar2 = *(byte *)(pppppuVar18 + 2);
        ppppuVar12 = pppppuVar18[1];
        pppppuVar36 = (uint3 *****)((int)pppppuVar18 + 9);
        uVar6 = *(uint3 *)pppppuVar31;
        param_2[7] = local_58;
        param_2[6] = pppppuVar36;
        pppppuVar33 = (uint3 *****)((uint)bVar2 << 0x18 | (uint)ppppuVar12 >> 8);
        pppppuVar37 = (uint3 *****)((uint)uVar6 | (int)ppppuVar12 << 0x18);
        pppppuVar26 = local_58;
        goto LAB_01996efc;
      }
LAB_019979a4:
      local_4c = (uint3 *****)&DAT_00000008;
    }
    pppppuVar26 = (uint3 *****)0x0;
    uVar15 = 0x13;
    pppppuVar22 = pppppuVar31;
    pppppuVar33 = pppppuVar31;
    break;
  case (uint3 *****)0x6:
    uVar15 = 0x19;
    switch((uint)local_4c & 0xff) {
    case 1:
      if (pppppuVar16 == (uint3 *****)0x0) goto LAB_01997984;
      pppppuVar11 = (uint3 *****)((int)pppppuVar18 + 2);
      pppppuVar37 = (uint3 *****)(uint)*(byte *)((int)pppppuVar18 + 1);
      param_2[7] = (ushort *)((int)pppppuVar32 + -2);
      param_2[6] = pppppuVar11;
      if ((ushort *)((int)pppppuVar32 + -2) != (ushort *)0x0) {
        local_58 = (uint3 *****)((int)pppppuVar32 + -3);
        pppppuVar35 = (uint3 *****)(uint)*(byte *)((int)pppppuVar18 + 2);
        pppppuVar36 = (uint3 *****)((int)pppppuVar18 + 3);
LAB_01997064:
        pppppuVar26 = (uint3 *****)0x0;
        param_2[6] = pppppuVar36;
        param_2[7] = local_58;
        uVar23 = 6;
        pppppuVar33 = (uint3 *****)0x0;
        goto LAB_01997074;
      }
      break;
    case 2:
      if (pppppuVar32 < &DAT_00000003) goto LAB_019979b4;
      pppppuVar11 = (uint3 *****)((int)pppppuVar18 + 3);
      pppppuVar37 = (uint3 *****)(uint)*(ushort *)((int)pppppuVar18 + 1);
      param_2[7] = (byte *)((int)pppppuVar32 + -3);
      param_2[6] = pppppuVar11;
      if (&DAT_00000001 < (byte *)((int)pppppuVar32 + -3)) {
        local_58 = (uint3 *****)((int)pppppuVar32 + -5);
        pppppuVar36 = (uint3 *****)((int)pppppuVar18 + 5);
        pppppuVar35 = (uint3 *****)(uint)*(ushort *)((int)pppppuVar18 + 3);
        goto LAB_01997064;
      }
      break;
    default:
      goto switchD_01996c48_caseD_3;
    case 4:
      if (pppppuVar32 < &DAT_00000005) goto LAB_01997994;
      pppppuVar11 = (uint3 *****)((int)pppppuVar18 + 5);
      pppppuVar37 = *(uint3 ******)((int)pppppuVar18 + 1);
      param_2[7] = (byte *)((int)pppppuVar32 + -5);
      param_2[6] = pppppuVar11;
      if (&DAT_00000003 < (byte *)((int)pppppuVar32 + -5)) {
        local_58 = (uint3 *****)((int)pppppuVar32 + -9);
        pppppuVar36 = (uint3 *****)((int)pppppuVar18 + 9);
        pppppuVar35 = *(uint3 ******)((int)pppppuVar18 + 5);
        goto LAB_01997064;
      }
      break;
    case 8:
      if (pppppuVar32 < &DAT_00000009) goto LAB_019979a4;
      pppppuVar11 = (uint3 *****)((int)pppppuVar18 + 9);
      bVar2 = *(byte *)((int)pppppuVar18 + 3);
      param_2[7] = (byte *)((int)pppppuVar32 + -9);
      param_2[6] = pppppuVar11;
      if (&DAT_00000007 < (byte *)((int)pppppuVar32 + -9)) {
        uVar4 = *(ushort *)pppppuVar31;
        local_58 = (uint3 *****)((int)pppppuVar32 + -0x11);
        bVar3 = *(byte *)(pppppuVar18 + 2);
        pppppuVar36 = (uint3 *****)((int)pppppuVar18 + 0x11);
        ppppuVar12 = pppppuVar18[1];
        uVar23 = 6;
        param_2[6] = pppppuVar36;
        param_2[7] = local_58;
        pppppuVar33 = (uint3 *****)((uint)bVar3 << 0x18 | (uint)ppppuVar12 >> 8);
        pppppuVar37 = (uint3 *****)((uint)CONCAT12(bVar2,uVar4) | (int)ppppuVar12 << 0x18);
        pppppuVar26 = (uint3 *****)
                      ((uint)pppppuVar18[3] >> 8 | (uint)*(byte *)(pppppuVar18 + 4) << 0x18);
        pppppuVar35 = (uint3 *****)((uint)*(uint3 *)pppppuVar11 | (int)pppppuVar18[3] << 0x18);
        goto LAB_01997074;
      }
    }
    goto LAB_0199792c;
  case (uint3 *****)0x7:
    uVar15 = 0x19;
    switch((uint)local_4c & 0xff) {
    case 1:
      if (pppppuVar16 == (uint3 *****)0x0) goto LAB_01997984;
      pppppuVar32 = (uint3 *****)((int)pppppuVar32 + -2);
      pppppuVar11 = (uint3 *****)((int)pppppuVar18 + 2);
      pppppuVar37 = (uint3 *****)(uint)*(byte *)((int)pppppuVar18 + 1);
      break;
    case 2:
      if (pppppuVar32 < &DAT_00000003) goto LAB_019979b4;
      pppppuVar32 = (uint3 *****)((int)pppppuVar32 + -3);
      pppppuVar11 = (uint3 *****)((int)pppppuVar18 + 3);
      pppppuVar37 = (uint3 *****)(uint)*(ushort *)((int)pppppuVar18 + 1);
      break;
    default:
      goto switchD_01996c48_caseD_3;
    case 4:
      if (pppppuVar32 < &DAT_00000005) goto LAB_01997994;
      pppppuVar32 = (uint3 *****)((int)pppppuVar32 + -5);
      pppppuVar11 = (uint3 *****)((int)pppppuVar18 + 5);
      pppppuVar37 = *(uint3 ******)((int)pppppuVar18 + 1);
      break;
    case 8:
      if (pppppuVar32 < &DAT_00000009) goto LAB_019979a4;
      ppppuVar12 = pppppuVar18[1];
      pppppuVar32 = (uint3 *****)((int)pppppuVar32 + -9);
      bVar2 = *(byte *)(pppppuVar18 + 2);
      pppppuVar11 = (uint3 *****)((int)pppppuVar18 + 9);
      uVar6 = *(uint3 *)pppppuVar31;
      param_2[7] = pppppuVar32;
      param_2[6] = pppppuVar11;
      pppppuVar33 = (uint3 *****)((uint)bVar2 << 0x18 | (uint)ppppuVar12 >> 8);
      pppppuVar37 = (uint3 *****)((uint)uVar6 | (int)ppppuVar12 << 0x18);
      goto LAB_019970ec;
    }
    pppppuVar33 = (uint3 *****)0x0;
    param_2[6] = pppppuVar11;
    param_2[7] = pppppuVar32;
LAB_019970ec:
    if (pppppuVar32 == (uint3 *****)0x0) goto LAB_0199792c;
    pppppuVar35 = (uint3 *****)0x0;
    pppppuVar26 = (uint3 *****)0x0;
    uVar15 = 0;
    pppppuVar18 = pppppuVar11;
    local_58 = pppppuVar32;
    while( true ) {
      local_58 = (uint3 *****)((int)local_58 + -1);
      pppppuVar36 = (uint3 *****)((int)pppppuVar18 + 1);
      pppppuVar31 = (uint3 *****)(uint)*(byte *)pppppuVar18;
      if ((uVar15 == 0x3f) && (&DAT_00000001 < pppppuVar31)) {
        uVar15 = 6;
        param_2[6] = pppppuVar36;
        param_2[7] = local_58;
        local_50 = 0;
        pppppuVar22 = local_a0;
        pppppuVar26 = local_a4;
        goto switchD_01996c48_caseD_3;
      }
      uVar29 = uVar15 & 0x3f;
      uVar27 = (uint)pppppuVar31 & 0x7f;
      uVar17 = uVar29 - 0x20;
      uVar13 = uVar27 << uVar29;
      if (-1 < (int)uVar17) {
        uVar13 = 0;
      }
      pppppuVar35 = (uint3 *****)(uVar13 | (uint)pppppuVar35);
      uVar13 = uVar27 >> (0x20 - uVar29 & 0xff);
      if (-1 < (int)uVar17) {
        uVar13 = uVar27 << (uVar17 & 0xff);
      }
      pppppuVar26 = (uint3 *****)(uVar13 | (uint)pppppuVar26);
      if ((uint)(int)(char)*(byte *)pppppuVar18 < 0x80000000) break;
      uVar15 = uVar15 + 7;
      pppppuVar18 = pppppuVar36;
      if (local_58 == (uint3 *****)0x0) {
        pppppuVar11 = (uint3 *****)((int)pppppuVar11 + (int)pppppuVar32);
        param_2[6] = pppppuVar11;
        param_2[7] = 0;
        local_4c = pppppuVar31;
        goto LAB_0199792c;
      }
    }
    uVar23 = 7;
    param_2[6] = pppppuVar36;
    param_2[7] = local_58;
    unaff_r9 = pppppuVar35;
    local_a4 = pppppuVar26;
    local_a0 = pppppuVar35;
LAB_01997084:
    local_50 = (uint)pppppuVar37 >> 0x10;
    uVar15 = (uint)pppppuVar37 >> 8;
    pppppuVar32 = pppppuVar33;
    pppppuVar18 = local_58;
    switch(uVar23) {
    default:
      goto switchD_0199708c_caseD_0;
    case 1:
      local_64 = (uint3 *****)(local_50 << 0x10 | (uVar15 & 0xff) << 8 | (uint)pppppuVar37 & 0xff);
      local_68 = pppppuVar33;
LAB_0199764c:
      *param_2 = local_64;
      param_2[1] = local_68;
      goto LAB_0199669c;
    case 2:
      if (pppppuVar34 < pppppuVar21) {
        pppppuVar33 = (uint3 *****)0x0;
        local_9c = 0x13;
        pppppuVar10 = pppppuVar26;
        pppppuVar26 = pppppuVar25;
        goto LAB_01997b60;
      }
      uVar15 = (uint)(ZEXT48(pppppuVar10) * ZEXT48(unaff_r9));
      if ((int)(ZEXT48(pppppuVar10) * ZEXT48(unaff_r9) >> 0x20) != 0) {
        local_9c = 0x38;
        goto LAB_01997b60;
      }
      if (uVar9 < uVar15) {
        pppppuVar33 = (uint3 *****)0x0;
        local_9c = 0x13;
        pppppuVar26 = pppppuVar8;
        goto LAB_01997b60;
      }
      if (((uint)local_4c & 0xff) - 1 < 8) {
        pppppuVar18 = (uint3 *****)((int)pppppuVar8 + uVar15);
        uVar13 = uVar9 - uVar15;
        switch((uint)local_4c & 0xff) {
        case 1:
          if (uVar9 != uVar15) {
            local_64 = (uint3 *****)(uint)*(byte *)pppppuVar18;
LAB_01997630:
            local_d4 = (uint3 *****)0x0;
            local_68 = local_d4;
            pppppuVar37 = pppppuVar35;
            local_d0 = local_64;
            goto LAB_0199764c;
          }
          break;
        case 2:
          if (1 < uVar13) {
            local_64 = (uint3 *****)(uint)*(ushort *)pppppuVar18;
            goto LAB_01997630;
          }
          break;
        default:
          goto switchD_019973c8_caseD_3;
        case 4:
          if (3 < uVar13) {
            local_64 = (uint3 *****)*pppppuVar18;
            goto LAB_01997630;
          }
          break;
        case 8:
          if (7 < uVar13) {
            local_d4 = (uint3 *****)
                       (*(uint *)((int)pppppuVar18 + 3) >> 8 |
                       (uint)*(byte *)((int)pppppuVar18 + 7) << 0x18);
            local_64 = (uint3 *****)
                       ((uint)*(uint3 *)pppppuVar18 | *(uint *)((int)pppppuVar18 + 3) << 0x18);
            local_68 = local_d4;
            pppppuVar37 = pppppuVar35;
            local_d0 = local_64;
            goto LAB_0199764c;
          }
        }
        pppppuVar33 = (uint3 *****)0x0;
        local_9c = 0x13;
        pppppuVar26 = pppppuVar18;
      }
      else {
switchD_019973c8_caseD_3:
        local_9c = 0x19;
        pppppuVar33 = local_d4;
        pppppuVar26 = local_d0;
      }
      goto LAB_01997b60;
    case 3:
      goto switchD_0199708c_caseD_3;
    case 4:
      if (pppppuVar34 < pppppuVar21) {
        local_c8 = (uint3 *****)0x0;
        local_9c = 0x13;
        local_cc = pppppuVar25;
switchD_01997490_caseD_3:
        pppppuVar33 = local_c8;
        pppppuVar26 = local_cc;
        goto LAB_01997b60;
      }
      uVar13 = (uint)(ZEXT48(pppppuVar10) * ZEXT48(unaff_r9));
      if ((int)(ZEXT48(pppppuVar10) * ZEXT48(unaff_r9) >> 0x20) != 0) {
        local_9c = 0x38;
        goto switchD_01997490_caseD_3;
      }
      if (uVar9 < uVar13) {
        local_c8 = (uint3 *****)0x0;
        local_9c = 0x13;
        local_cc = pppppuVar8;
        goto switchD_01997490_caseD_3;
      }
      pppppuVar18 = (uint3 *****)&DAT_ffffffff;
      local_9c = 0x19;
      if (7 < ((uint)local_4c & 0xff) - 1) goto switchD_01997490_caseD_3;
      pppppuVar18 = (uint3 *****)((int)pppppuVar8 + uVar13);
      uVar17 = uVar9 - uVar13;
      switch((uint)local_4c & 0xff) {
      case 1:
        if (uVar9 == uVar13) {
LAB_01997aac:
          local_c8 = (uint3 *****)0x0;
          local_9c = 0x13;
          local_cc = pppppuVar18;
          goto switchD_01997490_caseD_3;
        }
        local_cc = (uint3 *****)(uint)*(byte *)pppppuVar18;
        break;
      case 2:
        if (uVar17 < 2) goto LAB_01997aac;
        local_cc = (uint3 *****)(uint)*(ushort *)pppppuVar18;
        break;
      default:
        goto switchD_01997490_caseD_3;
      case 4:
        if (uVar17 < 4) goto LAB_01997aac;
        local_cc = (uint3 *****)*pppppuVar18;
        break;
      case 8:
        if (uVar17 < 8) goto LAB_01997aac;
        local_c8 = (uint3 *****)
                   (*(uint *)((int)pppppuVar18 + 3) >> 8 |
                   (uint)*(byte *)((int)pppppuVar18 + 7) << 0x18);
        local_cc = (uint3 *****)
                   ((uint)*(uint3 *)pppppuVar18 | *(uint *)((int)pppppuVar18 + 3) << 0x18);
        goto LAB_019976b4;
      }
      local_c8 = (uint3 *****)0x0;
LAB_019976b4:
      uVar15 = local_50 << 0x10 | (uVar15 & 0xff) << 8 | (uint)pppppuVar37 & 0xff;
      pppppuVar32 = local_c8;
      pppppuVar18 = local_cc;
      pppppuVar31 = (uint3 *****)
                    ((uint)((byte *)((int)pppppuVar33 + (int)local_c8) +
                           CARRY4(uVar15,(uint)local_cc)) & (uint)pppppuVar30);
      pppppuVar37 = (uint3 *****)((uint)(uVar15 + (int)local_cc) & uVar19);
      goto LAB_019976f8;
    case 6:
      pppppuVar18 = (uint3 *****)
                    (local_50 << 0x10 | (uVar15 & 0xff) << 8 | (uint)pppppuVar37 & 0xff);
      pppppuVar31 = pppppuVar26;
      pppppuVar37 = pppppuVar35;
      goto LAB_019976f8;
    case 7:
      pppppuVar18 = (uint3 *****)
                    (local_50 << 0x10 | (uVar15 & 0xff) << 8 | (uint)pppppuVar37 & 0xff);
      pppppuVar31 = (uint3 *****)
                    ((uint)pppppuVar30 &
                    (uint)((byte *)((int)pppppuVar33 + (int)pppppuVar26) +
                          CARRY4((uint)pppppuVar18,(uint)pppppuVar35)));
      pppppuVar37 = (uint3 *****)(uVar19 & (uint)((int)pppppuVar18 + (int)pppppuVar35));
      goto LAB_019976f8;
    }
  }
  goto switchD_01996c48_caseD_3;
LAB_0199773c:
  uVar15 = 6;
  goto switchD_01996c48_caseD_3;
switchD_0199708c_caseD_0:
  pppppuVar32 = local_58;
  pppppuVar18 = pppppuVar36;
  if (local_68 <= pppppuVar30 &&
      (uint)((uint3 *****)(uVar19 & 0xfffffffe) <= local_64) <=
      (uint)((int)local_68 - (int)pppppuVar30)) goto LAB_01997218;
  goto LAB_019966a4;
LAB_01997218:
  uVar15 = local_50 << 0x10 | (uVar15 & 0xff) << 8 | (uint)pppppuVar37 & 0xff;
  pppppuVar32 = (uint3 *****)
                ((uint)((byte *)((int)pppppuVar33 + (int)local_68) + CARRY4(uVar15,(uint)local_64))
                & (uint)pppppuVar30);
  pppppuVar18 = (uint3 *****)((uint)(uVar15 + (int)local_64) & uVar19);
  pppppuVar31 = (uint3 *****)
                ((uint)((byte *)((int)local_68 + (int)pppppuVar26) +
                       CARRY4((uint)local_64,(uint)pppppuVar35)) & (uint)pppppuVar30);
  pppppuVar37 = (uint3 *****)((uint)((int)local_64 + (int)pppppuVar35) & uVar19);
LAB_019976f8:
  if ((pppppuVar32 <= pppppuVar30 &&
       (uint)((uint3 *****)(uVar19 & 0xfffffffe) <= pppppuVar18) <=
       (uint)((int)pppppuVar32 - (int)pppppuVar30)) &&
     (pppppuVar32 <= pppppuVar31 &&
      (uint)(pppppuVar37 <= pppppuVar18) <= (uint)((int)pppppuVar32 - (int)pppppuVar31))) {
    *param_1 = 1;
    param_1[1] = 0;
    param_1[3] = pppppuVar32;
    param_1[4] = pppppuVar37;
    *puVar7 = (uint)pppppuVar18;
    param_1[5] = pppppuVar31;
    return;
  }
  goto LAB_0199669c;
switchD_0199708c_caseD_3:
  if (pppppuVar34 < pppppuVar21) {
    local_a8 = (uint3 *****)0x0;
    local_9c = 0x13;
    local_ac = pppppuVar25;
switchD_0199732c_caseD_3:
    pppppuVar33 = local_a8;
    pppppuVar26 = local_ac;
    goto LAB_01997b60;
  }
  uVar13 = (uint)(ZEXT48(pppppuVar10) * ZEXT48(unaff_r9));
  if ((int)(ZEXT48(pppppuVar10) * ZEXT48(unaff_r9) >> 0x20) != 0) {
    local_9c = 0x38;
    goto switchD_0199732c_caseD_3;
  }
  if (uVar9 < uVar13) {
    local_a8 = (uint3 *****)0x0;
    local_9c = 0x13;
    local_ac = pppppuVar8;
    goto switchD_0199732c_caseD_3;
  }
  pppppuVar18 = (uint3 *****)&DAT_ffffffff;
  local_9c = 0x19;
  if (7 < ((uint)local_4c & 0xff) - 1) goto switchD_0199732c_caseD_3;
  pppppuVar18 = (uint3 *****)((int)pppppuVar8 + uVar13);
  uVar17 = uVar9 - uVar13;
  switch((uint)local_4c & 0xff) {
  case 1:
    if (uVar9 == uVar13) {
LAB_01997ae8:
      local_a8 = (uint3 *****)0x0;
      local_9c = 0x13;
      local_ac = pppppuVar18;
      goto switchD_0199732c_caseD_3;
    }
    local_ac = (uint3 *****)(uint)*(byte *)pppppuVar18;
    break;
  case 2:
    if (uVar17 < 2) goto LAB_01997ae8;
    local_ac = (uint3 *****)(uint)*(ushort *)pppppuVar18;
    break;
  default:
    goto switchD_0199732c_caseD_3;
  case 4:
    if (uVar17 < 4) goto LAB_01997ae8;
    local_ac = (uint3 *****)*pppppuVar18;
    break;
  case 8:
    if (uVar17 < 8) goto LAB_01997ae8;
    local_a8 = (uint3 *****)
               (*(uint *)((int)pppppuVar18 + 3) >> 8 | (uint)*(byte *)((int)pppppuVar18 + 7) << 0x18
               );
    local_ac = (uint3 *****)((uint)*(uint3 *)pppppuVar18 | *(uint *)((int)pppppuVar18 + 3) << 0x18);
    goto LAB_01997564;
  }
  local_a8 = (uint3 *****)0x0;
LAB_01997564:
  lVar5 = ZEXT48(pppppuVar10) *
          (ulonglong)(local_50 << 0x10 | (uVar15 & 0xff) << 8 | (uint)pppppuVar37 & 0xff);
  uVar15 = (uint)lVar5;
  if ((int)((ulonglong)lVar5 >> 0x20) == 0) {
    if (uVar9 < uVar15) {
      pppppuVar33 = (uint3 *****)0x0;
      local_9c = 0x13;
      pppppuVar26 = pppppuVar8;
    }
    else {
      local_28 = uVar9 - uVar15;
      local_2c = (byte *)((int)pppppuVar8 + uVar15);
      FUN_01997b8c(local_40,&local_2c,local_4c);
      local_9c = (uint)local_40[0];
      if (local_9c == 0x52) {
        pppppuVar32 = local_a8;
        pppppuVar18 = local_ac;
        pppppuVar31 = local_34;
        pppppuVar37 = local_38;
        goto LAB_019976f8;
      }
      pppppuVar33 = local_34;
      pppppuVar26 = local_38;
    }
  }
  else {
    local_9c = 0x38;
  }
  pppppuVar10 = *(uint3 ******)((uint)local_40 | 1);
  pppppuVar18 = (uint3 *****)
                ((uint)pppppuVar10 >> 0x18 |
                (uint)*(uint3 *)((undefined4 *)((uint)local_40 | 1) + 1) << 8);
LAB_01997b60:
  *puVar7 = local_9c | (int)pppppuVar10 << 8;
  param_1[3] = pppppuVar18;
  param_1[4] = pppppuVar26;
  *param_1 = 2;
  param_1[1] = 0;
  param_1[5] = pppppuVar33;
  return;
LAB_01997838:
  pppppuVar11 = (uint3 *****)((int)pppppuVar31 + (int)((int)pppppuVar16 + (int)pppppuVar22));
  param_2[6] = pppppuVar11;
  param_2[7] = 0;
  local_4c = pppppuVar35;
LAB_0199792c:
  local_50 = 0;
  uVar15 = 0x13;
  pppppuVar22 = pppppuVar11;
  pppppuVar26 = (uint3 *****)0x0;
  pppppuVar33 = pppppuVar11;
switchD_01996c48_caseD_3:
  uVar20 = 2;
  param_2[6] = 1;
  param_2[7] = 0;
  *puVar7 = ((uint)local_4c & 0xff) << 8 | local_50 << 0x10 | uVar15;
  param_1[3] = pppppuVar33;
  param_1[4] = pppppuVar22;
  param_1[5] = pppppuVar26;
LAB_01997970:
  *param_1 = uVar20;
  param_1[1] = 0;
  return;
}

