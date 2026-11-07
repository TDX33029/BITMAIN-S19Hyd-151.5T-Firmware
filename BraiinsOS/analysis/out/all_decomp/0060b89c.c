// FUN_0060b89c @ 0060b89c size=2176 calls_out=0 calls_in=2
// strings: 

void FUN_0060b89c(undefined4 *param_1,undefined4 *param_2,uint param_3,short param_4)

{
  uint3 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint3 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint *puVar16;
  uint uVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint uVar20;
  uint unaff_r11;
  byte bVar21;
  
  uVar5 = (param_3 & 0xffff) >> 8;
  switch(param_4) {
  case 3:
    puVar6 = (uint *)*param_2;
    if ((uint)param_2[1] < 2) {
LAB_0060bd6c:
      param_1[4] = puVar6;
      param_1[5] = 0;
      param_1[3] = puVar6;
      goto LAB_0060c0e4;
    }
    puVar16 = (uint *)((int)puVar6 + 2);
    unaff_r11 = (uint)(ushort)*puVar6;
    uVar5 = param_2[1] - 2;
    *param_2 = puVar16;
    param_2[1] = uVar5;
    if (unaff_r11 <= uVar5) {
LAB_0060bd4c:
      iVar9 = uVar5 - unaff_r11;
LAB_0060bd50:
      *param_2 = (byte *)((int)puVar16 + unaff_r11);
      param_2[1] = iVar9;
      uVar5 = (uint)puVar16 >> 0x10;
      uVar4 = (uint)puVar16 >> 8;
      uVar15 = 1;
      goto LAB_0060c15c;
    }
    goto LAB_0060c0d4;
  case 4:
    puVar6 = (uint *)*param_2;
    if ((uint)param_2[1] < 4) goto LAB_0060bd6c;
    puVar16 = puVar6 + 1;
    unaff_r11 = *puVar6;
    uVar5 = param_2[1] - 4;
    *param_2 = puVar16;
    param_2[1] = uVar5;
    if (unaff_r11 <= uVar5) goto LAB_0060bd4c;
    goto LAB_0060c0d4;
  case 5:
    puVar8 = (uint3 *)*param_2;
    if (1 < (uint)param_2[1]) {
      uVar1 = *puVar8;
      puVar16 = (uint *)(uint)(ushort)uVar1;
      uVar15 = 3;
      *param_2 = (ushort *)((int)puVar8 + 2);
      param_2[1] = param_2[1] - 2;
      uVar4 = (uint)(ushort)((ushort)uVar1 >> 8);
LAB_0060beb0:
      uVar5 = 0;
      goto LAB_0060c15c;
    }
    goto LAB_0060bdc8;
  case 6:
    puVar8 = (uint3 *)*param_2;
    if (3 < (uint)param_2[1]) {
      puVar16 = *(uint **)puVar8;
      uVar15 = 4;
      *param_2 = puVar8 + 1;
      param_2[1] = param_2[1] - 4;
      uVar5 = (uint)puVar16 >> 0x10;
      uVar4 = (uint)puVar16 >> 8;
      goto LAB_0060c15c;
    }
    break;
  case 7:
    puVar8 = (uint3 *)*param_2;
    if (7 < (uint)param_2[1]) {
      puVar16 = *(uint **)puVar8;
      unaff_r11 = *(uint *)(puVar8 + 1);
      *param_2 = puVar8 + 2;
      param_2[1] = param_2[1] - 8;
      uVar5 = (uint)puVar16 >> 0x10;
      uVar15 = 5;
      uVar4 = (uint)puVar16 >> 8;
      goto LAB_0060c15c;
    }
    break;
  case 8:
    uVar4 = param_2[1];
    puVar16 = (uint *)*param_2;
    if (uVar4 != 0) {
      unaff_r11 = 0;
      do {
        if (*(byte *)((int)puVar16 + unaff_r11) == 0) {
          uVar5 = (uint)puVar16 >> 0x10;
          *param_2 = (byte *)((int)puVar16 + unaff_r11 + 1);
          param_2[1] = uVar4 + ~unaff_r11;
          uVar4 = (uint)puVar16 >> 8;
          uVar15 = 0x1f;
          goto LAB_0060c15c;
        }
        unaff_r11 = unaff_r11 + 1;
      } while (uVar4 != unaff_r11);
    }
    goto LAB_0060c0dc;
  case 9:
    uVar12 = param_2[1];
    uVar17 = 0;
    unaff_r11 = 0;
    uVar4 = 0;
    uVar5 = 0;
    puVar6 = (uint *)*param_2;
    do {
      uVar14 = uVar5;
      if (uVar12 == 0) {
        uVar12 = 0;
        uVar3 = 0x13;
        goto LAB_0060c188;
      }
      puVar16 = (uint *)((int)puVar6 + 1);
      uVar11 = *puVar6;
      uVar5 = (uint)(byte)uVar11;
      uVar12 = uVar12 - 1;
      param_2[1] = uVar12;
      *param_2 = puVar16;
      puVar6 = puVar16;
      if ((uVar17 == 0x3f) && (1 < uVar5)) {
        uVar3 = 6;
        goto LAB_0060c188;
      }
      uVar10 = uVar17 & 0x3f;
      uVar13 = uVar5 & 0x7f;
      uVar20 = uVar10 - 0x20;
      uVar17 = uVar17 + 7;
      uVar7 = uVar13 << uVar10;
      if (-1 < (int)uVar20) {
        uVar7 = 0;
      }
      unaff_r11 = uVar7 | unaff_r11;
      uVar7 = uVar13 >> (0x20 - uVar10 & 0xff);
      if (-1 < (int)uVar20) {
        uVar7 = uVar13 << (uVar20 & 0xff);
      }
      uVar4 = uVar7 | uVar4;
    } while (0x7fffffff < (uint)(int)(char)(byte)uVar11);
    if (uVar4 != 0) {
      uVar3 = 0x38;
LAB_0060c188:
      param_1[3] = puVar6;
      *(char *)((int)param_1 + 9) = (char)uVar14;
      *(undefined1 *)(param_1 + 2) = uVar3;
      param_1[4] = puVar6;
      param_1[5] = uVar12;
      goto LAB_0060c198;
    }
    if (unaff_r11 <= uVar12) {
      iVar9 = uVar12 - unaff_r11;
      goto LAB_0060bd50;
    }
    goto LAB_0060c0d4;
  case 10:
    puVar6 = (uint *)*param_2;
    if (param_2[1] == 0) goto LAB_0060bd6c;
    puVar16 = (uint *)((int)puVar6 + 1);
    unaff_r11 = (uint)(byte)*puVar6;
    uVar5 = param_2[1] - 1;
    *param_2 = puVar16;
    param_2[1] = uVar5;
    if (unaff_r11 <= uVar5) goto LAB_0060bd4c;
    goto LAB_0060c0d4;
  case 0xb:
    puVar8 = (uint3 *)*param_2;
    if (param_2[1] != 0) {
      bVar21 = (byte)*puVar8;
      param_2[1] = param_2[1] + -1;
      uVar15 = 2;
LAB_0060bea4:
      *param_2 = (char *)((int)puVar8 + 1);
LAB_0060bea8:
      puVar16 = (uint *)(uint)bVar21;
      uVar4 = 0;
      goto LAB_0060beb0;
    }
    goto LAB_0060bdc8;
  case 0xc:
    puVar8 = (uint3 *)*param_2;
    if (param_2[1] != 0) {
      uVar15 = 9;
      bVar21 = (char)*puVar8 != '\0';
      *param_2 = (char *)((int)puVar8 + 1);
      param_2[1] = param_2[1] + -1;
      goto LAB_0060bea8;
    }
LAB_0060bdc8:
    param_1[3] = puVar8;
    param_1[4] = puVar8;
    goto LAB_0060c0e0;
  case 0xd:
    iVar9 = param_2[1];
    uVar12 = 0;
    uVar17 = 0;
    puVar16 = (uint *)0x0;
    unaff_r11 = 0;
    pbVar19 = (byte *)*param_2;
    do {
      uVar3 = (undefined1)uVar12;
      iVar9 = iVar9 + -1;
      if (iVar9 == -1) {
        iVar9 = 0;
        uVar2 = 0x13;
LAB_0060c014:
        param_1[4] = pbVar19;
        param_1[3] = pbVar19;
        *(undefined1 *)((int)param_1 + 9) = uVar3;
        *(undefined1 *)(param_1 + 2) = uVar2;
        param_1[5] = iVar9;
        goto LAB_0060c198;
      }
      pbVar18 = pbVar19 + 1;
      bVar21 = *pbVar19;
      uVar12 = (uint)bVar21;
      *param_2 = pbVar18;
      param_2[1] = iVar9;
      pbVar19 = pbVar18;
      if ((uVar17 == 0x3f) && (uVar12 != 0x7f && uVar12 != 0)) {
        uVar2 = 7;
        uVar3 = 0;
        goto LAB_0060c014;
      }
      uVar14 = uVar17 & 0x3f;
      uVar11 = uVar12 & 0x7f;
      uVar4 = uVar14 - 0x20;
      uVar5 = uVar11 << uVar14;
      if (-1 < (int)uVar4) {
        uVar5 = 0;
      }
      puVar16 = (uint *)(uVar5 | (uint)puVar16);
      uVar5 = uVar11 >> (0x20 - uVar14 & 0xff);
      uVar17 = uVar17 + 7;
      if (-1 < (int)uVar4) {
        uVar5 = uVar11 << (uVar4 & 0xff);
      }
      unaff_r11 = uVar5 | unaff_r11;
    } while ((char)bVar21 < '\0');
    uVar5 = (uint)puVar16 >> 0x10;
    uVar4 = (uint)puVar16 >> 8;
    uVar15 = 6;
    if (((int)uVar17 < 0x40) && (0x3f < uVar12)) {
      uVar4 = 0xffffffff;
      uVar12 = (uVar17 & 0x3f) - 0x20;
      uVar5 = -1 << (uVar17 & 0x3f);
      if (-1 < (int)uVar12) {
        uVar5 = 0;
      }
      puVar16 = (uint *)((uint)puVar16 | uVar5);
      if (-1 < (int)uVar12) {
        uVar4 = -1 << (uVar12 & 0xff);
      }
      unaff_r11 = unaff_r11 | uVar4;
      uVar5 = (uint)puVar16 >> 0x10;
      uVar4 = (uint)puVar16 >> 8;
    }
    goto LAB_0060c15c;
  case 0xe:
    if (uVar5 != 8) {
      puVar6 = (uint *)*param_2;
      if (3 < (uint)param_2[1]) {
        puVar16 = (uint *)*puVar6;
        *param_2 = puVar6 + 1;
        param_2[1] = param_2[1] - 4;
LAB_0060bfa8:
        uVar5 = (uint)puVar16 >> 0x10;
        uVar4 = (uint)puVar16 >> 8;
        uVar15 = 0x1a;
        goto LAB_0060c15c;
      }
      goto LAB_0060bff4;
    }
    puVar6 = (uint *)*param_2;
    if ((uint)param_2[1] < 8) goto LAB_0060bff4;
    puVar16 = (uint *)*puVar6;
    iVar9 = param_2[1] - 8;
    uVar5 = puVar6[1];
    *param_2 = puVar6 + 2;
    param_2[1] = iVar9;
    puVar6 = puVar16;
    if (uVar5 == 0) goto LAB_0060bfa8;
LAB_0060bf30:
    uVar3 = 0x38;
    goto LAB_0060bffc;
  case 0xf:
    uVar5 = param_2[1];
    uVar12 = 0;
    puVar16 = (uint *)0x0;
    unaff_r11 = 0;
    uVar17 = 0;
    pbVar19 = (byte *)*param_2;
    uVar4 = uVar5;
    do {
      uVar4 = uVar4 - 1;
      if (uVar4 == 0xffffffff) {
        uVar5 = 0;
        uVar3 = 0x13;
LAB_0060c090:
        param_1[3] = pbVar19;
        *(char *)((int)param_1 + 9) = (char)uVar17;
        goto LAB_0060c130;
      }
      pbVar18 = pbVar19 + 1;
      bVar21 = *pbVar19;
      uVar14 = (uint)bVar21;
      param_2[1] = uVar4;
      *param_2 = pbVar18;
      pbVar19 = pbVar18;
      if ((uVar12 == 0x3f) && (1 < uVar14)) {
        uVar3 = 6;
        goto LAB_0060c090;
      }
      uVar5 = uVar12 & 0x3f;
      uVar11 = uVar14 & 0x7f;
      uVar7 = uVar5 - 0x20;
      uVar17 = uVar11 << uVar5;
      uVar12 = uVar12 + 7;
      if (-1 < (int)uVar7) {
        uVar17 = 0;
      }
      puVar16 = (uint *)(uVar17 | (uint)puVar16);
      uVar17 = uVar11 >> (0x20 - uVar5 & 0xff);
      if (-1 < (int)uVar7) {
        uVar17 = uVar11 << (uVar7 & 0xff);
      }
      unaff_r11 = uVar17 | unaff_r11;
      uVar17 = uVar14;
    } while ((char)bVar21 < '\0');
    uVar5 = (uint)puVar16 >> 0x10;
    uVar4 = (uint)puVar16 >> 8;
    uVar15 = 7;
    goto LAB_0060c15c;
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
    goto switchD_0060b8c0_caseD_10;
  case 0x17:
    if (uVar5 == 8) {
      puVar6 = (uint *)*param_2;
      if (7 < (uint)param_2[1]) {
        puVar16 = (uint *)*puVar6;
        iVar9 = param_2[1] - 8;
        uVar5 = puVar6[1];
        *param_2 = puVar6 + 2;
        param_2[1] = iVar9;
        puVar6 = puVar16;
        if (uVar5 != 0) goto LAB_0060bf30;
LAB_0060c14c:
        uVar5 = (uint)puVar16 >> 0x10;
        uVar4 = (uint)puVar16 >> 8;
        uVar15 = 10;
        goto LAB_0060c15c;
      }
    }
    else {
      puVar6 = (uint *)*param_2;
      if (3 < (uint)param_2[1]) {
        puVar16 = (uint *)*puVar6;
        *param_2 = puVar6 + 1;
        param_2[1] = param_2[1] - 4;
        goto LAB_0060c14c;
      }
    }
    goto LAB_0060bff4;
  case 0x1a:
switchD_0060b8c0_caseD_1a:
    uVar5 = param_2[1];
    uVar14 = 0;
    puVar16 = (uint *)0x0;
    uVar12 = 0;
    uVar17 = 0;
    pbVar19 = (byte *)*param_2;
    uVar4 = uVar5;
    do {
      uVar11 = uVar17;
      if (uVar4 == 0) {
        uVar5 = 0;
        uVar3 = 0x13;
        goto LAB_0060c128;
      }
      pbVar18 = pbVar19 + 1;
      bVar21 = *pbVar19;
      uVar17 = (uint)bVar21;
      param_2[1] = uVar4 - 1;
      *param_2 = pbVar18;
      pbVar19 = pbVar18;
      if ((uVar14 == 0x3f) && (1 < uVar17)) {
        uVar3 = 6;
        goto LAB_0060c128;
      }
      uVar7 = uVar14 & 0x3f;
      uVar10 = uVar17 & 0x7f;
      unaff_r11 = uVar7 - 0x20;
      uVar5 = uVar10 << uVar7;
      if (-1 < (int)unaff_r11) {
        uVar5 = 0;
      }
      puVar16 = (uint *)(uVar5 | (uint)puVar16);
      uVar7 = uVar10 >> (0x20 - uVar7 & 0xff);
      uVar14 = uVar14 + 7;
      if (-1 < (int)unaff_r11) {
        uVar7 = uVar10 << (unaff_r11 & 0xff);
      }
      uVar12 = uVar7 | uVar12;
      uVar4 = uVar4 - 1;
    } while (0x7fffffff < (uint)(int)(char)bVar21);
    if (uVar12 != 0) {
      uVar3 = 0x38;
LAB_0060c128:
      param_1[3] = pbVar19;
      *(char *)((int)param_1 + 9) = (char)uVar11;
LAB_0060c130:
      param_1[4] = pbVar19;
      *(undefined1 *)(param_1 + 2) = uVar3;
      param_1[5] = uVar5;
      goto LAB_0060c198;
    }
LAB_0060bf7c:
    uVar5 = (uint)puVar16 >> 0x10;
LAB_0060bf80:
    uVar4 = (uint)puVar16 >> 8;
    uVar15 = 0x1d;
LAB_0060c15c:
    param_1[2] = uVar15;
    param_1[3] = 0;
    param_1[4] = (uint)puVar16 & 0xff | (uVar4 & 0xff) << 8 | uVar5 << 0x10;
    param_1[5] = unaff_r11;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  case 0x1d:
switchD_0060b8c0_caseD_1d:
    if (uVar5 == 8) {
      puVar6 = (uint *)*param_2;
      if (7 < (uint)param_2[1]) {
        puVar16 = (uint *)*puVar6;
        iVar9 = param_2[1] - 8;
        uVar5 = puVar6[1];
        *param_2 = puVar6 + 2;
        param_2[1] = iVar9;
        puVar6 = puVar16;
        if (uVar5 != 0) goto LAB_0060bf30;
LAB_0060bf54:
        uVar5 = (uint)puVar16 >> 0x10;
        uVar4 = (uint)puVar16 >> 8;
        uVar15 = 0x1b;
        goto LAB_0060c15c;
      }
    }
    else {
      puVar6 = (uint *)*param_2;
      if (3 < (uint)param_2[1]) {
        puVar16 = (uint *)*puVar6;
        *param_2 = puVar6 + 1;
        param_2[1] = param_2[1] - 4;
        goto LAB_0060bf54;
      }
    }
    goto LAB_0060bff4;
  case 0x1e:
    puVar16 = (uint *)*param_2;
    if (0xf < (uint)param_2[1]) {
      uVar5 = (uint)puVar16 >> 0x10;
      *param_2 = puVar16 + 4;
      param_2[1] = param_2[1] - 0x10;
      uVar4 = (uint)puVar16 >> 8;
      uVar15 = 1;
      unaff_r11 = 0x10;
      goto LAB_0060c15c;
    }
LAB_0060c0d4:
    param_1[3] = puVar16;
LAB_0060c0dc:
    param_1[4] = puVar16;
LAB_0060c0e0:
    param_1[5] = 0;
    goto LAB_0060c0e4;
  case 0x1f:
    if (uVar5 == 8) {
      puVar6 = (uint *)*param_2;
      if (7 < (uint)param_2[1]) {
        puVar16 = (uint *)*puVar6;
        iVar9 = param_2[1] - 8;
        uVar5 = puVar6[1];
        *param_2 = puVar6 + 2;
        param_2[1] = iVar9;
        puVar6 = puVar16;
        if (uVar5 != 0) goto LAB_0060bf30;
LAB_0060bfd4:
        uVar5 = (uint)puVar16 >> 0x10;
        uVar4 = (uint)puVar16 >> 8;
        uVar15 = 0x1e;
        goto LAB_0060c15c;
      }
    }
    else {
      puVar6 = (uint *)*param_2;
      if (3 < (uint)param_2[1]) {
        puVar16 = (uint *)*puVar6;
        *param_2 = puVar6 + 1;
        param_2[1] = param_2[1] - 4;
        goto LAB_0060bfd4;
      }
    }
LAB_0060bff4:
    iVar9 = 0;
    uVar3 = 0x13;
LAB_0060bffc:
    param_1[3] = puVar6;
    *(undefined1 *)(param_1 + 2) = uVar3;
    param_1[4] = puVar6;
    param_1[5] = iVar9;
LAB_0060c198:
    *param_1 = 1;
    param_1[1] = 0;
    return;
  case 0x25:
    puVar8 = (uint3 *)*param_2;
    if (param_2[1] != 0) {
      bVar21 = (byte)*puVar8;
      param_2[1] = param_2[1] + -1;
      uVar15 = 0x1d;
      goto LAB_0060bea4;
    }
    break;
  case 0x26:
    puVar8 = (uint3 *)*param_2;
    if (1 < (uint)param_2[1]) {
      uVar1 = *puVar8;
      puVar16 = (uint *)(uint)(ushort)uVar1;
      uVar15 = 0x1d;
      *param_2 = (ushort *)((int)puVar8 + 2);
      param_2[1] = param_2[1] - 2;
      uVar4 = (uint)(ushort)((ushort)uVar1 >> 8);
      goto LAB_0060beb0;
    }
    break;
  case 0x27:
    puVar8 = (uint3 *)*param_2;
    if (2 < (uint)param_2[1]) {
      uVar5 = (uint)*(byte *)((int)puVar8 + 2);
      uVar1 = *puVar8;
      *param_2 = (char *)((int)puVar8 + 3);
      param_2[1] = param_2[1] - 3;
      puVar16 = (uint *)(uint)uVar1;
      goto LAB_0060bf80;
    }
    break;
  case 0x28:
    puVar8 = (uint3 *)*param_2;
    if (3 < (uint)param_2[1]) {
      puVar16 = *(uint **)puVar8;
      *param_2 = puVar8 + 1;
      param_2[1] = param_2[1] - 4;
      goto LAB_0060bf7c;
    }
    break;
  default:
    if (param_4 == 0x1f02) goto switchD_0060b8c0_caseD_1a;
    if (param_4 == 0x1f21) goto switchD_0060b8c0_caseD_1d;
    goto switchD_0060b8c0_caseD_10;
  }
  param_1[4] = puVar8;
  param_1[5] = 0;
  param_1[3] = puVar8;
LAB_0060c0e4:
  *(undefined1 *)(param_1 + 2) = 0x13;
  *param_1 = 1;
  param_1[1] = 0;
  return;
switchD_0060b8c0_caseD_10:
  *(short *)((int)param_1 + 10) = param_4;
  *(undefined1 *)(param_1 + 2) = 0xc;
  goto LAB_0060c198;
}

