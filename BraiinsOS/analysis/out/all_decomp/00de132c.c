// FUN_00de132c @ 00de132c size=188 calls_out=1 calls_in=2
// strings: 

void FUN_00de132c(int *param_1)

{
  bool bVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int extraout_r1;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 != 0) {
    if (*param_1 == 1) {
      puVar8 = (undefined4 *)param_1[4];
      if (param_1[2] == 0 && param_1[3] == 0) {
        if (puVar8 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00de13d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)*puVar8)(puVar8);
          return;
        }
      }
      else if (puVar8 != (undefined4 *)0x0) {
        puVar13 = (undefined4 *)param_1[5];
        pcVar6 = (code *)*puVar13;
        if (pcVar6 != (code *)0x0) {
          (*pcVar6)(puVar8);
        }
        if (puVar13[1] != 0) goto LAB_014b47f4;
      }
    }
    return;
  }
  if ((char)param_1[0x5aa] == '\x03') {
    FUN_00dddd98(param_1 + 0x132);
    return;
  }
  if ((char)param_1[0x5aa] != '\0') {
    return;
  }
  FUN_005c384c(param_1 + 0x6e);
  piVar3 = (int *)param_1[0x126];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aacbe0(param_1[0x126]);
  }
  piVar3 = (int *)param_1[0x127];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aaaafc(param_1[0x127]);
  }
  piVar3 = (int *)param_1[0x128];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00e46504(param_1[0x128]);
  }
  FUN_00e46678(param_1[0x129]);
  piVar3 = (int *)param_1[0x129];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aac878(param_1[0x129]);
  }
  piVar3 = (int *)param_1[0x12a];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aad0bc(param_1[0x12a]);
  }
  piVar3 = (int *)param_1[299];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aa6194(param_1[299]);
  }
  FUN_00e469ec(param_1[300]);
  piVar3 = (int *)param_1[300];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aa79bc(param_1[300]);
  }
  iVar5 = param_1[0x85];
  if (iVar5 != 0) {
    piVar3 = (int *)param_1[0x84];
    do {
      iVar5 = iVar5 + -1;
      iVar4 = 0;
      if (*piVar3 != 0) {
        iVar4 = piVar3[1];
      }
      if (*piVar3 != 0 && iVar4 != 0) {
        (**(code **)(iVar4 + 0xc))(piVar3[2]);
      }
      piVar3 = piVar3 + 3;
    } while (iVar5 != 0);
  }
  if (param_1[0x83] != 0) {
    thunk_FUN_016d3fb4(param_1[0x84]);
  }
  if (param_1[0x8b] == -0x80000000 || param_1[0x8b] == 0) {
    iVar5 = param_1[0x88];
  }
  else {
    thunk_FUN_016d3fb4(param_1[0x8c]);
    iVar5 = param_1[0x88];
  }
  if (iVar5 != 0) {
    thunk_FUN_016d3fb4(param_1[0x89]);
  }
  iVar5 = param_1[0x12d];
  piVar3 = (int *)(iVar5 + 0x48);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    FUN_00e46e30(iVar5 + 8);
  }
  piVar3 = (int *)param_1[0x12d];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aab134(param_1[0x12d]);
  }
  iVar5 = param_1[0x12e];
  piVar3 = (int *)(iVar5 + 0x44);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    FUN_00e46e30(iVar5 + 8);
  }
  piVar3 = (int *)param_1[0x12e];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aab134(param_1[0x12e]);
  }
  FUN_005bf2b0(param_1 + 0x8e);
  FUN_005c73cc(param_1 + 0x1e);
  FUN_00aa313c(param_1[0x12f]);
  piVar3 = (int *)param_1[0x12f];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aad1e0(param_1[0x12f]);
  }
  iVar5 = param_1[0x130];
  piVar3 = (int *)(iVar5 + 0x44);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    FUN_00e473d0(iVar5 + 8);
  }
  piVar3 = (int *)param_1[0x130];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aacf14(param_1[0x130]);
  }
  iVar5 = param_1[0x131];
  piVar3 = (int *)(iVar5 + 0x48);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    FUN_00e473d0(iVar5 + 8);
  }
  piVar3 = (int *)param_1[0x131];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aacf14(param_1[0x131]);
  }
  iVar5 = param_1[3];
  if (param_1[2] == 0 && iVar5 == 0) {
    return;
  }
  iVar4 = param_1[7];
  if (iVar4 != 0) {
    iVar5 = iVar4 * 0x11;
  }
  if (iVar4 != 0 && iVar5 != -0x15) {
    thunk_FUN_016d3fb4(param_1[6] + iVar4 * -0x10 + -0x10);
    iVar5 = extraout_r1;
  }
  iVar4 = param_1[0xf];
  if (iVar4 != 0) {
    iVar5 = iVar4 * 0x11;
  }
  if (iVar4 != 0 && iVar5 != -0x15) {
    thunk_FUN_016d3fb4(param_1[0xe] + iVar4 * -0x10 + -0x10);
    iVar5 = param_1[0x17];
  }
  else {
    iVar5 = param_1[0x17];
  }
  if (iVar5 != 0) {
    thunk_FUN_016d3fb4(param_1[0x18]);
  }
  if (param_1[0x1a] == 0) {
    return;
  }
  puVar8 = (undefined4 *)param_1[0x1b];
LAB_014b47f4:
  if (puVar8 == (undefined4 *)0x0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar15 = *(byte *)((int)puVar8 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar4 = uVar10 - 0x10, uVar10 == 0)) {
    iVar4 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)((int)puVar8 + -3) >> 5);
  iVar14 = *(int *)(iVar5 + 8) + 0x10;
  iVar11 = iVar4 * uVar15 + iVar4 + -4;
  iVar4 = iVar14 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar6)();
    }
    uVar10 = *(uint *)(iVar4 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar6)();
    }
    if (*(char *)(iVar4 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar6)();
    }
  }
  if ((uint)(iVar4 - (int)puVar8) < uVar10) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar6)();
  }
  if (*(char *)(iVar4 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar6)();
  }
  if (*(char *)(iVar14 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar6)();
  }
  bVar2 = *(byte *)(iVar5 + 0x14);
  uVar10 = 1 << uVar15;
  *(undefined1 *)((int)puVar8 + -3) = 0xff;
  *(undefined2 *)((int)puVar8 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar5 + 0x10);
    uVar7 = *(uint *)(iVar5 + 0xc) | uVar12;
    if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar6)();
    }
    if ((uVar12 == 0) || (uVar7 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar8 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar8;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar8 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar16 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar7 = *puVar16;
      if (uVar12 != uVar7) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar1);
    *puVar16 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar7) {
      return;
    }
  } while( true );
}

