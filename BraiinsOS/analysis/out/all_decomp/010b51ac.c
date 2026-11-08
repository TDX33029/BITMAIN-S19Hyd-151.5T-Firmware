// FUN_010b51ac @ 010b51ac size=184 calls_out=1 calls_in=4
// strings: 

void FUN_010b51ac(int *param_1)

{
  byte bVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  piVar6 = (int *)*param_1;
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)param_1[1];
    iVar12 = *piVar6;
    if (iVar12 != 0) {
      puVar11 = (undefined4 *)piVar6[1];
      pcVar3 = (code *)*puVar11;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(iVar12);
      }
      if (puVar11[1] != 0) {
        thunk_FUN_016d3fb4(iVar12);
      }
    }
  }
  else {
    if (param_1[2] != 0) {
      (**(code **)(param_1[2] + 0x10))(param_1 + 5,param_1[3],param_1[4]);
      piVar6 = (int *)*param_1;
    }
    puVar11 = (undefined4 *)param_1[1];
    pcVar3 = (code *)*puVar11;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(piVar6);
    }
    if (puVar11[1] == 0) {
      return;
    }
  }
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar12 = FUN_016d3bc8();
  uVar14 = *(byte *)((int)piVar6 + -3) & 0x1f;
  if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar4 = uVar8 - 0x10, uVar8 == 0)) {
    iVar4 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar8 = (uint)(*(byte *)((int)piVar6 + -3) >> 5);
  iVar13 = *(int *)(iVar12 + 8) + 0x10;
  iVar9 = iVar4 * uVar14 + iVar4 + -4;
  iVar4 = iVar13 + iVar9;
  if (4 < uVar8) {
    if (uVar8 != 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar3)();
    }
    uVar8 = *(uint *)(iVar4 + -4);
    if (uVar8 < 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar3)();
    }
    if (*(char *)(iVar4 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar3)();
    }
  }
  if ((uint)(iVar4 - (int)piVar6) < uVar8) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar3)();
  }
  if (*(char *)(iVar4 - uVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar3)();
  }
  if (*(char *)(iVar13 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar3)();
  }
  bVar1 = *(byte *)(iVar12 + 0x14);
  uVar8 = 1 << uVar14;
  *(undefined1 *)((int)piVar6 + -3) = 0xff;
  *(undefined2 *)((int)piVar6 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar12 + 0x10);
    uVar5 = *(uint *)(iVar12 + 0xc) | uVar10;
    if ((uVar8 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar3)();
    }
    if ((uVar10 == 0) || (uVar5 + uVar8 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar12,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar11 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar11;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar11 = uVar7;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar12 + 0x10) = uVar8 + uVar10;
      return;
    }
    puVar15 = (uint *)(iVar12 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar5 = *puVar15;
      if (uVar10 != uVar5) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar2);
    *puVar15 = uVar8 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar5) {
      return;
    }
  } while( true );
}

