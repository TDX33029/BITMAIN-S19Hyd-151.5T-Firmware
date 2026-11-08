// FUN_01418180 @ 01418180 size=232 calls_out=4 calls_in=1
// strings: 

void FUN_01418180(int *param_1)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint *puVar14;
  bool bVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 != 3 || param_1[1] != 0) {
    FUN_0141841c(param_1);
    iVar10 = param_1[0x10];
    if (iVar10 != 0) {
      FUN_0148eea4(iVar10);
      thunk_FUN_016d3fb4(iVar10);
    }
    FUN_0141852c(param_1 + 0x12);
    return;
  }
  piVar5 = (int *)param_1[2];
  if (((short)piVar5[0x12] == 3) && (piVar5[0x13] != 0)) {
    (**(code **)(piVar5[0x13] + 0x10))(piVar5 + 0x16,piVar5[0x14],piVar5[0x15]);
  }
  iVar10 = piVar5[0x17];
  if (iVar10 != 0) {
    puVar12 = (undefined4 *)piVar5[0x18];
    pcVar2 = (code *)*puVar12;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(iVar10);
    }
    if (puVar12[1] != 0) {
      thunk_FUN_016d3fb4(iVar10);
    }
  }
  iVar10 = *piVar5;
  bVar15 = iVar10 != 2;
  if (bVar15) {
    iVar10 = piVar5[4];
  }
  if (bVar15 && iVar10 != 0) {
    thunk_FUN_016d3fb4(piVar5[5]);
  }
  if (piVar5 == (int *)0x0) {
    return;
  }
  iVar10 = FUN_016d3bc8();
  uVar13 = *(byte *)((int)piVar5 + -3) & 0x1f;
  if (((*(byte *)(iVar10 + 0x14) & 0x1f) != 0) ||
     (uVar7 = *(uint *)(iVar10 + 0x14) & 0xfffff000, iVar3 = uVar7 - 0x10, uVar7 == 0)) {
    iVar3 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar10 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar7 = (uint)(*(byte *)((int)piVar5 + -3) >> 5);
  iVar11 = *(int *)(iVar10 + 8) + 0x10;
  iVar8 = iVar3 * uVar13 + iVar3 + -4;
  iVar3 = iVar11 + iVar8;
  if (4 < uVar7) {
    if (uVar7 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar7 = *(uint *)(iVar3 + -4);
    if (uVar7 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar3 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar3 - (int)piVar5) < uVar7) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar3 - uVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar11 + iVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar1 = *(byte *)(iVar10 + 0x14);
  uVar7 = 1 << uVar13;
  *(undefined1 *)((int)piVar5 + -3) = 0xff;
  *(undefined2 *)((int)piVar5 + -2) = 0;
  do {
    uVar9 = *(uint *)(iVar10 + 0x10);
    uVar4 = *(uint *)(iVar10 + 0xc) | uVar9;
    if ((uVar7 & uVar4) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar9 == 0) || (uVar4 + uVar7 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar10,uVar13);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar12 = (undefined4 *)FUN_016d2bc8();
      uVar6 = *puVar12;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar12 = uVar6;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar10 + 0x10) = uVar7 + uVar9;
      return;
    }
    puVar14 = (uint *)(iVar10 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar4 = *puVar14;
      if (uVar9 != uVar4) goto LAB_016d409c;
      bVar15 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar15);
    *puVar14 = uVar7 + uVar9;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar9 == uVar4) {
      return;
    }
  } while( true );
}

