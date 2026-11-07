// FUN_014eb228 @ 014eb228 size=484 calls_out=5 calls_in=1
// strings: 

void FUN_014eb228(uint *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (1 < *param_1) {
    return;
  }
  uVar12 = param_1[3];
  puVar8 = (undefined4 *)(uVar12 + 4);
  for (uVar14 = param_1[4]; uVar14 != 0; uVar14 = uVar14 - 1) {
    if (puVar8[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar8);
    }
    puVar8 = puVar8 + 3;
  }
  if (param_1[2] != 0) {
    thunk_FUN_016d3fb4(uVar12);
  }
  piVar4 = (int *)param_1[0x1c];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015614d8(param_1[0x1c],param_1[0x1d]);
  }
  piVar4 = (int *)param_1[0x1f];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(param_1[0x1f],param_1[0x20]);
  }
  piVar4 = (int *)param_1[0x21];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(param_1[0x21],param_1[0x22]);
  }
  piVar4 = (int *)param_1[0x23];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015614d8(param_1[0x23],param_1[0x24]);
  }
  piVar4 = (int *)param_1[0x25];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0156180c(param_1[0x25]);
  }
  piVar4 = (int *)param_1[0x26];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015614d8(param_1[0x26],param_1[0x27]);
  }
  if (param_1[5] != 0) {
    thunk_FUN_016d3fb4(param_1[6]);
  }
  if (param_1[8] != 0) {
    thunk_FUN_016d3fb4(param_1[9]);
  }
  piVar4 = (int *)param_1[0x28];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0156187c(param_1[0x28]);
  }
  uVar12 = param_1[0xb];
  if ((int)uVar12 < -0x7ffffffe) {
    if (param_1[0xc] != 0) {
      uVar12 = param_1[0xd];
LAB_014b47f4:
      if (uVar12 == 0) {
        return;
      }
      iVar5 = FUN_016d3bc8();
      uVar14 = *(byte *)(uVar12 - 3) & 0x1f;
      if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar6 = uVar9 - 0x10, uVar9 == 0)) {
        iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar9 = (uint)(*(byte *)(uVar12 - 3) >> 5);
      iVar13 = *(int *)(iVar5 + 8) + 0x10;
      iVar10 = iVar6 * uVar14 + iVar6 + -4;
      iVar6 = iVar13 + iVar10;
      if (4 < uVar9) {
        if (uVar9 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar9 = *(uint *)(iVar6 + -4);
        if (uVar9 < 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar2)();
        }
        if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar2)();
        }
      }
      if (iVar6 - uVar12 < uVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar6 - uVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar5 + 0x14);
      uVar9 = 1 << uVar14;
      *(undefined1 *)(uVar12 - 3) = 0xff;
      *(undefined2 *)(uVar12 - 2) = 0;
      do {
        uVar11 = *(uint *)(iVar5 + 0x10);
        uVar12 = *(uint *)(iVar5 + 0xc) | uVar11;
        if ((uVar9 & uVar12) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar11 == 0) || (uVar12 + uVar9 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar5,uVar14);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar8 = (undefined4 *)FUN_016d2bc8();
          uVar7 = *puVar8;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar8 = uVar7;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar5 + 0x10) = uVar9 + uVar11;
          return;
        }
        puVar15 = (uint *)(iVar5 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar12 = *puVar15;
          if (uVar11 != uVar12) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar1);
        *puVar15 = uVar9 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar12) {
          return;
        }
      } while( true );
    }
  }
  else if (uVar12 != 0x80000002) {
    if (uVar12 != 0) {
      thunk_FUN_016d3fb4(param_1[0xc]);
    }
    if (param_1[0xe] != 0) {
      thunk_FUN_016d3fb4(param_1[0xf]);
    }
    if ((param_1[0x16] & 0x7fffffff) == 0) {
      uVar14 = param_1[0x15];
      uVar12 = param_1[0x14];
    }
    else {
      thunk_FUN_016d3fb4(param_1[0x17]);
      uVar14 = param_1[0x15];
      uVar12 = param_1[0x14];
    }
    if (uVar14 != 0) {
      puVar8 = (undefined4 *)(uVar12 + 4);
      do {
        if ((puVar8[-1] & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(*puVar8);
        }
        puVar8 = puVar8 + 4;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (param_1[0x13] != 0) goto LAB_014b47f4;
  }
  return;
}

