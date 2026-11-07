// FUN_00c41ab8 @ 00c41ab8 size=3044 calls_out=9 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c41ab8(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  int iVar12;
  undefined1 *puVar13;
  ushort *puVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  undefined1 *puVar21;
  uint uVar22;
  int local_568;
  int local_564;
  int local_560;
  int local_55c;
  int local_558;
  int local_550;
  uint local_54c;
  int local_544;
  undefined1 auStack_540 [208];
  undefined1 auStack_470 [208];
  int local_3a0;
  int local_39c;
  undefined1 auStack_398 [208];
  int local_2c8;
  int local_2c4;
  int local_2c0 [2];
  int local_2b8;
  int local_2b4;
  undefined1 auStack_2b0 [208];
  int local_1e0;
  uint local_1dc;
  int local_1d8;
  uint local_1d4;
  undefined1 auStack_1d0 [208];
  undefined1 auStack_100 [220];
  
  local_544 = *param_2;
  if (local_544 != 0) {
    iVar18 = param_3[1];
    uVar17 = param_3[2];
    iVar12 = param_2[1];
    do {
      uVar1 = *(ushort *)(local_544 + 0x9d2);
      iVar16 = local_544 + 0x94c;
      piVar7 = (int *)0xffffffff;
      iVar19 = (int)(uint)uVar1 * 0xc;
      do {
        if (iVar19 == 0) {
          piVar7 = (int *)(uint)uVar1;
          goto LAB_00c41b84;
        }
        uVar8 = *(uint *)(iVar16 + 8);
        uVar20 = uVar8;
        if (uVar17 < uVar8) {
          uVar20 = uVar17;
        }
        iVar3 = FUN_016dd50a(iVar18,*(undefined4 *)(iVar16 + 4),uVar20);
        if (iVar3 == 0) {
          iVar3 = uVar17 - uVar8;
        }
        iVar19 = iVar19 + -0xc;
        piVar7 = (int *)((int)piVar7 + 1);
        iVar16 = iVar16 + 0xc;
      } while ((char)((0 < iVar3) - (iVar3 < 0)) == '\x01');
      if (0 < iVar3 == iVar3 < 0) {
        param_2 = piVar7;
        iVar12 = local_544;
        if (*param_3 != 0) {
          thunk_FUN_016d3fb4(iVar18);
        }
        goto LAB_00c41bd8;
      }
LAB_00c41b84:
      if (iVar12 == 0) goto LAB_00c41c78;
      iVar12 = iVar12 + -1;
      local_544 = *(int *)(local_544 + (int)piVar7 * 4 + 0x9d8);
    } while( true );
  }
  iVar18 = *param_3;
  iVar12 = param_3[1];
  if (iVar18 != -0x80000000) {
    iVar16 = param_3[2];
    iVar19 = thunk_FUN_016d4a50(0x9d8);
    if (iVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x9d8);
    }
    *(undefined2 *)(iVar19 + 0x9d2) = 1;
    *param_2 = iVar19;
    param_2[1] = 0;
    *(undefined4 *)(iVar19 + 0x948) = 0;
    *(int *)(iVar19 + 0x94c) = iVar18;
    *(int *)(iVar19 + 0x950) = iVar12;
    *(int *)(iVar19 + 0x954) = iVar16;
    FUN_016dd1aa(iVar19,param_4,0xd8);
    goto LAB_00c41c50;
  }
LAB_00c41bd8:
  iVar12 = (int)param_2 * 0xd8 + iVar12;
  FUN_016dd1aa(param_1,iVar12,0xd8);
  FUN_016dd1aa(iVar12,param_4,0xd8);
  return;
