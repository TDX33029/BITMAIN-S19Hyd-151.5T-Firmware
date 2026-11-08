// FUN_00f632d8 @ 00f632d8 size=1232 calls_out=0 calls_in=1
// strings: invalid header | unsupported TZif version | invalid magic number

void FUN_00f632d8(undefined4 *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  char *pcVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int *piVar21;
  uint uVar22;
  undefined1 *puVar23;
  int iVar24;
  undefined4 uVar25;
  
  uVar13 = param_2[1];
  uVar25 = 4;
  if (3 < uVar13) {
    piVar21 = (int *)*param_2;
    iVar19 = param_2[2];
    puVar23 = &DAT_3b9aca04;
    param_2[1] = uVar13 - 4;
    iVar8 = *piVar21;
    param_2[2] = iVar19 + 4;
    *param_2 = (int)(piVar21 + 1);
    if (iVar8 != 0x66695a54) {
      uVar25 = 0x14;
      pcVar12 = "invalid magic number";
      goto LAB_00f6339c;
    }
    if (uVar13 - 4 == 0) {
      uVar25 = 1;
    }
    else {
      param_2[2] = iVar19 + 5;
      cVar3 = (char)piVar21[1];
      *param_2 = (int)piVar21 + 5;
      param_2[1] = uVar13 - 5;
      uVar4 = 0;
      if (cVar3 != '\0') {
        if (cVar3 == '3') {
          uVar4 = 2;
        }
        else {
          if (cVar3 != '2') {
            puVar23 = (undefined1 *)0x3b9aca0d;
            uVar25 = 0x18;
            pcVar12 = "unsupported TZif version";
            goto LAB_00f6339c;
          }
          uVar4 = 1;
        }
      }
      if (uVar13 - 5 < 0xf) {
        pcVar12 = (char *)0x2501;
        puVar23 = (undefined1 *)0x3b9aca06;
        uVar25 = 0xf;
        goto LAB_00f6339c;
      }
      *param_2 = (int)(piVar21 + 5);
      param_2[1] = uVar13 - 0x14;
      param_2[2] = iVar19 + 0x14;
      if (3 < uVar13 - 0x14) {
        uVar9 = piVar21[5];
        *param_2 = (int)(piVar21 + 6);
        param_2[1] = uVar13 - 0x18;
        param_2[2] = iVar19 + 0x18;
        if (3 < uVar13 - 0x18) {
          uVar5 = piVar21[6];
          *param_2 = (int)(piVar21 + 7);
          param_2[1] = uVar13 - 0x1c;
          param_2[2] = iVar19 + 0x1c;
          if (3 < uVar13 - 0x1c) {
            uVar15 = piVar21[7];
            *param_2 = (int)(piVar21 + 8);
            param_2[1] = uVar13 - 0x20;
            param_2[2] = iVar19 + 0x20;
            if (3 < uVar13 - 0x20) {
              uVar16 = piVar21[8];
              *param_2 = (int)(piVar21 + 9);
              param_2[1] = uVar13 - 0x24;
              param_2[2] = iVar19 + 0x24;
              if (3 < uVar13 - 0x24) {
                uVar17 = piVar21[9];
                *param_2 = (int)(piVar21 + 10);
                param_2[1] = uVar13 - 0x28;
                param_2[2] = iVar19 + 0x28;
                if (3 < uVar13 - 0x28) {
                  piVar10 = piVar21 + 0xb;
                  uVar13 = uVar13 - 0x2c;
                  pcVar12 = "invalid header";
                  uVar25 = 0xe;
                  if (uVar17 != 0) {
                    piVar21 = (int *)piVar21[10];
                  }
                  *param_2 = (int)piVar10;
                  param_2[1] = uVar13;
                  param_2[2] = iVar19 + 0x2c;
                  if (((uVar17 != 0 && piVar21 != (int *)0x0) && (uVar9 == 0 || uVar9 == uVar17)) &&
                     (uVar5 == 0 || uVar5 == uVar17)) {
                    iVar24 = 8;
                    uVar16 = uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                             (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18;
                    iVar8 = 3;
                    if (param_3 != 0) {
                      iVar8 = 2;
                      iVar24 = 4;
                    }
                    iVar2 = uVar16 << iVar8;
                    if (uVar13 < uVar16 << iVar8) {
                      *(undefined1 *)(param_1 + 0x15) = 3;
                      *param_1 = 0x2501;
                      param_1[1] = iVar2;
                      param_1[2] = 0x3b9aca06;
                      return;
                    }
                    iVar19 = iVar19 + 0x2c + iVar2;
                    uVar13 = uVar13 - iVar2;
                    iVar8 = (int)piVar10 + iVar2;
                    *param_2 = iVar8;
                    param_2[1] = uVar13;
                    param_2[2] = iVar19;
                    if (uVar13 < uVar16) {
                      *(undefined1 *)(param_1 + 0x15) = 3;
                      *param_1 = 0x2501;
                      param_1[1] = uVar16;
                      param_1[2] = 0x3b9aca06;
                      return;
                    }
                    uVar17 = uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                             (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18;
                    iVar19 = iVar19 + uVar16;
                    uVar13 = uVar13 - uVar16;
                    iVar6 = iVar8 + uVar16;
                    *param_2 = iVar6;
                    param_2[1] = uVar13;
                    param_2[2] = iVar19;
                    iVar1 = uVar17 * 6;
                    if (uVar13 < uVar17 * 6) {
                      *(undefined1 *)(param_1 + 0x15) = 3;
                      *param_1 = 0x2501;
                      param_1[1] = iVar1;
                      param_1[2] = 0x3b9aca06;
                      return;
                    }
                    iVar19 = iVar19 + iVar1;
                    uVar13 = uVar13 + uVar17 * -6;
                    uVar18 = (int)piVar21 << 0x18 | ((uint)piVar21 >> 8 & 0xff) << 0x10 |
                             ((uint)piVar21 >> 0x10 & 0xff) << 8 | (uint)piVar21 >> 0x18;
                    iVar7 = iVar6 + iVar1;
                    *param_2 = iVar7;
                    param_2[1] = uVar13;
                    param_2[2] = iVar19;
                    if (uVar13 < uVar18) {
                      *(undefined1 *)(param_1 + 0x15) = 3;
                      *param_1 = 0x2501;
                      param_1[1] = uVar18;
                      param_1[2] = 0x3b9aca06;
                      return;
                    }
                    uVar15 = uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                             (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18;
                    uVar22 = uVar15 * (iVar24 + 4);
                    iVar19 = iVar19 + uVar18;
                    uVar13 = uVar13 - uVar18;
                    iVar20 = iVar7 + uVar18;
                    *param_2 = iVar20;
                    param_2[1] = uVar13;
                    param_2[2] = iVar19;
                    if (uVar13 < uVar22) {
                      *(undefined1 *)(param_1 + 0x15) = 3;
                      *param_1 = 0x2501;
                      param_1[1] = uVar22;
                      param_1[2] = 0x3b9aca06;
                      return;
                    }
                    iVar19 = iVar19 + uVar22;
                    uVar13 = uVar13 - uVar22;
                    iVar11 = iVar20 + uVar22;
                    uVar5 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                            (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
                    *param_2 = iVar11;
                    param_2[1] = uVar13;
                    param_2[2] = iVar19;
                    if (uVar13 < uVar5) {
                      *(undefined1 *)(param_1 + 0x15) = 3;
                      *param_1 = 0x2501;
                      param_1[1] = uVar5;
                      param_1[2] = 0x3b9aca06;
                      return;
                    }
                    uVar9 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                            (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18;
                    iVar19 = iVar19 + uVar5;
                    uVar13 = uVar13 - uVar5;
                    param_2[2] = iVar19;
                    iVar14 = iVar11 + uVar5;
                    *param_2 = iVar14;
                    param_2[1] = uVar13;
                    if (uVar13 < uVar9) {
                      *(undefined1 *)(param_1 + 0x15) = 3;
                      *param_1 = 0x2501;
                      param_1[1] = uVar9;
                      param_1[2] = 0x3b9aca06;
                      return;
                    }
                    param_1[8] = iVar20;
                    param_1[0x10] = uVar5;
                    param_1[0x12] = uVar16;
                    *param_2 = iVar14 + uVar9;
                    param_2[1] = uVar13 - uVar9;
                    param_2[2] = iVar19 + uVar9;
                    param_1[0x11] = uVar15;
                    param_1[0x13] = uVar17;
                    param_1[10] = iVar11;
                    param_1[0xb] = uVar5;
                    param_1[0xc] = iVar14;
                    param_1[0x14] = uVar18;
                    *param_1 = piVar10;
                    param_1[1] = iVar2;
                    param_1[2] = iVar8;
                    param_1[4] = iVar6;
                    param_1[0x15] = uVar4;
                    param_1[9] = uVar22;
                    param_1[0xd] = uVar9;
                    param_1[0xe] = iVar24;
                    param_1[0xf] = uVar9;
                    param_1[3] = uVar16;
                    param_1[5] = iVar1;
                    param_1[6] = iVar7;
                    param_1[7] = uVar18;
                    return;
                  }
                  goto LAB_00f6339c;
                }
              }
            }
          }
        }
      }
    }
  }
  pcVar12 = (char *)0x2501;
  puVar23 = (undefined1 *)0x3b9aca06;
LAB_00f6339c:
  *param_1 = pcVar12;
  param_1[1] = uVar25;
  *(undefined1 *)(param_1 + 0x15) = 3;
  param_1[2] = puVar23;
  return;
}

