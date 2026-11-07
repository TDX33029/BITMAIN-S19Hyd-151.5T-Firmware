// FUN_0165be70 @ 0165be70 size=2228 calls_out=11 calls_in=2
// strings: 

void FUN_0165be70(int *param_1,uint param_2,int *param_3,uint param_4,int param_5,int *param_6)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  uint uVar19;
  bool bVar20;
  int *local_5c;
  int local_58;
  int local_34;
  int local_30;
  int local_2c [2];
  
  if (param_2 < 0x21) {
LAB_0165be94:
    if (1 < param_2) {
      if (param_4 < param_2 + 0x10) {
LAB_0165c6f0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x165c6f0);
        (*pcVar1)();
      }
      uVar7 = param_2 >> 1;
      if (param_2 < 0x10) {
        if (param_2 < 8) {
          iVar11 = param_1[1];
          *param_3 = *param_1;
          param_3[1] = iVar11;
          param_3[uVar7 * 2] = param_1[uVar7 * 2];
          uVar14 = 1;
          (param_3 + uVar7 * 2)[1] = (param_1 + uVar7 * 2)[1];
        }
        else {
          FUN_0165bad4(param_1,param_3);
          FUN_0165bad4(param_1 + uVar7 * 2,param_3 + uVar7 * 2);
          uVar14 = 4;
        }
      }
      else {
        FUN_0165bcdc(param_1,param_3,param_3 + param_2 * 2);
        FUN_0165bcdc(param_1 + uVar7 * 2,param_3 + uVar7 * 2,param_3 + param_2 * 2 + 0x10);
        uVar14 = 8;
      }
      local_2c[0] = 0;
      iVar11 = 0;
      local_2c[1] = uVar7;
      do {
        iVar6 = local_2c[iVar11];
        uVar12 = uVar7;
        if (iVar6 != 0) {
          uVar12 = param_2 - uVar7;
        }
        if (uVar14 < uVar12) {
          piVar10 = param_1 + uVar14 * 2 + iVar6 * 2;
          piVar5 = param_3 + uVar14 * 2 + iVar6 * 2;
          iVar16 = uVar12 - uVar14;
          do {
            iVar13 = piVar10[1];
            *piVar5 = *piVar10;
            piVar5[1] = iVar13;
            FUN_0165ba20(param_3 + iVar6 * 2,piVar5);
            piVar10 = piVar10 + 2;
            piVar5 = piVar5 + 2;
            iVar16 = iVar16 + -1;
          } while (iVar16 != 0);
        }
        bVar20 = iVar11 == 0;
        iVar11 = 1;
      } while (bVar20);
      FUN_0165bd14(param_3,param_2,param_1);
    }
    return;
  }
  local_5c = param_6;
  local_58 = param_5;
