// FUN_01804e64 @ 01804e64 size=2028 calls_out=4 calls_in=1
// strings: 

void FUN_01804e64(int *param_1,int param_2,int *param_3,int *param_4,undefined4 param_5,
                 undefined1 *param_6,int param_7)

{
  undefined2 uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  int iVar18;
  uint uVar19;
  int *piVar20;
  uint uVar21;
  int *piVar22;
  int *piVar23;
  int *piVar24;
  bool bVar25;
  bool bVar26;
  int *local_6c;
  uint local_50;
  
  iVar2 = DAT_018ddaf8;
  uVar6 = *(uint *)(param_2 + 200);
  if (*(uint *)(param_2 + 0x10) < *(uint *)(param_2 + 0xc)) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
    if (*(int *)(param_2 + 0xb4) != 0) {
      if (*(int *)(*(int *)(param_2 + 0xb4) + 0x6c) == 0) {
        uVar7 = 2;
      }
      else {
        uVar7 = 3;
      }
    }
  }
  UNRECOVERED_JUMPTABLE = (code *)FUN_0179d33c(*(undefined4 *)(param_2 + 0xd0),param_5,uVar7);
  uVar3 = *(uint *)(param_2 + 0xd0);
  if (uVar3 < 7) {
    puVar12 = param_6 + param_7;
    uVar8 = param_1[1];
    uVar19 = param_1[3];
    if (uVar8 < uVar19 && param_6 < puVar12) {
LAB_01804f40:
      do {
        uVar3 = (int)puVar12 - (int)param_6;
        iVar13 = *param_1 + uVar8 * 0xc;
        iVar18 = *(int *)(*param_1 + uVar8 * 0xc);
        uVar16 = *(uint *)(iVar13 + 4);
        local_50 = *(uint *)(iVar13 + 8);
        if (uVar3 < uVar16 + local_50) {
          if (uVar16 < uVar3) {
            local_50 = uVar3 - uVar16;
            if (local_50 < uVar6) {
              iVar18 = 0;
            }
          }
          else {
            iVar18 = 0;
          }
          while (uVar8 < uVar19) {
            uVar21 = *(uint *)(iVar13 + 4);
            if (uVar3 <= uVar21) {
              *(uint *)(iVar13 + 4) = uVar21 - uVar3;
              if (iVar18 == 0) goto LAB_01805518;
              goto LAB_01804fe8;
            }
            uVar4 = *(uint *)(iVar13 + 8);
            *(undefined4 *)(iVar13 + 4) = 0;
            if (uVar3 - uVar21 < uVar4) {
              uVar3 = (uVar21 + uVar4) - uVar3;
              *(uint *)(iVar13 + 8) = uVar3;
              if (uVar3 < uVar6) {
                if (uVar8 + 1 < uVar19) {
                  *(uint *)(iVar13 + 0x10) = *(int *)(iVar13 + 0x10) + uVar3;
                }
                param_1[1] = uVar8 + 1;
              }
              break;
            }
            *(undefined4 *)(iVar13 + 8) = 0;
            uVar8 = uVar8 + 1;
            uVar3 = (uVar3 - uVar21) - uVar4;
            iVar13 = iVar13 + 0xc;
            param_1[1] = uVar8;
            if (uVar3 == 0) break;
          }
        }
        else {
          param_1[1] = uVar8 + 1;
        }
        if (iVar18 == 0) {
LAB_01805518:
          uVar3 = *(uint *)(param_2 + 0xd0);
          goto LAB_01805174;
        }
LAB_01804fe8:
        uVar3 = (int)param_6 - *(int *)(param_2 + 4);
        if (*(int *)(param_2 + 0x1c) + 0x400U < uVar3) {
          uVar8 = (-0x400 - *(int *)(param_2 + 0x1c)) + uVar3;
          if (uVar8 < 0x201) {
            iVar13 = uVar3 - uVar8;
          }
          else {
            iVar13 = uVar3 - 0x200;
          }
          *(int *)(param_2 + 0x1c) = iVar13;
        }
        if (*(int *)(param_2 + 0xd0) == 1) {
          FUN_017b5f50(param_2,param_6,0);
        }
        else if (*(int *)(param_2 + 0xd0) == 2) {
          FUN_017a9408(param_2,param_6,0);
        }
        uVar3 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4,param_6,uVar16);
        piVar9 = (int *)(param_6 + uVar16);
        piVar23 = (int *)param_3[3];
        piVar17 = (int *)(puVar12 + -0x20);
        param_4[2] = param_4[1];
        piVar22 = (int *)((int)piVar9 - uVar3);
        param_4[1] = *param_4;
        *param_4 = iVar18;
        if (piVar17 < piVar9) {
          if (piVar17 < piVar22) {
            if (piVar9 <= piVar22) goto LAB_01805334;
          }
          else {
            iVar13 = piVar22[1];
            iVar5 = piVar22[2];
            iVar10 = piVar22[3];
            piVar20 = (int *)((int)piVar23 + ((int)piVar17 - (int)piVar22));
            *piVar23 = *piVar22;
            piVar23[1] = iVar13;
            piVar23[2] = iVar5;
            piVar23[3] = iVar10;
            if (0x10 < (int)piVar17 - (int)piVar22) {
              piVar22 = piVar22 + 0xc;
              piVar23 = piVar23 + 4;
              do {
                iVar13 = piVar22[-7];
                iVar5 = piVar22[-6];
                piVar24 = piVar23 + 8;
                iVar10 = piVar22[-5];
                *piVar23 = piVar22[-8];
                piVar23[1] = iVar13;
                piVar23[2] = iVar5;
                piVar23[3] = iVar10;
                iVar13 = piVar22[-3];
                iVar5 = piVar22[-2];
                iVar10 = piVar22[-1];
                piVar23[4] = piVar22[-4];
                piVar23[5] = iVar13;
                piVar23[6] = iVar5;
                piVar23[7] = iVar10;
                piVar22 = piVar22 + 8;
                piVar23 = piVar24;
                local_6c = piVar17;
              } while (piVar24 < piVar20);
            }
            piVar23 = piVar20;
            piVar22 = piVar17;
          }
          uVar8 = (int)piVar9 - (int)piVar22;
          puVar11 = (undefined1 *)((int)piVar23 + -1);
          if ((uVar8 - 1 < 6) || ((uint)((int)puVar11 - (int)piVar22) < 3)) {
            do {
              piVar23 = (int *)((int)piVar22 + 1);
              puVar11 = puVar11 + 1;
              *puVar11 = (char)*piVar22;
              piVar22 = piVar23;
            } while (piVar9 != piVar23);
          }
          else {
            uVar19 = uVar8 & 0xfffffffc;
            piVar20 = (int *)((int)piVar23 + uVar19);
            piVar17 = piVar22;
            do {
              piVar24 = piVar23 + 1;
              *piVar23 = *piVar17;
              piVar17 = piVar17 + 1;
              piVar23 = piVar24;
            } while (piVar20 != piVar24);
            if (((uVar19 != uVar8) &&
                (*(undefined1 *)piVar20 = *(undefined1 *)((int)piVar22 + (uVar8 & 0xfffffffc)),
                (int *)((int)piVar22 + uVar19 + 1) < piVar9)) &&
               (*(undefined1 *)((int)piVar20 + 1) = *(undefined1 *)((int)piVar22 + uVar19 + 1),
               (int *)((int)piVar22 + uVar19 + 2) < piVar9)) {
              *(undefined1 *)((int)piVar20 + 2) = *(undefined1 *)((int)piVar22 + uVar19 + 2);
              piVar23 = (int *)param_3[3];
              goto LAB_01805334;
            }
          }
LAB_018054fc:
          piVar23 = (int *)param_3[3];
LAB_01805334:
          param_3[3] = (int)((int)piVar23 + uVar3);
          piVar23 = (int *)param_3[1];
          if (0xffff < uVar3) {
            param_3[10] = (int)piVar23 - *param_3 >> 3;
            param_3[9] = 1;
          }
        }
        else {
          iVar5 = piVar22[1];
          iVar10 = piVar22[2];
          iVar13 = *piVar22;
          piVar23[3] = piVar22[3];
          *piVar23 = iVar13;
          piVar23[1] = iVar5;
          piVar23[2] = iVar10;
          iVar13 = param_3[3];
          if (0x10 < uVar3) {
            iVar5 = piVar22[5];
            iVar10 = piVar22[6];
            iVar14 = piVar22[7];
            iVar15 = uVar3 - 0x10;
            if (0x10 < iVar15) {
              local_6c = param_1;
            }
            *(int *)(iVar13 + 0x10) = piVar22[4];
            *(int *)(iVar13 + 0x14) = iVar5;
            if (0x10 < iVar15) {
              piVar22 = piVar22 + 0x10;
            }
            *(int *)(iVar13 + 0x18) = iVar10;
            *(int *)(iVar13 + 0x1c) = iVar14;
            if (iVar15 < 0x11) goto LAB_018054fc;
            piVar23 = (int *)(iVar13 + 0x20);
            do {
              iVar5 = piVar22[-7];
              iVar10 = piVar22[-6];
              piVar17 = piVar23 + 8;
              iVar14 = piVar22[-5];
              *piVar23 = piVar22[-8];
              piVar23[1] = iVar5;
              piVar23[2] = iVar10;
              piVar23[3] = iVar14;
              iVar5 = piVar22[-3];
              iVar10 = piVar22[-2];
              iVar14 = piVar22[-1];
              piVar23[4] = piVar22[-4];
              piVar23[5] = iVar5;
              piVar23[6] = iVar10;
              piVar23[7] = iVar14;
              piVar22 = piVar22 + 8;
              piVar23 = piVar17;
            } while (piVar17 < (int *)(iVar13 + uVar3));
            piVar23 = (int *)param_3[3];
            param_1 = local_6c;
            goto LAB_01805334;
          }
          param_3[3] = (int)(iVar13 + uVar3);
          piVar23 = (int *)param_3[1];
        }
        *piVar23 = iVar18 + 3;
        *(short *)(piVar23 + 1) = (short)uVar3;
        uVar1 = (undefined2)(local_50 - 3);
        if (0xffff < local_50 - 3) {
          uVar19 = param_1[3];
          param_6 = (undefined1 *)((int)piVar9 + local_50);
          param_3[10] = (int)piVar23 - *param_3 >> 3;
          uVar8 = param_1[1];
          bVar26 = uVar8 <= uVar19;
          bVar25 = uVar19 == uVar8;
          if (bVar26 && !bVar25) {
            bVar26 = param_6 <= puVar12;
            bVar25 = puVar12 == param_6;
          }
          param_3[9] = 2;
          *(undefined2 *)((int)piVar23 + 6) = uVar1;
          param_3[1] = (int)(piVar23 + 2);
          if (!(bVar26 && !bVar25)) {
            uVar3 = *(uint *)(param_2 + 0xd0);
            goto LAB_01805174;
          }
          goto LAB_01804f40;
        }
        *(undefined2 *)((int)piVar23 + 6) = uVar1;
        param_6 = (undefined1 *)((int)piVar9 + local_50);
        uVar19 = param_1[3];
        param_3[1] = (int)(piVar23 + 2);
        uVar8 = param_1[1];
      } while (!(puVar12 <= param_6 || uVar19 <= uVar8));
      uVar3 = *(uint *)(param_2 + 0xd0);
    }
