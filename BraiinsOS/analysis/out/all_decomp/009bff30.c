// FUN_009bff30 @ 009bff30 size=232 calls_out=2 calls_in=1
// strings: 

void FUN_009bff30(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 == 0) {
    return;
  }
  if (*param_1 == 1) {
    iVar11 = param_1[2];
    FUN_009be640(param_1[1],iVar11);
    if (iVar11 == -1) {
      return;
    }
    piVar4 = (int *)(iVar11 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar7 + -1;
    if (iVar7 != 1) {
      return;
    }
    DataMemoryBarrier(0xb);
    goto LAB_014b47f4;
  }
  iVar11 = param_1[1];
  if ((char)param_1[2] != '\x01') goto LAB_014b47f4;
  if ((*(uint *)(iVar11 + 4) & 0x7fffffff) == 0) {
    if ((*(uint *)(iVar11 + 0x10) & 0x7fffffff) != 0) goto LAB_009bffec;
LAB_009bffc4:
    uVar5 = *(uint *)(iVar11 + 0x1c);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(iVar11 + 8));
    if ((*(uint *)(iVar11 + 0x10) & 0x7fffffff) == 0) goto LAB_009bffc4;
LAB_009bffec:
    thunk_FUN_016d3fb4(*(undefined4 *)(iVar11 + 0x14));
    uVar5 = *(uint *)(iVar11 + 0x1c);
  }
  if ((uVar5 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(iVar11 + 0x20));
  }
LAB_014b47f4:
  if (iVar11 == 0) {
    return;
  }
  iVar7 = FUN_016d3bc8();
  uVar5 = *(byte *)(iVar11 + -3) & 0x1f;
  if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
     (uVar12 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar8 = uVar12 - 0x10, uVar12 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar12 = (uint)(*(byte *)(iVar11 + -3) >> 5);
  iVar15 = *(int *)(iVar7 + 8) + 0x10;
  iVar13 = iVar8 * uVar5 + iVar8 + -4;
  iVar8 = iVar15 + iVar13;
  if (4 < uVar12) {
    if (uVar12 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar12 = *(uint *)(iVar8 + -4);
    if (uVar12 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar8 - iVar11) < uVar12) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar8 - uVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar15 + iVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar7 + 0x14);
  uVar12 = 1 << uVar5;
  *(undefined1 *)(iVar11 + -3) = 0xff;
  *(undefined2 *)(iVar11 + -2) = 0;
  do {
    uVar14 = *(uint *)(iVar7 + 0x10);
    uVar9 = *(uint *)(iVar7 + 0xc) | uVar14;
    if ((uVar12 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar14 == 0) || (uVar9 + uVar12 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar7,uVar5);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar6;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar6 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar7 + 0x10) = uVar12 + uVar14;
      return;
    }
    puVar16 = (uint *)(iVar7 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar9 = *puVar16;
      if (uVar14 != uVar9) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar1);
    *puVar16 = uVar12 + uVar14;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar14 == uVar9) {
      return;
    }
  } while( true );
}

