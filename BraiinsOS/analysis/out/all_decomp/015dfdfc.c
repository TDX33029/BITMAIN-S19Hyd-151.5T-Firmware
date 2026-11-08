// FUN_015dfdfc @ 015dfdfc size=2636 calls_out=0 calls_in=2
// strings: 

void FUN_015dfdfc(undefined4 *param_1,undefined4 *param_2,uint param_3,short param_4)

{
  char cVar1;
  uint *puVar2;
  uint3 uVar3;
  uint uVar4;
  uint *puVar5;
  undefined1 uVar6;
  uint uVar7;
  uint3 *puVar8;
  byte *pbVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  byte *pbVar15;
  uint *puVar16;
  undefined4 uVar17;
  uint uVar18;
  byte *pbVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  byte bVar24;
  
  uVar7 = (param_3 & 0xffff) >> 8;
  switch(param_4) {
  case 3:
    puVar10 = (uint *)*param_2;
    if ((uint)param_2[1] < 2) {
LAB_015e0374:
      param_1[4] = puVar10;
      param_1[5] = 0;
      param_1[3] = puVar10;
      goto LAB_015e04fc;
    }
    puVar23 = (uint *)((int)puVar10 + 2);
    uVar11 = (uint)(ushort)*puVar10;
    uVar18 = param_2[1] - 2;
    *param_2 = puVar23;
    param_2[1] = uVar18;
    if (uVar11 <= uVar18) {
LAB_015e05dc:
      uVar7 = (uint)puVar23 >> 0x10;
      *param_2 = (byte *)((int)puVar23 + uVar11);
      param_2[1] = uVar18 - uVar11;
      uVar18 = (uint)puVar23 >> 8;
      uVar17 = 1;
      goto LAB_015e0804;
    }
    goto LAB_015e0364;
  case 4:
    puVar10 = (uint *)*param_2;
    if ((uint)param_2[1] < 4) goto LAB_015e0374;
    puVar23 = puVar10 + 1;
    uVar11 = *puVar10;
    uVar18 = param_2[1] - 4;
    *param_2 = puVar23;
    param_2[1] = uVar18;
    if (uVar11 <= uVar18) goto LAB_015e05dc;
    goto LAB_015e0364;
  case 5:
    puVar8 = (uint3 *)*param_2;
    if (1 < (uint)param_2[1]) {
      uVar3 = *puVar8;
      puVar23 = (uint *)(uint)(ushort)uVar3;
      uVar11 = param_2[1] - 2;
      uVar17 = 3;
      *param_2 = (ushort *)((int)puVar8 + 2);
      param_2[1] = uVar11;
      uVar18 = (uint)(ushort)((ushort)uVar3 >> 8);
LAB_015e04e4:
      uVar7 = 0;
LAB_015e0804:
      param_1[2] = uVar17;
      param_1[3] = 0;
      param_1[4] = (uint)puVar23 & 0xff | (uVar18 & 0xff) << 8 | uVar7 << 0x10;
      param_1[5] = uVar11;
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    goto LAB_015e03d0;
  case 6:
    puVar8 = (uint3 *)*param_2;
    if (3 < (uint)param_2[1]) {
      puVar23 = *(uint **)puVar8;
      uVar11 = param_2[1] - 4;
      uVar17 = 4;
      *param_2 = puVar8 + 1;
      param_2[1] = uVar11;
      uVar7 = (uint)puVar23 >> 0x10;
      uVar18 = (uint)puVar23 >> 8;
      goto LAB_015e0804;
    }
    break;
  case 7:
    puVar8 = (uint3 *)*param_2;
    if (7 < (uint)param_2[1]) {
      bVar24 = *(byte *)((int)puVar8 + 7);
      uVar7 = *(uint *)((int)puVar8 + 3);
      puVar23 = (uint *)(uint)*puVar8;
      param_2[1] = param_2[1] - 8;
      *param_2 = puVar8 + 2;
      uVar11 = (uint)bVar24 << 0x18 | uVar7 >> 8;
      uVar18 = (uint)puVar23 | uVar7 << 0x18;
      uVar7 = uVar18 >> 0x10;
      uVar18 = uVar18 >> 8;
      uVar17 = 5;
      goto LAB_015e0804;
    }
    break;
  case 8:
    uVar18 = param_2[1];
    puVar23 = (uint *)*param_2;
    if (uVar18 != 0) {
      uVar11 = 0;
      do {
        if (*(byte *)((int)puVar23 + uVar11) == 0) {
          uVar7 = (uint)puVar23 >> 0x10;
          *param_2 = (byte *)((int)puVar23 + uVar11 + 1);
          param_2[1] = uVar18 + ~uVar11;
          uVar18 = (uint)puVar23 >> 8;
          uVar17 = 0x1f;
          goto LAB_015e0804;
        }
        uVar11 = uVar11 + 1;
      } while (uVar18 != uVar11);
    }
    goto LAB_015e0364;
  case 9:
    puVar14 = (uint *)*param_2;
    uVar18 = param_2[1];
    if (uVar18 == 0) {
      bVar24 = 0;
    }
    else {
      puVar5 = (uint *)((int)puVar14 + uVar18);
      uVar11 = 0;
      uVar4 = 0;
      uVar7 = 0;
      puVar10 = puVar5;
      puVar2 = puVar14;
      do {
        uVar18 = uVar18 - 1;
        puVar23 = (uint *)((int)puVar2 + 1);
        bVar24 = (byte)*puVar2;
        if ((uVar7 == 0x3f) && (1 < bVar24)) {
          *param_2 = puVar23;
          param_2[1] = uVar18;
          uVar6 = 6;
LAB_015e0890:
          bVar24 = 0;
          goto LAB_015e0898;
        }
        uVar21 = uVar7 & 0x3f;
        uVar22 = bVar24 & 0x7f;
        uVar20 = uVar21 - 0x20;
        uVar13 = uVar22 << uVar21;
        if (-1 < (int)uVar20) {
          uVar13 = 0;
        }
        uVar11 = uVar13 | uVar11;
        uVar13 = uVar22 >> (0x20 - uVar21 & 0xff);
        if (-1 < (int)uVar20) {
          uVar13 = uVar22 << (uVar20 & 0xff);
        }
        uVar4 = uVar13 | uVar4;
        puVar10 = (uint *)(int)(char)bVar24;
        if (puVar10 < &DAT_80000000) {
          *param_2 = puVar23;
          param_2[1] = uVar18;
          if (uVar4 != 0) {
            uVar6 = 0x38;
            goto LAB_015e0890;
          }
          if (uVar18 < uVar11) goto LAB_015e0364;
          uVar7 = (uint)puVar23 >> 0x10;
          *param_2 = (byte *)((int)puVar23 + uVar11);
          param_2[1] = uVar18 - uVar11;
          uVar18 = (uint)puVar23 >> 8;
          uVar17 = 1;
          goto LAB_015e0804;
        }
        uVar7 = uVar7 + 7;
        puVar2 = puVar23;
      } while (uVar18 != 0);
      *param_2 = puVar5;
      param_2[1] = 0;
      puVar14 = puVar5;
    }
    puVar10 = (uint *)0x0;
    uVar6 = 0x13;
    goto LAB_015e0898;
  case 10:
    puVar10 = (uint *)*param_2;
    if (param_2[1] == 0) goto LAB_015e0374;
    puVar23 = (uint *)((int)puVar10 + 1);
    uVar11 = (uint)(byte)*puVar10;
    uVar18 = param_2[1] - 1;
    *param_2 = puVar23;
    param_2[1] = uVar18;
    if (uVar11 <= uVar18) goto LAB_015e05dc;
    goto LAB_015e0364;
  case 0xb:
    puVar8 = (uint3 *)*param_2;
    uVar11 = param_2[1];
    if (uVar11 != 0) {
      bVar24 = (byte)*puVar8;
      param_2[1] = uVar11 - 1;
      uVar17 = 2;
LAB_015e04d8:
      *param_2 = (char *)((int)puVar8 + 1);
LAB_015e04dc:
      puVar23 = (uint *)(uint)bVar24;
      uVar18 = 0;
      goto LAB_015e04e4;
    }
    goto LAB_015e03d0;
  case 0xc:
    puVar8 = (uint3 *)*param_2;
    if (param_2[1] != 0) {
      uVar11 = param_2[1] - 1;
      uVar17 = 9;
      bVar24 = (char)*puVar8 != '\0';
      *param_2 = (char *)((int)puVar8 + 1);
      param_2[1] = uVar11;
      goto LAB_015e04dc;
    }
LAB_015e03d0:
    param_1[3] = puVar8;
    param_1[4] = puVar8;
    goto LAB_015e03dc;
  case 0xd:
    pbVar9 = (byte *)*param_2;
    iVar12 = param_2[1];
    uVar7 = 0;
    if (iVar12 == 0) {
      bVar24 = 0;
    }
    else {
      pbVar19 = pbVar9 + iVar12;
      puVar23 = (uint *)0x0;
      uVar11 = 0;
      uVar4 = 0;
      do {
        iVar12 = iVar12 + -1;
        pbVar15 = pbVar9 + 1;
        bVar24 = *pbVar9;
        uVar13 = (uint)bVar24;
        if ((uVar4 == 0x3f) && (uVar13 != 0x7f && uVar13 != 0)) {
          *param_2 = pbVar15;
          param_2[1] = iVar12;
          uVar6 = 7;
          bVar24 = 0;
          pbVar9 = &DAT_0000003f;
          goto LAB_015e06d8;
        }
        uVar21 = uVar4 & 0x3f;
        uVar18 = uVar13 & 0x7f;
        uVar22 = uVar21 - 0x20;
        uVar4 = uVar4 + 7;
        uVar7 = uVar18 << uVar21;
        if (-1 < (int)uVar22) {
          uVar7 = 0;
        }
        puVar23 = (uint *)(uVar7 | (uint)puVar23);
        uVar7 = uVar18 >> (0x20 - uVar21 & 0xff);
        if (-1 < (int)uVar22) {
          uVar7 = uVar18 << (uVar22 & 0xff);
        }
        uVar11 = uVar7 | uVar11;
        uVar7 = (uint)(char)bVar24;
        if (uVar7 < 0x80000000) {
          *param_2 = pbVar15;
          param_2[1] = iVar12;
          uVar7 = (uint)puVar23 >> 0x10;
          uVar18 = (uint)puVar23 >> 8;
          uVar17 = 6;
          if (((int)uVar4 < 0x40) && (0x3f < uVar13)) {
            uVar18 = 0xffffffff;
            uVar13 = (uVar4 & 0x3f) - 0x20;
            uVar7 = -1 << (uVar4 & 0x3f);
            if (-1 < (int)uVar13) {
              uVar7 = 0;
            }
            puVar23 = (uint *)((uint)puVar23 | uVar7);
            if (-1 < (int)uVar13) {
              uVar18 = -1 << (uVar13 & 0xff);
            }
            uVar11 = uVar11 | uVar18;
            uVar7 = (uint)puVar23 >> 0x10;
            uVar18 = (uint)puVar23 >> 8;
          }
          goto LAB_015e0804;
        }
        pbVar9 = pbVar15;
      } while (iVar12 != 0);
      *param_2 = pbVar19;
      param_2[1] = 0;
      pbVar9 = pbVar19;
    }
    uVar7 = 0;
    uVar6 = 0x13;
LAB_015e06d8:
    param_1[4] = pbVar9;
    param_1[3] = pbVar9;
    *(byte *)((int)param_1 + 9) = bVar24;
    *(undefined1 *)(param_1 + 2) = uVar6;
    param_1[5] = uVar7;
    goto LAB_015e08b0;
  case 0xe:
    if (uVar7 != 8) {
      puVar8 = (uint3 *)*param_2;
      if (3 < (uint)param_2[1]) {
        puVar23 = *(uint **)puVar8;
        uVar11 = param_2[1] - 4;
        *param_2 = puVar8 + 1;
        param_2[1] = uVar11;
LAB_015e062c:
        uVar7 = (uint)puVar23 >> 0x10;
        uVar18 = (uint)puVar23 >> 8;
        uVar17 = 0x1a;
        goto LAB_015e0804;
      }
      goto LAB_015e0678;
    }
    puVar8 = (uint3 *)*param_2;
    if ((uint)param_2[1] < 8) goto LAB_015e0678;
    cVar1 = *(char *)((int)puVar8 + 7);
    uVar7 = *(uint *)((int)puVar8 + 3);
    *param_2 = puVar8 + 2;
    param_2[1] = param_2[1] - 8;
    if (cVar1 == '\0' && uVar7 >> 8 == 0) {
      uVar11 = (uint)*(byte *)((int)puVar8 + 2);
      puVar23 = (uint *)(uVar7 << 0x18 | (uint)*puVar8);
      goto LAB_015e062c;
    }
LAB_015e060c:
    uVar6 = 0x38;
    goto LAB_015e0680;
  case 0xf:
    puVar14 = (uint *)*param_2;
    iVar12 = param_2[1];
    puVar10 = (uint *)0x0;
    if (iVar12 == 0) {
      bVar24 = 0;
    }
    else {
      puVar5 = (uint *)((int)puVar14 + iVar12);
      puVar23 = (uint *)0x0;
      uVar11 = 0;
      uVar7 = 0;
      puVar2 = puVar14;
      do {
        iVar12 = iVar12 + -1;
        puVar16 = (uint *)((int)puVar2 + 1);
        bVar24 = (byte)*puVar2;
        if ((uVar7 == 0x3f) && (1 < bVar24)) {
          bVar24 = 0;
          *param_2 = puVar16;
          param_2[1] = iVar12;
          uVar6 = 6;
          goto LAB_015e0898;
        }
        uVar4 = uVar7 & 0x3f;
        uVar13 = bVar24 & 0x7f;
        uVar21 = uVar4 - 0x20;
        uVar18 = uVar13 << uVar4;
        if (-1 < (int)uVar21) {
          uVar18 = 0;
        }
        puVar23 = (uint *)(uVar18 | (uint)puVar23);
        uVar18 = uVar13 >> (0x20 - uVar4 & 0xff);
        if (-1 < (int)uVar21) {
          uVar18 = uVar13 << (uVar21 & 0xff);
        }
        uVar11 = uVar18 | uVar11;
        puVar10 = (uint *)(int)(char)bVar24;
        if (puVar10 < &DAT_80000000) {
          uVar7 = (uint)puVar23 >> 0x10;
          *param_2 = puVar16;
          param_2[1] = iVar12;
          uVar18 = (uint)puVar23 >> 8;
          uVar17 = 7;
          goto LAB_015e0804;
        }
        uVar7 = uVar7 + 7;
        puVar2 = puVar16;
      } while (iVar12 != 0);
      *param_2 = puVar5;
      param_2[1] = 0;
      puVar14 = puVar5;
    }
    puVar10 = (uint *)0x0;
    uVar6 = 0x13;
LAB_015e0898:
    *(byte *)((int)param_1 + 9) = bVar24;
    param_1[4] = puVar14;
    param_1[3] = puVar14;
    *(undefined1 *)(param_1 + 2) = uVar6;
    param_1[5] = puVar10;
    goto LAB_015e08b0;
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x18:
  case 0x19:
  case 0x1b:
  case 0x1c:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
    goto switchD_015dfe28_caseD_10;
  case 0x17:
    if (uVar7 == 8) {
      puVar8 = (uint3 *)*param_2;
      if (7 < (uint)param_2[1]) {
        cVar1 = *(char *)((int)puVar8 + 7);
        uVar7 = *(uint *)((int)puVar8 + 3);
        *param_2 = puVar8 + 2;
        param_2[1] = param_2[1] - 8;
        if (cVar1 != '\0' || uVar7 >> 8 != 0) goto LAB_015e060c;
        uVar11 = (uint)*(byte *)((int)puVar8 + 2);
        puVar23 = (uint *)(uVar7 << 0x18 | (uint)*puVar8);
        goto LAB_015e07a8;
      }
    }
    else {
      puVar8 = (uint3 *)*param_2;
      if (3 < (uint)param_2[1]) {
        uVar11 = param_2[1] - 4;
        puVar23 = *(uint **)puVar8;
        *param_2 = puVar8 + 1;
        param_2[1] = uVar11;
LAB_015e07a8:
        uVar7 = (uint)puVar23 >> 0x10;
        uVar18 = (uint)puVar23 >> 8;
        uVar17 = 10;
        goto LAB_015e0804;
      }
    }
    goto LAB_015e0678;
  case 0x1a:
switchD_015dfe28_caseD_1a:
    pbVar9 = (byte *)*param_2;
    iVar12 = param_2[1];
    if (iVar12 == 0) {
      bVar24 = 0;
      uVar6 = 0x13;
    }
    else {
      pbVar19 = pbVar9 + iVar12;
      puVar23 = (uint *)0x0;
      uVar11 = 0;
      uVar7 = 0;
      do {
        iVar12 = iVar12 + -1;
        pbVar15 = pbVar9 + 1;
        bVar24 = *pbVar9;
        pbVar9 = pbVar19;
        if ((uVar7 == 0x3f) && (1 < bVar24)) {
          bVar24 = 0;
          *param_2 = pbVar15;
          param_2[1] = iVar12;
          uVar6 = 6;
          goto LAB_015e0874;
        }
        uVar13 = uVar7 & 0x3f;
        uVar4 = bVar24 & 0x7f;
        uVar21 = uVar13 - 0x20;
        uVar18 = uVar4 << uVar13;
        if (-1 < (int)uVar21) {
          uVar18 = 0;
        }
        puVar23 = (uint *)(uVar18 | (uint)puVar23);
        uVar18 = uVar4 >> (0x20 - uVar13 & 0xff);
        if (-1 < (int)uVar21) {
          uVar18 = uVar4 << (uVar21 & 0xff);
        }
        uVar11 = uVar18 | uVar11;
        if ((uint)(int)(char)bVar24 < 0x80000000) {
          *param_2 = pbVar15;
          param_2[1] = iVar12;
          if (uVar11 != 0) {
            uVar6 = 0x38;
            bVar24 = 0;
            goto LAB_015e0874;
          }
          uVar7 = (uint)puVar23 >> 0x10;
          uVar18 = (uint)puVar23 >> 8;
          uVar17 = 0x1d;
          uVar11 = 0;
          goto LAB_015e0804;
        }
        uVar7 = uVar7 + 7;
        pbVar9 = pbVar15;
      } while (iVar12 != 0);
      *param_2 = pbVar19;
      param_2[1] = 0;
      uVar6 = 0x13;
      pbVar9 = pbVar19;
    }
LAB_015e0874:
    param_1[3] = pbVar9;
    *(byte *)((int)param_1 + 9) = bVar24;
    *(undefined1 *)(param_1 + 2) = uVar6;
    param_1[4] = pbVar9;
    param_1[5] = 0;
    goto LAB_015e08b0;
  case 0x1d:
switchD_015dfe28_caseD_1d:
    if (uVar7 == 8) {
      puVar8 = (uint3 *)*param_2;
      if (7 < (uint)param_2[1]) {
        cVar1 = *(char *)((int)puVar8 + 7);
        uVar7 = *(uint *)((int)puVar8 + 3);
        *param_2 = puVar8 + 2;
        param_2[1] = param_2[1] - 8;
        if (cVar1 != '\0' || uVar7 >> 8 != 0) goto LAB_015e060c;
        uVar11 = (uint)*(byte *)((int)puVar8 + 2);
        puVar23 = (uint *)(uVar7 << 0x18 | (uint)*puVar8);
        goto LAB_015e05c8;
      }
    }
    else {
      puVar8 = (uint3 *)*param_2;
      if (3 < (uint)param_2[1]) {
        puVar23 = *(uint **)puVar8;
        uVar11 = param_2[1] - 4;
        *param_2 = puVar8 + 1;
        param_2[1] = uVar11;
LAB_015e05c8:
        uVar7 = (uint)puVar23 >> 0x10;
        uVar18 = (uint)puVar23 >> 8;
        uVar17 = 0x1b;
        goto LAB_015e0804;
      }
    }
    goto LAB_015e0678;
  case 0x1e:
    puVar23 = (uint *)*param_2;
    if (0xf < (uint)param_2[1]) {
      uVar7 = (uint)puVar23 >> 0x10;
      *param_2 = puVar23 + 4;
      param_2[1] = param_2[1] - 0x10;
      uVar18 = (uint)puVar23 >> 8;
      uVar17 = 1;
      uVar11 = 0x10;
      goto LAB_015e0804;
    }
LAB_015e0364:
    param_1[3] = puVar23;
    param_1[4] = puVar23;
LAB_015e03dc:
    param_1[5] = 0;
    goto LAB_015e04fc;
  case 0x1f:
    if (uVar7 == 8) {
      puVar8 = (uint3 *)*param_2;
      if (7 < (uint)param_2[1]) {
        cVar1 = *(char *)((int)puVar8 + 7);
        uVar7 = *(uint *)((int)puVar8 + 3);
        *param_2 = puVar8 + 2;
        param_2[1] = param_2[1] - 8;
        if (cVar1 != '\0' || uVar7 >> 8 != 0) goto LAB_015e060c;
        uVar11 = (uint)*(byte *)((int)puVar8 + 2);
        puVar23 = (uint *)(uVar7 << 0x18 | (uint)*puVar8);
        goto LAB_015e0658;
      }
    }
    else {
      puVar8 = (uint3 *)*param_2;
      if (3 < (uint)param_2[1]) {
        puVar23 = *(uint **)puVar8;
        uVar11 = param_2[1] - 4;
        *param_2 = puVar8 + 1;
        param_2[1] = uVar11;
LAB_015e0658:
        uVar7 = (uint)puVar23 >> 0x10;
        uVar18 = (uint)puVar23 >> 8;
        uVar17 = 0x1e;
        goto LAB_015e0804;
      }
    }
LAB_015e0678:
    uVar7 = 0;
    uVar6 = 0x13;
LAB_015e0680:
    param_1[3] = puVar8;
    *(undefined1 *)(param_1 + 2) = uVar6;
    param_1[4] = puVar8;
    param_1[5] = uVar7;
LAB_015e08b0:
    *param_1 = 1;
    param_1[1] = 0;
    return;
  case 0x25:
    puVar8 = (uint3 *)*param_2;
    uVar11 = param_2[1];
    if (uVar11 != 0) {
      bVar24 = (byte)*puVar8;
      param_2[1] = uVar11 - 1;
      uVar17 = 0x1d;
      goto LAB_015e04d8;
    }
    break;
  case 0x26:
    puVar8 = (uint3 *)*param_2;
    if (1 < (uint)param_2[1]) {
      uVar3 = *puVar8;
      puVar23 = (uint *)(uint)(ushort)uVar3;
      uVar11 = param_2[1] - 2;
      uVar17 = 0x1d;
      *param_2 = (ushort *)((int)puVar8 + 2);
      param_2[1] = uVar11;
      uVar18 = (uint)(ushort)((ushort)uVar3 >> 8);
      goto LAB_015e04e4;
    }
    break;
  case 0x27:
    puVar8 = (uint3 *)*param_2;
    if (2 < (uint)param_2[1]) {
      uVar7 = (uint)*(byte *)((int)puVar8 + 2);
      uVar11 = param_2[1] - 3;
      uVar3 = *puVar8;
      *param_2 = (char *)((int)puVar8 + 3);
      param_2[1] = uVar11;
      puVar23 = (uint *)(uint)uVar3;
LAB_015e0050:
      uVar18 = (uint)puVar23 >> 8;
      uVar17 = 0x1d;
      goto LAB_015e0804;
    }
    break;
  case 0x28:
    puVar8 = (uint3 *)*param_2;
    if (3 < (uint)param_2[1]) {
      puVar23 = *(uint **)puVar8;
      uVar11 = param_2[1] - 4;
      *param_2 = puVar8 + 1;
      param_2[1] = uVar11;
      uVar7 = (uint)puVar23 >> 0x10;
      goto LAB_015e0050;
    }
    break;
  default:
    if (param_4 == 0x1f02) goto switchD_015dfe28_caseD_1a;
    if (param_4 == 0x1f21) goto switchD_015dfe28_caseD_1d;
    goto switchD_015dfe28_caseD_10;
  }
  param_1[4] = puVar8;
  param_1[5] = 0;
  param_1[3] = puVar8;
LAB_015e04fc:
  *(undefined1 *)(param_1 + 2) = 0x13;
  *param_1 = 1;
  param_1[1] = 0;
  return;
switchD_015dfe28_caseD_10:
  *(short *)((int)param_1 + 10) = param_4;
  *(undefined1 *)(param_1 + 2) = 0xc;
  goto LAB_015e08b0;
}

