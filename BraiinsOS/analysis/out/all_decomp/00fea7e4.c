// FUN_00fea7e4 @ 00fea7e4 size=276 calls_out=1 calls_in=1
// strings: 

void FUN_00fea7e4(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
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
  
  uVar6 = *param_1;
  if (uVar6 == 0x12) {
    return;
  }
  iVar7 = uVar6 - 0xf;
  if (uVar6 < 0xf) {
    iVar7 = 0;
  }
  if (iVar7 != 1) {
    if (iVar7 != 0) {
      return;
    }
    if ((1 << (uVar6 & 0xff) & 0x7bdeU) != 0) {
      return;
    }
    if (param_1[1] == 0) {
      return;
    }
    piVar4 = (int *)param_1[2];
    goto LAB_014b47f4;
  }
  piVar4 = (int *)param_1[1];
  iVar14 = 4;
  iVar7 = *piVar4;
  uVar6 = 0;
  if (iVar7 != 0) {
    uVar6 = iVar7 - 1;
  }
  if (uVar6 < 8) {
    if ((1 << (uVar6 & 0xff) & 0xd6U) != 0) goto LAB_014b47f4;
    if (uVar6 != 0) goto LAB_00fea8b8;
    if (iVar7 == 0) {
      uVar6 = piVar4[2];
LAB_00fea8b4:
      iVar14 = 0x24;
      if (uVar6 == 0x22) {
        iVar14 = 0xc;
      }
      goto LAB_00fea8b8;
    }
    uVar6 = piVar4[2];
    iVar7 = uVar6 - 0x22;
    if (uVar6 < 0x22) {
      iVar7 = 0;
    }
    if (iVar7 != 1) {
      if (iVar7 != 0) goto LAB_014b47f4;
      goto LAB_00fea8b4;
    }
    iVar7 = piVar4[4];
    iVar14 = 0x10;
    if (iVar7 < -0x7ffffffc) goto LAB_014b47f4;
  }
  else {
LAB_00fea8b8:
    iVar7 = *(int *)((int)piVar4 + iVar14);
  }
  if (iVar7 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)((int)piVar4 + iVar14 + 4));
  }
LAB_014b47f4:
  if (piVar4 == (int *)0x0) {
    return;
  }
  iVar7 = FUN_016d3bc8();
  uVar6 = *(byte *)((int)piVar4 - 3) & 0x1f;
  if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar14 = uVar10 - 0x10, uVar10 == 0)) {
    iVar14 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)((int)piVar4 - 3) >> 5);
  iVar13 = *(int *)(iVar7 + 8) + 0x10;
  iVar11 = iVar14 * uVar6 + iVar14 + -4;
  iVar14 = iVar13 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar10 = *(uint *)(iVar14 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar14 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar14 - (int)piVar4) < uVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar14 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar7 + 0x14);
  uVar10 = 1 << uVar6;
  *(undefined1 *)((int)piVar4 - 3) = 0xff;
  *(undefined2 *)((int)piVar4 - 2) = 0;
  do {
    uVar12 = *(uint *)(iVar7 + 0x10);
    uVar8 = *(uint *)(iVar7 + 0xc) | uVar12;
    if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar8 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar7,uVar6);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar5;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar5 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar7 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar15 = (uint *)(iVar7 + 0x10);
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

