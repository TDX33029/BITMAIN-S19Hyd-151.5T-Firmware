// FUN_0155f038 @ 0155f038 size=636 calls_out=2 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0155f038(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 uVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  undefined4 uVar18;
  int *piVar19;
  undefined4 uVar20;
  int *piVar21;
  undefined8 uVar22;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  uVar22 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
  uVar13 = *(undefined4 *)(param_2 + 0x48);
  uVar11 = *(undefined4 *)(param_2 + 0x4c);
  uVar18 = *(undefined4 *)(param_2 + 0x50);
  piVar4 = *(int **)(param_2 + 0x54);
  do {
    iVar5 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar5 + 1;
  if (-1 < iVar5) {
    piVar6 = *(int **)(param_2 + 0x58);
    if (piVar6 != (int *)0x0) {
      do {
        iVar5 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_0155f2b0;
    }
    uVar1 = *(undefined1 *)(param_2 + 0x30);
    FUN_01540b74(&local_60,param_2);
    piVar3 = *(int **)(param_2 + 0x40);
    local_30 = CONCAT31(local_30._1_3_,uVar1);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + 1;
    if (-1 < iVar5) {
      piVar8 = *(int **)(param_2 + 0x5c);
      uVar20 = *(undefined4 *)(param_2 + 0x44);
      uVar1 = *(undefined1 *)(param_2 + 0x88);
      iVar5 = *piVar8;
      *piVar8 = iVar5 + 1;
      if (iVar5 != -1) {
        piVar14 = *(int **)(param_2 + 0x60);
        iVar5 = *piVar14;
        *piVar14 = iVar5 + 1;
        if (iVar5 != -1) {
          piVar7 = *(int **)(param_2 + 100);
          iVar5 = *piVar7;
          *piVar7 = iVar5 + 1;
          if (iVar5 != -1) {
            piVar12 = *(int **)(param_2 + 0x68);
            iVar5 = *piVar12;
            *piVar12 = iVar5 + 1;
            if (iVar5 != -1) {
              piVar16 = *(int **)(param_2 + 0x6c);
              iVar5 = *piVar16;
              *piVar16 = iVar5 + 1;
              if (iVar5 != -1) {
                piVar17 = *(int **)(param_2 + 0x70);
                iVar5 = *piVar17;
                *piVar17 = iVar5 + 1;
                if (iVar5 != -1) {
                  piVar10 = *(int **)(param_2 + 0x74);
                  iVar5 = *piVar10;
                  *piVar10 = iVar5 + 1;
                  if (iVar5 != -1) {
                    piVar9 = *(int **)(param_2 + 0x78);
                    iVar5 = *piVar9;
                    *piVar9 = iVar5 + 1;
                    if (iVar5 != -1) {
                      piVar19 = *(int **)(param_2 + 0x7c);
                      iVar5 = *piVar19;
                      *piVar19 = iVar5 + 1;
                      if (iVar5 != -1) {
                        piVar21 = *(int **)(param_2 + 0x80);
                        iVar5 = *piVar21;
                        *piVar21 = iVar5 + 1;
                        if (iVar5 != -1) {
                          piVar15 = *(int **)(param_2 + 0x84);
                          iVar5 = *piVar15;
                          *piVar15 = iVar5 + 1;
                          if (iVar5 != -1) {
                            param_1[0x13] = uVar11;
                            param_1[0x12] = uVar13;
                            param_1[0x14] = uVar18;
                            param_1[0x15] = piVar4;
                            param_1[0x16] = piVar6;
                            *param_1 = local_60;
                            param_1[1] = uStack_5c;
                            param_1[2] = uStack_58;
                            param_1[3] = uStack_54;
                            param_1[4] = local_50;
                            param_1[5] = uStack_4c;
                            param_1[6] = uStack_48;
                            param_1[7] = uStack_44;
                            param_1[8] = uStack_40;
                            param_1[9] = local_3c;
                            param_1[10] = uStack_38;
                            param_1[0xb] = uStack_34;
                            param_1[0xc] = local_30;
                            param_1[0xd] = uStack_2c;
                            param_1[0x10] = piVar3;
                            *(undefined8 *)(param_1 + 0xe) = uVar22;
                            param_1[0x17] = piVar8;
                            param_1[0x18] = piVar14;
                            param_1[0x19] = piVar7;
                            param_1[0x1a] = piVar12;
                            param_1[0x1b] = piVar16;
                            *(undefined1 *)(param_1 + 0x22) = uVar1;
                            param_1[0x1d] = piVar10;
                            param_1[0x11] = uVar20;
                            param_1[0x1f] = piVar19;
                            param_1[0x20] = piVar21;
                            param_1[0x21] = piVar15;
                            param_1[0x1c] = piVar17;
                            param_1[0x1e] = piVar9;
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
LAB_0155f2b0:
  software_udf(0xfdee,0x155f2b0);
  return;
}