LAB_0165befc:
  uVar7 = param_2;
  do {
    if (local_58 == 0) {
      FUN_0165a8d4(param_1,uVar7,param_3,param_4,1);
      return;
    }
    piVar10 = param_1 + (uVar7 >> 3) * 8;
    piVar5 = param_1 + ((uVar7 >> 3) * 8 - (uVar7 >> 3)) * 2;
    if (uVar7 < 0x40) {
      uVar19 = *(uint *)(*piVar10 + 8);
      uVar17 = *(undefined4 *)(*param_1 + 4);
      uVar12 = *(uint *)(*param_1 + 8);
      uVar8 = *(undefined4 *)(*piVar10 + 4);
      uVar14 = uVar19;
      if (uVar12 < uVar19) {
        uVar14 = uVar12;
      }
      uVar14 = FUN_01bed842(uVar17,uVar8,uVar14);
      if (uVar14 == 0) {
        uVar14 = uVar12 - uVar19;
      }
      uVar15 = *(uint *)(*piVar5 + 8);
      uVar9 = *(undefined4 *)(*piVar5 + 4);
      uVar2 = uVar15;
      if (uVar12 < uVar15) {
        uVar2 = uVar12;
      }
      uVar2 = FUN_01bed842(uVar17,uVar9,uVar2);
      if (uVar2 == 0) {
        uVar2 = uVar12 - uVar15;
      }
      piVar3 = param_1;
      if (-1 < (int)(uVar2 ^ uVar14)) {
        uVar12 = uVar15;
        if (uVar19 < uVar15) {
          uVar12 = uVar19;
        }
        uVar12 = FUN_01bed842(uVar8,uVar9,uVar12);
        if (uVar12 == 0) {
          uVar12 = uVar19 - uVar15;
        }
        piVar3 = piVar10;
        if ((int)(uVar12 ^ uVar14) < 0) {
          piVar3 = piVar5;
        }
      }
    }
    else {
      piVar3 = (int *)FUN_0165b5a4(param_1,piVar10,piVar5);
    }
    local_30 = piVar3[1];
    local_58 = local_58 + -1;
    local_34 = *piVar3;
    uVar14 = (uint)((int)piVar3 - (int)param_1) >> 3;
    if (local_5c != (int *)0x0) {
      uVar19 = *(uint *)(local_34 + 8);
      uVar2 = *(uint *)(*local_5c + 8);
      uVar12 = uVar19;
      if (uVar2 < uVar19) {
        uVar12 = uVar2;
      }
      uVar12 = FUN_01bed842(*(undefined4 *)(*local_5c + 4),*(undefined4 *)(local_34 + 4),uVar12);
      if (uVar12 == 0) {
        uVar12 = uVar2 - uVar19;
      }
      if (uVar12 < 0x80000000) break;
    }
    if (param_4 < uVar7) goto LAB_0165c6f0;
    piVar10 = param_3 + uVar7 * 2;
    param_2 = 0;
    piVar5 = param_1;
    uVar12 = uVar14;
    while( true ) {
      iVar11 = uVar12 - 3;
      if (uVar12 < 3) {
        iVar11 = 0;
      }
      if (piVar5 < param_1 + iVar11 * 2) {
        uVar8 = *(undefined4 *)(*piVar3 + 4);
        uVar19 = *(uint *)(*piVar3 + 8);
        do {
          uVar15 = *(uint *)(*piVar5 + 8);
          uVar2 = uVar19;
          if (uVar15 < uVar19) {
            uVar2 = uVar15;
          }
          iVar6 = FUN_01bed842(*(undefined4 *)(*piVar5 + 4),uVar8,uVar2);
          if (iVar6 == 0) {
            iVar6 = uVar15 - uVar19;
          }
          iVar16 = piVar5[1];
          iVar13 = piVar5[2];
          piVar4 = param_3;
          if (-1 < iVar6) {
            piVar4 = piVar10 + -2;
          }
          piVar4[param_2 * 2] = *piVar5;
          uVar15 = *(uint *)(iVar13 + 8);
          uVar17 = *(undefined4 *)(iVar13 + 4);
          (piVar4 + param_2 * 2)[1] = iVar16;
          uVar2 = uVar19;
          if (uVar15 < uVar19) {
            uVar2 = uVar15;
          }
          iVar16 = FUN_01bed842(uVar17,uVar8,uVar2);
          if (iVar16 == 0) {
            iVar16 = uVar15 - uVar19;
          }
          iVar6 = param_2 - (iVar6 >> 0x1f);
          piVar4 = param_3;
          if (-1 < iVar16) {
            piVar4 = piVar10 + -4;
          }
          iVar18 = piVar5[3];
          iVar13 = piVar5[4];
          piVar4[iVar6 * 2] = piVar5[2];
          (piVar4 + iVar6 * 2)[1] = iVar18;
          iVar6 = iVar6 - (iVar16 >> 0x1f);
          uVar15 = *(uint *)(iVar13 + 8);
          uVar2 = uVar19;
          if (uVar15 < uVar19) {
            uVar2 = uVar15;
          }
          iVar16 = FUN_01bed842(*(undefined4 *)(iVar13 + 4),uVar8,uVar2);
          if (iVar16 == 0) {
            iVar16 = uVar15 - uVar19;
          }
          piVar4 = param_3;
          if (-1 < iVar16) {
            piVar4 = piVar10 + -6;
          }
          iVar13 = piVar5[5];
          iVar18 = piVar5[6];
          piVar4[iVar6 * 2] = piVar5[4];
          iVar16 = iVar6 - (iVar16 >> 0x1f);
          (piVar4 + iVar6 * 2)[1] = iVar13;
          uVar15 = *(uint *)(iVar18 + 8);
          uVar2 = uVar19;
          if (uVar15 < uVar19) {
            uVar2 = uVar15;
          }
          iVar6 = FUN_01bed842(*(undefined4 *)(iVar18 + 4),uVar8,uVar2);
          piVar10 = piVar10 + -8;
          if (iVar6 == 0) {
            iVar6 = uVar15 - uVar19;
          }
          iVar13 = piVar5[7];
          piVar4 = piVar10;
          if (iVar6 < 0) {
            piVar4 = param_3;
          }
          param_2 = iVar16 - (iVar6 >> 0x1f);
          piVar4[iVar16 * 2] = piVar5[6];
          piVar5 = piVar5 + 8;
          (piVar4 + iVar16 * 2)[1] = iVar13;
        } while (piVar5 < param_1 + iVar11 * 2);
      }
      if (piVar5 < param_1 + uVar12 * 2) {
        uVar8 = *(undefined4 *)(*piVar3 + 4);
        uVar19 = *(uint *)(*piVar3 + 8);
        do {
          uVar15 = *(uint *)(*piVar5 + 8);
          uVar2 = uVar19;
          if (uVar15 < uVar19) {
            uVar2 = uVar15;
          }
          iVar11 = FUN_01bed842(*(undefined4 *)(*piVar5 + 4),uVar8,uVar2);
          piVar10 = piVar10 + -2;
          if (iVar11 == 0) {
            iVar11 = uVar15 - uVar19;
          }
          iVar6 = *piVar5;
          iVar16 = piVar5[1];
          piVar4 = piVar10;
          if (iVar11 < 0) {
            piVar4 = param_3;
          }
          piVar5 = piVar5 + 2;
          iVar13 = param_2 * 2;
          piVar4[iVar13] = iVar6;
          param_2 = param_2 - (iVar11 >> 0x1f);
          (piVar4 + iVar13)[1] = iVar16;
        } while (piVar5 < param_1 + uVar12 * 2);
      }
      if (uVar12 == uVar7) break;
      piVar10 = piVar10 + -2;
      iVar11 = *piVar5;
      iVar6 = piVar5[1];
      piVar5 = piVar5 + 2;
      piVar10[param_2 * 2] = iVar11;
      (piVar10 + param_2 * 2)[1] = iVar6;
      uVar12 = uVar7;
    }
    FUN_01bed4e2(param_1,param_3,param_2 << 3);
    iVar11 = uVar7 - param_2;
    if (iVar11 != 0) {
      piVar10 = param_1 + param_2 * 2;
      piVar5 = param_3 + uVar7 * 2 + -2;
      iVar6 = iVar11;
      do {
        iVar16 = *piVar5;
        iVar13 = piVar5[1];
        piVar5 = piVar5 + -2;
        *piVar10 = iVar16;
        piVar10[1] = iVar13;
        piVar10 = piVar10 + 2;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (param_2 == 0) break;
    if (uVar7 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d30588);
    }
    FUN_0165be70(param_1 + param_2 * 2,iVar11,param_3,param_4,local_58,&local_34);
    uVar7 = param_2;
    if (param_2 < 0x21) goto LAB_0165be94;
  } while( true );
  if (param_4 < uVar7) goto LAB_0165c6f0;
  piVar10 = param_3 + uVar7 * 2;
  uVar12 = 0;
  piVar5 = param_1;
  while( true ) {
    iVar11 = uVar14 - 3;
    if (uVar14 < 3) {
      iVar11 = 0;
    }
    if (piVar5 < param_1 + iVar11 * 2) {
      uVar8 = *(undefined4 *)(*piVar3 + 4);
      uVar19 = *(uint *)(*piVar3 + 8);
      do {
        uVar15 = *(uint *)(*piVar5 + 8);
        uVar2 = uVar15;
        if (uVar19 < uVar15) {
          uVar2 = uVar19;
        }
        uVar2 = FUN_01bed842(uVar8,*(undefined4 *)(*piVar5 + 4),uVar2);
        iVar6 = piVar5[1];
        iVar16 = piVar5[2];
        if (uVar2 == 0) {
          uVar2 = uVar19 - uVar15;
        }
        piVar4 = param_3;
        if (0x7fffffff < uVar2) {
          piVar4 = piVar10 + -2;
        }
        iVar13 = uVar12 * 2;
        piVar4[iVar13] = *piVar5;
        if (uVar2 < 0x80000000) {
          uVar12 = uVar12 + 1;
        }
        uVar15 = *(uint *)(iVar16 + 8);
        uVar17 = *(undefined4 *)(iVar16 + 4);
        (piVar4 + iVar13)[1] = iVar6;
        uVar2 = uVar15;
        if (uVar19 < uVar15) {
          uVar2 = uVar19;
        }
        uVar2 = FUN_01bed842(uVar8,uVar17,uVar2);
        if (uVar2 == 0) {
          uVar2 = uVar19 - uVar15;
        }
        piVar4 = param_3;
        if (0x7fffffff < uVar2) {
          piVar4 = piVar10 + -4;
        }
        iVar16 = piVar5[3];
        iVar13 = piVar5[4];
        iVar6 = uVar12 * 2;
        piVar4[iVar6] = piVar5[2];
        if (uVar2 < 0x80000000) {
          uVar12 = uVar12 + 1;
        }
        uVar15 = *(uint *)(iVar13 + 8);
        uVar17 = *(undefined4 *)(iVar13 + 4);
        (piVar4 + iVar6)[1] = iVar16;
        uVar2 = uVar15;
        if (uVar19 < uVar15) {
          uVar2 = uVar19;
        }
        uVar2 = FUN_01bed842(uVar8,uVar17,uVar2);
        if (uVar2 == 0) {
          uVar2 = uVar19 - uVar15;
        }
        piVar4 = param_3;
        if (0x7fffffff < uVar2) {
          piVar4 = piVar10 + -6;
        }
        iVar16 = piVar5[5];
        iVar13 = piVar5[6];
        iVar6 = uVar12 * 2;
        piVar4[iVar6] = piVar5[4];
        if (uVar2 < 0x80000000) {
          uVar12 = uVar12 + 1;
        }
        (piVar4 + iVar6)[1] = iVar16;
        uVar15 = *(uint *)(iVar13 + 8);
        uVar2 = uVar15;
        if (uVar19 < uVar15) {
          uVar2 = uVar19;
        }
        uVar2 = FUN_01bed842(uVar8,*(undefined4 *)(iVar13 + 4),uVar2);
        piVar10 = piVar10 + -8;
        if (uVar2 == 0) {
          uVar2 = uVar19 - uVar15;
        }
        iVar6 = piVar5[7];
        piVar4 = piVar10;
        if (uVar2 < 0x80000000) {
          piVar4 = param_3;
        }
        iVar16 = uVar12 * 2;
        piVar4[iVar16] = piVar5[6];
        if (uVar2 < 0x80000000) {
          uVar12 = uVar12 + 1;
        }
        piVar5 = piVar5 + 8;
        (piVar4 + iVar16)[1] = iVar6;
      } while (piVar5 < param_1 + iVar11 * 2);
    }
    if (piVar5 < param_1 + uVar14 * 2) {
      uVar19 = *(uint *)(*piVar3 + 8);
      uVar8 = *(undefined4 *)(*piVar3 + 4);
      do {
        uVar15 = *(uint *)(*piVar5 + 8);
        uVar2 = uVar15;
        if (uVar19 < uVar15) {
          uVar2 = uVar19;
        }
        uVar2 = FUN_01bed842(uVar8,*(undefined4 *)(*piVar5 + 4),uVar2);
        piVar10 = piVar10 + -2;
        if (uVar2 == 0) {
          uVar2 = uVar19 - uVar15;
        }
        iVar11 = *piVar5;
        iVar6 = piVar5[1];
        piVar4 = piVar10;
        if (uVar2 < 0x80000000) {
          piVar4 = param_3;
        }
        piVar5 = piVar5 + 2;
        iVar16 = uVar12 * 2;
        piVar4[iVar16] = iVar11;
        if (uVar2 < 0x80000000) {
          uVar12 = uVar12 + 1;
        }
        (piVar4 + iVar16)[1] = iVar6;
      } while (piVar5 < param_1 + uVar14 * 2);
    }
    if (uVar14 == uVar7) break;
    piVar10 = piVar10 + -2;
    iVar6 = *piVar5;
    iVar16 = piVar5[1];
    piVar5 = piVar5 + 2;
    iVar11 = uVar12 * 2;
    param_3[iVar11] = iVar6;
    uVar12 = uVar12 + 1;
    (param_3 + iVar11)[1] = iVar16;
    uVar14 = uVar7;
  }
  FUN_01bed4e2(param_1,param_3,uVar12 << 3);
  param_2 = uVar7 - uVar12;
  if (param_2 == 0) {
    return;
  }
  piVar10 = param_1 + uVar12 * 2;
  piVar5 = param_3 + uVar7 * 2 + -2;
  uVar14 = param_2;
  do {
    iVar6 = *piVar5;
    uVar14 = uVar14 - 1;
    iVar11 = piVar5[1];
    piVar5 = piVar5 + -2;
    *piVar10 = iVar6;
    piVar10[1] = iVar11;
    piVar10 = piVar10 + 2;
  } while (uVar14 != 0);
  if (uVar7 < uVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar12,uVar7,uVar7,&DAT_01d30598);
  }
  param_1 = param_1 + uVar12 * 2;
  local_5c = (int *)0x0;
  if (param_2 < 0x21) goto LAB_0165be94;
  goto LAB_0165befc;
}

