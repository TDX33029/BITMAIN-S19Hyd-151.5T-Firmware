// FUN_0123e4f4 @ 0123e4f4 size=3272 calls_out=11 calls_in=2
// strings: 

void FUN_0123e4f4(int *param_1,uint param_2,int *param_3,uint param_4,int param_5,
                 undefined4 *param_6)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  undefined4 uVar14;
  int iVar15;
  byte bVar16;
  byte bVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  byte bVar21;
  uint uVar22;
  uint uVar23;
  int *piVar24;
  bool bVar25;
  undefined4 *local_70;
  int local_6c;
  int local_40;
  int iStack_3c;
  int local_38 [3];
  undefined4 uStack_2c;
  undefined1 uStack_29;
  undefined3 uStack_28;
  
  if (0x20 < param_2) {
    local_70 = param_6;
    local_6c = param_5;
    do {
      uVar4 = param_2;
      while( true ) {
        if (local_6c == 0) {
          FUN_0123de0c(param_1,uVar4,param_3,param_4,1);
          return;
        }
        piVar19 = param_1 + (uVar4 >> 3) * 0x10;
        piVar24 = param_1 + ((uVar4 >> 3) * 8 - (uVar4 >> 3)) * 4;
        if (uVar4 < 0x40) {
          iVar15 = piVar19[1];
          iVar3 = param_1[1];
          iVar9 = *param_1;
          iVar11 = *piVar19;
          iVar8 = FUN_0123e488(iVar9,(char)iVar3,iVar11,(char)iVar15);
          iVar18 = *piVar24;
          iVar20 = piVar24[1];
          iVar3 = FUN_0123e488(iVar9,(char)iVar3);
          piVar2 = param_1;
          if (iVar8 == iVar3) {
            iVar15 = FUN_0123e488(iVar11,(char)iVar15,iVar18,(char)iVar20);
            piVar2 = piVar19;
            if (iVar8 != iVar15) {
              piVar2 = piVar24;
            }
          }
        }
        else {
          piVar2 = (int *)FUN_0124f9f4(param_1,piVar19,piVar24);
        }
        local_40 = *piVar2;
        iStack_3c = piVar2[1];
        local_38[0] = piVar2[2];
        local_38[1] = piVar2[3];
        local_6c = local_6c + -1;
        uVar6 = (uint)((int)piVar2 - (int)param_1) >> 4;
        if ((local_70 != (undefined4 *)0x0) &&
           (iVar15 = FUN_0123e488(*local_70,*(undefined1 *)(local_70 + 1),*piVar2,(char)piVar2[1]),
           iVar15 == 0)) break;
        if (param_4 < uVar4) goto LAB_0123f1a4;
        piVar24 = param_3 + uVar4 * 4;
        param_2 = 0;
        uVar23 = uVar6;
        piVar19 = param_1;
        while( true ) {
          iVar15 = uVar23 - 3;
          if (uVar23 < 3) {
            iVar15 = 0;
          }
          if (piVar19 < param_1 + iVar15 * 4) {
            iVar3 = 0;
            do {
              bVar21 = 0x50;
              piVar5 = (int *)((int)piVar19 - iVar3);
              bVar16 = 0x50;
              if (*piVar5 == 0) {
                bVar16 = (&DAT_004206f0)[*(byte *)((int)piVar19 + (4 - iVar3))];
                iVar20 = *piVar2;
              }
              else {
                iVar20 = *piVar2;
              }
              if (iVar20 == 0) {
                bVar21 = (&DAT_0042071a)[*(byte *)(piVar2 + 1)];
              }
              iVar20 = piVar5[1];
              iVar8 = piVar5[2];
              piVar13 = param_3;
              if (bVar21 <= bVar16) {
                piVar13 = (int *)((int)piVar24 + iVar3 + -0x10);
              }
              iVar11 = piVar5[3];
              piVar13 = piVar13 + param_2 * 4;
              *piVar13 = *piVar5;
              if (bVar21 > bVar16) {
                param_2 = param_2 + 1;
              }
              piVar13[1] = iVar20;
              piVar13[2] = iVar8;
              piVar13[3] = iVar11;
              bVar21 = 0x50;
              bVar16 = 0x50;
              if (piVar5[4] == 0) {
                bVar16 = (&DAT_00420744)[*(byte *)((int)piVar19 + (0x14 - iVar3))];
              }
              if (*piVar2 == 0) {
                bVar21 = (&DAT_0042076e)[*(byte *)(piVar2 + 1)];
              }
              piVar13 = param_3;
              if (bVar21 <= bVar16) {
                piVar13 = (int *)((int)piVar24 + iVar3 + -0x20);
              }
              iVar20 = piVar5[7];
              iVar8 = piVar5[5];
              iVar11 = piVar5[6];
              bVar17 = 0x50;
              piVar13 = piVar13 + param_2 * 4;
              *piVar13 = piVar5[4];
              if (bVar21 > bVar16) {
                param_2 = param_2 + 1;
              }
              piVar13[1] = iVar8;
              piVar13[2] = iVar11;
              bVar16 = *(byte *)(piVar2 + 1);
              iVar8 = *piVar2;
              piVar13[3] = iVar20;
              bVar21 = 0x50;
              if (piVar5[8] == 0) {
                bVar21 = (&DAT_00420798)[*(byte *)((int)piVar19 + (0x24 - iVar3))];
              }
              if (iVar8 == 0) {
                bVar17 = (&DAT_004207c2)[bVar16];
              }
              piVar13 = param_3;
              if (bVar17 <= bVar21) {
                piVar13 = (int *)((int)piVar24 + iVar3 + -0x30);
              }
              bVar16 = 0x50;
              iVar20 = piVar5[9];
              iVar8 = piVar5[10];
              iVar11 = piVar5[0xb];
              piVar13 = piVar13 + param_2 * 4;
              *piVar13 = piVar5[8];
              if (bVar17 > bVar21) {
                param_2 = param_2 + 1;
              }
              piVar13[1] = iVar20;
              piVar13[2] = iVar8;
              piVar13[3] = iVar11;
              bVar21 = 0x50;
              if (piVar5[0xc] == 0) {
                bVar16 = (&DAT_004207ec)[*(byte *)((int)piVar19 + (0x34 - iVar3))];
              }
              if (*piVar2 == 0) {
                bVar21 = (&DAT_00420816)[*(byte *)(piVar2 + 1)];
              }
              piVar13 = param_3;
              if (bVar21 <= bVar16) {
                piVar13 = (int *)((int)piVar24 + iVar3 + -0x40);
              }
              iVar3 = iVar3 + -0x40;
              iVar20 = piVar5[0xd];
              iVar8 = piVar5[0xe];
              iVar11 = piVar5[0xf];
              piVar13 = piVar13 + param_2 * 4;
              *piVar13 = piVar5[0xc];
              if (bVar21 > bVar16) {
                param_2 = param_2 + 1;
              }
              piVar13[1] = iVar20;
              piVar13[2] = iVar8;
              piVar13[3] = iVar11;
            } while (piVar5 + 0x10 < param_1 + iVar15 * 4);
            piVar19 = (int *)((int)piVar19 - iVar3);
            piVar24 = (int *)((int)piVar24 + iVar3);
          }
          while (piVar19 < param_1 + uVar23 * 4) {
            bVar16 = 0x50;
            bVar21 = 0x50;
            if (*piVar19 == 0) {
              bVar16 = (&DAT_00420840)[*(byte *)(piVar19 + 1)];
            }
            if (*piVar2 == 0) {
              bVar21 = (&DAT_0042086a)[*(byte *)(piVar2 + 1)];
            }
            piVar24 = piVar24 + -4;
            iVar15 = *piVar19;
            iVar3 = piVar19[1];
            piVar5 = piVar24;
            if (bVar16 < bVar21) {
              piVar5 = param_3;
            }
            iVar8 = piVar19[2];
            iVar20 = piVar19[3];
            piVar19 = piVar19 + 4;
            piVar5 = piVar5 + param_2 * 4;
            *piVar5 = iVar15;
            if (bVar16 < bVar21) {
              param_2 = param_2 + 1;
            }
            piVar5[1] = iVar3;
            piVar5[2] = iVar8;
            piVar5[3] = iVar20;
          }
          if (uVar23 == uVar4) break;
          piVar24 = piVar24 + -4;
          iVar15 = *piVar19;
          iVar3 = piVar19[1];
          iVar20 = piVar19[2];
          iVar8 = piVar19[3];
          piVar19 = piVar19 + 4;
          piVar5 = piVar24 + param_2 * 4;
          *piVar5 = iVar15;
          piVar5[1] = iVar3;
          piVar5[2] = iVar20;
          piVar5[3] = iVar8;
          uVar23 = uVar4;
        }
        FUN_016dd1aa(param_1,param_3,param_2 << 4);
        iVar15 = uVar4 - param_2;
        if (iVar15 != 0) {
          piVar24 = param_1 + param_2 * 4;
          piVar19 = param_3 + uVar4 * 4 + -4;
          iVar3 = iVar15;
          do {
            iVar18 = *piVar19;
            iVar3 = iVar3 + -1;
            iVar11 = piVar19[1];
            iVar8 = piVar19[2];
            iVar20 = piVar19[3];
            piVar19 = piVar19 + -4;
            *piVar24 = iVar18;
            piVar24[1] = iVar11;
            piVar24[2] = iVar8;
            piVar24[3] = iVar20;
            piVar24 = piVar24 + 4;
          } while (iVar3 != 0);
        }
        if (param_2 == 0) break;
        if (uVar4 < param_2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
        }
        FUN_0123e4f4(param_1 + param_2 * 4,iVar15,param_3,param_4,local_6c,&local_40);
        uVar4 = param_2;
        if (param_2 < 0x21) goto LAB_0123e518;
      }
      if (param_4 < uVar4) goto LAB_0123f1a4;
      piVar24 = param_3 + uVar4 * 4;
      uVar23 = 0;
      piVar19 = param_1;
      while( true ) {
        iVar15 = uVar6 - 3;
        if (uVar6 < 3) {
          iVar15 = 0;
        }
        while (piVar19 < param_1 + iVar15 * 4) {
          bVar16 = 0x50;
          bVar21 = 0x50;
          if (*piVar2 == 0) {
            bVar16 = (&DAT_00420894)[*(byte *)(piVar2 + 1)];
          }
          if (*piVar19 == 0) {
            bVar21 = (&DAT_004208be)[*(byte *)(piVar19 + 1)];
          }
          piVar5 = param_3;
          if (bVar16 < bVar21) {
            piVar5 = piVar24 + -4;
          }
          iVar8 = piVar19[1];
          bVar17 = 0x50;
          iVar20 = piVar19[2];
          iVar3 = piVar19[3];
          piVar5 = piVar5 + uVar23 * 4;
          *piVar5 = *piVar19;
          if (bVar16 >= bVar21) {
            uVar23 = uVar23 + 1;
          }
          iVar11 = piVar19[4];
          piVar5[2] = iVar20;
          piVar5[1] = iVar8;
          piVar5[3] = iVar3;
          bVar16 = 0x50;
          if (*piVar2 == 0) {
            bVar16 = (&DAT_004208e8)[*(byte *)(piVar2 + 1)];
          }
          if (iVar11 == 0) {
            bVar17 = (&DAT_00420912)[*(byte *)(piVar19 + 5)];
          }
          piVar5 = param_3;
          if (bVar16 < bVar17) {
            piVar5 = piVar24 + -8;
          }
          iVar8 = piVar19[5];
          bVar21 = 0x50;
          iVar20 = piVar19[6];
          iVar3 = piVar19[7];
          piVar5 = piVar5 + uVar23 * 4;
          *piVar5 = piVar19[4];
          if (bVar16 >= bVar17) {
            uVar23 = uVar23 + 1;
          }
          iVar11 = piVar19[8];
          piVar5[2] = iVar20;
          piVar5[1] = iVar8;
          piVar5[3] = iVar3;
          bVar16 = 0x50;
          if (*piVar2 == 0) {
            bVar16 = (&DAT_0042093c)[*(byte *)(piVar2 + 1)];
          }
          if (iVar11 == 0) {
            bVar21 = (&DAT_00420966)[*(byte *)(piVar19 + 9)];
          }
          piVar5 = param_3;
          if (bVar16 < bVar21) {
            piVar5 = piVar24 + -0xc;
          }
          iVar8 = piVar19[9];
          bVar17 = 0x50;
          iVar20 = piVar19[10];
          iVar3 = piVar19[0xb];
          piVar5 = piVar5 + uVar23 * 4;
          *piVar5 = piVar19[8];
          if (bVar16 >= bVar21) {
            uVar23 = uVar23 + 1;
          }
          iVar11 = piVar19[0xc];
          piVar5[2] = iVar20;
          piVar5[1] = iVar8;
          piVar5[3] = iVar3;
          bVar16 = 0x50;
          if (*piVar2 == 0) {
            bVar16 = (&DAT_00420990)[*(byte *)(piVar2 + 1)];
          }
          if (iVar11 == 0) {
            bVar17 = (&DAT_004209ba)[*(byte *)(piVar19 + 0xd)];
          }
          piVar24 = piVar24 + -0x10;
          piVar5 = piVar19 + 0xc;
          iVar3 = piVar19[0xd];
          piVar13 = piVar24;
          if (bVar17 <= bVar16) {
            piVar13 = param_3;
          }
          iVar8 = piVar19[0xe];
          iVar20 = piVar19[0xf];
          piVar19 = piVar19 + 0x10;
          piVar13 = piVar13 + uVar23 * 4;
          *piVar13 = *piVar5;
          if (bVar17 <= bVar16) {
            uVar23 = uVar23 + 1;
          }
          piVar13[1] = iVar3;
          piVar13[2] = iVar8;
          piVar13[3] = iVar20;
        }
        while (piVar19 < param_1 + uVar6 * 4) {
          bVar21 = 0x50;
          bVar16 = 0x50;
          if (*piVar2 == 0) {
            bVar16 = (&DAT_004209e4)[*(byte *)(piVar2 + 1)];
            iVar15 = *piVar19;
          }
          else {
            iVar15 = *piVar19;
          }
          if (iVar15 == 0) {
            bVar21 = (&DAT_00420a0e)[*(byte *)(piVar19 + 1)];
          }
          piVar24 = piVar24 + -4;
          iVar15 = *piVar19;
          iVar3 = piVar19[1];
          piVar5 = piVar24;
          if (bVar21 <= bVar16) {
            piVar5 = param_3;
          }
          iVar8 = piVar19[2];
          iVar20 = piVar19[3];
          piVar19 = piVar19 + 4;
          piVar5 = piVar5 + uVar23 * 4;
          *piVar5 = iVar15;
          if (bVar21 <= bVar16) {
            uVar23 = uVar23 + 1;
          }
          piVar5[1] = iVar3;
          piVar5[2] = iVar8;
          piVar5[3] = iVar20;
        }
        if (uVar6 == uVar4) break;
        iVar15 = *piVar19;
        iVar3 = piVar19[1];
        iVar20 = piVar19[2];
        iVar8 = piVar19[3];
        piVar19 = piVar19 + 4;
        piVar24 = piVar24 + -4;
        piVar5 = param_3 + uVar23 * 4;
        *piVar5 = iVar15;
        uVar23 = uVar23 + 1;
        piVar5[1] = iVar3;
        piVar5[2] = iVar20;
        piVar5[3] = iVar8;
        uVar6 = uVar4;
      }
      FUN_016dd1aa(param_1,param_3,uVar23 << 4);
      param_2 = uVar4 - uVar23;
      if (param_2 == 0) {
        return;
      }
      param_1 = param_1 + uVar23 * 4;
      piVar24 = param_3 + uVar4 * 4 + -4;
      piVar19 = param_1;
      uVar6 = param_2;
      do {
        iVar8 = *piVar24;
        uVar6 = uVar6 - 1;
        iVar20 = piVar24[1];
        iVar3 = piVar24[2];
        iVar15 = piVar24[3];
        piVar24 = piVar24 + -4;
        *piVar19 = iVar8;
        piVar19[1] = iVar20;
        piVar19[2] = iVar3;
        piVar19[3] = iVar15;
        piVar19 = piVar19 + 4;
      } while (uVar6 != 0);
      if (uVar4 < uVar23) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar23,uVar4,uVar4,&DAT_018af348);
      }
      local_70 = (undefined4 *)0x0;
    } while (0x20 < param_2);
  }
