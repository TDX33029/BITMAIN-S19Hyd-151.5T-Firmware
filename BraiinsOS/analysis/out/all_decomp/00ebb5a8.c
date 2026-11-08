// FUN_00ebb5a8 @ 00ebb5a8 size=168 calls_out=3 calls_in=2
// strings: 

void FUN_00ebb5a8(int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uStack_28;
  int iStack_24;
  
  if (param_2 == 0) {
    return;
  }
  iVar10 = 0;
  iVar12 = 0;
  do {
    iVar12 = iVar12 + 1;
    if (*(int *)(param_1 + iVar10) == 1) {
      iVar7 = param_1 + iVar10;
      puVar4 = *(undefined4 **)(iVar7 + 8);
      if (*(int *)(iVar7 + 4) == -0x80000000) {
        (**(code **)*puVar4)(puVar4);
      }
      else {
        FUN_00f15518(puVar4,*(undefined4 *)(iVar7 + 0xc));
        if (*(int *)(iVar7 + 4) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(iVar7 + 8));
        }
      }
    }
    else if (*(int *)(param_1 + iVar10) == 0) {
      FUN_00eaaab0(param_1 + iVar10 + 8);
    }
    iVar10 = iVar10 + 0x70;
  } while (param_2 != iVar12);
  if (param_1 == 0) {
    return;
  }
  iVar10 = FUN_016d3bc8();
  uVar13 = *(byte *)(param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar10 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar10 + 0x14) & 0xfffff000, iVar12 = uVar8 - 0x10, uVar8 == 0)) {
    iVar12 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar10 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar8 = (uint)(*(byte *)(param_1 + -3) >> 5);
  iVar11 = *(int *)(iVar10 + 8) + 0x10;
  iVar7 = iVar12 * uVar13 + iVar12 + -4;
  iVar12 = iVar11 + iVar7;
  if (4 < uVar8) {
    if (uVar8 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar8 = *(uint *)(iVar12 + -4);
    if (uVar8 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar12 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar12 - param_1) < uVar8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 - uVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar11 + iVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar10 + 0x14);
  uVar8 = 1 << uVar13;
  *(undefined1 *)(param_1 + -3) = 0xff;
  *(undefined2 *)(param_1 + -2) = 0;
  do {
    uVar9 = *(uint *)(iVar10 + 0x10);
    uVar5 = *(uint *)(iVar10 + 0xc) | uVar9;
    if ((uVar8 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar9 == 0) || (uVar5 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar10,uVar13);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar6 = *puVar4;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar4 = uVar6;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar10 + 0x10) = uVar8 + uVar9;
      return;
    }
    puVar14 = (uint *)(iVar10 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar5 = *puVar14;
      if (uVar9 != uVar5) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar3);
    *puVar14 = uVar8 + uVar9;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar9 == uVar5) {
      return;
    }
  } while( true );
}

