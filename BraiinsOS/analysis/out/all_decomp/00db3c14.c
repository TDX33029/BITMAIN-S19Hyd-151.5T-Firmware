// FUN_00db3c14 @ 00db3c14 size=704 calls_out=2 calls_in=5
// strings: 

void FUN_00db3c14(int param_1)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
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
  
  if (*(int *)(param_1 + 0x68) == -0x80000000 || *(int *)(param_1 + 0x68) == 0) {
    if (*(int *)(param_1 + 0x74) == -0x80000000 || *(int *)(param_1 + 0x74) == 0) goto LAB_00db3c3c;
LAB_00db3d5c:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x78));
    if (*(int *)(param_1 + 0x80) != -0x80000000 && *(int *)(param_1 + 0x80) != 0) goto LAB_00db3d74;
LAB_00db3c4c:
    if (*(int *)(param_1 + 0x8c) == -0x80000000 || *(int *)(param_1 + 0x8c) == 0) goto LAB_00db3c5c;
LAB_00db3d8c:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x90));
    if (*(int *)(param_1 + 0x98) != -0x80000000 && *(int *)(param_1 + 0x98) != 0) goto LAB_00db3da4;
LAB_00db3c6c:
    if (*(int *)(param_1 + 0xa4) == -0x80000000 || *(int *)(param_1 + 0xa4) == 0) goto LAB_00db3c7c;
LAB_00db3dbc:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xa8));
    if (*(int *)(param_1 + 0xb0) != -0x80000000 && *(int *)(param_1 + 0xb0) != 0) goto LAB_00db3dd4;
LAB_00db3c8c:
    if (*(int *)(param_1 + 0xbc) == -0x80000000 || *(int *)(param_1 + 0xbc) == 0) goto LAB_00db3c9c;
LAB_00db3dec:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc0));
    if (*(int *)(param_1 + 200) != -0x80000000 && *(int *)(param_1 + 200) != 0) goto LAB_00db3e04;
LAB_00db3cac:
    if (*(int *)(param_1 + 0xd4) == -0x80000000 || *(int *)(param_1 + 0xd4) == 0) goto LAB_00db3cbc;
LAB_00db3e1c:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xd8));
    if (*(int *)(param_1 + 0xe0) != -0x80000000 && *(int *)(param_1 + 0xe0) != 0) goto LAB_00db3e34;
LAB_00db3ccc:
    if (*(int *)(param_1 + 0xec) == -0x80000000 || *(int *)(param_1 + 0xec) == 0) goto LAB_00db3cdc;
LAB_00db3e4c:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xf0));
    if (*(int *)(param_1 + 0xf8) != -0x80000000 && *(int *)(param_1 + 0xf8) != 0) goto LAB_00db3e64;
LAB_00db3cec:
    if (*(int *)(param_1 + 0x104) == -0x80000000 || *(int *)(param_1 + 0x104) == 0)
    goto LAB_00db3cfc;
LAB_00db3e7c:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x108));
    if (*(int *)(param_1 + 0x110) != -0x80000000 && *(int *)(param_1 + 0x110) != 0)
    goto LAB_00db3e94;
LAB_00db3d0c:
    if (*(int *)(param_1 + 0x11c) == -0x80000000 || *(int *)(param_1 + 0x11c) == 0) {
LAB_00db3d1c:
      cVar1 = *(char *)(param_1 + 0x50);
      goto joined_r0x00db3ec0;
    }
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x6c));
    if (*(int *)(param_1 + 0x74) != -0x80000000 && *(int *)(param_1 + 0x74) != 0) goto LAB_00db3d5c;
LAB_00db3c3c:
    if (*(int *)(param_1 + 0x80) == -0x80000000 || *(int *)(param_1 + 0x80) == 0) goto LAB_00db3c4c;
LAB_00db3d74:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x84));
    if (*(int *)(param_1 + 0x8c) != -0x80000000 && *(int *)(param_1 + 0x8c) != 0) goto LAB_00db3d8c;
LAB_00db3c5c:
    if (*(int *)(param_1 + 0x98) == -0x80000000 || *(int *)(param_1 + 0x98) == 0) goto LAB_00db3c6c;
LAB_00db3da4:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x9c));
    if (*(int *)(param_1 + 0xa4) != -0x80000000 && *(int *)(param_1 + 0xa4) != 0) goto LAB_00db3dbc;
LAB_00db3c7c:
    if (*(int *)(param_1 + 0xb0) == -0x80000000 || *(int *)(param_1 + 0xb0) == 0) goto LAB_00db3c8c;
LAB_00db3dd4:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xb4));
    if (*(int *)(param_1 + 0xbc) != -0x80000000 && *(int *)(param_1 + 0xbc) != 0) goto LAB_00db3dec;
LAB_00db3c9c:
    if (*(int *)(param_1 + 200) == -0x80000000 || *(int *)(param_1 + 200) == 0) goto LAB_00db3cac;
LAB_00db3e04:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xcc));
    if (*(int *)(param_1 + 0xd4) != -0x80000000 && *(int *)(param_1 + 0xd4) != 0) goto LAB_00db3e1c;
LAB_00db3cbc:
    if (*(int *)(param_1 + 0xe0) == -0x80000000 || *(int *)(param_1 + 0xe0) == 0) goto LAB_00db3ccc;
LAB_00db3e34:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xe4));
    if (*(int *)(param_1 + 0xec) != -0x80000000 && *(int *)(param_1 + 0xec) != 0) goto LAB_00db3e4c;
LAB_00db3cdc:
    if (*(int *)(param_1 + 0xf8) == -0x80000000 || *(int *)(param_1 + 0xf8) == 0) goto LAB_00db3cec;
LAB_00db3e64:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xfc));
    if (*(int *)(param_1 + 0x104) != -0x80000000 && *(int *)(param_1 + 0x104) != 0)
    goto LAB_00db3e7c;
LAB_00db3cfc:
    if (*(int *)(param_1 + 0x110) == -0x80000000 || *(int *)(param_1 + 0x110) == 0)
    goto LAB_00db3d0c;
LAB_00db3e94:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x114));
    if (*(int *)(param_1 + 0x11c) == -0x80000000 || *(int *)(param_1 + 0x11c) == 0)
    goto LAB_00db3d1c;
  }
  thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x120));
  cVar1 = *(char *)(param_1 + 0x50);
joined_r0x00db3ec0:
  if (cVar1 != '\x06') {
    FUN_005c37bc();
  }
  if (*(int *)(param_1 + 0x128) == -0x80000000 || *(int *)(param_1 + 0x128) == 0) {
    return;
  }
  iVar5 = *(int *)(param_1 + 300);
  if (iVar5 == 0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar15 = *(byte *)(iVar5 + -3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar8 = uVar11 - 0x10, uVar11 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)(iVar5 + -3) >> 5);
  iVar14 = *(int *)(iVar6 + 8) + 0x10;
  iVar12 = iVar8 * uVar15 + iVar8 + -4;
  iVar8 = iVar14 + iVar12;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar11 = *(uint *)(iVar8 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar8 - iVar5) < uVar11) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar8 - uVar11) != '\0') {
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
  *(undefined1 *)(iVar5 + -3) = 0xff;
  *(undefined2 *)(iVar5 + -2) = 0;
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
      bVar4 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar4);
    *puVar16 = uVar11 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar9) {
      return;
    }
  } while( true );
}

