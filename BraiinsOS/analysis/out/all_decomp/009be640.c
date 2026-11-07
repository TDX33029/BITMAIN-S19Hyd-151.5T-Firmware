// FUN_009be640 @ 009be640 size=364 calls_out=4 calls_in=2
// strings: 

void FUN_009be640(int param_1,int *param_2)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  bool bVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  undefined *local_18;
  undefined4 *local_14;
  
  if (param_2 != (int *)0xffffffff) {
    iVar6 = *param_2;
    while (iVar6 != 0) {
      if (iVar6 < 0) {
        local_14 = &DAT_0157d360;
        local_18 = &DAT_018ae270;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00590e71,&local_18,&DAT_018ae288);
      }
      iVar4 = *param_2;
      if (iVar4 == iVar6) {
        bVar1 = (bool)hasExclusiveAccess(param_2);
        if (bVar1) {
          *param_2 = iVar6 + 1;
        }
        bVar8 = false;
        if (bVar1) {
          DataMemoryBarrier(0xb);
          bVar8 = true;
        }
      }
      else {
        bVar8 = false;
        ClearExclusiveLocal();
      }
      iVar6 = iVar4;
      if (bVar8) {
        FUN_009cdc90(param_2 + 2,0,param_1);
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *param_2;
          bVar8 = (bool)hasExclusiveAccess(param_2);
        } while (!bVar8);
        *param_2 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_009ba748(param_2);
          return;
        }
        return;
      }
    }
  }
  if ((*(uint *)(param_1 + 4) & 0x7fffffff) == 0) {
    uVar5 = *(uint *)(param_1 + 0x10);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 8));
    uVar5 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar5 & 0x7fffffff) == 0) {
    uVar5 = *(uint *)(param_1 + 0x1c);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x14));
    uVar5 = *(uint *)(param_1 + 0x1c);
  }
  if ((uVar5 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x20));
  }
  if (param_1 == 0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar5 = *(byte *)(param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar4 = uVar11 - 0x10, uVar11 == 0)) {
    iVar4 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)(param_1 + -3) >> 5);
  iVar14 = *(int *)(iVar6 + 8) + 0x10;
  iVar12 = iVar4 * uVar5 + iVar4 + -4;
  iVar4 = iVar14 + iVar12;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar11 = *(uint *)(iVar4 + -4);
    if (uVar11 < 5) {
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
  if ((uint)(iVar4 - param_1) < uVar11) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar4 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar6 + 0x14);
  uVar11 = 1 << uVar5;
  *(undefined1 *)(param_1 + -3) = 0xff;
  *(undefined2 *)(param_1 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar6 + 0x10);
    uVar9 = *(uint *)(iVar6 + 0xc) | uVar13;
    if ((uVar11 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar13 == 0) || (uVar9 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar6,uVar5);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar7 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar7;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar7 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar6 + 0x10) = uVar11 + uVar13;
      return;
    }
    puVar15 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar9 = *puVar15;
      if (uVar13 != uVar9) goto LAB_016d409c;
      bVar8 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar8);
    *puVar15 = uVar11 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar9) {
      return;
    }
  } while( true );
}

