// FUN_00fef754 @ 00fef754 size=204 calls_out=4 calls_in=0
// strings: 

void FUN_00fef754(int *param_1,int *param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 unaff_r4;
  undefined4 uVar6;
  undefined4 unaff_r5;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_013c3e44();
  }
  puVar11 = (undefined4 *)param_2[0xbd];
  iVar3 = param_2[0xbc];
  pcVar4 = (code *)*puVar11;
  local_18 = unaff_r4;
  uStack_14 = unaff_r5;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(iVar3);
  }
  if (puVar11[1] != 0) {
    thunk_FUN_016d3fb4(iVar3);
  }
  iVar12 = param_2[0xc1] + 1;
  iVar3 = param_2[0xc0];
  while (iVar12 = iVar12 + -1, iVar12 != 0) {
    FUN_00ffd740(iVar3);
    iVar3 = iVar3 + 0x40;
  }
  if (param_2[0xbf] != 0) {
    thunk_FUN_016d3fb4(param_2[0xc0]);
  }
  if (*param_2 != 2) {
    FUN_00ff029c(param_2);
  }
  uStack_1c = local_18;
  if (param_2 == (int *)0x0) {
    return;
  }
  local_18 = uStack_14;
  iVar3 = FUN_016d3bc8();
  uVar13 = *(byte *)((int)param_2 + -3) & 0x1f;
  if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
     (uVar7 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar12 = uVar7 - 0x10, uVar7 == 0)) {
    iVar12 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar7 = (uint)(*(byte *)((int)param_2 + -3) >> 5);
  iVar10 = *(int *)(iVar3 + 8) + 0x10;
  iVar8 = iVar12 * uVar13 + iVar12 + -4;
  iVar12 = iVar10 + iVar8;
  if (4 < uVar7) {
    if (uVar7 != 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar4)();
    }
    uVar7 = *(uint *)(iVar12 + -4);
    if (uVar7 < 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar4)();
    }
    if (*(char *)(iVar12 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar4)();
    }
  }
  if ((uint)(iVar12 - (int)param_2) < uVar7) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar4)();
  }
  if (*(char *)(iVar12 - uVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar4)();
  }
  if (*(char *)(iVar10 + iVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar4)();
  }
  bVar2 = *(byte *)(iVar3 + 0x14);
  uVar7 = 1 << uVar13;
  *(undefined1 *)((int)param_2 + -3) = 0xff;
  *(undefined2 *)((int)param_2 + -2) = 0;
  do {
    uVar9 = *(uint *)(iVar3 + 0x10);
    uVar5 = *(uint *)(iVar3 + 0xc) | uVar9;
    if ((uVar7 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar4)();
    }
    if ((uVar9 == 0) || (uVar5 + uVar7 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar3,uVar13);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar11 = (undefined4 *)FUN_016d2bc8();
      uVar6 = *puVar11;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar11 = uVar6;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar3 + 0x10) = uVar7 + uVar9;
      return;
    }
    puVar14 = (uint *)(iVar3 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar5 = *puVar14;
      if (uVar9 != uVar5) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar1);
    *puVar14 = uVar7 + uVar9;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar9 == uVar5) {
      return;
    }
  } while( true );
}