LAB_0123e518:
  if (param_2 < 2) {
    return;
  }
  if (param_2 + 0x10 <= param_4) {
    piVar19 = param_3 + param_2 * 4;
    uVar4 = param_2 >> 1;
    if (param_2 < 0x10) {
      piVar2 = param_3 + uVar4 * 4;
      piVar24 = param_1 + uVar4 * 4;
      if (param_2 < 8) {
        iVar15 = param_1[1];
        iVar3 = param_1[2];
        iVar20 = param_1[3];
        *param_3 = *param_1;
        param_3[1] = iVar15;
        param_3[2] = iVar3;
        param_3[3] = iVar20;
        iVar15 = piVar24[1];
        iVar3 = piVar24[2];
        iVar20 = piVar24[3];
        *piVar2 = *piVar24;
        piVar2[1] = iVar15;
        piVar2[2] = iVar3;
        piVar2[3] = iVar20;
        uVar6 = 1;
      }
      else {
        FUN_011bc390(param_1,param_3);
        FUN_011bc390(piVar24,piVar2);
        uVar6 = 4;
      }
    }
    else {
      FUN_011bc158(param_1,param_3,piVar19);
      FUN_011bc158(param_1 + uVar4 * 4,param_3 + uVar4 * 4,piVar19 + 0x20);
      uVar6 = 8;
    }
    local_38[0] = 0;
    iVar15 = 0;
    do {
      iVar3 = local_38[iVar15];
      uVar23 = uVar4;
      if (iVar3 != 0) {
        uVar23 = param_2 - uVar4;
      }
      if (uVar6 < uVar23) {
        iVar20 = 0x10;
        piVar2 = param_3 + iVar3 * 4;
        uVar22 = uVar6;
        piVar24 = piVar2;
        do {
          piVar13 = param_1 + iVar3 * 4 + uVar22 * 4;
          iVar18 = *piVar13;
          uVar7 = piVar13[1];
          iVar11 = piVar13[2];
          iVar8 = piVar13[3];
          piVar5 = piVar2 + uVar22 * 4;
          *piVar5 = iVar18;
          piVar5[1] = uVar7;
          piVar5[2] = iVar11;
          piVar5[3] = iVar8;
          bVar16 = 0x50;
          if (iVar18 == 0) {
            bVar16 = (&DAT_00420648)[uVar7 & 0xff];
            if (piVar5[-4] != 0) goto LAB_0123ef4c;
LAB_0123ef74:
            if (bVar16 < (byte)(&DAT_00420672)[*(byte *)(piVar5 + -3)]) {
LAB_0123ef88:
              local_38[2] = *(undefined4 *)((int)piVar13 + 5);
              uVar14 = *(undefined4 *)((int)piVar13 + 9);
              uStack_28 = (undefined3)((uint)piVar13[3] >> 8);
              piVar5 = piVar24;
              iVar8 = iVar20;
              do {
                iVar11 = piVar5[uVar6 * 4 + -1];
                iVar9 = piVar5[uVar6 * 4 + -3];
                iVar12 = piVar5[uVar6 * 4 + -2];
                piVar5[uVar6 * 4] = piVar5[uVar6 * 4 + -4];
                piVar5[uVar6 * 4 + 1] = iVar9;
                piVar5[uVar6 * 4 + 2] = iVar12;
                piVar5[uVar6 * 4 + 3] = iVar11;
                if (uVar6 * 0x10 == iVar8) {
                  piVar5 = piVar2;
                  goto LAB_0123eec8;
                }
                bVar21 = 0x50;
                bVar16 = 0x50;
                if (iVar18 == 0) {
                  bVar16 = (&DAT_0042069c)[uVar7 & 0xff];
                  iVar11 = piVar5[uVar6 * 4 + -8];
                }
                else {
                  iVar11 = piVar5[uVar6 * 4 + -8];
                }
                if (iVar11 == 0) {
                  bVar21 = (&DAT_004206c6)[*(byte *)(piVar5 + uVar6 * 4 + -7)];
                }
                piVar5 = piVar5 + -4;
                iVar8 = iVar8 + 0x10;
              } while (bVar16 < bVar21);
              piVar5 = piVar5 + uVar6 * 4;
LAB_0123eec8:
              *(char *)(piVar5 + 1) = (char)uVar7;
              uStack_29 = (undefined1)((uint)uVar14 >> 0x18);
              *(undefined4 *)((int)piVar5 + 9) = uVar14;
              *piVar5 = iVar18;
              *(int *)((int)piVar5 + 5) = local_38[2];
              piVar5[3] = CONCAT31(uStack_28,uStack_29);
              uStack_2c = uVar14;
            }
          }
          else {
            if (piVar5[-4] == 0) goto LAB_0123ef74;
LAB_0123ef4c:
            if (bVar16 < 0x50) goto LAB_0123ef88;
          }
          uVar22 = uVar22 + 1;
          piVar24 = piVar24 + 4;
          iVar20 = iVar20 + -0x10;
        } while (uVar22 != uVar23);
      }
      bVar25 = iVar15 == 0;
      iVar15 = 1;
    } while (bVar25);
    piVar2 = param_3 + uVar4 * 4;
    piVar24 = piVar2 + -4;
    iVar15 = 0;
    local_38[1] = uVar4;
    do {
      piVar13 = piVar19 + -4;
      uVar6 = FUN_011bc0ec(*piVar2,(char)piVar2[1],*param_3,(char)param_3[1]);
      piVar5 = param_3;
      if (uVar6 != 0) {
        piVar5 = piVar2;
      }
      iVar20 = piVar5[1];
      iVar8 = piVar5[2];
      iVar3 = piVar5[3];
      piVar10 = (int *)((int)param_1 + iVar15);
      *piVar10 = *piVar5;
      piVar10[1] = iVar20;
      piVar10[2] = iVar8;
      piVar10[3] = iVar3;
      iVar3 = FUN_011bc0ec(*piVar13,(char)piVar19[-3],*piVar24,(char)piVar24[1]);
      piVar5 = piVar13;
      if (iVar3 != 0) {
        piVar5 = piVar24;
      }
      piVar24 = piVar24 + iVar3 * -4;
      iVar20 = piVar5[1];
      iVar8 = piVar5[2];
      piVar19 = piVar13 + iVar3 * 4;
      piVar2 = piVar2 + uVar6 * 4;
      iVar3 = piVar5[3];
      piVar13 = (int *)((int)param_1 + ((param_2 * 0x10 + -0x10) - iVar15));
      *piVar13 = *piVar5;
      iVar15 = iVar15 + 0x10;
      piVar13[1] = iVar20;
      piVar13[2] = iVar8;
      piVar13[3] = iVar3;
      param_3 = param_3 + (uVar6 ^ 1) * 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    piVar24 = piVar24 + 4;
    if ((param_2 & 1) != 0) {
      bVar25 = param_3 < piVar24;
      piVar5 = piVar2;
      if (bVar25) {
        piVar5 = param_3;
      }
      param_1 = (int *)((int)param_1 + iVar15);
      iVar20 = piVar5[1];
      iVar3 = piVar5[2];
      iVar15 = piVar5[3];
      *param_1 = *piVar5;
      param_1[1] = iVar20;
      param_1[2] = iVar3;
      param_1[3] = iVar15;
      piVar2 = piVar2 + (uint)!bVar25 * 4;
      param_3 = param_3 + (uint)bVar25 * 4;
    }
    piVar5 = piVar24;
    if (param_3 == piVar24) {
      piVar5 = piVar19;
    }
    if (param_3 == piVar24 && piVar2 == piVar5) {
      return;
    }
    FUN_00fb7254();
  }
LAB_0123f1a4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x123f1a4);
  (*pcVar1)();
}

