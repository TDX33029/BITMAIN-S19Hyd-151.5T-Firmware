// FUN_006d3a28 @ 006d3a28 size=2168 calls_out=11 calls_in=2
// strings: 

void FUN_006d3a28(int *param_1,uint param_2,int *param_3,uint param_4,int param_5,int *param_6)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  int *local_64;
  int local_34 [2];
  int local_2c [2];
  
  if (0x20 < param_2) {
    local_64 = param_6;
    uVar7 = param_2;
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_006e219c(param_1,uVar7,param_3,param_4,1);
          return;
        }
        piVar4 = param_1 + (uVar7 >> 3) * 4;
        piVar9 = param_1 + ((uVar7 >> 3) * 8 - (uVar7 >> 3));
        if (uVar7 < 0x40) {
          uVar16 = *(uint *)(*piVar4 + 0x84);
          uVar13 = *(undefined4 *)(*param_1 + 0x80);
          uVar10 = *(uint *)(*param_1 + 0x84);
          uVar8 = *(undefined4 *)(*piVar4 + 0x80);
          uVar11 = uVar16;
          if (uVar10 < uVar16) {
            uVar11 = uVar10;
          }
          iVar5 = FUN_01bed842(uVar13,uVar8,uVar11);
          if (iVar5 == 0) {
            iVar5 = uVar10 - uVar16;
          }
          uVar17 = *(undefined4 *)(*piVar9 + 0x80);
          uVar18 = *(uint *)(*piVar9 + 0x84);
          uVar12 = (uint)(0 < iVar5) - (uint)(iVar5 < 0);
          uVar11 = uVar18;
          if (uVar10 < uVar18) {
            uVar11 = uVar10;
          }
          iVar5 = FUN_01bed842(uVar13,uVar17,uVar11);
          if (iVar5 == 0) {
            iVar5 = uVar10 - uVar18;
          }
          piVar2 = param_1;
          if (-1 < (int)((uint)(0 < iVar5) - (uint)(iVar5 < 0) ^ uVar12)) {
            uVar11 = uVar18;
            if (uVar16 < uVar18) {
              uVar11 = uVar16;
            }
            iVar5 = FUN_01bed842(uVar8,uVar17,uVar11);
            if (iVar5 == 0) {
              iVar5 = uVar16 - uVar18;
            }
            piVar2 = piVar4;
            if ((int)((uint)(0 < iVar5) - (uint)(iVar5 < 0) ^ uVar12) < 0) {
              piVar2 = piVar9;
            }
          }
        }
        else {
          piVar2 = (int *)FUN_006e1f50(param_1,piVar4,piVar9);
        }
        uVar11 = (int)piVar2 - (int)param_1;
        local_34[0] = *piVar2;
        param_5 = param_5 + -1;
        if (local_64 == (int *)0x0) break;
        uVar16 = *(uint *)(local_34[0] + 0x84);
        uVar12 = *(uint *)(*local_64 + 0x84);
        uVar10 = uVar16;
        if (uVar12 < uVar16) {
          uVar10 = uVar12;
        }
        uVar10 = FUN_01bed842(*(undefined4 *)(*local_64 + 0x80),*(undefined4 *)(local_34[0] + 0x80),
                              uVar10);
        if (uVar10 == 0) {
          uVar10 = uVar12 - uVar16;
        }
        if (0x7fffffff < uVar10) break;
