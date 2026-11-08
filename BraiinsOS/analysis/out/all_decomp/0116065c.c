// FUN_0116065c @ 0116065c size=680 calls_out=2 calls_in=4
// strings: additionalProperties

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0116065c(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  undefined4 uVar15;
  int *piVar16;
  undefined4 uVar17;
  int *piVar18;
  int *piVar19;
  int *piVar20;
  int *piVar21;
  int *piVar22;
  undefined8 uVar23;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar23 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                        "additionalProperties",0x14);
  uVar17 = *(undefined4 *)(param_2 + 0x48);
  uVar15 = *(undefined4 *)(param_2 + 0x4c);
  uVar4 = *(undefined4 *)(param_2 + 0x50);
  piVar7 = *(int **)(param_2 + 0x54);
  do {
    iVar9 = *piVar7;
    bVar3 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar3);
  *piVar7 = iVar9 + 1;
  if (-1 < iVar9) {
    piVar10 = *(int **)(param_2 + 0x58);
    if (piVar10 != (int *)0x0) {
      do {
        iVar9 = *piVar10;
        bVar3 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar3);
      *piVar10 = iVar9 + 1;
      if (iVar9 < 0) goto LAB_01160900;
    }
    uVar1 = *(undefined1 *)(param_2 + 0x30);
    FUN_01223904(&local_58,param_2);
    piVar8 = *(int **)(param_2 + 0x40);
    do {
      iVar9 = *piVar8;
      bVar3 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar3);
    *piVar8 = iVar9 + 1;
    if (-1 < iVar9) {
      piVar12 = *(int **)(param_2 + 0x5c);
      uVar5 = *(undefined4 *)(param_2 + 0x44);
      uVar2 = *(undefined1 *)(param_2 + 0x88);
      iVar9 = *piVar12;
      *piVar12 = iVar9 + 1;
      if (iVar9 != -1) {
        piVar13 = *(int **)(param_2 + 0x60);
        iVar9 = *piVar13;
        *piVar13 = iVar9 + 1;
        if (iVar9 != -1) {
          piVar11 = *(int **)(param_2 + 100);
          iVar9 = *piVar11;
          *piVar11 = iVar9 + 1;
          if (iVar9 != -1) {
            piVar16 = *(int **)(param_2 + 0x68);
            iVar9 = *piVar16;
            *piVar16 = iVar9 + 1;
            if (iVar9 != -1) {
              piVar6 = *(int **)(param_2 + 0x6c);
              iVar9 = *piVar6;
              *piVar6 = iVar9 + 1;
              if (iVar9 != -1) {
                piVar20 = *(int **)(param_2 + 0x70);
                iVar9 = *piVar20;
                *piVar20 = iVar9 + 1;
                if (iVar9 != -1) {
                  piVar18 = *(int **)(param_2 + 0x74);
                  iVar9 = *piVar18;
                  *piVar18 = iVar9 + 1;
                  if (iVar9 != -1) {
                    piVar14 = *(int **)(param_2 + 0x78);
                    iVar9 = *piVar14;
                    *piVar14 = iVar9 + 1;
                    if (iVar9 != -1) {
                      piVar21 = *(int **)(param_2 + 0x7c);
                      iVar9 = *piVar21;
                      *piVar21 = iVar9 + 1;
                      if (iVar9 != -1) {
                        piVar22 = *(int **)(param_2 + 0x80);
                        iVar9 = *piVar22;
                        *piVar22 = iVar9 + 1;
                        if (iVar9 != -1) {
                          piVar19 = *(int **)(param_2 + 0x84);
                          iVar9 = *piVar19;
                          *piVar19 = iVar9 + 1;
                          if (iVar9 != -1) {
                            param_1[0x13] = uVar15;
                            param_1[0x12] = uVar17;
                            param_1[0x14] = uVar4;
                            param_1[0x15] = piVar7;
                            param_1[0x16] = piVar10;
                            *param_1 = local_58;
                            param_1[1] = uStack_54;
                            param_1[2] = uStack_50;
                            param_1[3] = uStack_4c;
                            param_1[4] = uStack_48;
                            param_1[5] = uStack_44;
                            param_1[6] = local_40;
                            param_1[7] = uStack_3c;
                            param_1[8] = uStack_38;
                            param_1[9] = uStack_34;
                            param_1[10] = uStack_30;
                            param_1[0xb] = uStack_2c;
                            *(undefined1 *)(param_1 + 0x22) = uVar2;
                            param_1[0x11] = uVar5;
                            *(undefined8 *)(param_1 + 0xe) = uVar23;
                            *(undefined1 *)(param_1 + 0xc) = uVar1;
                            param_1[0x10] = piVar8;
                            param_1[0x1e] = piVar14;
                            param_1[0x1f] = piVar21;
                            param_1[0x20] = piVar22;
                            param_1[0x1c] = piVar20;
                            param_1[0x1b] = piVar6;
                            param_1[0x1a] = piVar16;
                            param_1[0x19] = piVar11;
                            param_1[0x18] = piVar13;
                            param_1[0x21] = piVar19;
                            param_1[0x1d] = piVar18;
                            param_1[0x17] = piVar12;
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01160900:
  software_udf(0xfdee,0x1160900);
  return;
}

