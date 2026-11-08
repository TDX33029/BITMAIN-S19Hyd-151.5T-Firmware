// FUN_01564190 @ 01564190 size=660 calls_out=1 calls_in=4
// strings: 

void FUN_01564190(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar4 = *param_1;
  iVar5 = 0x13;
  if (0x80000000 < uVar4) {
    iVar5 = uVar4 + 0x7fffffff;
  }
  switch(iVar5) {
  case 0:
  case 1:
  case 2:
  case 8:
  case 10:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x12:
  case 0x14:
    uVar4 = param_1[1];
    goto LAB_01564218;
  case 3:
    uVar4 = param_1[1];
    uVar12 = uVar4;
    if (uVar4 < 0x80000001) {
      uVar12 = 0;
    }
    if ((uVar12 & 0x7fffffff) != 0) {
      return;
    }
    goto LAB_015643d4;
  case 4:
    uVar4 = param_1[1];
    if ((int)uVar4 < -0x7ffffffe) {
      return;
    }
LAB_01564218:
    if (uVar4 == 0) {
      return;
    }
LAB_015643dc:
    uVar4 = param_1[2];
    break;
  case 5:
    uVar4 = param_1[2];
    puVar8 = (undefined4 *)(uVar4 + 4);
    for (uVar12 = param_1[3]; uVar12 != 0; uVar12 = uVar12 - 1) {
      if (puVar8[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar8);
      }
      puVar8 = puVar8 + 3;
    }
    goto LAB_01564328;
  case 6:
  case 0xb:
  case 0x11:
    goto switchD_015641b8_caseD_6;
  case 7:
    uVar4 = param_1[2];
    uVar13 = param_1[3];
    for (uVar12 = 0; uVar13 != uVar12; uVar12 = uVar12 + 1) {
      if (*(int *)(uVar4 + uVar12 * 0x10) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(uVar4 + uVar12 * 0x10 + 4));
      }
    }
    goto LAB_01564328;
  case 9:
    uVar12 = param_1[2];
    uVar13 = param_1[3];
    for (uVar4 = 0; uVar13 != uVar4; uVar4 = uVar4 + 1) {
      if (*(int *)(uVar12 + uVar4 * 0x10) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(uVar12 + uVar4 * 0x10 + 4));
      }
    }
    if (param_1[1] != 0) {
      thunk_FUN_016d3fb4(uVar12);
    }
    uVar4 = param_1[5];
    puVar8 = (undefined4 *)(uVar4 + 4);
    for (uVar12 = param_1[6]; uVar12 != 0; uVar12 = uVar12 - 1) {
      if (puVar8[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar8);
      }
      puVar8 = puVar8 + 3;
    }
    if (param_1[4] == 0) {
      return;
    }
    break;
  case 0xc:
    uVar4 = param_1[1];
    if (uVar4 == 0x80000000) {
      uVar4 = param_1[3];
      iVar5 = 0xc;
      if (uVar4 == 0x80000000) {
        return;
      }
    }
    else {
      uVar13 = param_1[2];
      puVar8 = (undefined4 *)(uVar13 + 4);
      for (uVar12 = param_1[3]; uVar12 != 0; uVar12 = uVar12 - 1) {
        if (puVar8[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar8);
        }
        puVar8 = puVar8 + 3;
      }
      if (uVar4 != 0) {
        thunk_FUN_016d3fb4(uVar13);
      }
      uVar4 = param_1[4];
      iVar5 = 0x10;
    }
    if (uVar4 == 0) {
      return;
    }
    uVar4 = *(uint *)((int)param_1 + iVar5 + 4);
    break;
  case 0x13:
    if (uVar4 == 0x80000000) {
      return;
    }
    if (uVar4 != 0) {
      thunk_FUN_016d3fb4(param_1[1]);
    }
    if (param_1[3] == 0) {
      return;
    }
    uVar4 = param_1[4];
    break;
  case 0x15:
    uVar4 = param_1[2];
    puVar8 = (undefined4 *)(uVar4 + 4);
    for (uVar12 = param_1[3]; uVar12 != 0; uVar12 = uVar12 - 1) {
      if (puVar8[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar8);
      }
      puVar8 = puVar8 + 3;
    }
LAB_01564328:
    if (param_1[1] == 0) {
switchD_015641b8_caseD_6:
      return;
    }
    break;
  default:
    uVar4 = param_1[1];
LAB_015643d4:
    if ((uVar4 & 0x7fffffff) == 0) {
      return;
    }
    goto LAB_015643dc;
  }
  if (uVar4 == 0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar12 = *(byte *)(uVar4 - 3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar13 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar6 = uVar13 - 0x10, uVar13 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar13 = (uint)(*(byte *)(uVar4 - 3) >> 5);
  iVar11 = *(int *)(iVar5 + 8) + 0x10;
  iVar9 = iVar6 * uVar12 + iVar6 + -4;
  iVar6 = iVar11 + iVar9;
  if (4 < uVar13) {
    if (uVar13 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar13 = *(uint *)(iVar6 + -4);
    if (uVar13 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if (iVar6 - uVar4 < uVar13) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar6 - uVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar11 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar5 + 0x14);
  uVar13 = 1 << uVar12;
  *(undefined1 *)(uVar4 - 3) = 0xff;
  *(undefined2 *)(uVar4 - 2) = 0;
  do {
    uVar10 = *(uint *)(iVar5 + 0x10);
    uVar4 = *(uint *)(iVar5 + 0xc) | uVar10;
    if ((uVar13 & uVar4) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar10 == 0) || (uVar4 + uVar13 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar12);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar8 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar8;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar8 = uVar7;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar13 + uVar10;
      return;
    }
    puVar14 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar4 = *puVar14;
      if (uVar10 != uVar4) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar3);
    *puVar14 = uVar13 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar4) {
      return;
    }
  } while( true );
}

