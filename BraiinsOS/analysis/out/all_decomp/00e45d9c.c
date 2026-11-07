// FUN_00e45d9c @ 00e45d9c size=972 calls_out=19 calls_in=2
// strings: 

void FUN_00e45d9c(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int extraout_r1;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  FUN_005c384c(param_1 + 0x6c);
  piVar4 = (int *)param_1[0x124];
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aacbe0(param_1[0x124]);
  }
  piVar4 = (int *)param_1[0x125];
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aaaafc(param_1[0x125]);
  }
  piVar4 = (int *)param_1[0x126];
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00e46504(param_1[0x126]);
  }
  FUN_00e46678(param_1[0x127]);
  piVar4 = (int *)param_1[0x127];
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aac878(param_1[0x127]);
  }
  piVar4 = (int *)param_1[0x128];
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aad0bc(param_1[0x128]);
  }
  piVar4 = (int *)param_1[0x129];
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aa6194(param_1[0x129]);
  }
  FUN_00e469ec(param_1[0x12a]);
  piVar4 = (int *)param_1[0x12a];
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aa79bc(param_1[0x12a]);
  }
  iVar7 = param_1[0x83];
  if (iVar7 != 0) {
    piVar4 = (int *)param_1[0x82];
    do {
      iVar7 = iVar7 + -1;
      iVar5 = 0;
      if (*piVar4 != 0) {
        iVar5 = piVar4[1];
      }
      if (*piVar4 != 0 && iVar5 != 0) {
        (**(code **)(iVar5 + 0xc))(piVar4[2]);
      }
      piVar4 = piVar4 + 3;
    } while (iVar7 != 0);
  }
  if (param_1[0x81] != 0) {
    thunk_FUN_016d3fb4(param_1[0x82]);
  }
  if (param_1[0x89] == -0x80000000 || param_1[0x89] == 0) {
    iVar7 = param_1[0x86];
  }
  else {
    thunk_FUN_016d3fb4(param_1[0x8a]);
    iVar7 = param_1[0x86];
  }
  if (iVar7 != 0) {
    thunk_FUN_016d3fb4(param_1[0x87]);
  }
  piVar11 = (int *)param_1[299];
  piVar4 = piVar11 + 0x12;
  do {
    iVar7 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar7 + -1;
  if (iVar7 == 1) {
    FUN_00e46e30(piVar11 + 2);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar11;
    bVar1 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar1);
  *piVar11 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aab134(param_1[299]);
  }
  piVar11 = (int *)param_1[300];
  piVar4 = piVar11 + 0x11;
  do {
    iVar7 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar7 + -1;
  if (iVar7 == 1) {
    FUN_00e46e30(piVar11 + 2);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar11;
    bVar1 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar1);
  *piVar11 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aab134(param_1[300]);
  }
  FUN_00e4721c(param_1 + 0x8c);
  FUN_005c73cc(param_1 + 0x1c);
  FUN_00aa313c(param_1[0x12d]);
  piVar4 = (int *)param_1[0x12d];
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aad1e0(param_1[0x12d]);
  }
  piVar11 = (int *)param_1[0x12e];
  piVar4 = piVar11 + 0x11;
  do {
    iVar7 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar7 + -1;
  if (iVar7 == 1) {
    FUN_00e473d0(piVar11 + 2);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar11;
    bVar1 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar1);
  *piVar11 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aacf14(param_1[0x12e]);
  }
  piVar11 = (int *)param_1[0x12f];
  piVar4 = piVar11 + 0x12;
  do {
    iVar7 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar7 + -1;
  if (iVar7 == 1) {
    FUN_00e473d0(piVar11 + 2);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar11;
    bVar1 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar1);
  *piVar11 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aacf14(param_1[0x12f]);
  }
  iVar7 = param_1[1];
  if (*param_1 == 0 && iVar7 == 0) {
    return;
  }
  iVar5 = param_1[5];
  if (iVar5 != 0) {
    iVar7 = iVar5 * 0x11;
  }
  if (iVar5 != 0 && iVar7 != -0x15) {
    thunk_FUN_016d3fb4(param_1[4] + iVar5 * -0x10 + -0x10);
    iVar7 = extraout_r1;
  }
  iVar5 = param_1[0xd];
  if (iVar5 != 0) {
    iVar7 = iVar5 * 0x11;
  }
  if (iVar5 != 0 && iVar7 != -0x15) {
    thunk_FUN_016d3fb4(param_1[0xc] + iVar5 * -0x10 + -0x10);
    iVar7 = param_1[0x15];
  }
  else {
    iVar7 = param_1[0x15];
  }
  if (iVar7 != 0) {
    thunk_FUN_016d3fb4(param_1[0x16]);
  }
  if (param_1[0x18] == 0) {
    return;
  }
  iVar7 = param_1[0x19];
  if (iVar7 == 0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar16 = *(byte *)(iVar7 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar12 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar8 = uVar12 - 0x10, uVar12 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar12 = (uint)(*(byte *)(iVar7 + -3) >> 5);
  iVar15 = *(int *)(iVar5 + 8) + 0x10;
  iVar13 = iVar8 * uVar16 + iVar8 + -4;
  iVar8 = iVar15 + iVar13;
  if (4 < uVar12) {
    if (uVar12 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar12 = *(uint *)(iVar8 + -4);
    if (uVar12 < 5) {
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
  if ((uint)(iVar8 - iVar7) < uVar12) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar8 - uVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar15 + iVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar5 + 0x14);
  uVar12 = 1 << uVar16;
  *(undefined1 *)(iVar7 + -3) = 0xff;
  *(undefined2 *)(iVar7 + -2) = 0;
  do {
    uVar14 = *(uint *)(iVar5 + 0x10);
    uVar9 = *(uint *)(iVar5 + 0xc) | uVar14;
    if ((uVar12 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar14 == 0) || (uVar9 + uVar12 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar16);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar6;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar6 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar12 + uVar14;
      return;
    }
    puVar17 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar9 = *puVar17;
      if (uVar14 != uVar9) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar1);
    *puVar17 = uVar12 + uVar14;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar14 == uVar9) {
      return;
    }
  } while( true );
}

