// FUN_014d198c @ 014d198c size=176 calls_out=1 calls_in=1
// strings: 

void FUN_014d198c(int *param_1)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint *puVar13;
  bool bVar14;
  undefined4 uStack_28;
  int iStack_24;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if (((short)param_1[0x12] == 3) && (param_1[0x13] != 0)) {
    (**(code **)(param_1[0x13] + 0x10))(param_1 + 0x16,param_1[0x14],param_1[0x15]);
  }
  iVar9 = param_1[0x17];
  if (iVar9 != 0) {
    puVar11 = (undefined4 *)param_1[0x18];
    pcVar2 = (code *)*puVar11;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(iVar9);
    }
    if (puVar11[1] != 0) {
      thunk_FUN_016d3fb4(iVar9);
    }
  }
  iVar9 = *param_1;
  bVar14 = iVar9 != 2;
  if (bVar14) {
    iVar9 = param_1[4];
  }
  if (bVar14 && iVar9 != 0) {
    thunk_FUN_016d3fb4(param_1[5]);
  }
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar9 = FUN_016d3bc8();
  uVar12 = *(byte *)((int)param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
     (uVar6 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar3 = uVar6 - 0x10, uVar6 == 0)) {
    iVar3 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar6 = (uint)(*(byte *)((int)param_1 + -3) >> 5);
  iVar10 = *(int *)(iVar9 + 8) + 0x10;
  iVar7 = iVar3 * uVar12 + iVar3 + -4;
  iVar3 = iVar10 + iVar7;
  if (4 < uVar6) {
    if (uVar6 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar6 = *(uint *)(iVar3 + -4);
    if (uVar6 < 5) {
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
  if ((uint)(iVar3 - (int)param_1) < uVar6) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar3 - uVar6) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar10 + iVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar1 = *(byte *)(iVar9 + 0x14);
  uVar6 = 1 << uVar12;
  *(undefined1 *)((int)param_1 + -3) = 0xff;
  *(undefined2 *)((int)param_1 + -2) = 0;
  do {
    uVar8 = *(uint *)(iVar9 + 0x10);
    uVar4 = *(uint *)(iVar9 + 0xc) | uVar8;
    if ((uVar6 & uVar4) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar8 == 0) || (uVar4 + uVar6 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar9,uVar12);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar11 = (undefined4 *)FUN_016d2bc8();
      uVar5 = *puVar11;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar11 = uVar5;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar9 + 0x10) = uVar6 + uVar8;
      return;
    }
    puVar13 = (uint *)(iVar9 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar13);
      uVar4 = *puVar13;
      if (uVar8 != uVar4) goto LAB_016d409c;
      bVar14 = (bool)hasExclusiveAccess(puVar13);
    } while (!bVar14);
    *puVar13 = uVar6 + uVar8;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar8 == uVar4) {
      return;
    }
  } while( true );
}

