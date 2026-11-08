// FUN_013f0d90 @ 013f0d90 size=552 calls_out=9 calls_in=1
// strings: 

void FUN_013f0d90(uint *param_1,uint *param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint *local_2c;
  undefined1 *local_28;
  int iStack_24;
  
  uVar13 = *param_2;
  iVar4 = uVar13 - 7;
  if (uVar13 < 7) {
    iVar4 = 0;
  }
  if (iVar4 == 0) {
    uVar14 = param_2[1];
    uVar10 = param_2[2];
    *param_1 = *param_2;
    param_1[1] = uVar14;
    param_1[2] = uVar10;
    uVar14 = param_2[4];
    uVar10 = param_2[5];
    uVar11 = param_2[6];
    param_1[3] = param_2[3];
    param_1[4] = uVar14;
    param_1[5] = uVar10;
    param_1[6] = uVar11;
    goto joined_r0x013f0e14;
  }
  if (iVar4 != 1) {
    local_28 = &LAB_013f0818;
    local_2c = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00577869,&local_2c,&DAT_0189dbd0);
  }
  uVar10 = param_2[3];
  uVar14 = param_2[2];
  if (uVar10 < param_2[1]) {
    if (uVar10 == 0) {
      thunk_FUN_016d3fb4(uVar14);
LAB_013f0eb4:
      puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x34);
      if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x34);
      }
      *puVar5 = 1;
      puVar5[1] = 0;
      puVar5[2] = 1;
      puVar5[3] = 0;
      puVar5[4] = 1;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      puVar5[8] = 0;
      puVar5[9] = 0;
      puVar5[10] = 0;
      puVar5[0xb] = 0;
      *(undefined1 *)((int)puVar5 + 0x32) = 0;
      *(undefined2 *)(puVar5 + 0xc) = 1;
      *param_1 = 0;
      param_1[6] = (uint)puVar5;
      goto joined_r0x013f0e14;
    }
    uVar14 = thunk_FUN_016d4ea4(uVar14,uVar10);
    if (uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar10);
    }
  }
  else if (uVar10 == 0) goto LAB_013f0eb4;
  FUN_00fab1e0(&local_2c,uVar14,uVar10);
  puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x34);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x34);
  }
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  *(undefined2 *)((int)puVar5 + 0x31) = 0x101;
  *puVar5 = 1;
  puVar5[1] = uVar10;
  puVar5[2] = 1;
  puVar5[3] = uVar10;
  puVar5[4] = 1;
  *(byte *)(puVar5 + 0xc) = (byte)local_2c ^ 1;
  *param_1 = 1;
  param_1[1] = uVar14;
  param_1[2] = uVar10;
  param_1[6] = (uint)puVar5;
joined_r0x013f0e14:
  if (uVar13 < 9) {
    return;
  }
  iVar4 = *param_2 - 7;
  if (*param_2 < 7) {
    iVar4 = 0;
  }
  switch(iVar4) {
  case 0:
    FUN_013e0514(param_2);
    iVar4 = 0x18;
    FUN_013f106c(param_2);
    break;
  case 1:
  case 2:
  case 3:
    iVar4 = 8;
    if (param_2[1] == 0) {
      return;
    }
    break;
  default:
    return;
  }
  iVar4 = *(int *)((int)param_2 + iVar4);
  if (iVar4 == 0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar13 = *(byte *)(iVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar14 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar7 = uVar14 - 0x10, uVar14 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar14 = (uint)(*(byte *)(iVar4 + -3) >> 5);
  iVar12 = *(int *)(iVar6 + 8) + 0x10;
  iVar9 = iVar7 * uVar13 + iVar7 + -4;
  iVar7 = iVar12 + iVar9;
  if (4 < uVar14) {
    if (uVar14 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar14 = *(uint *)(iVar7 + -4);
    if (uVar14 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar7 - iVar4) < uVar14) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar7 - uVar14) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar6 + 0x14);
  uVar14 = 1 << uVar13;
  *(undefined1 *)(iVar4 + -3) = 0xff;
  *(undefined2 *)(iVar4 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar6 + 0x10);
    uVar10 = *(uint *)(iVar6 + 0xc) | uVar11;
    if ((uVar14 & uVar10) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar11 == 0) || (uVar10 + uVar14 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar6,uVar13);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar5;
      FUN_016d6ac4(local_28,iStack_24);
      *puVar5 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar6 + 0x10) = uVar14 + uVar11;
      return;
    }
    puVar15 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar10 = *puVar15;
      if (uVar11 != uVar10) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar3);
    *puVar15 = uVar14 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar10) {
      return;
    }
  } while( true );
}

