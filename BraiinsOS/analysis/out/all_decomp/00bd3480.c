// FUN_00bd3480 @ 00bd3480 size=420 calls_out=4 calls_in=2
// strings: 

void FUN_00bd3480(undefined4 *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  int unaff_r4;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 uStack_28;
  
  if (param_1[10] == -0x80000000) {
    iVar7 = param_1[1];
    if (iVar7 == 0) {
      return;
    }
    piVar13 = (int *)*param_1;
    iVar9 = 0;
    do {
      if (*(int *)((int)piVar13 + iVar9) == 1) {
        puVar4 = *(undefined4 **)((int)piVar13 + iVar9 + 4);
        if (puVar4 != (undefined4 *)0x0) {
          (**(code **)*puVar4)();
        }
      }
      else if ((*(int *)((int)piVar13 + iVar9) == 0) &&
              (*(char *)((int)piVar13 + iVar9 + 0x174) == '\x03')) {
        FUN_00b9fcc0((int)piVar13 + iVar9 + 8);
      }
      iVar9 = iVar9 + 0x178;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  else {
    puVar4 = param_1 + 4;
    FUN_00ceb3d8(puVar4);
    piVar5 = (int *)*puVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00ceb564(*puVar4);
    }
    iVar7 = param_1[9];
    iVar9 = param_1[8];
    if (iVar7 != 0) {
      iVar10 = iVar9 + 0x18;
      do {
        iVar7 = iVar7 + -1;
        if (*(undefined4 **)(iVar10 + -0x10) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(iVar10 + -0x10))();
        }
        iVar10 = iVar10 + 0x10;
      } while (iVar7 != 0);
    }
    if (param_1[7] != 0) {
      thunk_FUN_016d3fb4(iVar9);
    }
    iVar7 = param_1[0xc];
    piVar13 = (int *)param_1[0xb];
    piVar5 = piVar13;
    while (iVar7 != 0) {
      piVar15 = piVar5 + 1;
      iVar7 = iVar7 + -1;
      puVar4 = (undefined4 *)*piVar5;
      piVar5 = piVar15;
      if (puVar4 != (undefined4 *)0x0) {
        (**(code **)*puVar4)();
      }
    }
    if (param_1[10] == 0) {
      return;
    }
  }
  if (piVar13 == (int *)0x0) {
    return;
  }
  iVar7 = FUN_016d3bc8();
  uVar16 = *(byte *)((int)piVar13 + -3) & 0x1f;
  if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar9 = uVar11 - 0x10, uVar11 == 0)) {
    iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)((int)piVar13 + -3) >> 5);
  iVar14 = *(int *)(iVar7 + 8) + 0x10;
  iVar10 = iVar9 * uVar16 + iVar9 + -4;
  iVar9 = iVar14 + iVar10;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar11 = *(uint *)(iVar9 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar9 - (int)piVar13) < uVar11) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar9 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar14 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar7 + 0x14);
  uVar11 = 1 << uVar16;
  *(undefined1 *)((int)piVar13 + -3) = 0xff;
  *(undefined2 *)((int)piVar13 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar7 + 0x10);
    uVar6 = *(uint *)(iVar7 + 0xc) | uVar12;
    if ((uVar11 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar12 == 0) || (uVar6 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar7,uVar16);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar4;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar4 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar7 + 0x10) = uVar11 + uVar12;
      return;
    }
    puVar17 = (uint *)(iVar7 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar6 = *puVar17;
      if (uVar12 != uVar6) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar1);
    *puVar17 = uVar11 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar6) {
      return;
    }
  } while( true );
}

