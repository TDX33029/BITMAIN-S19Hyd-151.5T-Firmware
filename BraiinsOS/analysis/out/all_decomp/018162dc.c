// FUN_018162dc @ 018162dc size=6488 calls_out=10 calls_in=3
// strings: buffer error | stream error

uint FUN_018162dc(int *param_1,uint param_2)

{
  undefined1 uVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int extraout_r2;
  int *piVar7;
  undefined4 extraout_r2_00;
  undefined4 uVar8;
  uint uVar9;
  char cVar10;
  int iVar11;
  char *pcVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  char *pcVar16;
  int iVar17;
  bool bVar18;
  
  if (param_1 == (int *)0x0) {
    return 0xfffffffe;
  }
  if (param_1[8] == 0) {
    return 0xfffffffe;
  }
  if (param_1[9] == 0) {
    return 0xfffffffe;
  }
  piVar14 = (int *)param_1[7];
  if (piVar14 == (int *)0x0) {
    return 0xfffffffe;
  }
  if (param_1 != (int *)*piVar14) {
    return 0xfffffffe;
  }
  iVar11 = piVar14[1];
  if (iVar11 != 0x2a && iVar11 != 0x39) {
    if (iVar11 < 0x72) {
      if (iVar11 < 0x5b) {
        if ((iVar11 - 0x45U & 0xfffffffb) != 0) {
          return 0xfffffffe;
        }
      }
      else if ((0x401001U >> (iVar11 - 0x5bU & 0xff) & 1) == 0) {
        return 0xfffffffe;
      }
    }
    else if (iVar11 != 0x29a) {
      return 0xfffffffe;
    }
  }
  if (5 < param_2) {
    return 0xfffffffe;
  }
  if ((param_1[3] == 0) ||
     (((iVar6 = param_1[1], iVar6 != 0 && (*param_1 == 0)) || (param_2 != 4 && iVar11 == 0x29a)))) {
    param_1[6] = (int)"stream error";
    return 0xfffffffe;
  }
  if (param_1[4] == 0) goto LAB_01817274;
  iVar4 = piVar14[10];
  piVar14[10] = param_2;
  if (piVar14[5] == 0) {
    uVar5 = 0;
    if (iVar6 == 0) {
      iVar6 = iVar4 * 2;
      if (param_2 == 5) {
        if (4 < iVar4) {
          iVar6 = iVar6 + -9;
        }
        if (0 < iVar6) goto LAB_01817274;
      }
      else {
        if (4 < iVar4) {
          iVar6 = iVar6 + -9;
        }
        if (param_2 != 4 && (int)(param_2 * 2) <= iVar6) goto LAB_01817274;
      }
      goto LAB_018164dc;
    }
    if (iVar11 == 0x29a) goto LAB_01817274;
LAB_018163c4:
    if (iVar11 == 0x2a) {
      if (piVar14[6] != 0) {
        uVar13 = piVar14[0xc] * 0x1000 - 0x7800;
        if ((piVar14[0x22] < 2) && (iVar11 = piVar14[0x21], 1 < iVar11)) {
          if (iVar11 < 6) {
            uVar13 = uVar13 | 0x40;
          }
          else if (iVar11 == 6) {
            uVar13 = uVar13 | 0x80;
          }
          else {
            uVar13 = uVar13 | 0xc0;
          }
        }
        if (piVar14[0x1b] != 0) {
          uVar13 = uVar13 | 0x20;
        }
        piVar14[5] = uVar5 + 1;
        iVar6 = (uVar13 / 0x1f) * 0x1f + 0x1f;
        *(char *)(piVar14[2] + uVar5) = (char)((uint)iVar6 >> 8);
        iVar11 = piVar14[5];
        piVar14[5] = iVar11 + 1;
        *(char *)(piVar14[2] + iVar11) = (char)iVar6;
        if (piVar14[0x1b] != 0) {
          iVar6 = param_1[0xc];
          iVar11 = piVar14[5];
          piVar14[5] = iVar11 + 1;
          *(char *)(piVar14[2] + iVar11) = (char)((uint)iVar6 >> 0x18);
          iVar11 = piVar14[5];
          piVar14[5] = iVar11 + 1;
          *(char *)(piVar14[2] + iVar11) = (char)((uint)iVar6 >> 0x10);
          iVar6 = piVar14[5];
          iVar11 = param_1[0xc];
          piVar14[5] = iVar6 + 1;
          *(char *)(piVar14[2] + iVar6) = (char)((uint)iVar11 >> 8);
          iVar6 = piVar14[5];
          piVar14[5] = iVar6 + 1;
          *(char *)(piVar14[2] + iVar6) = (char)iVar11;
        }
        iVar11 = FUN_01814330(0,0);
        iVar6 = param_1[7];
        param_1[0xc] = iVar11;
        piVar14[1] = 0x71;
        FUN_0181d958(iVar6);
        uVar5 = *(uint *)(iVar6 + 0x14);
        if ((uint)param_1[4] <= *(uint *)(iVar6 + 0x14)) {
          uVar5 = param_1[4];
        }
        if (uVar5 != 0) {
          FUN_0181e3d4(param_1[3],*(undefined4 *)(iVar6 + 0x10),uVar5);
          iVar11 = *(int *)(iVar6 + 0x14);
          param_1[3] = param_1[3] + uVar5;
          iVar11 = iVar11 - uVar5;
          *(uint *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + uVar5;
          param_1[5] = param_1[5] + uVar5;
          param_1[4] = param_1[4] - uVar5;
          *(int *)(iVar6 + 0x14) = iVar11;
          if (iVar11 == 0) {
            *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar6 + 8);
          }
        }
        if (piVar14[5] != 0) goto LAB_01816580;
        iVar11 = piVar14[1];
        goto LAB_0181697c;
      }
      iVar11 = param_1[1];
      piVar14[1] = 0x71;
    }
    else {
LAB_0181697c:
      if (iVar11 == 0x39) {
        iVar11 = FUN_01814534(0,0);
        iVar4 = piVar14[5];
        iVar6 = piVar14[2];
        param_1[0xc] = iVar11;
        piVar14[5] = iVar4 + 1;
        *(undefined1 *)(iVar6 + iVar4) = 0x1f;
        iVar11 = piVar14[5];
        piVar14[5] = iVar11 + 1;
        *(undefined1 *)(piVar14[2] + iVar11) = 0x8b;
        iVar11 = piVar14[5];
        piVar14[5] = iVar11 + 1;
        *(undefined1 *)(piVar14[2] + iVar11) = 8;
        piVar7 = (int *)piVar14[7];
        iVar11 = piVar14[5];
        if (piVar7 == (int *)0x0) {
          piVar14[5] = iVar11 + 1;
          *(undefined1 *)(piVar14[2] + iVar11) = 0;
          iVar11 = piVar14[5];
          piVar14[5] = iVar11 + 1;
          *(undefined1 *)(piVar14[2] + iVar11) = 0;
          iVar11 = piVar14[5];
          piVar14[5] = iVar11 + 1;
          *(undefined1 *)(piVar14[2] + iVar11) = 0;
          iVar11 = piVar14[5];
          piVar14[5] = iVar11 + 1;
          *(undefined1 *)(piVar14[2] + iVar11) = 0;
          iVar11 = piVar14[5];
          piVar14[5] = iVar11 + 1;
          *(undefined1 *)(piVar14[2] + iVar11) = 0;
          if (piVar14[0x21] == 9) {
            cVar10 = '\x02';
          }
          else {
            cVar10 = (1 < piVar14[0x22] || piVar14[0x21] < 2) << 2;
          }
          iVar11 = piVar14[5];
          piVar14[5] = iVar11 + 1;
          *(char *)(piVar14[2] + iVar11) = cVar10;
          iVar11 = piVar14[5];
          piVar14[5] = iVar11 + 1;
          *(undefined1 *)(piVar14[2] + iVar11) = 3;
          piVar14[1] = 0x71;
          iVar11 = param_1[7];
          FUN_0181d958(iVar11);
          uVar5 = *(uint *)(iVar11 + 0x14);
          if ((uint)param_1[4] <= *(uint *)(iVar11 + 0x14)) {
            uVar5 = param_1[4];
          }
          if (uVar5 != 0) {
            FUN_0181e3d4(param_1[3],*(undefined4 *)(iVar11 + 0x10),uVar5);
            iVar6 = *(int *)(iVar11 + 0x14);
            param_1[3] = param_1[3] + uVar5;
            iVar6 = iVar6 - uVar5;
            *(uint *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + uVar5;
            param_1[5] = param_1[5] + uVar5;
            param_1[4] = param_1[4] - uVar5;
            *(int *)(iVar11 + 0x14) = iVar6;
            if (iVar6 == 0) {
              *(undefined4 *)(iVar11 + 0x10) = *(undefined4 *)(iVar11 + 8);
            }
          }
          if (piVar14[5] != 0) goto LAB_01816580;
          iVar11 = piVar14[1];
          goto LAB_01816984;
        }
        iVar4 = *piVar7;
        cVar10 = (piVar7[4] != 0) * '\x04' + (piVar7[0xb] != 0) * '\x02';
        iVar17 = piVar7[7];
        iVar6 = piVar7[9];
        piVar14[5] = iVar11 + 1;
        if (iVar4 != 0) {
          cVar10 = cVar10 + '\x01';
        }
        *(char *)(piVar14[2] + iVar11) = cVar10 + (iVar17 != 0) * '\b' + (iVar6 != 0) * '\x10';
        uVar8 = *(undefined4 *)(piVar14[7] + 4);
        iVar11 = piVar14[5];
        piVar14[5] = iVar11 + 1;
        *(char *)(piVar14[2] + iVar11) = (char)uVar8;
        iVar11 = piVar14[5];
        uVar8 = *(undefined4 *)(piVar14[7] + 4);
        piVar14[5] = iVar11 + 1;
        *(char *)(piVar14[2] + iVar11) = (char)((uint)uVar8 >> 8);
        uVar3 = *(undefined2 *)(piVar14[7] + 6);
        iVar11 = piVar14[5];
        piVar14[5] = iVar11 + 1;
        *(char *)(piVar14[2] + iVar11) = (char)uVar3;
        uVar1 = *(undefined1 *)(piVar14[7] + 7);
        iVar11 = piVar14[5];
        piVar14[5] = iVar11 + 1;
        *(undefined1 *)(piVar14[2] + iVar11) = uVar1;
        if (piVar14[0x21] == 9) {
          cVar10 = '\x02';
        }
        else {
          cVar10 = (1 < piVar14[0x22] || piVar14[0x21] < 2) << 2;
        }
        iVar11 = piVar14[5];
        piVar14[5] = iVar11 + 1;
        *(char *)(piVar14[2] + iVar11) = cVar10;
        uVar8 = *(undefined4 *)(piVar14[7] + 0xc);
        iVar11 = piVar14[5];
        piVar14[5] = iVar11 + 1;
        *(char *)(piVar14[2] + iVar11) = (char)uVar8;
        iVar11 = piVar14[7];
        if (*(int *)(iVar11 + 0x10) != 0) {
          iVar6 = piVar14[5];
          uVar8 = *(undefined4 *)(iVar11 + 0x14);
          piVar14[5] = iVar6 + 1;
          *(char *)(piVar14[2] + iVar6) = (char)uVar8;
          iVar11 = piVar14[5];
          uVar8 = *(undefined4 *)(piVar14[7] + 0x14);
          piVar14[5] = iVar11 + 1;
          *(char *)(piVar14[2] + iVar11) = (char)((uint)uVar8 >> 8);
          iVar11 = piVar14[7];
        }
        if (*(int *)(iVar11 + 0x2c) != 0) {
          iVar6 = FUN_01814534(param_1[0xc],piVar14[2],piVar14[5]);
          iVar11 = piVar14[7];
          param_1[0xc] = iVar6;
        }
        piVar14[8] = 0;
        piVar14[1] = 0x45;
LAB_01816bb0:
        iVar6 = *(int *)(iVar11 + 0x10);
        if (iVar6 != 0) {
          iVar4 = piVar14[8];
          uVar5 = piVar14[5];
          uVar15 = piVar14[3];
          uVar13 = (uint)*(ushort *)(iVar11 + 0x14) - iVar4;
          if (uVar15 < uVar5 + uVar13) {
            do {
              FUN_0181e3d4(piVar14[2] + uVar5,iVar6 + iVar4,uVar15 - uVar5);
              iVar11 = *(int *)(piVar14[7] + 0x2c);
              uVar9 = piVar14[3];
              piVar14[5] = uVar9;
              if (iVar11 != 0 && uVar5 < uVar9) {
                iVar11 = FUN_01814534(param_1[0xc],piVar14[2] + uVar5,uVar9 - uVar5);
                param_1[0xc] = iVar11;
              }
              iVar11 = param_1[7];
              piVar14[8] = piVar14[8] + (uVar15 - uVar5);
              FUN_0181d958(iVar11);
              uVar9 = param_1[4];
              if (*(uint *)(iVar11 + 0x14) < uVar9) {
                uVar9 = *(uint *)(iVar11 + 0x14);
              }
              if (uVar9 != 0) {
                FUN_0181e3d4(param_1[3],*(undefined4 *)(iVar11 + 0x10),uVar9);
                iVar6 = *(int *)(iVar11 + 0x14);
                param_1[3] = param_1[3] + uVar9;
                iVar6 = iVar6 - uVar9;
                *(uint *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + uVar9;
                uVar8 = extraout_r2_00;
                if (iVar6 == 0) {
                  uVar8 = *(undefined4 *)(iVar11 + 8);
                }
                param_1[5] = param_1[5] + uVar9;
                param_1[4] = param_1[4] - uVar9;
                *(int *)(iVar11 + 0x14) = iVar6;
                if (iVar6 == 0) {
                  *(undefined4 *)(iVar11 + 0x10) = uVar8;
                }
              }
              uVar13 = uVar13 + (uVar5 - uVar15);
              if (piVar14[5] != 0) goto LAB_01816580;
              uVar15 = piVar14[3];
              iVar4 = piVar14[8];
              iVar6 = *(int *)(piVar14[7] + 0x10);
              uVar5 = 0;
            } while (uVar15 < uVar13);
            uVar5 = 0;
          }
          FUN_0181e3d4(piVar14[2] + uVar5,iVar6 + iVar4,uVar13);
          iVar11 = piVar14[7];
          iVar6 = *(int *)(iVar11 + 0x2c);
          uVar13 = uVar13 + piVar14[5];
          piVar14[5] = uVar13;
          bVar18 = iVar6 == 0;
          if ((bVar18 || uVar5 <= uVar13) && (!bVar18 && uVar13 != uVar5)) {
            iVar6 = FUN_01814534(param_1[0xc],piVar14[2] + uVar5,uVar13 - uVar5);
            iVar11 = piVar14[7];
            param_1[0xc] = iVar6;
          }
          piVar14[8] = 0;
        }
        piVar14[1] = 0x49;
LAB_01816d58:
        if (*(int *)(iVar11 + 0x1c) != 0) {
          uVar5 = piVar14[5];
          uVar13 = uVar5;
          while( true ) {
            if (piVar14[3] == uVar13) {
              if (*(int *)(iVar11 + 0x2c) != 0 && uVar5 < uVar13) {
                iVar11 = FUN_01814534(param_1[0xc],piVar14[2] + uVar5,uVar13 - uVar5);
                param_1[0xc] = iVar11;
              }
              iVar11 = param_1[7];
              FUN_0181d958(iVar11);
              uVar5 = *(uint *)(iVar11 + 0x14);
              if ((uint)param_1[4] <= *(uint *)(iVar11 + 0x14)) {
                uVar5 = param_1[4];
              }
              if (uVar5 != 0) {
                FUN_0181e3d4(param_1[3],*(undefined4 *)(iVar11 + 0x10));
                iVar6 = *(int *)(iVar11 + 0x14);
                param_1[3] = param_1[3] + uVar5;
                iVar6 = iVar6 - uVar5;
                *(uint *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + uVar5;
                param_1[5] = param_1[5] + uVar5;
                param_1[4] = param_1[4] - uVar5;
                *(int *)(iVar11 + 0x14) = iVar6;
                if (iVar6 == 0) {
                  *(undefined4 *)(iVar11 + 0x10) = *(undefined4 *)(iVar11 + 8);
                }
              }
              if (piVar14[5] != 0) goto LAB_01816580;
              iVar11 = piVar14[7];
              uVar5 = 0;
              uVar13 = 0;
            }
            iVar6 = piVar14[8];
            iVar11 = *(int *)(iVar11 + 0x1c);
            piVar14[8] = iVar6 + 1;
            cVar10 = *(char *)(iVar11 + iVar6);
            piVar14[5] = uVar13 + 1;
            *(char *)(piVar14[2] + uVar13) = cVar10;
            iVar11 = piVar14[7];
            if (cVar10 == '\0') break;
            uVar13 = piVar14[5];
          }
          if ((*(int *)(iVar11 + 0x2c) != 0) && (uVar5 < (uint)piVar14[5])) {
            iVar6 = FUN_01814534(param_1[0xc],piVar14[2] + uVar5,piVar14[5] - uVar5);
            iVar11 = piVar14[7];
            param_1[0xc] = iVar6;
          }
          piVar14[8] = 0;
        }
        piVar14[1] = 0x5b;
LAB_01816e6c:
        if (*(int *)(iVar11 + 0x24) == 0) {
          iVar11 = *(int *)(iVar11 + 0x2c);
LAB_018170d4:
          piVar14[1] = 0x67;
LAB_018170dc:
          if (iVar11 != 0) {
            uVar13 = piVar14[5];
LAB_018170e8:
            if ((uint)piVar14[3] < uVar13 + 2) {
              iVar11 = param_1[7];
              FUN_0181d958(iVar11);
              uVar5 = *(uint *)(iVar11 + 0x14);
              if ((uint)param_1[4] <= *(uint *)(iVar11 + 0x14)) {
                uVar5 = param_1[4];
              }
              if (uVar5 != 0) {
                FUN_0181e3d4(param_1[3],*(undefined4 *)(iVar11 + 0x10),uVar5);
                iVar6 = *(int *)(iVar11 + 0x14);
                param_1[3] = param_1[3] + uVar5;
                iVar6 = iVar6 - uVar5;
                *(uint *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + uVar5;
                param_1[5] = param_1[5] + uVar5;
                param_1[4] = param_1[4] - uVar5;
                *(int *)(iVar11 + 0x14) = iVar6;
                if (iVar6 == 0) {
                  *(undefined4 *)(iVar11 + 0x10) = *(undefined4 *)(iVar11 + 8);
                }
              }
              uVar13 = 0;
              if (piVar14[5] != 0) goto LAB_01816580;
            }
            iVar11 = param_1[0xc];
            piVar14[5] = uVar13 + 1;
            *(char *)(piVar14[2] + uVar13) = (char)iVar11;
            iVar11 = piVar14[5];
            iVar6 = param_1[0xc];
            piVar14[5] = iVar11 + 1;
            *(char *)(piVar14[2] + iVar11) = (char)((uint)iVar6 >> 8);
            iVar11 = FUN_01814534(0,0);
            param_1[0xc] = iVar11;
          }
        }
        else {
          uVar5 = piVar14[5];
          uVar13 = uVar5;
          while( true ) {
            if (piVar14[3] == uVar13) {
              if (*(int *)(iVar11 + 0x2c) != 0 && uVar5 < uVar13) {
                iVar11 = FUN_01814534(param_1[0xc],piVar14[2] + uVar5,uVar13 - uVar5);
                param_1[0xc] = iVar11;
              }
              iVar11 = param_1[7];
              FUN_0181d958(iVar11);
              uVar5 = *(uint *)(iVar11 + 0x14);
              if ((uint)param_1[4] <= *(uint *)(iVar11 + 0x14)) {
                uVar5 = param_1[4];
              }
              if (uVar5 != 0) {
                FUN_0181e3d4(param_1[3],*(undefined4 *)(iVar11 + 0x10));
                iVar6 = *(int *)(iVar11 + 0x14);
                param_1[3] = param_1[3] + uVar5;
                iVar6 = iVar6 - uVar5;
                *(uint *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + uVar5;
                param_1[5] = param_1[5] + uVar5;
                param_1[4] = param_1[4] - uVar5;
                *(int *)(iVar11 + 0x14) = iVar6;
                if (iVar6 == 0) {
                  *(undefined4 *)(iVar11 + 0x10) = *(undefined4 *)(iVar11 + 8);
                }
              }
              if (piVar14[5] != 0) goto LAB_01816580;
              iVar11 = piVar14[7];
              uVar5 = 0;
              uVar13 = 0;
            }
            iVar6 = piVar14[8];
            iVar11 = *(int *)(iVar11 + 0x24);
            piVar14[8] = iVar6 + 1;
            cVar10 = *(char *)(iVar11 + iVar6);
            piVar14[5] = uVar13 + 1;
            *(char *)(piVar14[2] + uVar13) = cVar10;
            iVar11 = piVar14[7];
            if (cVar10 == '\0') break;
            uVar13 = piVar14[5];
          }
          if (*(int *)(iVar11 + 0x2c) != 0) {
            uVar13 = piVar14[5];
            if (uVar5 < uVar13) {
              iVar11 = FUN_01814534(param_1[0xc],piVar14[2] + uVar5,uVar13 - uVar5);
              iVar6 = piVar14[7];
              param_1[0xc] = iVar11;
              iVar11 = *(int *)(iVar6 + 0x2c);
              goto LAB_018170d4;
            }
            piVar14[1] = 0x67;
            goto LAB_018170e8;
          }
        }
        iVar11 = param_1[7];
        piVar14[1] = 0x71;
        FUN_0181d958(iVar11);
        uVar5 = *(uint *)(iVar11 + 0x14);
        if ((uint)param_1[4] <= *(uint *)(iVar11 + 0x14)) {
          uVar5 = param_1[4];
        }
        if (uVar5 != 0) {
          FUN_0181e3d4(param_1[3],*(undefined4 *)(iVar11 + 0x10),uVar5);
          iVar6 = *(int *)(iVar11 + 0x14);
          param_1[3] = param_1[3] + uVar5;
          iVar6 = iVar6 - uVar5;
          *(uint *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + uVar5;
          param_1[5] = param_1[5] + uVar5;
          param_1[4] = param_1[4] - uVar5;
          *(int *)(iVar11 + 0x14) = iVar6;
          if (iVar6 == 0) {
            *(undefined4 *)(iVar11 + 0x10) = *(undefined4 *)(iVar11 + 8);
          }
        }
        if (piVar14[5] != 0) goto LAB_01816580;
      }
      else {
LAB_01816984:
        if (iVar11 == 0x45) {
          iVar11 = piVar14[7];
          goto LAB_01816bb0;
        }
        if (iVar11 == 0x49) {
          iVar11 = piVar14[7];
          goto LAB_01816d58;
        }
        if (iVar11 == 0x5b) {
          iVar11 = piVar14[7];
          goto LAB_01816e6c;
        }
        if (iVar11 == 0x67) {
          iVar11 = *(int *)(piVar14[7] + 0x2c);
          goto LAB_018170dc;
        }
      }
      iVar11 = param_1[1];
    }
    if (iVar11 == 0) goto LAB_018163ec;
  }
  else {
    FUN_0181d958(piVar14);
    uVar13 = param_1[4];
    uVar5 = piVar14[5];
    if (uVar13 < uVar5) {
      uVar15 = uVar13;
    }
    else {
      uVar15 = uVar5;
    }
    if (uVar15 != 0) {
      FUN_0181e3d4(param_1[3],piVar14[4],uVar15);
      iVar11 = piVar14[5];
      param_1[3] = param_1[3] + uVar15;
      uVar5 = iVar11 - uVar15;
      piVar14[4] = piVar14[4] + uVar15;
      iVar11 = extraout_r2;
      if (uVar5 == 0) {
        iVar11 = piVar14[2];
      }
      param_1[5] = param_1[5] + uVar15;
      uVar13 = param_1[4] - uVar15;
      param_1[4] = uVar13;
      piVar14[5] = uVar5;
      if (uVar5 == 0) {
        piVar14[4] = iVar11;
      }
    }
    if (uVar13 == 0) goto LAB_01816580;
    iVar11 = piVar14[1];
LAB_018164dc:
    if (iVar11 != 0x29a) goto LAB_018163c4;
    if (param_1[1] != 0) {
LAB_01817274:
      param_1[6] = (int)"buffer error";
      return 0xfffffffb;
    }
LAB_018163ec:
    if (piVar14[0x1d] == 0) {
      if (param_2 == 0) {
        return 0;
      }
      if (piVar14[1] == 0x29a) goto LAB_01816f98;
    }
  }
  if (piVar14[0x21] == 0) {
    iVar11 = FUN_01814bdc(piVar14,param_2);
    if (iVar11 - 2U < 2) {
LAB_01816f88:
      piVar14[1] = 0x29a;
      if (iVar11 != 2) {
LAB_01816f98:
        if (param_2 != 4) {
          return 0;
        }
LAB_01816fa0:
        if (piVar14[6] < 1) {
          return 1;
        }
        iVar11 = piVar14[5];
        iVar6 = param_1[0xc];
        piVar14[5] = iVar11 + 1;
        if (piVar14[6] == 2) {
          *(char *)(piVar14[2] + iVar11) = (char)iVar6;
          iVar11 = piVar14[5];
          iVar6 = param_1[0xc];
          piVar14[5] = iVar11 + 1;
          *(char *)(piVar14[2] + iVar11) = (char)((uint)iVar6 >> 8);
          iVar11 = piVar14[5];
          uVar3 = *(undefined2 *)((int)param_1 + 0x32);
          piVar14[5] = iVar11 + 1;
          *(char *)(piVar14[2] + iVar11) = (char)uVar3;
          iVar11 = piVar14[5];
          uVar1 = *(undefined1 *)((int)param_1 + 0x33);
          piVar14[5] = iVar11 + 1;
          *(undefined1 *)(piVar14[2] + iVar11) = uVar1;
          iVar6 = piVar14[5];
          iVar11 = param_1[2];
          piVar14[5] = iVar6 + 1;
          *(char *)(piVar14[2] + iVar6) = (char)iVar11;
          iVar11 = piVar14[5];
          iVar6 = param_1[2];
          piVar14[5] = iVar11 + 1;
          *(char *)(piVar14[2] + iVar11) = (char)((uint)iVar6 >> 8);
          iVar11 = piVar14[5];
          uVar3 = *(undefined2 *)((int)param_1 + 10);
          piVar14[5] = iVar11 + 1;
          *(char *)(piVar14[2] + iVar11) = (char)uVar3;
          uVar1 = *(undefined1 *)((int)param_1 + 0xb);
          iVar11 = piVar14[5];
          piVar14[5] = iVar11 + 1;
          *(undefined1 *)(piVar14[2] + iVar11) = uVar1;
        }
        else {
          *(char *)(piVar14[2] + iVar11) = (char)((uint)iVar6 >> 0x18);
          iVar11 = piVar14[5];
          piVar14[5] = iVar11 + 1;
          *(char *)(piVar14[2] + iVar11) = (char)((uint)iVar6 >> 0x10);
          iVar6 = piVar14[5];
          iVar11 = param_1[0xc];
          piVar14[5] = iVar6 + 1;
          *(char *)(piVar14[2] + iVar6) = (char)((uint)iVar11 >> 8);
          iVar6 = piVar14[5];
          piVar14[5] = iVar6 + 1;
          *(char *)(piVar14[2] + iVar6) = (char)iVar11;
        }
        iVar11 = param_1[7];
        FUN_0181d958(iVar11);
        uVar5 = *(uint *)(iVar11 + 0x14);
        if ((uint)param_1[4] <= *(uint *)(iVar11 + 0x14)) {
          uVar5 = param_1[4];
        }
        if (uVar5 != 0) {
          FUN_0181e3d4(param_1[3],*(undefined4 *)(iVar11 + 0x10),uVar5);
          iVar6 = *(int *)(iVar11 + 0x14);
          param_1[3] = param_1[3] + uVar5;
          iVar6 = iVar6 - uVar5;
          *(uint *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + uVar5;
          param_1[5] = param_1[5] + uVar5;
          param_1[4] = param_1[4] - uVar5;
          *(int *)(iVar11 + 0x14) = iVar6;
          if (iVar6 == 0) {
            *(undefined4 *)(iVar11 + 0x10) = *(undefined4 *)(iVar11 + 8);
          }
        }
        iVar6 = piVar14[6];
        iVar11 = iVar6;
        if (0 < iVar6) {
          iVar11 = -iVar6;
        }
        if (iVar6 < 1) {
          return (uint)(piVar14[5] == 0);
        }
        piVar14[6] = iVar11;
        return (uint)(piVar14[5] == 0);
      }
    }
    else if (iVar11 != 0) {
LAB_01817328:
      if (param_2 == 1) {
        FUN_0181da2c(piVar14);
      }
      else if ((param_2 != 5) && (FUN_0181d7b0(piVar14,0,0), param_2 == 3)) {
        iVar6 = piVar14[0x13];
        iVar11 = piVar14[0x11];
        *(undefined2 *)(iVar11 + (iVar6 + 0x7fffffff) * 2) = 0;
        FUN_0181e4c0(iVar11,(iVar6 + -1) * 2);
        if (piVar14[0x1d] == 0) {
          piVar14[0x1b] = 0;
          piVar14[0x17] = 0;
          piVar14[0x5ad] = 0;
        }
      }
      iVar11 = param_1[7];
      FUN_0181d958(iVar11);
      uVar13 = param_1[4];
      uVar5 = *(uint *)(iVar11 + 0x14);
      if (uVar13 < *(uint *)(iVar11 + 0x14)) {
        uVar5 = uVar13;
      }
      if (uVar5 != 0) {
        FUN_0181e3d4(param_1[3],*(undefined4 *)(iVar11 + 0x10),uVar5);
        iVar6 = *(int *)(iVar11 + 0x14);
        param_1[3] = param_1[3] + uVar5;
        iVar6 = iVar6 - uVar5;
        *(uint *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + uVar5;
        param_1[5] = param_1[5] + uVar5;
        uVar13 = param_1[4] - uVar5;
        param_1[4] = uVar13;
        *(int *)(iVar11 + 0x14) = iVar6;
        if (iVar6 == 0) {
          *(undefined4 *)(iVar11 + 0x10) = *(undefined4 *)(iVar11 + 8);
        }
      }
      if (uVar13 != 0) goto LAB_01816f98;
      goto LAB_01816580;
    }
  }
  else if (piVar14[0x22] == 2) {
    do {
      iVar11 = piVar14[0x1d];
      do {
        if ((iVar11 == 0) && (FUN_01814824(piVar14), piVar14[0x1d] == 0)) {
          if (param_2 == 0) goto LAB_018167e8;
          piVar14[0x5ad] = 0;
          if (param_2 != 4) {
            if (piVar14[0x5a8] == 0) goto LAB_01817328;
            iVar11 = piVar14[0x17];
            if (-1 < iVar11) goto LAB_018175e0;
            iVar6 = 0;
            goto LAB_018175e8;
          }
          iVar11 = piVar14[0x17];
          if (iVar11 < 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = piVar14[0xe] + iVar11;
          }
          FUN_0181dbb8(piVar14,iVar6,piVar14[0x1b] - iVar11,1);
          iVar11 = *piVar14;
          piVar14[0x17] = piVar14[0x1b];
          iVar6 = *(int *)(iVar11 + 0x1c);
          FUN_0181d958(iVar6);
          uVar5 = *(uint *)(iVar6 + 0x14);
          if (*(uint *)(iVar11 + 0x10) <= *(uint *)(iVar6 + 0x14)) {
            uVar5 = *(uint *)(iVar11 + 0x10);
          }
          if (uVar5 != 0) {
            FUN_0181e3d4(*(undefined4 *)(iVar11 + 0xc),*(undefined4 *)(iVar6 + 0x10),uVar5);
            *(uint *)(iVar11 + 0xc) = *(int *)(iVar11 + 0xc) + uVar5;
            *(uint *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + uVar5;
            *(uint *)(iVar11 + 0x14) = *(int *)(iVar11 + 0x14) + uVar5;
            *(uint *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) - uVar5;
            iVar11 = *(int *)(iVar6 + 0x14) - uVar5;
            *(int *)(iVar6 + 0x14) = iVar11;
            if (iVar11 == 0) {
              *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar6 + 8);
            }
          }
          goto LAB_01817b3c;
        }
        iVar11 = piVar14[0x5a8];
        piVar14[0x18] = 0;
        bVar2 = *(byte *)(piVar14[0xe] + piVar14[0x1b]);
        piVar14[0x5a8] = iVar11 + 1;
        *(undefined1 *)(piVar14[0x5a6] + iVar11) = 0;
        iVar11 = piVar14[0x5a8];
        piVar14[0x5a8] = iVar11 + 1;
        *(undefined1 *)(piVar14[0x5a6] + iVar11) = 0;
        iVar11 = piVar14[0x5a8];
        piVar14[0x5a8] = iVar11 + 1;
        *(byte *)(piVar14[0x5a6] + iVar11) = bVar2;
        *(short *)(piVar14 + bVar2 + 0x25) = (short)piVar14[bVar2 + 0x25] + 1;
        iVar6 = piVar14[0x1b];
        iVar11 = piVar14[0x1d] + -1;
        piVar14[0x1d] = iVar11;
        piVar14[0x1b] = iVar6 + 1;
      } while (piVar14[0x5a8] != piVar14[0x5a9]);
      iVar11 = piVar14[0x17];
      if (iVar11 < 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = piVar14[0xe] + iVar11;
      }
      FUN_0181dbb8(piVar14,iVar4,(iVar6 + 1) - iVar11,0);
      iVar6 = *piVar14;
      piVar14[0x17] = piVar14[0x1b];
      iVar11 = *(int *)(iVar6 + 0x1c);
      FUN_0181d958(iVar11);
      uVar5 = *(uint *)(iVar11 + 0x14);
      if (*(uint *)(iVar6 + 0x10) <= *(uint *)(iVar11 + 0x14)) {
        uVar5 = *(uint *)(iVar6 + 0x10);
      }
      if (uVar5 != 0) {
        FUN_0181e3d4(*(undefined4 *)(iVar6 + 0xc),*(undefined4 *)(iVar11 + 0x10),uVar5);
        iVar4 = *(int *)(iVar11 + 0x14);
        *(uint *)(iVar6 + 0xc) = *(int *)(iVar6 + 0xc) + uVar5;
        iVar4 = iVar4 - uVar5;
        *(uint *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + uVar5;
        *(uint *)(iVar6 + 0x14) = *(int *)(iVar6 + 0x14) + uVar5;
        *(uint *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) - uVar5;
        *(int *)(iVar11 + 0x14) = iVar4;
        if (iVar4 == 0) {
          *(undefined4 *)(iVar11 + 0x10) = *(undefined4 *)(iVar11 + 8);
        }
      }
    } while (*(int *)(*piVar14 + 0x10) != 0);
  }
  else if (piVar14[0x22] == 3) {
    do {
      uVar5 = piVar14[0x1d];
LAB_01817814:
      do {
        if (uVar5 < 0x103) {
          FUN_01814824(piVar14);
          uVar5 = piVar14[0x1d];
          if (0x102 < uVar5) goto LAB_01817770;
          if (param_2 != 0) {
            if (uVar5 != 0) {
              iVar6 = piVar14[0x1b];
              iVar11 = piVar14[0xe];
              piVar14[0x18] = 0;
              if (2 < uVar5) goto LAB_0181777c;
              goto LAB_0181779c;
            }
            piVar14[0x5ad] = 0;
            if (param_2 != 4) {
              if (piVar14[0x5a8] != 0) {
                iVar11 = piVar14[0x17];
                if (iVar11 < 0) {
                  iVar6 = 0;
                }
                else {
LAB_018175e0:
                  iVar6 = piVar14[0xe] + iVar11;
                }
LAB_018175e8:
                FUN_0181dbb8(piVar14,iVar6,piVar14[0x1b] - iVar11,0);
                iVar6 = *piVar14;
                piVar14[0x17] = piVar14[0x1b];
                iVar11 = *(int *)(iVar6 + 0x1c);
                FUN_0181d958(iVar11);
                uVar5 = *(uint *)(iVar11 + 0x14);
                if (*(uint *)(iVar6 + 0x10) <= *(uint *)(iVar11 + 0x14)) {
                  uVar5 = *(uint *)(iVar6 + 0x10);
                }
                if (uVar5 != 0) {
                  FUN_0181e3d4(*(undefined4 *)(iVar6 + 0xc),*(undefined4 *)(iVar11 + 0x10),uVar5);
                  iVar4 = *(int *)(iVar11 + 0x14);
                  *(uint *)(iVar6 + 0xc) = *(int *)(iVar6 + 0xc) + uVar5;
                  iVar4 = iVar4 - uVar5;
                  *(uint *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + uVar5;
                  *(uint *)(iVar6 + 0x14) = *(int *)(iVar6 + 0x14) + uVar5;
                  *(uint *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) - uVar5;
                  *(int *)(iVar11 + 0x14) = iVar4;
                  if (iVar4 == 0) {
                    *(undefined4 *)(iVar11 + 0x10) = *(undefined4 *)(iVar11 + 8);
                  }
                }
                if (*(int *)(*piVar14 + 0x10) == 0) goto LAB_018167e8;
              }
              goto LAB_01817328;
            }
            iVar6 = piVar14[0x17];
            iVar11 = 0;
            if (-1 < iVar6) {
              iVar11 = piVar14[0xe] + iVar6;
            }
            FUN_0181dbb8(piVar14,iVar11,piVar14[0x1b] - iVar6,1);
            iVar6 = *piVar14;
            piVar14[0x17] = piVar14[0x1b];
            iVar11 = *(int *)(iVar6 + 0x1c);
            FUN_0181d958(iVar11);
            uVar5 = *(uint *)(iVar11 + 0x14);
            if (*(uint *)(iVar6 + 0x10) <= *(uint *)(iVar11 + 0x14)) {
              uVar5 = *(uint *)(iVar6 + 0x10);
            }
            if (uVar5 != 0) {
              FUN_0181e3d4(*(undefined4 *)(iVar6 + 0xc),*(undefined4 *)(iVar11 + 0x10),uVar5);
              *(uint *)(iVar6 + 0xc) = *(int *)(iVar6 + 0xc) + uVar5;
              *(uint *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + uVar5;
              *(uint *)(iVar6 + 0x14) = *(int *)(iVar6 + 0x14) + uVar5;
              *(uint *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) - uVar5;
              iVar6 = *(int *)(iVar11 + 0x14) - uVar5;
              *(int *)(iVar11 + 0x14) = iVar6;
              if (iVar6 == 0) {
                *(undefined4 *)(iVar11 + 0x10) = *(undefined4 *)(iVar11 + 8);
              }
            }
LAB_01817b3c:
            iVar11 = *(int *)(*piVar14 + 0x10);
            piVar14[1] = 0x29a;
            if (iVar11 != 0) goto LAB_01816fa0;
          }
          goto LAB_018167e8;
        }
LAB_01817770:
        iVar6 = piVar14[0x1b];
        iVar11 = piVar14[0xe];
        piVar14[0x18] = 0;
LAB_0181777c:
        if (iVar6 == 0) {
LAB_0181779c:
          bVar2 = *(byte *)(iVar11 + iVar6);
          iVar11 = piVar14[0x5a8];
          piVar14[0x5a8] = iVar11 + 1;
          *(undefined1 *)(piVar14[0x5a6] + iVar11) = 0;
          iVar11 = piVar14[0x5a8];
          piVar14[0x5a8] = iVar11 + 1;
          *(undefined1 *)(piVar14[0x5a6] + iVar11) = 0;
          iVar11 = piVar14[0x5a8];
          piVar14[0x5a8] = iVar11 + 1;
          *(byte *)(piVar14[0x5a6] + iVar11) = bVar2;
          *(short *)(piVar14 + bVar2 + 0x25) = (short)piVar14[bVar2 + 0x25] + 1;
          uVar5 = piVar14[0x1d] - 1;
          piVar14[0x1d] = uVar5;
          iVar11 = piVar14[0x1b] + 1;
          piVar14[0x1b] = iVar11;
          if (piVar14[0x5a8] == piVar14[0x5a9]) break;
          goto LAB_01817814;
        }
        iVar4 = iVar11 + iVar6 + -1;
        cVar10 = *(char *)(iVar11 + iVar6 + -1);
        if (((*(char *)(iVar4 + 1) != cVar10) || (*(char *)(iVar4 + 2) != cVar10)) ||
           (*(char *)(iVar4 + 3) != cVar10)) goto LAB_0181779c;
        pcVar12 = (char *)(iVar4 + 3);
        pcVar16 = (char *)(iVar11 + iVar6 + 0x102);
        do {
          if (pcVar12[1] != cVar10) {
            pcVar12 = pcVar12 + 1;
            break;
          }
          if (pcVar12[2] != cVar10) {
            pcVar12 = pcVar12 + 2;
            break;
          }
          if (pcVar12[3] != cVar10) {
            pcVar12 = pcVar12 + 3;
            break;
          }
          if (pcVar12[4] != cVar10) {
            pcVar12 = pcVar12 + 4;
            break;
          }
          if (pcVar12[5] != cVar10) {
            pcVar12 = pcVar12 + 5;
            break;
          }
          if (pcVar12[6] != cVar10) {
            pcVar12 = pcVar12 + 6;
            break;
          }
          if (pcVar12[7] != cVar10) {
            pcVar12 = pcVar12 + 7;
            break;
          }
          pcVar12 = pcVar12 + 8;
        } while (pcVar12 < pcVar16 && *pcVar12 == cVar10);
        iVar4 = (int)pcVar16 - (int)pcVar12;
        uVar13 = 0x102 - iVar4;
        piVar14[0x18] = uVar13;
        if (uVar5 < uVar13) {
          piVar14[0x18] = uVar5;
          uVar13 = uVar5;
        }
        else if (iVar4 - 0x100U < 3) goto LAB_0181779c;
        iVar11 = piVar14[0x5a8];
        piVar14[0x5a8] = iVar11 + 1;
        *(undefined1 *)(piVar14[0x5a6] + iVar11) = 1;
        iVar11 = piVar14[0x5a8];
        piVar14[0x5a8] = iVar11 + 1;
        *(undefined1 *)(piVar14[0x5a6] + iVar11) = 0;
        iVar11 = piVar14[0x5a8];
        piVar14[0x5a8] = iVar11 + 1;
        *(char *)(piVar14[0x5a6] + iVar11) = (char)(uVar13 - 3);
        *(short *)(piVar14 + (byte)(&DAT_004530a0)[uVar13 - 3 & 0xff] + 0x126) =
             (short)piVar14[(byte)(&DAT_004530a0)[uVar13 - 3 & 0xff] + 0x126] + 1;
        *(short *)(piVar14 + 0x262) = (short)piVar14[0x262] + 1;
        iVar11 = piVar14[0x18];
        uVar5 = piVar14[0x1d] - iVar11;
        piVar14[0x18] = 0;
        iVar11 = iVar11 + piVar14[0x1b];
        piVar14[0x1d] = uVar5;
        piVar14[0x1b] = iVar11;
      } while (piVar14[0x5a8] != piVar14[0x5a9]);
      iVar6 = piVar14[0x17];
      if (iVar6 < 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = piVar14[0xe] + iVar6;
      }
      FUN_0181dbb8(piVar14,iVar4,iVar11 - iVar6,0);
      iVar11 = *piVar14;
      piVar14[0x17] = piVar14[0x1b];
      iVar6 = *(int *)(iVar11 + 0x1c);
      FUN_0181d958(iVar6);
      uVar5 = *(uint *)(iVar6 + 0x14);
      if (*(uint *)(iVar11 + 0x10) <= *(uint *)(iVar6 + 0x14)) {
        uVar5 = *(uint *)(iVar11 + 0x10);
      }
      if (uVar5 != 0) {
        FUN_0181e3d4(*(undefined4 *)(iVar11 + 0xc),*(undefined4 *)(iVar6 + 0x10));
        iVar4 = *(int *)(iVar6 + 0x14);
        *(uint *)(iVar11 + 0xc) = *(int *)(iVar11 + 0xc) + uVar5;
        iVar4 = iVar4 - uVar5;
        *(uint *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + uVar5;
        *(uint *)(iVar11 + 0x14) = *(int *)(iVar11 + 0x14) + uVar5;
        *(uint *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) - uVar5;
        *(int *)(iVar6 + 0x14) = iVar4;
        if (iVar4 == 0) {
          *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar6 + 8);
        }
      }
    } while (*(int *)(*piVar14 + 0x10) != 0);
  }
  else {
    iVar11 = (**(code **)(&DAT_018bc200 + piVar14[0x21] * 0xc))(piVar14,param_2);
    if (iVar11 - 2U < 2) goto LAB_01816f88;
    if (iVar11 != 0) {
      if (iVar11 != 1) goto LAB_01816f98;
      goto LAB_01817328;
    }
  }
LAB_018167e8:
  if (param_1[4] != 0) {
    return 0;
  }
LAB_01816580:
  piVar14[10] = -1;
  return 0;
}

