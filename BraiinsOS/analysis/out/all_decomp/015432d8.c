// FUN_015432d8 @ 015432d8 size=928 calls_out=7 calls_in=4
// strings: 

void FUN_015432d8(uint *param_1)

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
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined4 uStack_28;
  int iStack_24;
  
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
    goto switchD_01543300_caseD_0;
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
    if (param_1[6] == 0) {
      return;
    }
    break;
  case 2:
    puVar6 = (uint *)param_1[2];
    iVar17 = param_1[3] + 1;
    puVar5 = puVar6;
    while (iVar17 = iVar17 + -1, iVar17 != 0) {
      FUN_01505444(puVar5);
      puVar5 = puVar5 + 5;
    }
    goto LAB_01543604;
  case 3:
    uVar4 = param_1[3];
    puVar6 = (uint *)param_1[2];
    if (uVar4 != 0) {
      iVar17 = 0;
      puVar5 = puVar6;
      do {
        uVar10 = *puVar5;
        iVar11 = 4;
        if (0x80000000 < uVar10) {
          iVar11 = uVar10 + 0x7fffffff;
        }
        switch(iVar11) {
        case 0:
        case 2:
          break;
        case 1:
        case 3:
          puVar7 = puVar6 + iVar17 * 4 + 1;
LAB_015435dc:
          if (*puVar7 != 0) {
            thunk_FUN_016d3fb4(puVar7[1]);
          }
          break;
        default:
          puVar7 = puVar5;
          if (uVar10 != 0x80000000) goto LAB_015435dc;
        }
        iVar17 = iVar17 + 1;
        puVar5 = puVar5 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    goto LAB_01543604;
  case 4:
    uVar4 = param_1[3];
    puVar6 = (uint *)param_1[2];
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
    goto LAB_01543604;
  case 5:
    FUN_0154376c(param_1 + 1);
    return;
  case 6:
  case 0xd:
  case 0x12:
  case 0x13:
  case 0x14:
    uVar4 = param_1[1] & 0x7fffffff;
    goto joined_r0x01543500;
  case 7:
    uVar4 = param_1[1];
    if (uVar4 == 0x80000000) {
      if ((param_1[2] & 0x7fffffff) == 0) {
        return;
      }
      puVar6 = (uint *)param_1[3];
      break;
    }
    uVar10 = param_1[5];
    if (uVar10 == 0) {
LAB_01543694:
      if (param_1[8] != 0) {
        thunk_FUN_016d3fb4(param_1[9]);
      }
      uVar10 = param_1[0xb];
      iVar17 = 0x1c;
    }
    else {
      if (uVar10 != 0x80000000) {
        thunk_FUN_016d3fb4(param_1[6]);
        goto LAB_01543694;
      }
      uVar10 = param_1[6];
      iVar17 = 8;
    }
    if (uVar10 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)((int)(param_1 + 5) + iVar17));
    }
    if (uVar4 == 0) {
      return;
    }
    puVar6 = (uint *)param_1[2];
    break;
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
    goto joined_r0x015433b0;
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
joined_r0x015433b0:
    if (uVar4 == 0) {
      return;
    }
    break;
  case 10:
    uVar4 = param_1[1];
joined_r0x01543500:
    if (uVar4 == 0) {
      return;
    }
    puVar6 = (uint *)param_1[2];
    break;
  case 0xe:
    piVar8 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar17 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar17 + -1;
    if (iVar17 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155edc8(param_1[1]);
      return;
    }
    return;
  case 0xf:
    FUN_01542ff8(param_1 + 1);
    return;
  case 0x10:
    puVar6 = (uint *)param_1[2];
    iVar17 = param_1[3] + 1;
    puVar5 = puVar6;
    while (iVar17 = iVar17 + -1, iVar17 != 0) {
      FUN_01505444(puVar5);
      puVar5 = puVar5 + 5;
    }
LAB_01543604:
    if (param_1[1] == 0) {
switchD_01543300_caseD_0:
      return;
    }
    break;
  default:
    if ((param_1[2] & 0x7fffffff) == 0) {
      return;
    }
    puVar6 = (uint *)param_1[3];
  }
  if (puVar6 == (uint *)0x0) {
    return;
  }
  iVar17 = FUN_016d3bc8();
  uVar4 = *(byte *)((int)puVar6 - 3) & 0x1f;
  if (((*(byte *)(iVar17 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar17 + 0x14) & 0xfffff000, iVar11 = uVar10 - 0x10, uVar10 == 0)) {
    iVar11 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar17 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar10 = (uint)(*(byte *)((int)puVar6 - 3) >> 5);
  iVar16 = *(int *)(iVar17 + 8) + 0x10;
  iVar14 = iVar11 * uVar4 + iVar11 + -4;
  iVar11 = iVar16 + iVar14;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar10 = *(uint *)(iVar11 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar11 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar11 - (int)puVar6) < uVar10) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar11 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar16 + iVar14) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar17 + 0x14);
  uVar10 = 1 << uVar4;
  *(undefined1 *)((int)puVar6 - 3) = 0xff;
  *(undefined2 *)((int)puVar6 - 2) = 0;
  do {
    uVar15 = *(uint *)(iVar17 + 0x10);
    uVar12 = *(uint *)(iVar17 + 0xc) | uVar15;
    if ((uVar10 & uVar12) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar15 == 0) || (uVar12 + uVar10 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar17,uVar4);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar9 = (undefined4 *)FUN_016d2bc8();
      uVar13 = *puVar9;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar9 = uVar13;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar17 + 0x10) = uVar10 + uVar15;
      return;
    }
    puVar6 = (uint *)(iVar17 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar6);
      uVar12 = *puVar6;
      if (uVar15 != uVar12) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar1);
    *puVar6 = uVar10 + uVar15;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar15 == uVar12) {
      return;
    }
  } while( true );
}

