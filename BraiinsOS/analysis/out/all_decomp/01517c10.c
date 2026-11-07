// FUN_01517c10 @ 01517c10 size=1276 calls_out=5 calls_in=4
// strings: 

void FUN_01517c10(uint *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  int unaff_r4;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  uint *local_28;
  
  uVar4 = 1;
  if ((int)*param_1 < 0) {
    uVar4 = *param_1 ^ 0x80000000;
  }
  switch(uVar4) {
  case 0:
  case 0xb:
  case 0xc:
  case 0x11:
    goto switchD_01517c3c_caseD_0;
  case 1:
    FUN_01515cd0(param_1);
    return;
  case 2:
    puVar6 = (uint *)param_1[2];
    iVar11 = param_1[3] + 1;
    puVar5 = puVar6;
    while (iVar11 = iVar11 + -1, iVar11 != 0) {
      FUN_01505444(puVar5);
      puVar5 = puVar5 + 5;
    }
    goto LAB_01517e3c;
  case 3:
    puVar6 = (uint *)param_1[2];
    uVar4 = param_1[3];
    if (uVar4 != 0) {
      iVar11 = 0;
      puVar5 = puVar6;
      do {
        uVar17 = *puVar5;
        iVar13 = 4;
        if (0x80000000 < uVar17) {
          iVar13 = uVar17 + 0x7fffffff;
        }
        switch(iVar13) {
        case 0:
        case 2:
          break;
        case 1:
        case 3:
          puVar7 = puVar6 + iVar11 * 4 + 1;
LAB_01517ee0:
          if (*puVar7 != 0) {
            thunk_FUN_016d3fb4(puVar7[1]);
          }
          break;
        default:
          puVar7 = puVar5;
          if (uVar17 != 0x80000000) goto LAB_01517ee0;
        }
        iVar11 = iVar11 + 1;
        puVar5 = puVar5 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    goto LAB_01517f08;
  case 4:
    puVar6 = (uint *)param_1[2];
    uVar4 = param_1[3];
    if (uVar4 != 0) {
      puVar5 = puVar6 + 1;
      do {
        if ((puVar5[-1] & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(*puVar5);
        }
        puVar5 = puVar5 + 3;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
LAB_01517f08:
    uVar4 = param_1[1];
    break;
  case 5:
    if (param_1[1] != 0) {
      thunk_FUN_016d3fb4(param_1[2]);
    }
    uVar4 = 0;
    puVar6 = (uint *)param_1[5];
    uVar17 = param_1[6];
    local_28 = param_1;
    while (uVar4 != uVar17) {
      puVar5 = puVar6 + uVar4 * 6;
      if ((puVar5[3] & 0x7fffffff) == 0) {
        uVar19 = puVar5[2];
        piVar8 = (int *)puVar5[1];
      }
      else {
        thunk_FUN_016d3fb4(puVar5[4]);
        uVar19 = puVar5[2];
        piVar8 = (int *)puVar5[1];
      }
      if (uVar19 != 0) {
        iVar11 = 0;
        piVar18 = piVar8;
        do {
          iVar13 = *piVar18;
          if (iVar13 != -0x80000000) {
            piVar10 = piVar18;
            if (iVar13 == -0x7fffffff) {
              iVar13 = piVar18[1];
              if (iVar13 == -0x80000000) goto LAB_01517fc8;
              piVar10 = piVar8 + iVar11 * 4 + 1;
            }
            if (iVar13 != 0) {
              thunk_FUN_016d3fb4(piVar10[1]);
            }
          }
LAB_01517fc8:
          iVar11 = iVar11 + 1;
          piVar18 = piVar18 + 4;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      uVar4 = uVar4 + 1;
      if (*puVar5 != 0) {
        thunk_FUN_016d3fb4(piVar8);
      }
    }
    if (local_28[4] == 0) {
      return;
    }
    goto LAB_014b47f4;
  case 6:
  case 0xd:
  case 0x12:
  case 0x13:
  case 0x14:
    uVar4 = param_1[1] & 0x7fffffff;
    goto joined_r0x01517de0;
  case 7:
    uVar4 = param_1[1];
    if (uVar4 == 0x80000000) {
      uVar4 = param_1[2];
      iVar13 = 8;
      if (uVar4 == 0x80000000) {
        return;
      }
    }
    else {
      if (param_1[5] == 0x80000000) {
        iVar11 = 0x18;
      }
      else {
        if (param_1[5] != 0) {
          thunk_FUN_016d3fb4(param_1[6]);
        }
        iVar11 = 0x2c;
        if (param_1[8] != 0) {
          thunk_FUN_016d3fb4(param_1[9]);
        }
      }
      iVar13 = 4;
      if (*(int *)((int)param_1 + iVar11) != 0) {
        thunk_FUN_016d3fb4(((int *)((int)param_1 + iVar11))[1]);
      }
    }
    if (uVar4 == 0) {
      return;
    }
    puVar6 = *(uint **)((int)param_1 + iVar13 + 4);
    goto LAB_014b47f4;
  case 8:
    if (param_1[1] != 0) {
      thunk_FUN_016d3fb4(param_1[2]);
    }
    if (param_1[4] != 0) {
      thunk_FUN_016d3fb4(param_1[5]);
    }
    puVar6 = (uint *)param_1[8];
    puVar5 = puVar6 + 1;
    for (uVar4 = param_1[9]; uVar4 != 0; uVar4 = uVar4 - 1) {
      if (puVar5[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar5);
      }
      puVar5 = puVar5 + 3;
    }
    uVar4 = param_1[7];
    break;
  case 9:
    if (param_1[1] != 0) {
      thunk_FUN_016d3fb4(param_1[2]);
    }
    puVar6 = (uint *)param_1[5];
    puVar5 = puVar6;
    for (uVar4 = param_1[6]; uVar4 != 0; uVar4 = uVar4 - 1) {
      FUN_01505ed0(puVar5);
      puVar5 = puVar5 + 4;
    }
    uVar4 = param_1[4];
    break;
  case 10:
    uVar4 = param_1[1];
joined_r0x01517de0:
    if (uVar4 == 0) {
      return;
    }
    puVar6 = (uint *)param_1[2];
    goto LAB_014b47f4;
  case 0xe:
    piVar8 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar11 + -1;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155edc8(param_1[1]);
      return;
    }
    return;
  case 0xf:
    if (param_1[1] != 0) {
      thunk_FUN_016d3fb4(param_1[2]);
    }
    piVar8 = (int *)param_1[7];
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar11 + -1;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155edc8(param_1[7]);
    }
    puVar6 = (uint *)param_1[5];
    uVar4 = param_1[6];
    if (uVar4 != 0) {
      puVar5 = puVar6 + 1;
      do {
        if ((-0x7fffffff < (int)puVar5[-1]) && (puVar5[-1] != 0)) {
          thunk_FUN_016d3fb4(*puVar5);
        }
        puVar5 = puVar5 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    uVar4 = param_1[4];
    break;
  case 0x10:
    puVar6 = (uint *)param_1[2];
    iVar11 = param_1[3] + 1;
    puVar5 = puVar6;
    while (iVar11 = iVar11 + -1, iVar11 != 0) {
      FUN_01505444(puVar5);
      puVar5 = puVar5 + 5;
    }
LAB_01517e3c:
    if (param_1[1] == 0) {
      return;
    }
    goto LAB_014b47f4;
  default:
    if ((param_1[2] & 0x7fffffff) != 0) {
      puVar6 = (uint *)param_1[3];
      goto LAB_014b47f4;
    }
    goto switchD_01517c3c_caseD_0;
  }
  if (uVar4 == 0) {
switchD_01517c3c_caseD_0:
    return;
  }
LAB_014b47f4:
  if (puVar6 == (uint *)0x0) {
    return;
  }
  iVar11 = FUN_016d3bc8();
  uVar4 = *(byte *)((int)puVar6 + -3) & 0x1f;
  if (((*(byte *)(iVar11 + 0x14) & 0x1f) != 0) ||
     (uVar17 = *(uint *)(iVar11 + 0x14) & 0xfffff000, iVar13 = uVar17 - 0x10, uVar17 == 0)) {
    iVar13 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar11 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar17 = (uint)(*(byte *)((int)puVar6 + -3) >> 5);
  iVar16 = *(int *)(iVar11 + 8) + 0x10;
  iVar14 = iVar13 * uVar4 + iVar13 + -4;
  iVar13 = iVar16 + iVar14;
  if (4 < uVar17) {
    if (uVar17 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar17 = *(uint *)(iVar13 + -4);
    if (uVar17 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar13 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar13 - (int)puVar6) < uVar17) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar13 - uVar17) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar16 + iVar14) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar11 + 0x14);
  uVar17 = 1 << uVar4;
  *(undefined1 *)((int)puVar6 + -3) = 0xff;
  *(undefined2 *)((int)puVar6 + -2) = 0;
  do {
    uVar15 = *(uint *)(iVar11 + 0x10);
    uVar19 = *(uint *)(iVar11 + 0xc) | uVar15;
    if ((uVar17 & uVar19) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar15 == 0) || (uVar19 + uVar17 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar11,uVar4);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar9 = (undefined4 *)FUN_016d2bc8();
      uVar12 = *puVar9;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar9 = uVar12;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar11 + 0x10) = uVar17 + uVar15;
      return;
    }
    puVar6 = (uint *)(iVar11 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar6);
      uVar19 = *puVar6;
      if (uVar15 != uVar19) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar1);
    *puVar6 = uVar17 + uVar15;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar15 == uVar19) {
      return;
    }
  } while( true );
}

