// FUN_009be88c @ 009be88c size=420 calls_out=4 calls_in=2
// strings: 

void FUN_009be88c(int *param_1,int *param_2)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  bool bVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  undefined *local_18;
  undefined4 *local_14;
  
  if (param_2 == (int *)0xffffffff) {
LAB_009be8fc:
    if (param_1[2] != 0) {
      thunk_FUN_016d3fb4(param_1[3]);
    }
    if (param_1[5] != 0) {
      thunk_FUN_016d3fb4(param_1[6]);
    }
    if (param_1[8] != 0) {
      thunk_FUN_016d3fb4(param_1[9]);
    }
    if (param_1[0xb] != 0) {
      thunk_FUN_016d3fb4(param_1[0xc]);
    }
  }
  else {
    iVar6 = *param_2;
    do {
      if (iVar6 == 0) goto LAB_009be8fc;
      if (iVar6 < 0) {
        local_14 = &DAT_0157d360;
        local_18 = &DAT_018ae270;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00590e71,&local_18,&DAT_018ae288);
      }
      iVar5 = *param_2;
      if (iVar5 == iVar6) {
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
      iVar6 = iVar5;
    } while (!bVar8);
    FUN_009cdaa8(param_2 + 2,0,param_1);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *param_2;
      bVar8 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar8);
    *param_2 = iVar6 + -1;
    if (iVar6 != 1) {
      return;
    }
    DataMemoryBarrier(0xb);
    FUN_009be29c(param_2[2]);
    thunk_FUN_016d3fb4(param_2[2]);
    if (param_2 == (int *)0xffffffff) {
      return;
    }
    piVar4 = param_2 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar8 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar8);
    *piVar4 = iVar6 + -1;
    if (iVar6 != 1) {
      return;
    }
    DataMemoryBarrier(0xb);
    param_1 = param_2;
  }
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar15 = *(byte *)((int)param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar5 = uVar11 - 0x10, uVar11 == 0)) {
    iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)((int)param_1 + -3) >> 5);
  iVar14 = *(int *)(iVar6 + 8) + 0x10;
  iVar12 = iVar5 * uVar15 + iVar5 + -4;
  iVar5 = iVar14 + iVar12;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar11 = *(uint *)(iVar5 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar5 - (int)param_1) < uVar11) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar5 - uVar11) != '\0') {
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
  uVar11 = 1 << uVar15;
  *(undefined1 *)((int)param_1 + -3) = 0xff;
  *(undefined2 *)((int)param_1 + -2) = 0;
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
      FUN_016d3ca8(&uStack_28,iVar6,uVar15);
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
    puVar16 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar9 = *puVar16;
      if (uVar13 != uVar9) goto LAB_016d409c;
      bVar8 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar8);
    *puVar16 = uVar11 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar9) {
      return;
    }
  } while( true );
}