LAB_006d3ed0:
        if (param_4 < uVar7) goto LAB_006d426c;
        piVar9 = param_3 + uVar7;
        uVar16 = 0;
        uVar10 = uVar11 >> 2;
        piVar4 = param_1;
        while( true ) {
          iVar5 = uVar10 - 3;
          if (uVar10 < 3) {
            iVar5 = 0;
          }
          if (piVar4 < param_1 + iVar5) {
            uVar12 = *(uint *)(*(int *)((int)param_1 + uVar11) + 0x84);
            uVar8 = *(undefined4 *)(*(int *)((int)param_1 + uVar11) + 0x80);
            do {
              iVar6 = *piVar4;
              uVar19 = *(uint *)(iVar6 + 0x84);
              uVar18 = uVar19;
              if (uVar12 < uVar19) {
                uVar18 = uVar12;
              }
              uVar18 = FUN_01bed842(uVar8,*(undefined4 *)(iVar6 + 0x80),uVar18);
              if (uVar18 == 0) {
                uVar18 = uVar12 - uVar19;
              }
              iVar15 = piVar4[1];
              piVar2 = param_3;
              if (0x7fffffff < uVar18) {
                piVar2 = piVar9 + -1;
              }
              piVar2[uVar16] = iVar6;
              if (uVar18 < 0x80000000) {
                uVar16 = uVar16 + 1;
              }
              uVar19 = *(uint *)(iVar15 + 0x84);
              uVar18 = uVar19;
              if (uVar12 < uVar19) {
                uVar18 = uVar12;
              }
              uVar18 = FUN_01bed842(uVar8,*(undefined4 *)(iVar15 + 0x80),uVar18);
              iVar6 = piVar4[2];
              if (uVar18 == 0) {
                uVar18 = uVar12 - uVar19;
              }
              piVar2 = param_3;
              if (0x7fffffff < uVar18) {
                piVar2 = piVar9 + -2;
              }
              piVar2[uVar16] = iVar15;
              if (uVar18 < 0x80000000) {
                uVar16 = uVar16 + 1;
              }
              uVar19 = *(uint *)(iVar6 + 0x84);
              uVar18 = uVar19;
              if (uVar12 < uVar19) {
                uVar18 = uVar12;
              }
              uVar18 = FUN_01bed842(uVar8,*(undefined4 *)(iVar6 + 0x80),uVar18);
              if (uVar18 == 0) {
                uVar18 = uVar12 - uVar19;
              }
              iVar15 = piVar4[3];
              piVar2 = param_3;
              if (0x7fffffff < uVar18) {
                piVar2 = piVar9 + -3;
              }
              piVar2[uVar16] = iVar6;
              if (uVar18 < 0x80000000) {
                uVar16 = uVar16 + 1;
              }
              uVar19 = *(uint *)(iVar15 + 0x84);
              uVar18 = uVar19;
              if (uVar12 < uVar19) {
                uVar18 = uVar12;
              }
              uVar18 = FUN_01bed842(uVar8,*(undefined4 *)(iVar15 + 0x80),uVar18);
              piVar9 = piVar9 + -4;
              if (uVar18 == 0) {
                uVar18 = uVar12 - uVar19;
              }
              piVar2 = piVar9;
              if (uVar18 < 0x80000000) {
                piVar2 = param_3;
              }
              piVar4 = piVar4 + 4;
              piVar2[uVar16] = iVar15;
              if (uVar18 < 0x80000000) {
                uVar16 = uVar16 + 1;
              }
            } while (piVar4 < param_1 + iVar5);
          }
          piVar2 = piVar4;
          if (piVar4 < param_1 + uVar10) {
            uVar12 = *(uint *)(*(int *)((int)param_1 + uVar11) + 0x84);
            uVar8 = *(undefined4 *)(*(int *)((int)param_1 + uVar11) + 0x80);
            do {
              piVar2 = piVar4 + 1;
              iVar5 = *piVar4;
              uVar19 = *(uint *)(iVar5 + 0x84);
              uVar18 = uVar19;
              if (uVar12 < uVar19) {
                uVar18 = uVar12;
              }
              uVar18 = FUN_01bed842(uVar8,*(undefined4 *)(iVar5 + 0x80),uVar18);
              piVar9 = piVar9 + -1;
              if (uVar18 == 0) {
                uVar18 = uVar12 - uVar19;
              }
              piVar4 = piVar9;
              if (uVar18 < 0x80000000) {
                piVar4 = param_3;
              }
              piVar4[uVar16] = iVar5;
              if (uVar18 < 0x80000000) {
                uVar16 = uVar16 + 1;
              }
              piVar4 = piVar2;
            } while (piVar2 < param_1 + uVar10);
          }
          if (uVar10 == uVar7) break;
          piVar9 = piVar9 + -1;
          piVar4 = piVar2 + 1;
          param_3[uVar16] = *piVar2;
          uVar16 = uVar16 + 1;
          uVar10 = uVar7;
        }
        FUN_01bed4e2(param_1,param_3,uVar16 << 2);
        param_2 = uVar7 - uVar16;
        if (param_2 == 0) {
          return;
        }
        piVar4 = param_3 + (uVar7 - 1);
        piVar9 = param_1 + uVar16;
        uVar11 = param_2;
        do {
          uVar11 = uVar11 - 1;
          *piVar9 = *piVar4;
          piVar4 = piVar4 + -1;
          piVar9 = piVar9 + 1;
        } while (uVar11 != 0);
        if (uVar7 < uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar16,uVar7,uVar7,&DAT_01d30598);
        }
        param_1 = param_1 + uVar16;
        local_64 = (int *)0x0;
        uVar7 = param_2;
        if (param_2 < 0x21) goto LAB_006d3a4c;
      }
      if (param_4 < uVar7) goto LAB_006d426c;
      piVar9 = param_3 + uVar7;
      param_2 = 0;
      uVar10 = uVar11 >> 2;
      piVar4 = param_1;
      while( true ) {
        iVar5 = uVar10 - 3;
        if (uVar10 < 3) {
          iVar5 = 0;
        }
        if (piVar4 < param_1 + iVar5) {
          uVar16 = *(uint *)(*(int *)((int)param_1 + uVar11) + 0x84);
          uVar8 = *(undefined4 *)(*(int *)((int)param_1 + uVar11) + 0x80);
          do {
            iVar6 = *piVar4;
            uVar18 = *(uint *)(iVar6 + 0x84);
            uVar12 = uVar16;
            if (uVar18 < uVar16) {
              uVar12 = uVar18;
            }
            iVar15 = FUN_01bed842(*(undefined4 *)(iVar6 + 0x80),uVar8,uVar12);
            if (iVar15 == 0) {
              iVar15 = uVar18 - uVar16;
            }
            piVar2 = param_3;
            if (-1 < iVar15) {
              piVar2 = piVar9 + -1;
            }
            piVar2[param_2] = iVar6;
            iVar6 = piVar4[1];
            uVar18 = *(uint *)(iVar6 + 0x84);
            uVar12 = uVar16;
            if (uVar18 < uVar16) {
              uVar12 = uVar18;
            }
            iVar3 = FUN_01bed842(*(undefined4 *)(iVar6 + 0x80),uVar8,uVar12);
            if (iVar3 == 0) {
              iVar3 = uVar18 - uVar16;
            }
            iVar15 = param_2 - (iVar15 >> 0x1f);
            piVar2 = param_3;
            if (-1 < iVar3) {
              piVar2 = piVar9 + -2;
            }
            iVar3 = iVar15 - (iVar3 >> 0x1f);
            piVar2[iVar15] = iVar6;
            iVar6 = piVar4[2];
            uVar18 = *(uint *)(iVar6 + 0x84);
            uVar12 = uVar16;
            if (uVar18 < uVar16) {
              uVar12 = uVar18;
            }
            iVar15 = FUN_01bed842(*(undefined4 *)(iVar6 + 0x80),uVar8,uVar12);
            if (iVar15 == 0) {
              iVar15 = uVar18 - uVar16;
            }
            iVar14 = piVar4[3];
            piVar2 = param_3;
            if (-1 < iVar15) {
              piVar2 = piVar9 + -3;
            }
            piVar2[iVar3] = iVar6;
            iVar3 = iVar3 - (iVar15 >> 0x1f);
            uVar18 = *(uint *)(iVar14 + 0x84);
            uVar12 = uVar16;
            if (uVar18 < uVar16) {
              uVar12 = uVar18;
            }
            iVar6 = FUN_01bed842(*(undefined4 *)(iVar14 + 0x80),uVar8,uVar12);
            piVar9 = piVar9 + -4;
            if (iVar6 == 0) {
              iVar6 = uVar18 - uVar16;
            }
            piVar4 = piVar4 + 4;
            piVar2 = piVar9;
            if (iVar6 < 0) {
              piVar2 = param_3;
            }
            param_2 = iVar3 - (iVar6 >> 0x1f);
            piVar2[iVar3] = iVar14;
          } while (piVar4 < param_1 + iVar5);
        }
        piVar2 = piVar4;
        if (piVar4 < param_1 + uVar10) {
          uVar16 = *(uint *)(*(int *)((int)param_1 + uVar11) + 0x84);
          uVar8 = *(undefined4 *)(*(int *)((int)param_1 + uVar11) + 0x80);
          do {
            piVar2 = piVar4 + 1;
            iVar5 = *piVar4;
            uVar18 = *(uint *)(iVar5 + 0x84);
            uVar12 = uVar16;
            if (uVar18 < uVar16) {
              uVar12 = uVar18;
            }
            iVar6 = FUN_01bed842(*(undefined4 *)(iVar5 + 0x80),uVar8,uVar12);
            piVar9 = piVar9 + -1;
            if (iVar6 == 0) {
              iVar6 = uVar18 - uVar16;
            }
            piVar4 = piVar9;
            if (iVar6 < 0) {
              piVar4 = param_3;
            }
            piVar4[param_2] = iVar5;
            param_2 = param_2 - (iVar6 >> 0x1f);
            piVar4 = piVar2;
          } while (piVar2 < param_1 + uVar10);
        }
        if (uVar10 == uVar7) break;
        piVar9 = piVar9 + -1;
        piVar4 = piVar2 + 1;
        piVar9[param_2] = *piVar2;
        uVar10 = uVar7;
      }
      FUN_01bed4e2(param_1,param_3,param_2 << 2);
      iVar5 = uVar7 - param_2;
      if (iVar5 != 0) {
        piVar4 = param_3 + (uVar7 - 1);
        piVar9 = param_1 + param_2;
        iVar6 = iVar5;
        do {
          iVar6 = iVar6 + -1;
          *piVar9 = *piVar4;
          piVar4 = piVar4 + -1;
          piVar9 = piVar9 + 1;
        } while (iVar6 != 0);
      }
      if (param_2 == 0) goto LAB_006d3ed0;
      if (uVar7 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d30588);
      }
      FUN_006d3a28(param_1 + param_2,iVar5,param_3,param_4,param_5,local_34);
      uVar7 = param_2;
    } while (0x20 < param_2);
  }
