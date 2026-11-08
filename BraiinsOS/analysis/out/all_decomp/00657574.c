// FUN_00657574 @ 00657574 size=240 calls_out=2 calls_in=2
// strings: 

void FUN_00657574(int *param_1)

{
  bool bVar1;
  byte bVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 == 0) {
    piVar4 = (int *)param_1[2];
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_016592f4(param_1[2]);
        return;
      }
    }
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  if (param_1[2] == 0 && param_1[3] == 0) {
    if ((char)param_1[4] == '\x04') {
      return;
    }
    if ((char)param_1[4] != '\x03') {
      return;
    }
    puVar8 = (undefined4 *)param_1[5];
    uVar13 = *puVar8;
    puVar12 = (undefined4 *)puVar8[1];
    pcVar3 = (code *)*puVar12;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar13);
    }
    if (puVar12[1] != 0) {
      thunk_FUN_016d3fb4(uVar13);
    }
  }
  else {
    puVar8 = (undefined4 *)param_1[4];
    if (puVar8 == (undefined4 *)0x0) {
      return;
    }
    puVar12 = (undefined4 *)param_1[5];
    pcVar3 = (code *)*puVar12;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(puVar8);
    }
    if (puVar12[1] == 0) {
      return;
    }
  }
  if (puVar8 == (undefined4 *)0x0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar15 = *(byte *)((int)puVar8 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar6 = uVar9 - 0x10, uVar9 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)((int)puVar8 + -3) >> 5);
  iVar14 = *(int *)(iVar5 + 8) + 0x10;
  iVar10 = iVar6 * uVar15 + iVar6 + -4;
  iVar6 = iVar14 + iVar10;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar3)();
    }
    uVar9 = *(uint *)(iVar6 + -4);
    if (uVar9 < 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar3)();
    }
    if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar3)();
    }
  }
  if ((uint)(iVar6 - (int)puVar8) < uVar9) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar3)();
  }
  if (*(char *)(iVar6 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar3)();
  }
  if (*(char *)(iVar14 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar3)();
  }
  bVar2 = *(byte *)(iVar5 + 0x14);
  uVar9 = 1 << uVar15;
  *(undefined1 *)((int)puVar8 + -3) = 0xff;
  *(undefined2 *)((int)puVar8 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar5 + 0x10);
    uVar7 = *(uint *)(iVar5 + 0xc) | uVar11;
    if ((uVar9 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar3)();
    }
    if ((uVar11 == 0) || (uVar7 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar8 = (undefined4 *)FUN_016d2bc8();
      uVar13 = *puVar8;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar8 = uVar13;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar9 + uVar11;
      return;
    }
    puVar16 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar7 = *puVar16;
      if (uVar11 != uVar7) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar1);
    *puVar16 = uVar9 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar7) {
      return;
    }
  } while( true );
}

