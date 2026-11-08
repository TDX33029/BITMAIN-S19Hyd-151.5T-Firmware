// FUN_014d8264 @ 014d8264 size=792 calls_out=9 calls_in=1
// strings: 

void FUN_014d8264(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar4 = 1;
  if (0x80000000 < *param_1) {
    iVar4 = *param_1 + 0x7fffffff;
  }
  switch(iVar4) {
  case 0:
  case 3:
    goto switchD_014d828c_caseD_0;
  case 1:
    uVar6 = param_1[3];
    uVar8 = 1;
    if ((int)uVar6 < 0) {
      uVar8 = uVar6 ^ 0x80000000;
    }
    break;
  default:
    param_1 = param_1 + 1;
    if (*param_1 == 0x80000000 || *param_1 == 0) {
      return;
    }
    goto LAB_014b47f4;
  }
  switch(uVar8) {
  case 0:
  case 0xb:
  case 0xc:
  case 0x11:
    goto switchD_014d82c0_caseD_0;
  case 1:
    if (uVar6 != 0) {
      thunk_FUN_016d3fb4(param_1[4]);
    }
    if (param_1[6] != 0) {
      thunk_FUN_016d3fb4(param_1[7]);
    }
    uVar6 = param_1[10];
    FUN_01499354(uVar6,param_1[0xb]);
    uVar8 = param_1[9];
    break;
  case 2:
    uVar6 = param_1[5];
    FUN_01498ed4(uVar6,param_1[6]);
    goto LAB_014d8470;
  case 3:
    uVar6 = param_1[5];
    FUN_01498f24(uVar6,param_1[6]);
    uVar8 = param_1[4];
    break;
  case 4:
    uVar6 = param_1[5];
    FUN_01498bfc(uVar6,param_1[6]);
    uVar8 = param_1[4];
    break;
  case 5:
    if (param_1[4] != 0) {
      thunk_FUN_016d3fb4(param_1[5]);
    }
    uVar6 = param_1[8];
    FUN_01498ab8(uVar6,param_1[9]);
    goto LAB_014d854c;
  case 6:
  case 0xd:
  case 0x12:
  case 0x13:
  case 0x14:
    puVar15 = param_1 + 4;
    uVar6 = *puVar15;
    goto joined_r0x014d8424;
  case 7:
    puVar15 = param_1 + 4;
    uVar6 = *puVar15;
    if (uVar6 == 0x80000000) goto switchD_014d82c0_default;
    if (param_1[8] == 0x80000000) {
      iVar4 = 0x24;
    }
    else {
      if (param_1[8] != 0) {
        thunk_FUN_016d3fb4(param_1[9]);
      }
      iVar4 = 0x38;
      if (param_1[0xb] != 0) {
        thunk_FUN_016d3fb4(param_1[0xc]);
      }
    }
    if (*(int *)((int)param_1 + iVar4) != 0) {
      thunk_FUN_016d3fb4(((int *)((int)param_1 + iVar4))[1]);
    }
    goto LAB_014d85b4;
  case 8:
    if (param_1[4] != 0) {
      thunk_FUN_016d3fb4(param_1[5]);
    }
    if (param_1[7] != 0) {
      thunk_FUN_016d3fb4(param_1[8]);
    }
    uVar6 = param_1[0xb];
    puVar7 = (undefined4 *)(uVar6 + 4);
    for (uVar8 = param_1[0xc]; uVar8 != 0; uVar8 = uVar8 - 1) {
      if (puVar7[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar7);
      }
      puVar7 = puVar7 + 3;
    }
    uVar8 = param_1[10];
    break;
  case 9:
    if (param_1[4] != 0) {
      thunk_FUN_016d3fb4(param_1[5]);
    }
    uVar6 = param_1[8];
    FUN_01498c44(uVar6,param_1[9]);
    goto LAB_014d854c;
  case 10:
    puVar15 = param_1 + 4;
    uVar6 = *puVar15;
LAB_014d85b4:
    if (uVar6 == 0) goto switchD_014d82c0_caseD_0;
    uVar6 = puVar15[1];
    goto LAB_014d85c0;
  case 0xe:
    piVar5 = (int *)param_1[4];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar5;
      bVar3 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar3);
    *piVar5 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155edc8(param_1[4]);
    }
    goto switchD_014d82c0_caseD_0;
  case 0xf:
    if (param_1[4] != 0) {
      thunk_FUN_016d3fb4(param_1[5]);
    }
    piVar5 = (int *)param_1[10];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar5;
      bVar3 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar3);
    *piVar5 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155edc8(param_1[10]);
    }
    uVar6 = param_1[8];
    FUN_01499384(uVar6,param_1[9]);