LAB_01805174:
    uVar6 = (int)param_6 - *(int *)(param_2 + 4);
    if (*(int *)(param_2 + 0x1c) + 0x400U < uVar6) {
      uVar8 = (-0x400 - *(int *)(param_2 + 0x1c)) + uVar6;
      if (uVar8 < 0x201) {
        iVar13 = uVar6 - uVar8;
      }
      else {
        iVar13 = uVar6 - 0x200;
      }
      *(int *)(param_2 + 0x1c) = iVar13;
    }
    if (uVar3 == 1) {
      FUN_017b5f50(param_2,param_6,0);
    }
    else if (uVar3 == 2) {
      FUN_017a9408(param_2,param_6,0);
    }
    if (iVar2 == DAT_018ddaf8) {
                    /* WARNING: Could not recover jumptable at 0x01805214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4,param_6);
      return;
    }
  }
  else {
    *(int **)(param_2 + 0xd4) = param_1;
    (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4,param_6,param_7);
    uVar6 = param_7 + param_1[2];
    if (uVar6 != 0) {
      uVar3 = param_1[1];
      iVar13 = uVar3 * 0xc;
      do {
        if ((uint)param_1[3] <= uVar3) {
          if (param_1[3] != uVar3) goto LAB_01805608;
          break;
        }
        uVar8 = *(int *)(*param_1 + iVar13 + 8) + *(int *)(*param_1 + iVar13 + 4);
        if (uVar6 < uVar8) {
          param_1[2] = uVar6;
          goto LAB_01805608;
        }
        uVar3 = uVar3 + 1;
        iVar13 = iVar13 + 0xc;
        uVar6 = uVar6 - uVar8;
        param_1[1] = uVar3;
      } while (uVar6 != 0);
    }
    param_1[2] = 0;
LAB_01805608:
    if (iVar2 == DAT_018ddaf8) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_016d2b78();
}

