// FUN_00d90e4c @ 00d90e4c size=120 calls_out=1 calls_in=0
// strings: 

void FUN_00d90e4c(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  piVar14 = (int *)param_1[1];
  if (param_1[2] != 0) {
    iVar13 = 1 - param_1[2];
    piVar11 = piVar14;
    do {
      if (*piVar11 == 2 && piVar11[1] == 0) {
        (*(code *)**(undefined4 **)piVar11[2])();
      }
      else {
        FUN_00f247dc(piVar11);
      }
      iVar13 = iVar13 + 1;
      piVar11 = piVar11 + 0x44;
    } while (iVar13 != 1);
  }
  if (*param_1 == 0) {
    return;
  }
  if (piVar14 == (int *)0x0) {
    return;
  }
  iVar13 = FUN_016d3bc8();
  uVar15 = *(byte *)((int)piVar14 + -3) & 0x1f;
  if (((*(byte *)(iVar13 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar13 + 0x14) & 0xfffff000, iVar5 = uVar8 - 0x10, uVar8 == 0)) {
    iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar13 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar8 = (uint)(*(byte *)((int)piVar14 + -3) >> 5);
  iVar12 = *(int *)(iVar13 + 8) + 0x10;
  iVar9 = iVar5 * uVar15 + iVar5 + -4;
  iVar5 = iVar12 + iVar9;
  if (4 < uVar8) {
    if (uVar8 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar8 = *(uint *)(iVar5 + -4);
    if (uVar8 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar5 - (int)piVar14) < uVar8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar5 - uVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar13 + 0x14);
  uVar8 = 1 << uVar15;
  *(undefined1 *)((int)piVar14 + -3) = 0xff;
  *(undefined2 *)((int)piVar14 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar13 + 0x10);
    uVar6 = *(uint *)(iVar13 + 0xc) | uVar10;
    if ((uVar8 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar10 == 0) || (uVar6 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar13,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar4;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar4 = uVar7;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar13 + 0x10) = uVar8 + uVar10;
      return;
    }
    puVar16 = (uint *)(iVar13 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar6 = *puVar16;
      if (uVar10 != uVar6) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar3);
    *puVar16 = uVar8 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar6) {
      return;
    }
  } while( true );
}