LAB_014d854c:
    uVar8 = param_1[7];
    break;
  case 0x10:
    uVar6 = param_1[5];
    FUN_01498ed4(uVar6,param_1[6]);
LAB_014d8470:
    uVar8 = param_1[4];
    break;
  default:
switchD_014d82c0_default:
    puVar15 = param_1 + 5;
    uVar6 = *puVar15;
joined_r0x014d8424:
    if (uVar6 != 0x80000000) goto LAB_014d85b4;
    goto switchD_014d82c0_caseD_0;
  }
  if (uVar8 != 0) {
LAB_014d85c0:
    thunk_FUN_016d3fb4(uVar6);
  }
switchD_014d82c0_caseD_0:
  if (*param_1 != 0x80000000 && *param_1 != 0) {
LAB_014b47f4:
    uVar6 = param_1[1];
    if (uVar6 == 0) {
      return;
    }
    iVar4 = FUN_016d3bc8();
    uVar8 = *(byte *)(uVar6 - 3) & 0x1f;
    if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
       (uVar11 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar9 = uVar11 - 0x10, uVar11 == 0)) {
      iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4
      ;
    }
    uVar11 = (uint)(*(byte *)(uVar6 - 3) >> 5);
    iVar14 = *(int *)(iVar4 + 8) + 0x10;
    iVar12 = iVar9 * uVar8 + iVar9 + -4;
    iVar9 = iVar14 + iVar12;
    if (4 < uVar11) {
      if (uVar11 != 5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar1)();
      }
      uVar11 = *(uint *)(iVar9 + -4);
      if (uVar11 < 5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar1)();
      }
      if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar1)();
      }
    }
    if (iVar9 - uVar6 < uVar11) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar1)();
    }
    if (*(char *)(iVar9 - uVar11) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar1)();
    }
    if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar1)();
    }
    bVar2 = *(byte *)(iVar4 + 0x14);
    uVar11 = 1 << uVar8;
    *(undefined1 *)(uVar6 - 3) = 0xff;
    *(undefined2 *)(uVar6 - 2) = 0;
    do {
      uVar13 = *(uint *)(iVar4 + 0x10);
      uVar6 = *(uint *)(iVar4 + 0xc) | uVar13;
      if ((uVar11 & uVar6) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar1)();
      }
      if ((uVar13 == 0) || (uVar6 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar4,uVar8);
        FUN_016dddc0(&DAT_018ddd48);
        if (iStack_24 == 0) {
          return;
        }
        puVar7 = (undefined4 *)FUN_016d2bc8();
        uVar10 = *puVar7;
        FUN_016d6ac4(uStack_28,iStack_24);
        *puVar7 = uVar10;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar4 + 0x10) = uVar11 + uVar13;
        return;
      }
      puVar15 = (uint *)(iVar4 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar15);
        uVar6 = *puVar15;
        if (uVar13 != uVar6) goto LAB_016d409c;
        bVar3 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar3);
      *puVar15 = uVar11 + uVar13;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar13 == uVar6) {
        return;
      }
    } while( true );
  }
switchD_014d828c_caseD_0:
  return;
}

