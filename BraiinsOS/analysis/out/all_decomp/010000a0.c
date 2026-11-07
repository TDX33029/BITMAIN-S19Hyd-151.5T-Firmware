// FUN_010000a0 @ 010000a0 size=304 calls_out=2 calls_in=1
// strings: 

void FUN_010000a0(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar13 = *param_1;
  if (iVar13 != -0x80000000) {
    FUN_00ffda98(param_1);
    if (iVar13 == 0) {
      return;
    }
    piVar5 = (int *)param_1[1];
    goto LAB_014b47f4;
  }
  uVar4 = param_1[1];
  iVar13 = uVar4 - 0xf;
  if (uVar4 < 0xf) {
    iVar13 = 0;
  }
  if (iVar13 != 1) {
    if (iVar13 == 0) {
      if ((1 << (uVar4 & 0xff) & 0x7bdeU) != 0) {
        return;
      }
      if (param_1[2] != 0) {
        piVar5 = (int *)param_1[3];
        goto LAB_014b47f4;
      }
    }
    return;
  }
  piVar5 = (int *)param_1[2];
  iVar13 = *piVar5;
  uVar4 = 0;
  if (iVar13 != 0) {
    uVar4 = iVar13 - 1;
  }
  iVar7 = 4;
  if (uVar4 < 8) {
    if ((1 << (uVar4 & 0xff) & 0xd6U) != 0) goto LAB_014b47f4;
    if (uVar4 != 0) goto LAB_01000190;
    if (iVar13 == 0) {
      uVar4 = piVar5[2];
LAB_01000184:
      iVar7 = 0x24;
      if (uVar4 == 0x22) {
        iVar7 = 0xc;
      }
      goto LAB_01000190;
    }
    uVar4 = piVar5[2];
    iVar13 = uVar4 - 0x22;
    if (uVar4 < 0x22) {
      iVar13 = 0;
    }
    if (iVar13 != 1) {
      if (iVar13 != 0) goto LAB_014b47f4;
      goto LAB_01000184;
    }
    iVar13 = piVar5[4];
    iVar7 = 0x10;
    if (iVar13 < -0x7ffffffc) goto LAB_014b47f4;
  }
  else {
LAB_01000190:
    iVar13 = *(int *)((int)piVar5 + iVar7);
  }
  if (iVar13 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)((int)piVar5 + iVar7 + 4));
  }
LAB_014b47f4:
  if (piVar5 == (int *)0x0) {
    return;
  }
  iVar13 = FUN_016d3bc8();
  uVar4 = *(byte *)((int)piVar5 + -3) & 0x1f;
  if (((*(byte *)(iVar13 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar13 + 0x14) & 0xfffff000, iVar7 = uVar10 - 0x10, uVar10 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar13 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)((int)piVar5 + -3) >> 5);
  iVar14 = *(int *)(iVar13 + 8) + 0x10;
  iVar11 = iVar7 * uVar4 + iVar7 + -4;
  iVar7 = iVar14 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar10 = *(uint *)(iVar7 + -4);
    if (uVar10 < 5) {
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
  if ((uint)(iVar7 - (int)piVar5) < uVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar7 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar14 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar13 + 0x14);
  uVar10 = 1 << uVar4;
  *(undefined1 *)((int)piVar5 + -3) = 0xff;
  *(undefined2 *)((int)piVar5 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar13 + 0x10);
    uVar8 = *(uint *)(iVar13 + 0xc) | uVar12;
    if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar8 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar13,uVar4);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar6;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar6 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar13 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar15 = (uint *)(iVar13 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar8 = *puVar15;
      if (uVar12 != uVar8) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar3);
    *puVar15 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar8) {
      return;
    }
  } while( true );
}

