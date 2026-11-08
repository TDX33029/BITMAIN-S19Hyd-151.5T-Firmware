// FUN_0065652c @ 0065652c size=772 calls_out=13 calls_in=2
// strings: 

void FUN_0065652c(uint *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar8 = *param_1;
  iVar4 = 2;
  if ((uint)(uVar8 < 4) <= -param_1[1]) {
    iVar4 = uVar8 - 4;
  }
  if (iVar4 == 0) {
    puVar16 = param_1 + 0x2a;
    if (*puVar16 != 2) {
      FUN_005e6cdc(puVar16,-(param_1[1] + (uint)(uVar8 >= 4)));
      if (param_1[0x2d] != 0xffffffff) {
        FUN_016dffb2();
      }
      FUN_00a414e8(puVar16);
    }
    if (param_1[2] != 2 || param_1[3] != 0) {
      piVar5 = (int *)param_1[0xc];
      if (piVar5 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar5;
          bVar1 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar1);
        *piVar5 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc(param_1[0xc],param_1[0xd]);
        }
      }
      piVar5 = (int *)param_1[0x26];
      if (piVar5 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar5;
          bVar1 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar1);
        *piVar5 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc(param_1[0x26],param_1[0x27]);
        }
      }
    }
    piVar5 = (int *)param_1[0x36];
    if (piVar5 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar5;
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_012c0f04(param_1[0x36]);
      }
      piVar5 = (int *)param_1[0x37];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar5;
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078f120(param_1[0x37]);
        return;
      }
    }
    return;
  }
  if (iVar4 != 1) {
    piVar5 = (int *)param_1[0xf4];
    if (piVar5 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar5;
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(param_1[0xf4],param_1[0xf5]);
      }
    }
    piVar5 = (int *)param_1[0xf2];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_012c0f04(param_1[0xf2]);
    }
    piVar5 = (int *)param_1[0xf3];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078f120(param_1[0xf3]);
    }
    FUN_0064bd14(param_1);
    return;
  }
  FUN_0064bf10(param_1 + 0x42);
  piVar5 = (int *)param_1[0x5c];
  if (((uint)piVar5 & 1) == 0) {
    piVar7 = piVar5 + 4;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar7;
      bVar1 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar1);
    *piVar7 = iVar4 + -1;
    if (iVar4 != 1) goto LAB_006567a8;
    DataMemoryBarrier(0xb);
    if (*piVar5 != 0) {
      thunk_FUN_016d3fb4(piVar5[1]);
    }
  }
  else {
    if (param_1[0x5b] + ((uint)piVar5 >> 5) == 0) goto LAB_006567a8;
    piVar5 = (int *)(param_1[0x59] - ((uint)piVar5 >> 5));
  }
  thunk_FUN_016d3fb4(piVar5);
LAB_006567a8:
  if (param_1[0x4c] != 0) {
    thunk_FUN_016d3fb4(param_1[0x4d]);
  }
  FUN_014f059c(param_1 + 0x50);
  if (param_1[0x50] != 0) {
    thunk_FUN_016d3fb4(param_1[0x51]);
  }
  FUN_0064bf9c(param_1 + 2);
  FUN_0064c43c(param_1 + 99);
  FUN_0143a0bc(param_1 + 0x5e);
  piVar5 = (int *)param_1[0x66];
  iVar4 = 0;
  if (*piVar5 != 0) {
    iVar4 = piVar5[1];
  }
  if (*piVar5 != 0 && iVar4 != 0) {
    (**(code **)(iVar4 + 0x10))(piVar5 + 4,piVar5[2],piVar5[3]);
  }
  if (piVar5 == (int *)0x0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar8 = *(byte *)((int)piVar5 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar12 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar9 = uVar12 - 0x10, uVar12 == 0)) {
    iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar12 = (uint)(*(byte *)((int)piVar5 + -3) >> 5);
  iVar15 = *(int *)(iVar4 + 8) + 0x10;
  iVar13 = iVar9 * uVar8 + iVar9 + -4;
  iVar9 = iVar15 + iVar13;
  if (4 < uVar12) {
    if (uVar12 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar12 = *(uint *)(iVar9 + -4);
    if (uVar12 < 5) {
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
  if ((uint)(iVar9 - (int)piVar5) < uVar12) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar9 - uVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar15 + iVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar4 + 0x14);
  uVar12 = 1 << uVar8;
  *(undefined1 *)((int)piVar5 + -3) = 0xff;
  *(undefined2 *)((int)piVar5 + -2) = 0;
  do {
    uVar14 = *(uint *)(iVar4 + 0x10);
    uVar10 = *(uint *)(iVar4 + 0xc) | uVar14;
    if ((uVar12 & uVar10) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar14 == 0) || (uVar10 + uVar12 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar8);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar11 = *puVar6;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar6 = uVar11;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar12 + uVar14;
      return;
    }
    puVar16 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar10 = *puVar16;
      if (uVar14 != uVar10) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar1);
    *puVar16 = uVar12 + uVar14;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar14 == uVar10) {
      return;
    }
  } while( true );
}

