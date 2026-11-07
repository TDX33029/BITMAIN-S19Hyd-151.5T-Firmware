// FUN_0163472c @ 0163472c size=328 calls_out=1 calls_in=7
// strings: 

void FUN_0163472c(uint *param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar3 = *param_1;
  if (uVar3 == 4) {
    uVar3 = param_1[4];
    if (uVar3 == 0) {
      return;
    }
    puVar7 = (undefined4 *)param_1[5];
    pcVar4 = (code *)*puVar7;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar3);
    }
    if (puVar7[1] == 0) {
      return;
    }
    goto LAB_014b47f4;
  }
  iVar5 = uVar3 - 2;
  if (uVar3 < 2) {
    iVar5 = 2;
  }
  if (iVar5 == 0) {
    puVar7 = (undefined4 *)param_1[2];
    if ((4 < (byte)param_1[1]) || ((byte)param_1[1] == 3)) {
      puVar13 = (undefined4 *)puVar7[1];
      uVar12 = *puVar7;
      if ((code *)*puVar13 != (code *)0x0) {
        (*(code *)*puVar13)(uVar12);
      }
LAB_01634838:
      iVar5 = puVar13[1];
LAB_0163483c:
      if (iVar5 != 0) {
        thunk_FUN_016d3fb4(uVar12);
      }
      thunk_FUN_016d3fb4(puVar7);
    }
  }
  else if (iVar5 == 1) {
    puVar7 = (undefined4 *)param_1[2];
    if ((4 < (byte)param_1[1]) || ((byte)param_1[1] == 3)) {
      uVar12 = *puVar7;
      puVar13 = (undefined4 *)puVar7[1];
      pcVar4 = (code *)*puVar13;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar12);
      }
      iVar5 = puVar13[1];
      goto LAB_0163483c;
    }
  }
  else if ((uVar3 != 0) && ((char)param_1[1] == '\x03')) {
    puVar7 = (undefined4 *)param_1[2];
    puVar13 = (undefined4 *)puVar7[1];
    uVar12 = *puVar7;
    if ((code *)*puVar13 != (code *)0x0) {
      (*(code *)*puVar13)(uVar12);
    }
    goto LAB_01634838;
  }
  if (param_1[4] == 0) {
    return;
  }
  uVar3 = param_1[5];
LAB_014b47f4:
  if (uVar3 == 0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar14 = *(byte *)(uVar3 - 3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar6 = uVar8 - 0x10, uVar8 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar8 = (uint)(*(byte *)(uVar3 - 3) >> 5);
  iVar11 = *(int *)(iVar5 + 8) + 0x10;
  iVar9 = iVar6 * uVar14 + iVar6 + -4;
  iVar6 = iVar11 + iVar9;
  if (4 < uVar8) {
    if (uVar8 != 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar4)();
    }
    uVar8 = *(uint *)(iVar6 + -4);
    if (uVar8 < 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar4)();
    }
    if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar4)();
    }
  }
  if (iVar6 - uVar3 < uVar8) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar4)();
  }
  if (*(char *)(iVar6 - uVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar4)();
  }
  if (*(char *)(iVar11 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar4)();
  }
  bVar1 = *(byte *)(iVar5 + 0x14);
  uVar8 = 1 << uVar14;
  *(undefined1 *)(uVar3 - 3) = 0xff;
  *(undefined2 *)(uVar3 - 2) = 0;
  do {
    uVar10 = *(uint *)(iVar5 + 0x10);
    uVar3 = *(uint *)(iVar5 + 0xc) | uVar10;
    if ((uVar8 & uVar3) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar4)();
    }
    if ((uVar10 == 0) || (uVar3 + uVar8 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar7 = (undefined4 *)FUN_016d2bc8();
      uVar12 = *puVar7;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar7 = uVar12;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar8 + uVar10;
      return;
    }
    puVar15 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar3 = *puVar15;
      if (uVar10 != uVar3) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar2);
    *puVar15 = uVar8 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar3) {
      return;
    }
  } while( true );
}