LAB_006d3a4c:
  if (1 < param_2) {
    if (param_4 < param_2 + 0x10) {
LAB_006d426c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x6d426c);
      (*pcVar1)();
    }
    uVar7 = param_2 >> 1;
    if (param_2 < 0x10) {
      if (param_2 < 8) {
        iVar5 = param_1[uVar7];
        uVar11 = 1;
        *param_3 = *param_1;
        param_3[uVar7] = iVar5;
      }
      else {
        FUN_006c67a0(param_1,param_3);
        FUN_006c67a0(param_1 + uVar7,param_3 + uVar7);
        uVar11 = 4;
      }
    }
    else {
      FUN_006c6b44(param_1,param_3,param_3 + param_2);
      FUN_006c6b44(param_1 + uVar7,param_3 + uVar7,param_3 + param_2 + 8);
      uVar11 = 8;
    }
    local_2c[0] = 0;
    iVar5 = 0;
    local_2c[1] = uVar7;
    do {
      iVar6 = local_2c[iVar5];
      uVar10 = uVar7;
      if (iVar6 != 0) {
        uVar10 = param_2 - uVar7;
      }
      if (uVar11 < uVar10) {
        iVar15 = uVar10 - uVar11;
        piVar4 = param_3 + uVar11 + iVar6;
        piVar9 = param_1 + uVar11 + iVar6;
        do {
          *piVar4 = *piVar9;
          FUN_006c60b4(param_3 + iVar6,piVar4);
          iVar15 = iVar15 + -1;
          piVar4 = piVar4 + 1;
          piVar9 = piVar9 + 1;
        } while (iVar15 != 0);
      }
      bVar20 = iVar5 == 0;
      iVar5 = 1;
    } while (bVar20);
    FUN_006c6b7c(param_3,param_2,param_1);
  }
  return;
}

