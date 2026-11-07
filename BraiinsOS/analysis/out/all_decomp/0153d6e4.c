// FUN_0153d6e4 @ 0153d6e4 size=384 calls_out=3 calls_in=2
// strings: 

void FUN_0153d6e4(int param_1)

{
  bool bVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  piVar3 = *(int **)(param_1 + 0xf8);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01561b24(*(undefined4 *)(param_1 + 0xf8));
  }
  *(undefined1 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0xc9) = 0;
  *(undefined1 *)(param_1 + 0xca) = 0;
  *(undefined1 *)(param_1 + 0xcb) = 0;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  *(undefined1 *)(param_1 + 0xcd) = 0;
  *(undefined1 *)(param_1 + 0xce) = 0;
  *(undefined1 *)(param_1 + 0xcf) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined1 *)(param_1 + 0xd1) = 0;
  *(undefined1 *)(param_1 + 0xd2) = 0;
  *(undefined1 *)(param_1 + 0xd3) = 0;
  *(undefined1 *)(param_1 + 0xd4) = 0;
  *(undefined1 *)(param_1 + 0xd5) = 0;
  *(undefined1 *)(param_1 + 0xd6) = 0;
  *(undefined1 *)(param_1 + 0xd7) = 0;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)(param_1 + 0xd9) = 0;
  *(undefined1 *)(param_1 + 0xda) = 0;
  *(undefined1 *)(param_1 + 0xdb) = 0;
  *(undefined1 *)(param_1 + 0xdc) = 0;
  *(undefined1 *)(param_1 + 0xdd) = 0;
  *(undefined1 *)(param_1 + 0xde) = 0;
  *(undefined1 *)(param_1 + 0xdf) = 0;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  *(undefined1 *)(param_1 + 0xe1) = 0;
  *(undefined1 *)(param_1 + 0xe2) = 0;
  *(undefined1 *)(param_1 + 0xe3) = 0;
  *(undefined1 *)(param_1 + 0xe4) = 0;
  *(undefined1 *)(param_1 + 0xe5) = 0;
  *(undefined1 *)(param_1 + 0xe6) = 0;
  *(undefined1 *)(param_1 + 0xe7) = 0;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  *(undefined1 *)(param_1 + 0xe9) = 0;
  *(undefined1 *)(param_1 + 0xea) = 0;
  *(undefined1 *)(param_1 + 0xeb) = 0;
  *(undefined1 *)(param_1 + 0xec) = 0;
  *(undefined1 *)(param_1 + 0xed) = 0;
  *(undefined1 *)(param_1 + 0xee) = 0;
  *(undefined1 *)(param_1 + 0xef) = 0;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  *(undefined1 *)(param_1 + 0xf1) = 0;
  *(undefined1 *)(param_1 + 0xf2) = 0;
  *(undefined1 *)(param_1 + 0xf3) = 0;
  *(undefined1 *)(param_1 + 0xf4) = 0;
  *(undefined1 *)(param_1 + 0xf5) = 0;
  *(undefined1 *)(param_1 + 0xf6) = 0;
  *(undefined1 *)(param_1 + 0xf7) = 0;
  if (*(int *)(param_1 + 0x24) != -0x80000000) {
    FUN_015376c0(param_1);
  }
  if ((*(char *)(param_1 + 0xfc) == '\0') && ((*(uint *)(param_1 + 0x100) & 0x7fffffff) != 0)) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x104));
  }
  puVar14 = *(undefined4 **)(param_1 + 0x128);
  uVar12 = *(undefined4 *)(param_1 + 0x124);
  pcVar6 = (code *)*puVar14;
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(uVar12);
  }
  if (puVar14[1] != 0) {
    thunk_FUN_016d3fb4(uVar12);
  }
  if ((*(uint *)(param_1 + 0x110) & 0x7fffffff) == 0) {
    return;
  }
  iVar5 = *(int *)(param_1 + 0x114);
  if (iVar5 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar15 = *(byte *)(iVar5 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar7 = uVar9 - 0x10, uVar9 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)(iVar5 + -3) >> 5);
  iVar13 = *(int *)(iVar4 + 8) + 0x10;
  iVar10 = iVar7 * uVar15 + iVar7 + -4;
  iVar7 = iVar13 + iVar10;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar6)();
    }
    uVar9 = *(uint *)(iVar7 + -4);
    if (uVar9 < 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar6)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar6)();
    }
  }
  if ((uint)(iVar7 - iVar5) < uVar9) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar6)();
  }
  if (*(char *)(iVar7 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar6)();
  }
  if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar6)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar9 = 1 << uVar15;
  *(undefined1 *)(iVar5 + -3) = 0xff;
  *(undefined2 *)(iVar5 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar4 + 0x10);
    uVar8 = *(uint *)(iVar4 + 0xc) | uVar11;
    if ((uVar9 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar6)();
    }
    if ((uVar11 == 0) || (uVar8 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar14 = (undefined4 *)FUN_016d2bc8();
      uVar12 = *puVar14;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar14 = uVar12;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar9 + uVar11;
      return;
    }
    puVar16 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar8 = *puVar16;
      if (uVar11 != uVar8) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar1);
    *puVar16 = uVar9 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar8) {
      return;
    }
  } while( true );
}

