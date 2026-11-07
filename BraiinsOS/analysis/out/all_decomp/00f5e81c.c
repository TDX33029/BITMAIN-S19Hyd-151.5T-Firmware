// FUN_00f5e81c @ 00f5e81c size=264 calls_out=5 calls_in=2
// strings: 

void FUN_00f5e81c(undefined4 *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar14 = (param_5 - param_4) + param_6;
  piVar4 = (int *)thunk_FUN_016d4a50(0xc);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *piVar4 = param_4;
  piVar4[1] = iVar14;
  piVar4[2] = 2;
  iVar7 = *param_2;
  if (iVar7 == param_3) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(param_2);
      if (bVar1) {
        *param_2 = (int)piVar4;
        DataMemoryBarrier(0xb);
        param_1[2] = param_6;
        param_1[3] = piVar4;
        *param_1 = &PTR_FUN_0187f9c8;
        param_1[1] = param_5;
        return;
      }
      iVar7 = *param_2;
    } while (iVar7 == param_3);
  }
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  piVar8 = (int *)(iVar7 + 8);
  do {
    iVar9 = *piVar8;
    iVar13 = iVar9 + 1;
    bVar1 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar1);
  *piVar8 = iVar13;
  if (iVar9 < 0) {
    uVar5 = FUN_00f6015c();
    FUN_00f5ea5c(iVar13,iVar14);
                    /* WARNING: Subroutine does not return */
    FUN_01842e60(uVar5);
  }
  param_1[2] = param_6;
  param_1[3] = iVar7;
  *param_1 = &PTR_FUN_0187f9c8;
  param_1[1] = param_5;
  if (piVar4 == (int *)0x0) {
    return;
  }
  iVar14 = FUN_016d3bc8();
  uVar15 = *(byte *)((int)piVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar14 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar14 + 0x14) & 0xfffff000, iVar7 = uVar11 - 0x10, uVar11 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar14 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)((int)piVar4 + -3) >> 5);
  iVar13 = *(int *)(iVar14 + 8) + 0x10;
  iVar9 = iVar7 * uVar15 + iVar7 + -4;
  iVar7 = iVar13 + iVar9;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar11 = *(uint *)(iVar7 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar7 - (int)piVar4) < uVar11) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar7 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar13 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar14 + 0x14);
  uVar11 = 1 << uVar15;
  *(undefined1 *)((int)piVar4 + -3) = 0xff;
  *(undefined2 *)((int)piVar4 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar14 + 0x10);
    uVar10 = *(uint *)(iVar14 + 0xc) | uVar12;
    if ((uVar11 & uVar10) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar12 == 0) || (uVar10 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar14,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar5 = *puVar6;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar6 = uVar5;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar14 + 0x10) = uVar11 + uVar12;
      return;
    }
    puVar16 = (uint *)(iVar14 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar10 = *puVar16;
      if (uVar12 != uVar10) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar1);
    *puVar16 = uVar11 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar10) {
      return;
    }
  } while( true );
}

