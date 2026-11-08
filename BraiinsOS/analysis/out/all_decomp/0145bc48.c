// FUN_0145bc48 @ 0145bc48 size=248 calls_out=2 calls_in=0
// strings: 

void FUN_0145bc48(int *param_1)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint *puVar14;
  bool bVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar4 = *param_1;
  iVar2 = param_1[1];
  if (iVar4 == 5 && iVar2 == 0) {
    return;
  }
  if (iVar4 != 4 || iVar2 != 0) {
    if (iVar4 == 3 && iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0145bd20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[2] + 0x10))(param_1 + 5,param_1[3],param_1[4]);
      return;
    }
    FUN_00a517d8();
    return;
  }
  piVar6 = (int *)param_1[2];
  if (((short)piVar6[0x12] == 3) && (piVar6[0x13] != 0)) {
    (**(code **)(piVar6[0x13] + 0x10))(piVar6 + 0x16,piVar6[0x14],piVar6[0x15]);
  }
  iVar2 = piVar6[0x17];
  if (iVar2 != 0) {
    puVar12 = (undefined4 *)piVar6[0x18];
    pcVar3 = (code *)*puVar12;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(iVar2);
    }
    if (puVar12[1] != 0) {
      thunk_FUN_016d3fb4(iVar2);
    }
  }
  iVar2 = *piVar6;
  bVar15 = iVar2 != 2;
  if (bVar15) {
    iVar2 = piVar6[4];
  }
  if (bVar15 && iVar2 != 0) {
    thunk_FUN_016d3fb4(piVar6[5]);
  }
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar2 = FUN_016d3bc8();
  uVar13 = *(byte *)((int)piVar6 + -3) & 0x1f;
  if (((*(byte *)(iVar2 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar2 + 0x14) & 0xfffff000, iVar4 = uVar8 - 0x10, uVar8 == 0)) {
    iVar4 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar2 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar8 = (uint)(*(byte *)((int)piVar6 + -3) >> 5);
  iVar11 = *(int *)(iVar2 + 8) + 0x10;
  iVar9 = iVar4 * uVar13 + iVar4 + -4;
  iVar4 = iVar11 + iVar9;
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
  if (*(char *)(iVar11 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar3)();
  }
  bVar1 = *(byte *)(iVar2 + 0x14);
  uVar8 = 1 << uVar13;
  *(undefined1 *)((int)piVar6 + -3) = 0xff;
  *(undefined2 *)((int)piVar6 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar2 + 0x10);
    uVar5 = *(uint *)(iVar2 + 0xc) | uVar10;
    if ((uVar8 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar3)();
    }
    if ((uVar10 == 0) || (uVar5 + uVar8 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar2,uVar13);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar12 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar12;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar12 = uVar7;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar2 + 0x10) = uVar8 + uVar10;
      return;
    }
    puVar14 = (uint *)(iVar2 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar5 = *puVar14;
      if (uVar10 != uVar5) goto LAB_016d409c;
      bVar15 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar15);
    *puVar14 = uVar8 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar5) {
      return;
    }
  } while( true );
}

