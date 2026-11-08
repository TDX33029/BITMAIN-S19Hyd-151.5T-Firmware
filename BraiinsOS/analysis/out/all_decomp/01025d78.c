// FUN_01025d78 @ 01025d78 size=344 calls_out=3 calls_in=1
// strings: 

void FUN_01025d78(int param_1,byte *param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined *puStack_30;
  undefined4 *puStack_2c;
  int iStack_28;
  int local_24;
  
  bVar1 = *param_2;
  if (bVar1 == 1) {
    if (param_2[1] != 0) {
      piVar12 = (int *)&DAT_0041860c;
      goto LAB_01025dcc;
    }
    piVar12 = &DAT_00567da8;
LAB_01025dfc:
    iVar13 = 4;
    if (*piVar12 != 0x70747468) goto LAB_01025e14;
    puVar11 = &DAT_00567da8;
LAB_01025e40:
    local_24 = 0;
    puStack_30 = &DAT_01882d00;
    iVar4 = *(int *)(param_1 + 0x14);
    puStack_2c = puVar11;
    iStack_28 = iVar13;
  }
  else {
    if (bVar1 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_0188506c);
    }
    piVar12 = *(int **)(*(int *)(param_2 + 4) + 4);
    iVar13 = *(int *)(*(int *)(param_2 + 4) + 8);
    if (iVar13 == 5) {
LAB_01025dcc:
      iVar13 = 5;
      puVar11 = (undefined4 *)&DAT_0041860c;
      iVar4 = thunk_FUN_016dd50a(piVar12,&DAT_0041860c,5);
      if (iVar4 == 0) goto LAB_01025e40;
    }
    else if (iVar13 == 4) goto LAB_01025dfc;
LAB_01025e14:
    FUN_00f5eea8(&puStack_30,piVar12,iVar13);
    iVar4 = *(int *)(param_1 + 0x14);
  }
  if (iVar4 != 0) {
    (**(code **)(iVar4 + 0x10))
              (param_1 + 0x20,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  }
  piVar12 = *(int **)(param_2 + 4);
  *(undefined **)(param_1 + 0x14) = puStack_30;
  *(undefined4 **)(param_1 + 0x18) = puStack_2c;
  *(int *)(param_1 + 0x1c) = iStack_28;
  *(int *)(param_1 + 0x20) = local_24;
  if (bVar1 < 2) {
    return;
  }
  (**(code **)(*piVar12 + 0x10))(piVar12 + 3,piVar12[1],piVar12[2]);
  if (piVar12 == (int *)0x0) {
    return;
  }
  iVar13 = FUN_016d3bc8();
  uVar14 = *(byte *)((int)piVar12 + -3) & 0x1f;
  if (((*(byte *)(iVar13 + 0x14) & 0x1f) != 0) ||
     (uVar7 = *(uint *)(iVar13 + 0x14) & 0xfffff000, iVar4 = uVar7 - 0x10, uVar7 == 0)) {
    iVar4 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar13 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar7 = (uint)(*(byte *)((int)piVar12 + -3) >> 5);
  iVar10 = *(int *)(iVar13 + 8) + 0x10;
  iVar8 = iVar4 * uVar14 + iVar4 + -4;
  iVar4 = iVar10 + iVar8;
  if (4 < uVar7) {
    if (uVar7 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar7 = *(uint *)(iVar4 + -4);
    if (uVar7 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar4 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar4 - (int)piVar12) < uVar7) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar4 - uVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar10 + iVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar1 = *(byte *)(iVar13 + 0x14);
  uVar7 = 1 << uVar14;
  *(undefined1 *)((int)piVar12 + -3) = 0xff;
  *(undefined2 *)((int)piVar12 + -2) = 0;
  do {
    uVar9 = *(uint *)(iVar13 + 0x10);
    uVar5 = *(uint *)(iVar13 + 0xc) | uVar9;
    if ((uVar7 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar9 == 0) || (uVar5 + uVar7 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&iStack_28,iVar13,uVar14);
      iVar13 = local_24;
      FUN_016dddc0(&DAT_018ddd48);
      if (iVar13 == 0) {
        return;
      }
      puVar11 = (undefined4 *)FUN_016d2bc8();
      uVar6 = *puVar11;
      FUN_016d6ac4(iStack_28,iVar13);
      *puVar11 = uVar6;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar13 + 0x10) = uVar7 + uVar9;
      return;
    }
    puVar15 = (uint *)(iVar13 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar5 = *puVar15;
      if (uVar9 != uVar5) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar3);
    *puVar15 = uVar7 + uVar9;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar9 == uVar5) {
      return;
    }
  } while( true );
}