LAB_00c41c78:
  iVar19 = *param_3;
  iVar12 = iVar18;
  if (iVar19 != -0x80000000) {
    puVar11 = (ushort *)(local_544 + 0x9d2);
    uVar1 = *puVar11;
    puVar13 = (undefined1 *)(uint)uVar1;
    if (puVar13 < (undefined1 *)0xb) {
      puVar21 = (undefined1 *)((int)piVar7 + 1);
      piVar5 = (int *)(local_544 + 0x94c + (int)piVar7 * 0xc);
      if (puVar13 < puVar21) {
        *piVar5 = iVar19;
        piVar5[1] = iVar18;
        piVar5[2] = uVar17;
        FUN_016dd1aa(&local_2c8,param_4,0xd8);
      }
      else {
        FUN_016dd52c(local_544 + 0x94c + (int)puVar21 * 0xc,piVar5,
                     ((int)puVar13 - (int)piVar7) * 0xc);
        *piVar5 = iVar19;
        piVar5[1] = iVar18;
        piVar5[2] = uVar17;
        FUN_016dd1aa(&local_2c8,param_4,0xd8);
        FUN_016dd52c((int)puVar21 * 0xd8 + local_544,(int)piVar7 * 0xd8 + local_544,
                     ((int)puVar13 - (int)piVar7) * 0xd8);
      }
      FUN_016dd1aa((int)piVar7 * 0xd8 + local_544,&local_2c8,0xd8);
      *puVar11 = uVar1 + 1;
    }
    else {
      uVar20 = 4;
      bVar15 = false;
      if (&DAT_00000004 < piVar7) {
        if (piVar7 == (int *)&DAT_00000005) {
          uVar20 = 5;
        }
        else {
          if (piVar7 == (int *)&DAT_00000006) {
            uVar20 = 5;
            piVar7 = (int *)0x0;
          }
          else {
            piVar7 = (int *)((int)piVar7 + -7);
            uVar20 = 6;
          }
          bVar15 = true;
        }
      }
      local_560 = thunk_FUN_016d4a50(0x9d8);
      if (local_560 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x9d8);
      }
      *(undefined2 *)(local_560 + 0x9d2) = 0;
      *(undefined4 *)(local_560 + 0x948) = 0;
      piVar5 = (int *)(local_544 + 0x94c + uVar20 * 0xc);
      local_55c = *piVar5;
      uVar8 = (uint)*puVar11 + ~uVar20;
      local_564 = piVar5[1];
      local_568 = piVar5[2];
      *(undefined2 *)(local_560 + 0x9d2) = (short)uVar8;
      FUN_016dd1aa(&local_2c8,uVar20 * 0xd8 + local_544,0xd8);
      if (0xb < uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar8,0xb,&DAT_018ac47c);
      }
      FUN_016dd1aa(local_560 + 0x94c,local_544 + 0x94c + (uVar20 + 1) * 0xc,uVar8 * 0xc);
      FUN_016dd1aa(local_560,(uVar20 + 1) * 0xd8 + local_544,uVar8 * 0xd8);
      iVar16 = local_2c4;
      iVar12 = local_2c8;
      local_550 = local_2c8;
      local_558 = local_2c4;
      *puVar11 = (ushort)uVar20;
      FUN_016dd1aa(auStack_100,local_2c0,0xd0);
      iVar3 = local_560;
      if (!bVar15) {
        iVar3 = local_544;
      }
      piVar5 = (int *)(iVar3 + 0x94c + (int)piVar7 * 0xc);
      uVar1 = *(ushort *)(iVar3 + 0x9d2);
      if (piVar7 < (int *)(uint)uVar1) {
        iVar9 = (int)(uint)uVar1 - (int)piVar7;
        FUN_016dd52c(piVar5 + 3,piVar5,iVar9 * 0xc);
        *piVar5 = iVar19;
        piVar5[1] = iVar18;
        piVar5[2] = uVar17;
        FUN_016dd1aa(&local_2c8,param_4,0xd8);
        iVar18 = (int)piVar7 * 0xd8 + iVar3;
        FUN_016dd52c(iVar18 + 0xd8,iVar18,iVar9 * 0xd8);
      }
      else {
        *piVar5 = iVar19;
        piVar5[1] = iVar18;
        piVar5[2] = uVar17;
        FUN_016dd1aa(&local_2c8,param_4,0xd8);
      }
      FUN_016dd1aa((int)piVar7 * 0xd8 + iVar3,&local_2c8,0xd8);
      *(ushort *)(iVar3 + 0x9d2) = uVar1 + 1;
      FUN_016dd1aa(&local_3a0,auStack_100,0xd0);
      if (iVar12 != 4 || iVar16 != 0) {
        FUN_016dd1aa(auStack_540,&local_3a0,0xd0);
        if (*(int *)(local_544 + 0x948) == 0) {
          local_54c = 0;
        }
        else {
          local_54c = 0;
          iVar12 = *(int *)(local_544 + 0x948);
          do {
            iVar18 = iVar12;
            local_39c = local_558;
            local_3a0 = local_550;
            uVar20 = (uint)*(ushort *)(local_544 + 0x9d0);
            FUN_016dd1aa(auStack_398,auStack_540,0xd0);
            puVar11 = (ushort *)(iVar18 + 0x9d2);
            uVar17 = (uint)*puVar11;
            if (uVar17 < 0xb) {
              uVar8 = uVar20 + 1;
              piVar7 = (int *)(iVar18 + 0x94c + uVar20 * 0xc);
              if (uVar20 < uVar17) {
                iVar12 = uVar17 - uVar20;
                FUN_016dd52c(iVar18 + 0x94c + uVar8 * 0xc,piVar7,iVar12 * 0xc);
                piVar7[1] = local_564;
                iVar19 = uVar20 * 0xd8 + iVar18;
                *piVar7 = local_55c;
                piVar7[2] = local_568;
                FUN_016dd52c(uVar8 * 0xd8 + iVar18,iVar19,iVar12 * 0xd8);
                FUN_016dd1aa(iVar19,&local_3a0,0xd8);
                FUN_016dd52c(iVar18 + 0x9d8 + uVar20 * 4 + 8,iVar18 + 0x9d8 + uVar8 * 4,iVar12 * 4);
              }
              else {
                *piVar7 = local_55c;
                piVar7[1] = local_564;
                piVar7[2] = local_568;
                FUN_016dd1aa(uVar20 * 0xd8 + iVar18,&local_3a0,0xd8);
              }
              *puVar11 = (ushort)(uVar17 + 1);
              *(int *)(iVar18 + uVar8 * 4 + 0x9d8) = local_560;
              if (uVar8 < uVar17 + 2) {
                do {
                  iVar12 = *(int *)(iVar18 + 0x9dc + uVar20 * 4);
                  uVar20 = uVar20 + 1;
                  *(short *)(iVar12 + 0x9d0) = (short)uVar20;
                  *(int *)(iVar12 + 0x948) = iVar18;
                } while (uVar17 + 1 != uVar20);
              }
              goto LAB_00c41c50;
            }
            uVar8 = 4;
            if (uVar20 < 5) {
              bVar15 = false;
            }
            else if (uVar20 == 5) {
              bVar15 = false;
              uVar8 = 5;
            }
            else if (uVar20 == 6) {
              uVar20 = 0;
              uVar8 = 5;
              bVar15 = true;
            }
            else {
              uVar20 = uVar20 - 7;
              bVar15 = true;
              uVar8 = 6;
            }
            iVar19 = thunk_FUN_016d4a50(0xa08);
            if (iVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(8,0xa08);
            }
            puVar14 = (ushort *)(iVar19 + 0x9d2);
            *puVar14 = 0;
            *(undefined4 *)(iVar19 + 0x948) = 0;
            piVar7 = (int *)(iVar18 + 0x94c + uVar8 * 0xc);
            iVar16 = *piVar7;
            uVar22 = (uint)*puVar11 + ~uVar8;
            iVar3 = piVar7[1];
            iVar9 = piVar7[2];
            *puVar14 = (ushort)uVar22;
            FUN_016dd1aa(auStack_100,uVar8 * 0xd8 + iVar18,0xd8);
            if (0xb < uVar22) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,uVar22,0xb,&DAT_018ac47c);
            }
            FUN_016dd1aa(iVar19 + 0x94c,iVar18 + 0x94c + (uVar8 + 1) * 0xc,uVar22 * 0xc);
            FUN_016dd1aa(iVar19,(uVar8 + 1) * 0xd8 + iVar18,uVar22 * 0xd8);
            *puVar11 = (ushort)uVar8;
            local_2c8 = iVar16;
            local_2c4 = iVar3;
            local_2c0[0] = iVar9;
            FUN_016dd1aa(&local_2b8,auStack_100,0xd8);
            uVar22 = (uint)*puVar14;
            iVar12 = uVar22 + 1;
            if (0xb < uVar22) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,iVar12,0xc,&DAT_018ac48c);
            }
            if (uVar17 - uVar8 != iVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
            }
            local_54c = local_54c + 1;
            FUN_016dd1aa(iVar19 + 0x9d8,iVar18 + uVar8 * 4 + 0x9dc,iVar12 * 4);
            iVar2 = local_2b4;
            iVar12 = local_2b8;
            uVar17 = 0;
            do {
              iVar4 = *(int *)(iVar19 + 0x9d8 + uVar17 * 4);
              *(short *)(iVar4 + 0x9d0) = (short)uVar17;
              *(int *)(iVar4 + 0x948) = iVar19;
              if (uVar22 <= uVar17) break;
              uVar17 = uVar17 + 1;
            } while (uVar17 <= uVar22);
            local_550 = local_2b8;
            local_558 = local_2b4;
            FUN_016dd1aa(auStack_1d0,auStack_2b0,0xd0);
            iVar4 = iVar19;
            if (!bVar15) {
              iVar4 = iVar18;
            }
            piVar7 = (int *)(iVar4 + 0x94c + uVar20 * 0xc);
            uVar8 = uVar20 + 1;
            uVar17 = (uint)*(ushort *)(iVar4 + 0x9d2);
            if (uVar20 < uVar17) {
              iVar10 = uVar17 - uVar20;
              FUN_016dd52c(iVar4 + 0x94c + uVar8 * 0xc,piVar7,iVar10 * 0xc);
              iVar6 = uVar20 * 0xd8 + iVar4;
              *piVar7 = local_55c;
              piVar7[1] = local_564;
              piVar7[2] = local_568;
              FUN_016dd52c(uVar8 * 0xd8 + iVar4,iVar6,iVar10 * 0xd8);
              FUN_016dd1aa(iVar6,&local_3a0,0xd8);
              FUN_016dd52c(iVar4 + 0x9d8 + uVar20 * 4 + 8,iVar4 + 0x9d8 + uVar8 * 4,iVar10 * 4);
            }
            else {
              *piVar7 = local_55c;
              piVar7[1] = local_564;
              piVar7[2] = local_568;
              FUN_016dd1aa(uVar20 * 0xd8 + iVar4,&local_3a0,0xd8);
            }
            *(int *)(iVar4 + uVar8 * 4 + 0x9d8) = local_560;
            *(ushort *)(iVar4 + 0x9d2) = (ushort)(uVar17 + 1);
            if (uVar8 < uVar17 + 2) {
              do {
                iVar6 = *(int *)(iVar4 + 0x9dc + uVar20 * 4);
                uVar20 = uVar20 + 1;
                *(short *)(iVar6 + 0x9d0) = (short)uVar20;
                *(int *)(iVar6 + 0x948) = iVar4;
              } while (uVar17 + 1 != uVar20);
            }
            FUN_016dd1aa(auStack_470,auStack_1d0,0xd0);
            if (iVar12 == 4 && iVar2 == 0) goto LAB_00c41c50;
            FUN_016dd1aa(auStack_540,auStack_470,0xd0);
            iVar12 = *(int *)(iVar18 + 0x948);
            local_568 = iVar9;
            local_564 = iVar3;
            local_560 = iVar19;
            local_55c = iVar16;
            local_544 = iVar18;
          } while (*(int *)(iVar18 + 0x948) != 0);
        }
        local_2c8 = local_55c;
        local_2c4 = local_564;
        local_2c0[0] = local_568;
        FUN_016dd1aa(auStack_2b0,auStack_540,0xd0);
        iVar12 = *param_2;
        local_2b4 = local_558;
        local_2b8 = local_550;
        local_1d4 = local_54c;
        local_1dc = local_54c;
        local_1e0 = local_544;
        local_1d8 = local_560;
        if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018ac44c);
        }
        uVar17 = param_2[1];
        iVar18 = thunk_FUN_016d4a50(0xa08);
        if (iVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0xa08);
        }
        *(undefined2 *)(iVar18 + 0x9d2) = 0;
        *(int *)(iVar18 + 0x9d8) = iVar12;
        *(undefined4 *)(iVar18 + 0x948) = 0;
        if (0xfffffffe < uVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018af438);
        }
        *(int *)(iVar12 + 0x948) = iVar18;
        *(undefined2 *)(iVar12 + 0x9d0) = 0;
        *param_2 = iVar18;
        param_2[1] = uVar17 + 1;
        if (local_54c != uVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00413115,0x30,&DAT_018ac46c);
        }
        *(int *)(iVar18 + 0x94c) = local_55c;
        *(undefined2 *)(iVar18 + 0x9d2) = 1;
        *(int *)(iVar18 + 0x950) = local_564;
        *(int *)(iVar18 + 0x954) = local_568;
        FUN_016dd1aa(iVar18,&local_2b8,0xd8);
        *(undefined2 *)(local_560 + 0x9d0) = 1;
        *(int *)(iVar18 + 0x9dc) = local_560;
        *(int *)(local_560 + 0x948) = iVar18;
      }
    }
LAB_00c41c50:
    iVar12 = param_2[2];
    *param_1 = 4;
    param_1[1] = 0;
    param_2[2] = iVar12 + 1;
    return;
  }
  goto LAB_00c41bd8;
}

