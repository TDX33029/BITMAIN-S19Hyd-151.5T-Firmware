// FUN_0199a654 @ 0199a654 size=2572 calls_out=0 calls_in=2
// strings: 

void FUN_0199a654(undefined4 *param_1,undefined4 *param_2,uint param_3,short param_4)

{
  char cVar1;
  ushort uVar2;
  uint3 uVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  undefined1 uVar7;
  uint uVar8;
  uint3 *puVar9;
  byte *pbVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  byte *pbVar16;
  uint *puVar17;
  undefined4 uVar18;
  uint uVar19;
  byte *pbVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  byte bVar25;
  
  uVar8 = (param_3 & 0xffff) >> 8;
  switch(param_4) {
  case 3:
    puVar11 = (uint *)*param_2;
    if (1 < (uint)param_2[1]) {
      puVar24 = (uint *)((int)puVar11 + 2);
      uVar12 = (uint)(ushort)*puVar11;
      uVar19 = param_2[1] - 2;
LAB_0199ab84:
      *param_2 = puVar24;
      param_2[1] = uVar19;
      if (uVar12 <= uVar19) {
        uVar8 = (uint)puVar24 >> 0x10;
        *param_2 = (byte *)((int)puVar24 + uVar12);
        param_2[1] = uVar19 - uVar12;
        uVar19 = (uint)puVar24 >> 8;
        uVar18 = 1;
        goto LAB_0199b028;
      }
      goto LAB_0199ab94;
    }
    goto LAB_0199aba4;
  case 4:
    puVar11 = (uint *)*param_2;
    if (3 < (uint)param_2[1]) {
      puVar24 = puVar11 + 1;
      uVar12 = *puVar11;
      uVar19 = param_2[1] - 4;
      goto LAB_0199ab84;
    }
    goto LAB_0199aba4;
  case 5:
    puVar9 = (uint3 *)*param_2;
    uVar12 = param_2[1];
    if (1 < uVar12) {
      uVar2 = (ushort)*puVar9;
      uVar18 = 3;
LAB_0199abd4:
      puVar24 = (uint *)(uint)uVar2;
      uVar12 = uVar12 - 2;
      *param_2 = (ushort *)((int)puVar9 + 2);
      param_2[1] = uVar12;
      uVar19 = (uint)(uVar2 >> 8);
LAB_0199ad14:
      uVar8 = 0;
LAB_0199b028:
      param_1[2] = uVar18;
      param_1[3] = 0;
      param_1[4] = (uint)puVar24 & 0xff | (uVar19 & 0xff) << 8 | uVar8 << 0x10;
      param_1[5] = uVar12;
      uVar18 = 0;
      goto LAB_0199b0d0;
    }
    goto LAB_0199ac00;
  case 6:
    puVar9 = (uint3 *)*param_2;
    if (3 < (uint)param_2[1]) {
      puVar24 = *(uint **)puVar9;
      uVar12 = param_2[1] - 4;
      uVar18 = 4;
      *param_2 = puVar9 + 1;
      param_2[1] = uVar12;
      uVar8 = (uint)puVar24 >> 0x10;
      uVar19 = (uint)puVar24 >> 8;
      goto LAB_0199b028;
    }
    break;
  case 7:
    puVar9 = (uint3 *)*param_2;
    if (7 < (uint)param_2[1]) {
      bVar25 = *(byte *)((int)puVar9 + 7);
      uVar8 = *(uint *)((int)puVar9 + 3);
      puVar24 = (uint *)(uint)*puVar9;
      param_2[1] = param_2[1] - 8;
      *param_2 = puVar9 + 2;
      uVar12 = (uint)bVar25 << 0x18 | uVar8 >> 8;
      uVar19 = (uint)puVar24 | uVar8 << 0x18;
      uVar8 = uVar19 >> 0x10;
      uVar19 = uVar19 >> 8;
      uVar18 = 5;
      goto LAB_0199b028;
    }
    break;
  case 8:
    uVar19 = param_2[1];
    puVar24 = (uint *)*param_2;
    if (uVar19 != 0) {
      uVar12 = 0;
      do {
        if (*(byte *)((int)puVar24 + uVar12) == 0) {
          uVar8 = (uint)puVar24 >> 0x10;
          *param_2 = (byte *)((int)puVar24 + uVar12 + 1);
          param_2[1] = uVar19 + ~uVar12;
          uVar19 = (uint)puVar24 >> 8;
          uVar18 = 0x1f;
          goto LAB_0199b028;
        }
        uVar12 = uVar12 + 1;
      } while (uVar19 != uVar12);
    }
    goto LAB_0199ab94;
  case 9:
    puVar15 = (uint *)*param_2;
    uVar19 = param_2[1];
    if (uVar19 == 0) {
      bVar25 = 0;
    }
    else {
      puVar6 = (uint *)((int)puVar15 + uVar19);
      uVar12 = 0;
      uVar5 = 0;
      uVar8 = 0;
      puVar11 = puVar6;
      puVar4 = puVar15;
      do {
        uVar19 = uVar19 - 1;
        puVar24 = (uint *)((int)puVar4 + 1);
        bVar25 = (byte)*puVar4;
        if ((uVar8 == 0x3f) && (1 < bVar25)) {
          *param_2 = puVar24;
          param_2[1] = uVar19;
          uVar7 = 6;
LAB_0199b0a8:
          bVar25 = 0;
          goto LAB_0199b0b0;
        }
        uVar22 = uVar8 & 0x3f;
        uVar23 = bVar25 & 0x7f;
        uVar21 = uVar22 - 0x20;
        uVar14 = uVar23 << uVar22;
        if (-1 < (int)uVar21) {
          uVar14 = 0;
        }
        uVar12 = uVar14 | uVar12;
        uVar14 = uVar23 >> (0x20 - uVar22 & 0xff);
        if (-1 < (int)uVar21) {
          uVar14 = uVar23 << (uVar21 & 0xff);
        }
        uVar5 = uVar14 | uVar5;
        puVar11 = (uint *)(int)(char)bVar25;
        if (puVar11 < (uint *)0x80000000) {
          *param_2 = puVar24;
          param_2[1] = uVar19;
          if (uVar5 != 0) {
            uVar7 = 0x38;
            goto LAB_0199b0a8;
          }
          if (uVar19 < uVar12) goto LAB_0199ab94;
          uVar8 = (uint)puVar24 >> 0x10;
          *param_2 = (byte *)((int)puVar24 + uVar12);
          param_2[1] = uVar19 - uVar12;
          uVar19 = (uint)puVar24 >> 8;
          uVar18 = 1;
          goto LAB_0199b028;
        }
        uVar8 = uVar8 + 7;
        puVar4 = puVar24;
      } while (uVar19 != 0);
      *param_2 = puVar6;
      param_2[1] = 0;
      puVar15 = puVar6;
    }
    puVar11 = (uint *)0x0;
    uVar7 = 0x13;
    goto LAB_0199b0b0;
  case 10:
    puVar11 = (uint *)*param_2;
    if (param_2[1] != 0) {
      puVar24 = (uint *)((int)puVar11 + 1);
      uVar12 = (uint)(byte)*puVar11;
      uVar19 = param_2[1] - 1;
      goto LAB_0199ab84;
    }
LAB_0199aba4:
    param_1[4] = puVar11;
    param_1[5] = 0;
    param_1[3] = puVar11;
    goto LAB_0199ad2c;
  case 0xb:
    puVar9 = (uint3 *)*param_2;
    uVar12 = param_2[1];
    if (uVar12 != 0) {
      bVar25 = (byte)*puVar9;
      param_2[1] = uVar12 - 1;
      uVar18 = 2;
LAB_0199ad08:
      *param_2 = (char *)((int)puVar9 + 1);
LAB_0199ad0c:
      puVar24 = (uint *)(uint)bVar25;
      uVar19 = 0;
      goto LAB_0199ad14;
    }
    goto LAB_0199ac00;
  case 0xc:
    puVar9 = (uint3 *)*param_2;
    if (param_2[1] != 0) {
      uVar12 = param_2[1] - 1;
      uVar18 = 9;
      bVar25 = (char)*puVar9 != '\0';
      *param_2 = (char *)((int)puVar9 + 1);
      param_2[1] = uVar12;
      goto LAB_0199ad0c;
    }
LAB_0199ac00:
    param_1[3] = puVar9;
    param_1[4] = puVar9;
LAB_0199ac0c:
    param_1[5] = 0;
    goto LAB_0199ad2c;
  case 0xd:
    pbVar10 = (byte *)*param_2;
    iVar13 = param_2[1];
    uVar8 = 0;
    if (iVar13 == 0) {
      bVar25 = 0;
    }
    else {
      pbVar20 = pbVar10 + iVar13;
      puVar24 = (uint *)0x0;
      uVar12 = 0;
      uVar5 = 0;
      do {
        iVar13 = iVar13 + -1;
        pbVar16 = pbVar10 + 1;
        bVar25 = *pbVar10;
        uVar14 = (uint)bVar25;
        if ((uVar5 == 0x3f) && (uVar14 != 0x7f && uVar14 != 0)) {
          *param_2 = pbVar16;
          param_2[1] = iVar13;
          uVar7 = 7;
          bVar25 = 0;
          pbVar10 = &DAT_0000003f;
          goto LAB_0199aefc;
        }
        uVar22 = uVar5 & 0x3f;
        uVar19 = uVar14 & 0x7f;
        uVar23 = uVar22 - 0x20;
        uVar5 = uVar5 + 7;
        uVar8 = uVar19 << uVar22;
        if (-1 < (int)uVar23) {
          uVar8 = 0;
        }
        puVar24 = (uint *)(uVar8 | (uint)puVar24);
        uVar8 = uVar19 >> (0x20 - uVar22 & 0xff);
        if (-1 < (int)uVar23) {
          uVar8 = uVar19 << (uVar23 & 0xff);
        }
        uVar12 = uVar8 | uVar12;
        uVar8 = (uint)(char)bVar25;
        if (uVar8 < 0x80000000) {
          *param_2 = pbVar16;
          param_2[1] = iVar13;
          uVar8 = (uint)puVar24 >> 0x10;
          uVar19 = (uint)puVar24 >> 8;
          uVar18 = 6;
          if (((int)uVar5 < 0x40) && (0x3f < uVar14)) {
            uVar19 = 0xffffffff;
            uVar14 = (uVar5 & 0x3f) - 0x20;
            uVar8 = -1 << (uVar5 & 0x3f);
            if (-1 < (int)uVar14) {
              uVar8 = 0;
            }
            puVar24 = (uint *)((uint)puVar24 | uVar8);
            if (-1 < (int)uVar14) {
              uVar19 = -1 << (uVar14 & 0xff);
            }
            uVar12 = uVar12 | uVar19;
            uVar8 = (uint)puVar24 >> 0x10;
            uVar19 = (uint)puVar24 >> 8;
          }
          goto LAB_0199b028;
        }
        pbVar10 = pbVar16;
      } while (iVar13 != 0);
      *param_2 = pbVar20;
      param_2[1] = 0;
      pbVar10 = pbVar20;
    }
    uVar8 = 0;
    uVar7 = 0x13;
LAB_0199aefc:
    param_1[4] = pbVar10;
    param_1[3] = pbVar10;
    *(byte *)((int)param_1 + 9) = bVar25;
    *(undefined1 *)(param_1 + 2) = uVar7;
    param_1[5] = uVar8;
    goto LAB_0199b0c8;
  case 0xe:
    if (uVar8 != 8) {
      puVar9 = (uint3 *)*param_2;
      if (3 < (uint)param_2[1]) {
        puVar24 = *(uint **)puVar9;
        uVar12 = param_2[1] - 4;
        *param_2 = puVar9 + 1;
        param_2[1] = uVar12;
LAB_0199ae50:
        uVar8 = (uint)puVar24 >> 0x10;
        uVar19 = (uint)puVar24 >> 8;
        uVar18 = 0x1a;
        goto LAB_0199b028;
      }
      goto LAB_0199ae9c;
    }
    puVar9 = (uint3 *)*param_2;
    if ((uint)param_2[1] < 8) goto LAB_0199ae9c;
    cVar1 = *(char *)((int)puVar9 + 7);
    uVar8 = *(uint *)((int)puVar9 + 3);
    *param_2 = puVar9 + 2;
    param_2[1] = param_2[1] - 8;
    if (cVar1 == '\0' && uVar8 >> 8 == 0) {
      uVar12 = (uint)*(byte *)((int)puVar9 + 2);
      puVar24 = (uint *)(uVar8 << 0x18 | (uint)*puVar9);
      goto LAB_0199ae50;
    }
LAB_0199ae30:
    uVar7 = 0x38;
    goto LAB_0199aea4;
  case 0xf:
    puVar15 = (uint *)*param_2;
    iVar13 = param_2[1];
    puVar11 = (uint *)0x0;
    if (iVar13 == 0) {
      bVar25 = 0;
    }
    else {
      puVar6 = (uint *)((int)puVar15 + iVar13);
      puVar24 = (uint *)0x0;
      uVar12 = 0;
      uVar8 = 0;
      puVar4 = puVar15;
      do {
        iVar13 = iVar13 + -1;
        puVar17 = (uint *)((int)puVar4 + 1);
        bVar25 = (byte)*puVar4;
        if ((uVar8 == 0x3f) && (1 < bVar25)) {
          bVar25 = 0;
          *param_2 = puVar17;
          param_2[1] = iVar13;
          uVar7 = 6;
          goto LAB_0199b0b0;
        }
        uVar5 = uVar8 & 0x3f;
        uVar14 = bVar25 & 0x7f;
        uVar22 = uVar5 - 0x20;
        uVar19 = uVar14 << uVar5;
        if (-1 < (int)uVar22) {
          uVar19 = 0;
        }
        puVar24 = (uint *)(uVar19 | (uint)puVar24);
        uVar19 = uVar14 >> (0x20 - uVar5 & 0xff);
        if (-1 < (int)uVar22) {
          uVar19 = uVar14 << (uVar22 & 0xff);
        }
        uVar12 = uVar19 | uVar12;
        puVar11 = (uint *)(int)(char)bVar25;
        if (puVar11 < &DAT_80000000) {
          uVar8 = (uint)puVar24 >> 0x10;
          *param_2 = puVar17;
          param_2[1] = iVar13;
          uVar19 = (uint)puVar24 >> 8;
          uVar18 = 7;
          goto LAB_0199b028;
        }
        uVar8 = uVar8 + 7;
        puVar4 = puVar17;
      } while (iVar13 != 0);
      *param_2 = puVar6;
      param_2[1] = 0;
      puVar15 = puVar6;
    }
    puVar11 = (uint *)0x0;
    uVar7 = 0x13;
LAB_0199b0b0:
    *(byte *)((int)param_1 + 9) = bVar25;
    param_1[4] = puVar15;
    param_1[3] = puVar15;
    *(undefined1 *)(param_1 + 2) = uVar7;
    param_1[5] = puVar11;
    goto LAB_0199b0c8;
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
    goto switchD_0199a680_caseD_10;
  case 0x17:
    if (uVar8 == 8) {
      puVar9 = (uint3 *)*param_2;
      if (7 < (uint)param_2[1]) {
        cVar1 = *(char *)((int)puVar9 + 7);
        uVar8 = *(uint *)((int)puVar9 + 3);
        *param_2 = puVar9 + 2;
        param_2[1] = param_2[1] - 8;
        if (cVar1 != '\0' || uVar8 >> 8 != 0) goto LAB_0199ae30;
        uVar12 = (uint)*(byte *)((int)puVar9 + 2);
        puVar24 = (uint *)(uVar8 << 0x18 | (uint)*puVar9);
        goto LAB_0199afcc;
      }
    }
    else {
      puVar9 = (uint3 *)*param_2;
      if (3 < (uint)param_2[1]) {
        uVar12 = param_2[1] - 4;
        puVar24 = *(uint **)puVar9;
        *param_2 = puVar9 + 1;
        param_2[1] = uVar12;
LAB_0199afcc:
        uVar8 = (uint)puVar24 >> 0x10;
        uVar19 = (uint)puVar24 >> 8;
        uVar18 = 10;
        goto LAB_0199b028;
      }
    }
    goto LAB_0199ae9c;
  case 0x1a:
switchD_0199a680_caseD_1a:
    pbVar10 = (byte *)*param_2;
    iVar13 = param_2[1];
    if (iVar13 == 0) {
      bVar25 = 0;
      uVar7 = 0x13;
    }
    else {
      pbVar20 = pbVar10 + iVar13;
      puVar24 = (uint *)0x0;
      uVar12 = 0;
      uVar8 = 0;
      do {
        iVar13 = iVar13 + -1;
        pbVar16 = pbVar10 + 1;
        bVar25 = *pbVar10;
        pbVar10 = pbVar20;
        if ((uVar8 == 0x3f) && (1 < bVar25)) {
          bVar25 = 0;
          *param_2 = pbVar16;
          param_2[1] = iVar13;
          uVar7 = 6;
          goto LAB_0199b08c;
        }
        uVar14 = uVar8 & 0x3f;
        uVar5 = bVar25 & 0x7f;
        uVar22 = uVar14 - 0x20;
        uVar19 = uVar5 << uVar14;
        if (-1 < (int)uVar22) {
          uVar19 = 0;
        }
        puVar24 = (uint *)(uVar19 | (uint)puVar24);
        uVar19 = uVar5 >> (0x20 - uVar14 & 0xff);
        if (-1 < (int)uVar22) {
          uVar19 = uVar5 << (uVar22 & 0xff);
        }
        uVar12 = uVar19 | uVar12;
        if ((uint)(int)(char)bVar25 < 0x80000000) {
          *param_2 = pbVar16;
          param_2[1] = iVar13;
          if (uVar12 != 0) {
            uVar7 = 0x38;
            bVar25 = 0;
            goto LAB_0199b08c;
          }
          uVar8 = (uint)puVar24 >> 0x10;
          uVar19 = (uint)puVar24 >> 8;
          uVar18 = 0x1d;
          uVar12 = 0;
          goto LAB_0199b028;
        }
        uVar8 = uVar8 + 7;
        pbVar10 = pbVar16;
      } while (iVar13 != 0);
      *param_2 = pbVar20;
      param_2[1] = 0;
      uVar7 = 0x13;
      pbVar10 = pbVar20;
    }
LAB_0199b08c:
    param_1[3] = pbVar10;
    *(byte *)((int)param_1 + 9) = bVar25;
    *(undefined1 *)(param_1 + 2) = uVar7;
    param_1[4] = pbVar10;
    param_1[5] = 0;
    goto LAB_0199b0c8;
  case 0x1d:
switchD_0199a680_caseD_1d:
    if (uVar8 == 8) {
      puVar9 = (uint3 *)*param_2;
      if (7 < (uint)param_2[1]) {
        cVar1 = *(char *)((int)puVar9 + 7);
        uVar8 = *(uint *)((int)puVar9 + 3);
        *param_2 = puVar9 + 2;
        param_2[1] = param_2[1] - 8;
        if (cVar1 != '\0' || uVar8 >> 8 != 0) goto LAB_0199ae30;
        uVar12 = (uint)*(byte *)((int)puVar9 + 2);
        puVar24 = (uint *)(uVar8 << 0x18 | (uint)*puVar9);
        goto LAB_0199adec;
      }
    }
    else {
      puVar9 = (uint3 *)*param_2;
      if (3 < (uint)param_2[1]) {
        puVar24 = *(uint **)puVar9;
        uVar12 = param_2[1] - 4;
        *param_2 = puVar9 + 1;
        param_2[1] = uVar12;
LAB_0199adec:
        uVar8 = (uint)puVar24 >> 0x10;
        uVar19 = (uint)puVar24 >> 8;
        uVar18 = 0x1b;
        goto LAB_0199b028;
      }
    }
    goto LAB_0199ae9c;
  case 0x1e:
    puVar24 = (uint *)*param_2;
    if (0xf < (uint)param_2[1]) {
      uVar8 = (uint)puVar24 >> 0x10;
      *param_2 = puVar24 + 4;
      param_2[1] = param_2[1] - 0x10;
      uVar19 = (uint)puVar24 >> 8;
      uVar18 = 1;
      uVar12 = 0x10;
      goto LAB_0199b028;
    }
LAB_0199ab94:
    param_1[3] = puVar24;
    param_1[4] = puVar24;
    goto LAB_0199ac0c;
  case 0x1f:
    if (uVar8 == 8) {
      puVar9 = (uint3 *)*param_2;
      if (7 < (uint)param_2[1]) {
        cVar1 = *(char *)((int)puVar9 + 7);
        uVar8 = *(uint *)((int)puVar9 + 3);
        *param_2 = puVar9 + 2;
        param_2[1] = param_2[1] - 8;
        if (cVar1 != '\0' || uVar8 >> 8 != 0) goto LAB_0199ae30;
        uVar12 = (uint)*(byte *)((int)puVar9 + 2);
        puVar24 = (uint *)(uVar8 << 0x18 | (uint)*puVar9);
        goto LAB_0199ae7c;
      }
    }
    else {
      puVar9 = (uint3 *)*param_2;
      if (3 < (uint)param_2[1]) {
        puVar24 = *(uint **)puVar9;
        uVar12 = param_2[1] - 4;
        *param_2 = puVar9 + 1;
        param_2[1] = uVar12;
LAB_0199ae7c:
        uVar8 = (uint)puVar24 >> 0x10;
        uVar19 = (uint)puVar24 >> 8;
        uVar18 = 0x1e;
        goto LAB_0199b028;
      }
    }
LAB_0199ae9c:
    uVar8 = 0;
    uVar7 = 0x13;
LAB_0199aea4:
    param_1[3] = puVar9;
    *(undefined1 *)(param_1 + 2) = uVar7;
    param_1[4] = puVar9;
    param_1[5] = uVar8;
    goto LAB_0199b0c8;
  case 0x25:
    puVar9 = (uint3 *)*param_2;
    uVar12 = param_2[1];
    if (uVar12 != 0) {
      bVar25 = (byte)*puVar9;
      param_2[1] = uVar12 - 1;
      uVar18 = 0x1d;
      goto LAB_0199ad08;
    }
    break;
  case 0x26:
    puVar9 = (uint3 *)*param_2;
    uVar12 = param_2[1];
    if (1 < uVar12) {
      uVar2 = (ushort)*puVar9;
      uVar18 = 0x1d;
      goto LAB_0199abd4;
    }
    break;
  case 0x27:
    puVar9 = (uint3 *)*param_2;
    if (2 < (uint)param_2[1]) {
      uVar8 = (uint)*(byte *)((int)puVar9 + 2);
      uVar12 = param_2[1] - 3;
      uVar3 = *puVar9;
      *param_2 = (char *)((int)puVar9 + 3);
      param_2[1] = uVar12;
      puVar24 = (uint *)(uint)uVar3;
LAB_0199a898:
      uVar19 = (uint)puVar24 >> 8;
      uVar18 = 0x1d;
      goto LAB_0199b028;
    }
    break;
  case 0x28:
    puVar9 = (uint3 *)*param_2;
    if (3 < (uint)param_2[1]) {
      puVar24 = *(uint **)puVar9;
      uVar12 = param_2[1] - 4;
      *param_2 = puVar9 + 1;
      param_2[1] = uVar12;
      uVar8 = (uint)puVar24 >> 0x10;
      goto LAB_0199a898;
    }
    break;
  default:
    if (param_4 == 0x1f02) goto switchD_0199a680_caseD_1a;
    if (param_4 == 0x1f21) goto switchD_0199a680_caseD_1d;
    goto switchD_0199a680_caseD_10;
  }
  param_1[4] = puVar9;
  param_1[5] = 0;
  param_1[3] = puVar9;
LAB_0199ad2c:
  uVar18 = 1;
  *(undefined1 *)(param_1 + 2) = 0x13;
LAB_0199b0d0:
  *param_1 = uVar18;
  param_1[1] = 0;
  return;
switchD_0199a680_caseD_10:
  *(short *)((int)param_1 + 10) = param_4;
  *(undefined1 *)(param_1 + 2) = 0xc;
LAB_0199b0c8:
  uVar18 = 1;
  goto LAB_0199b0d0;
}

