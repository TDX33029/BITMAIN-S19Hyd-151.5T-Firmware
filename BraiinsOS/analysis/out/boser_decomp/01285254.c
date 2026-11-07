// FUN_01285254 @ 01285254 size=1068 calls_out=0 calls_in=1
// strings: invalid header | unsupported TZif version | invalid magic number

void FUN_01285254(undefined4 *param_1,int *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  undefined4 uVar21;
  int *piVar22;
  uint uVar23;
  char *pcVar24;
  int iVar25;
  
  uVar15 = param_2[1];
  pcVar24 = (char *)0x2501;
  uVar21 = 0;
  if (3 < uVar15) {
    piVar22 = (int *)*param_2;
    iVar20 = param_2[2];
    iVar3 = *piVar22;
    *param_2 = (int)(piVar22 + 1);
    uVar12 = 0x3b9aca04;
    param_2[1] = uVar15 - 4;
    param_2[2] = iVar20 + 4;
    if (iVar3 != 0x66695a54) {
      uVar21 = 0x14;
      pcVar24 = "invalid magic number";
      goto LAB_01285300;
    }
    if (uVar15 - 4 != 0) {
      param_2[2] = iVar20 + 5;
      cVar2 = (char)piVar22[1];
      *param_2 = (int)piVar22 + 5;
      param_2[1] = uVar15 - 5;
      uVar4 = 0;
      if (cVar2 != '\0') {
        if (cVar2 == '3') {
          uVar4 = 2;
        }
        else {
          if (cVar2 != '2') {
            uVar12 = 0x3b9aca0d;
            uVar21 = 0x18;
            pcVar24 = "unsupported TZif version";
            goto LAB_01285300;
          }
          uVar4 = 1;
        }
      }
      if (0xe < uVar15 - 5) {
        *param_2 = (int)(piVar22 + 5);
        param_2[1] = uVar15 - 0x14;
        param_2[2] = iVar20 + 0x14;
        if (3 < uVar15 - 0x14) {
          uVar5 = piVar22[5];
          *param_2 = (int)(piVar22 + 6);
          param_2[1] = uVar15 - 0x18;
          param_2[2] = iVar20 + 0x18;
          if (3 < uVar15 - 0x18) {
            uVar10 = piVar22[6];
            *param_2 = (int)(piVar22 + 7);
            param_2[1] = uVar15 - 0x1c;
            param_2[2] = iVar20 + 0x1c;
            if (3 < uVar15 - 0x1c) {
              uVar6 = piVar22[7];
              *param_2 = (int)(piVar22 + 8);
              param_2[1] = uVar15 - 0x20;
              param_2[2] = iVar20 + 0x20;
              if (3 < uVar15 - 0x20) {
                uVar17 = piVar22[8];
                *param_2 = (int)(piVar22 + 9);
                param_2[1] = uVar15 - 0x24;
                param_2[2] = iVar20 + 0x24;
                if (3 < uVar15 - 0x24) {
                  uVar18 = piVar22[9];
                  *param_2 = (int)(piVar22 + 10);
                  param_2[1] = uVar15 - 0x28;
                  param_2[2] = iVar20 + 0x28;
                  if (3 < uVar15 - 0x28) {
                    piVar11 = piVar22 + 0xb;
                    uVar15 = uVar15 - 0x2c;
                    pcVar24 = "invalid header";
                    uVar21 = 0xe;
                    if (uVar18 != 0) {
                      piVar22 = (int *)piVar22[10];
                    }
                    *param_2 = (int)piVar11;
                    param_2[1] = uVar15;
                    param_2[2] = iVar20 + 0x2c;
                    if (((uVar18 != 0 && piVar22 != (int *)0x0) && (uVar5 == 0 || uVar5 == uVar18))
                       && (uVar10 == 0 || uVar10 == uVar18)) {
                      iVar25 = 8;
                      iVar3 = 3;
                      uVar17 = uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                               (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18;
                      if (param_3 != 0) {
                        iVar25 = 4;
                        iVar3 = 2;
                      }
                      if (uVar15 < uVar17 << iVar3) {
                        *(undefined1 *)(param_1 + 0x15) = 3;
                        *param_1 = 0x2501;
                      }
                      else {
                        iVar3 = uVar17 << iVar3;
                        iVar13 = iVar20 + 0x2c + iVar3;
                        uVar15 = uVar15 - iVar3;
                        iVar20 = (int)piVar11 + iVar3;
                        *param_2 = iVar20;
                        param_2[1] = uVar15;
                        param_2[2] = iVar13;
                        if (uVar17 <= uVar15) {
                          uVar18 = uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 |
                                   (uVar18 >> 0x10 & 0xff) << 8 | uVar18 >> 0x18;
                          iVar13 = iVar13 + uVar17;
                          uVar15 = uVar15 - uVar17;
                          iVar7 = iVar20 + uVar17;
                          *param_2 = iVar7;
                          param_2[1] = uVar15;
                          param_2[2] = iVar13;
                          if (uVar18 * 6 <= uVar15) {
                            iVar1 = uVar18 * 6;
                            iVar13 = iVar13 + iVar1;
                            uVar23 = (int)piVar22 << 0x18 | ((uint)piVar22 >> 8 & 0xff) << 0x10 |
                                     ((uint)piVar22 >> 0x10 & 0xff) << 8 | (uint)piVar22 >> 0x18;
                            uVar15 = uVar15 + uVar18 * -6;
                            iVar8 = iVar7 + iVar1;
                            *param_2 = iVar8;
                            param_2[1] = uVar15;
                            param_2[2] = iVar13;
                            if (uVar23 <= uVar15) {
                              uVar15 = uVar15 - uVar23;
                              uVar6 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                      (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18;
                              uVar19 = uVar6 * (iVar25 + 4);
                              iVar13 = iVar13 + uVar23;
                              iVar14 = iVar8 + uVar23;
                              param_2[2] = iVar13;
                              *param_2 = iVar14;
                              param_2[1] = uVar15;
                              if (uVar19 <= uVar15) {
                                uVar15 = uVar15 - uVar19;
                                uVar10 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                         (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18;
                                iVar13 = iVar13 + uVar19;
                                iVar9 = iVar14 + uVar19;
                                *param_2 = iVar9;
                                param_2[1] = uVar15;
                                param_2[2] = iVar13;
                                if (uVar10 <= uVar15) {
                                  uVar5 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                          (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
                                  iVar13 = iVar13 + uVar10;
                                  uVar15 = uVar15 - uVar10;
                                  param_2[1] = uVar15;
                                  iVar16 = iVar9 + uVar10;
                                  *param_2 = iVar16;
                                  param_2[2] = iVar13;
                                  if (uVar5 <= uVar15) {
                                    param_1[8] = iVar14;
                                    *param_2 = iVar16 + uVar5;
                                    param_2[1] = uVar15 - uVar5;
                                    param_2[2] = iVar13 + uVar5;
                                    param_1[0x11] = uVar6;
                                    param_1[0x13] = uVar18;
                                    param_1[10] = iVar9;
                                    param_1[0xb] = uVar10;
                                    param_1[0xc] = iVar16;
                                    param_1[0x10] = uVar10;
                                    *param_1 = piVar11;
                                    param_1[1] = iVar3;
                                    param_1[2] = iVar20;
                                    param_1[4] = iVar7;
                                    param_1[5] = iVar1;
                                    param_1[0x12] = uVar17;
                                    param_1[0x14] = uVar23;
                                    param_1[0x15] = uVar4;
                                    param_1[9] = uVar19;
                                    param_1[0xd] = uVar5;
                                    param_1[0xe] = iVar25;
                                    param_1[0xf] = uVar5;
                                    param_1[3] = uVar17;
                                    param_1[6] = iVar8;
                                    param_1[7] = uVar23;
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                        *(undefined1 *)(param_1 + 0x15) = 3;
                        *param_1 = 0x2501;
                      }
                      param_1[1] = 0;
                      param_1[2] = 0x3b9aca06;
                      return;
                    }
                    goto LAB_01285300;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar12 = 0x3b9aca06;
LAB_01285300:
  *param_1 = pcVar24;
  *(undefined1 *)(param_1 + 0x15) = 3;
  param_1[1] = uVar21;
  param_1[2] = uVar12;
  return;
}

