// FUN_013d6144 @ 013d6144 size=400 calls_out=5 calls_in=9
// strings: 

void FUN_013d6144(undefined4 *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined4 uStack_28;
  int iStack_24;
  
  FUN_013f6048();
  switch(*param_1) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 6:
    puVar9 = (uint *)param_1[1];
    break;
  case 1:
    puVar9 = (uint *)param_1[1];
    goto LAB_013d6204;
  case 5:
    puVar9 = (uint *)param_1[1];
    uVar6 = 2;
    uVar4 = *puVar9;
    if ((int)uVar4 < 0) {
      uVar6 = uVar4 ^ 0x80000000;
    }
    if (uVar6 != 0) {
      iVar14 = 4;
      if (uVar6 != 1) {
        iVar14 = 0xc;
      }
      if (uVar6 != 1 && uVar4 != 0) {
        thunk_FUN_016d3fb4(puVar9[1]);
        iVar7 = *(int *)((int)puVar9 + iVar14);
      }
      else {
        iVar7 = *(int *)((int)puVar9 + iVar14);
      }
      if (iVar7 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)((int)puVar9 + iVar14 + 4));
      }
    }
    break;
  case 7:
    puVar9 = (uint *)param_1[1];
    FUN_013d1ed8(puVar9);
    break;
  case 8:
    puVar9 = (uint *)param_1[1];
    uVar4 = puVar9[9];
    FUN_013d6144(uVar4);
    goto LAB_013d62ac;
  case 9:
    puVar9 = (uint *)param_1[1];
    uVar6 = 1;
    uVar4 = *puVar9;
    if ((int)uVar4 < 0) {
      uVar6 = uVar4 ^ 0x80000000;
    }
    if (uVar6 != 0) {
      if (uVar6 == 1) {
        iVar14 = 4;
      }
      else {
        uVar4 = puVar9[1];
        iVar14 = 8;
      }
      if (uVar4 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)((int)puVar9 + iVar14));
      }
    }
    uVar4 = puVar9[0xb];
    FUN_013d6144(uVar4);
LAB_013d62ac:
    thunk_FUN_016d3fb4(uVar4);
    break;
  case 10:
    puVar9 = (uint *)param_1[1];
    iVar14 = puVar9[2] + 1;
    uVar4 = puVar9[1];
    while (iVar14 = iVar14 + -1, iVar14 != 0) {
      FUN_013e7690(uVar4);
      uVar4 = uVar4 + 8;
    }
    goto LAB_013d6204;
  default:
    puVar9 = (uint *)param_1[1];
    iVar14 = puVar9[2] + 1;
    uVar4 = puVar9[1];
    while (iVar14 = iVar14 + -1, iVar14 != 0) {
      FUN_013e7690(uVar4);
      uVar4 = uVar4 + 8;
    }
LAB_013d6204:
    if (*puVar9 != 0) {
      thunk_FUN_016d3fb4(puVar9[1]);
    }
  }
  if (puVar9 == (uint *)0x0) {
    return;
  }
  iVar14 = FUN_016d3bc8();
  uVar4 = *(byte *)((int)puVar9 + -3) & 0x1f;
  if (((*(byte *)(iVar14 + 0x14) & 0x1f) != 0) ||
     (uVar6 = *(uint *)(iVar14 + 0x14) & 0xfffff000, iVar7 = uVar6 - 0x10, uVar6 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar14 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar6 = (uint)(*(byte *)((int)puVar9 + -3) >> 5);
  iVar13 = *(int *)(iVar14 + 8) + 0x10;
  iVar11 = iVar7 * uVar4 + iVar7 + -4;
  iVar7 = iVar13 + iVar11;
  if (4 < uVar6) {
    if (uVar6 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar6 = *(uint *)(iVar7 + -4);
    if (uVar6 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar7 - (int)puVar9) < uVar6) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar7 - uVar6) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar14 + 0x14);
  uVar6 = 1 << uVar4;
  *(undefined1 *)((int)puVar9 + -3) = 0xff;
  *(undefined2 *)((int)puVar9 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar14 + 0x10);
    uVar8 = *(uint *)(iVar14 + 0xc) | uVar12;
    if ((uVar6 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar8 + uVar6 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar14,uVar4);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar5;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar5 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar14 + 0x10) = uVar6 + uVar12;
      return;
    }
    puVar9 = (uint *)(iVar14 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar9);
      uVar8 = *puVar9;
      if (uVar12 != uVar8) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar9);
    } while (!bVar3);
    *puVar9 = uVar6 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar8) {
      return;
    }
  } while( true );
}

