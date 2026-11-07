// FUN_015396bc @ 015396bc size=1360 calls_out=5 calls_in=9
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_015396bc(uint *param_1)

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
  uint uVar10;
  int *piVar11;
  int unaff_r4;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int *piVar18;
  uint uVar19;
  uint *local_28;
  
  uVar4 = *param_1;
  uVar10 = 1;
  if ((int)uVar4 < 0) {
    uVar10 = uVar4 ^ 0x80000000;
  }
  switch(uVar10) {
  case 0:
  case 0xb:
  case 0xc:
  case 0x11:
    goto switchD_015396e8_caseD_0;
  case 1:
    if (uVar4 != 0) {
      thunk_FUN_016d3fb4(param_1[1]);
    }
    if (param_1[3] != 0) {
      thunk_FUN_016d3fb4(param_1[4]);
    }
    puVar6 = (uint *)param_1[7];
    puVar5 = puVar6;
    for (uVar4 = param_1[8]; uVar4 != 0; uVar4 = uVar4 - 1) {
      FUN_01505a78(puVar5);
      puVar5 = puVar5 + 9;
    }
    uVar4 = param_1[6];
    break;
  case 2:
    puVar6 = (uint *)param_1[2];
    iVar12 = param_1[3] + 1;
    puVar5 = puVar6;
    while (iVar12 = iVar12 + -1, iVar12 != 0) {
      FUN_01505444(puVar5);
      puVar5 = puVar5 + 5;
    }
    goto LAB_0153993c;
  case 3:
    puVar6 = (uint *)param_1[2];
    uVar4 = param_1[3];
    if (uVar4 != 0) {
      iVar12 = 0;
      puVar5 = puVar6;
      do {
        uVar10 = *puVar5;
        iVar14 = 4;
        if (0x80000000 < uVar10) {
          iVar14 = uVar10 + 0x7fffffff;
        }
        switch(iVar14) {
        case 0:
        case 2:
          break;
        case 1:
        case 3:
          puVar7 = puVar6 + iVar12 * 4 + 1;
LAB_015399e0:
          if (*puVar7 != 0) {
            thunk_FUN_016d3fb4(puVar7[1]);
          }
          break;
        default:
          puVar7 = puVar5;
          if (uVar10 != 0x80000000) goto LAB_015399e0;
        }
        iVar12 = iVar12 + 1;
        puVar5 = puVar5 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    goto LAB_01539a08;
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
LAB_01539a08:
    uVar4 = param_1[1];
    break;
  case 5:
    if (param_1[1] != 0) {
      thunk_FUN_016d3fb4(param_1[2]);
    }
    uVar4 = 0;
    puVar6 = (uint *)param_1[5];
    uVar10 = param_1[6];
    local_28 = param_1;
    while (uVar4 != uVar10) {
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
        iVar12 = 0;
        piVar18 = piVar8;
        do {
          iVar14 = *piVar18;
          if (iVar14 != -0x80000000) {
            piVar11 = piVar18;
            if (iVar14 == -0x7fffffff) {
              iVar14 = piVar18[1];
              if (iVar14 == -0x80000000) goto LAB_01539ac8;
              piVar11 = piVar8 + iVar12 * 4 + 1;
            }
            if (iVar14 != 0) {
              thunk_FUN_016d3fb4(piVar11[1]);
            }
          }
LAB_01539ac8:
          iVar12 = iVar12 + 1;
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
    goto joined_r0x015398e0;
  case 7:
    uVar4 = param_1[1];
    if (uVar4 == 0x80000000) {
      uVar4 = param_1[2];
      iVar14 = 8;
      if (uVar4 == 0x80000000) {
        return;
      }
    }
    else {
      if (param_1[5] == 0x80000000) {
        iVar12 = 0x18;
      }
      else {
        if (param_1[5] != 0) {
          thunk_FUN_016d3fb4(param_1[6]);
        }
        iVar12 = 0x2c;
        if (param_1[8] != 0) {
          thunk_FUN_016d3fb4(param_1[9]);
        }
      }
      iVar14 = 4;
      if (*(int *)((int)param_1 + iVar12) != 0) {
        thunk_FUN_016d3fb4(((int *)((int)param_1 + iVar12))[1]);
      }
    }
    if (uVar4 == 0) {
      return;
    }
    puVar6 = *(uint **)((int)param_1 + iVar14 + 4);
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
joined_r0x015398e0:
    if (uVar4 == 0) {
      return;
    }
    puVar6 = (uint *)param_1[2];
    goto LAB_014b47f4;
  case 0xe:
    piVar8 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar12 + -1;
    if (iVar12 == 1) {
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
      iVar12 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar12 + -1;
    if (iVar12 == 1) {
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
    iVar12 = param_1[3] + 1;
    puVar5 = puVar6;
    while (iVar12 = iVar12 + -1, iVar12 != 0) {
      FUN_01505444(puVar5);
      puVar5 = puVar5 + 5;
    }
LAB_0153993c:
    if (param_1[1] == 0) {
      return;
    }
    goto LAB_014b47f4;
  default:
    if ((param_1[2] & 0x7fffffff) != 0) {
      puVar6 = (uint *)param_1[3];
      goto LAB_014b47f4;
    }
    goto switchD_015396e8_caseD_0;
  }
  if (uVar4 == 0) {
switchD_015396e8_caseD_0:
    return;
  }
LAB_014b47f4:
  if (puVar6 == (uint *)0x0) {
    return;
  }
  iVar12 = FUN_016d3bc8();
  uVar4 = *(byte *)((int)puVar6 - 3) & 0x1f;
  if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar14 = uVar10 - 0x10, uVar10 == 0)) {
    iVar14 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar10 = (uint)(*(byte *)((int)puVar6 - 3) >> 5);
  iVar17 = *(int *)(iVar12 + 8) + 0x10;
  iVar15 = iVar14 * uVar4 + iVar14 + -4;
  iVar14 = iVar17 + iVar15;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar10 = *(uint *)(iVar14 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar14 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar14 - (int)puVar6) < uVar10) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar14 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar17 + iVar15) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar12 + 0x14);
  uVar10 = 1 << uVar4;
  *(undefined1 *)((int)puVar6 - 3) = 0xff;
  *(undefined2 *)((int)puVar6 - 2) = 0;
  do {
    uVar16 = *(uint *)(iVar12 + 0x10);
    uVar19 = *(uint *)(iVar12 + 0xc) | uVar16;
    if ((uVar10 & uVar19) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar16 == 0) || (uVar19 + uVar10 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar12,uVar4);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar9 = (undefined4 *)FUN_016d2bc8();
      uVar13 = *puVar9;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar9 = uVar13;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar12 + 0x10) = uVar10 + uVar16;
      return;
    }
    puVar6 = (uint *)(iVar12 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar6);
      uVar19 = *puVar6;
      if (uVar16 != uVar19) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar1);
    *puVar6 = uVar10 + uVar16;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar16 == uVar19) {
      return;
    }
  } while( true );
}

