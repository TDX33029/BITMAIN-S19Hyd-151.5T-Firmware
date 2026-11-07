// FUN_00e7e28c @ 00e7e28c size=692 calls_out=5 calls_in=1
// strings: 

void FUN_00e7e28c(int param_1,uint *param_2)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (param_1 != 0) {
    if (param_1 == 1) {
      puVar10 = param_2 + 0x20;
      DataMemoryBarrier(0xb);
      do {
        uVar4 = *puVar10;
        bVar1 = (bool)hasExclusiveAccess(puVar10);
      } while (!bVar1);
      *puVar10 = uVar4 - 1;
      DataMemoryBarrier(0xb);
      if (uVar4 != 1) {
        return;
      }
      FUN_00eaee08(param_2);
      puVar10 = param_2 + 0x22;
      DataMemoryBarrier(0xb);
      do {
        uVar4 = *puVar10;
        bVar1 = (bool)hasExclusiveAccess(puVar10);
      } while (!bVar1);
      *(char *)puVar10 = '\x01';
      DataMemoryBarrier(0xb);
      if ((char)uVar4 == '\0') {
        return;
      }
      uVar9 = param_2[8];
      uVar4 = param_2[1];
      for (uVar15 = *param_2 & 0xfffffffe; uVar15 != (uVar9 & 0xfffffffe); uVar15 = uVar15 + 2) {
        uVar5 = (uVar15 & 0x3f) >> 1;
        if (uVar5 == 0x1f) {
          uVar5 = *(uint *)(uVar4 + 0x1f0);
LAB_00e7e468:
          thunk_FUN_016d3fb4(uVar4);
        }
        else {
          puVar10 = (uint *)(uVar4 + uVar5 * 0x10);
          uVar5 = uVar4;
          if ((*puVar10 & 0x7fffffff) != 0) {
            uVar4 = puVar10[1];
            goto LAB_00e7e468;
          }
        }
        uVar4 = uVar5;
      }
      if (uVar4 != 0) {
        thunk_FUN_016d3fb4(uVar4);
      }
      FUN_00e7e584(param_2 + 0x12);
    }
    else {
      DataMemoryBarrier(0xb);
      do {
        uVar4 = *param_2;
        bVar1 = (bool)hasExclusiveAccess(param_2);
      } while (!bVar1);
      *param_2 = uVar4 - 1;
      DataMemoryBarrier(0xb);
      if (uVar4 != 1) {
        return;
      }
      FUN_00eaf174(param_2 + 2);
      puVar10 = param_2 + 0x11;
      DataMemoryBarrier(0xb);
      do {
        uVar4 = *puVar10;
        bVar1 = (bool)hasExclusiveAccess(puVar10);
      } while (!bVar1);
      *(char *)puVar10 = '\x01';
      DataMemoryBarrier(0xb);
      if ((char)uVar4 == '\0') {
        return;
      }
      FUN_00e7e584(param_2 + 4);
      FUN_00e7e584(param_2 + 10);
    }
    goto LAB_00e7e534;
  }
  puVar10 = param_2 + 0x28;
  DataMemoryBarrier(0xb);
  do {
    uVar4 = *puVar10;
    bVar1 = (bool)hasExclusiveAccess(puVar10);
  } while (!bVar1);
  *puVar10 = uVar4 - 1;
  DataMemoryBarrier(0xb);
  if (uVar4 != 1) {
    return;
  }
  puVar10 = param_2 + 8;
  DataMemoryBarrier(0xb);
  do {
    uVar4 = *puVar10;
    bVar1 = (bool)hasExclusiveAccess(puVar10);
  } while (!bVar1);
  *puVar10 = uVar4 | param_2[0x12];
  DataMemoryBarrier(0xb);
  if ((param_2[0x12] & uVar4) == 0) {
    FUN_00e9d178(param_2 + 0x13);
    FUN_00e9d178(param_2 + 0x1c);
  }
  puVar10 = param_2 + 0x2a;
  DataMemoryBarrier(0xb);
  do {
    uVar4 = *puVar10;
    bVar1 = (bool)hasExclusiveAccess(puVar10);
  } while (!bVar1);
  *(char *)puVar10 = '\x01';
  DataMemoryBarrier(0xb);
  if ((char)uVar4 == '\0') {
    return;
  }
  uVar4 = param_2[0x12] - 1;
  uVar15 = uVar4 & *param_2;
  uVar4 = uVar4 & param_2[8];
  if (uVar15 < uVar4) {
    uVar4 = uVar4 - uVar15;
LAB_00e7e4c0:
    if (uVar4 != 0) {
      uVar9 = param_2[0x10];
      uVar5 = param_2[0x25];
      do {
        uVar6 = uVar9;
        if (uVar15 < uVar9) {
          uVar6 = 0;
        }
        iVar7 = uVar5 + uVar6 * -0x10 + uVar15 * 0x10;
        iVar11 = *(int *)(iVar7 + 4);
        if (iVar11 != -0x80000000 && iVar11 != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(iVar7 + 8));
        }
        uVar15 = uVar15 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  else {
    if (uVar4 < uVar15) {
      uVar4 = (uVar4 - uVar15) + param_2[0x10];
      goto LAB_00e7e4c0;
    }
    if ((param_2[8] & ~param_2[0x12]) != *param_2) {
      uVar4 = param_2[0x10];
      goto LAB_00e7e4c0;
    }
  }
  if (param_2[0x26] != 0) {
    thunk_FUN_016d3fb4(param_2[0x25]);
  }
  FUN_00e7e584(param_2 + 0x15);
  FUN_00e7e584(param_2 + 0x1e);
LAB_00e7e534:
  if (param_2 == (uint *)0x0) {
    return;
  }
  iVar7 = FUN_016d3bc8();
  uVar4 = *(byte *)((int)param_2 + -3) & 0x1f;
  if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
     (uVar15 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar11 = uVar15 - 0x10, uVar15 == 0)) {
    iVar11 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar15 = (uint)(*(byte *)((int)param_2 + -3) >> 5);
  iVar14 = *(int *)(iVar7 + 8) + 0x10;
  iVar13 = iVar11 * uVar4 + iVar11 + -4;
  iVar11 = iVar14 + iVar13;
  if (4 < uVar15) {
    if (uVar15 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar15 = *(uint *)(iVar11 + -4);
    if (uVar15 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar11 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar11 - (int)param_2) < uVar15) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar11 - uVar15) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar14 + iVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar7 + 0x14);
  uVar15 = 1 << uVar4;
  *(undefined1 *)((int)param_2 + -3) = 0xff;
  *(undefined2 *)((int)param_2 + -2) = 0;
  do {
    uVar5 = *(uint *)(iVar7 + 0x10);
    uVar9 = *(uint *)(iVar7 + 0xc) | uVar5;
    if ((uVar15 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar5 == 0) || (uVar9 + uVar15 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar7,uVar4);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar8 = (undefined4 *)FUN_016d2bc8();
      uVar12 = *puVar8;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar8 = uVar12;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar7 + 0x10) = uVar15 + uVar5;
      return;
    }
    puVar10 = (uint *)(iVar7 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar10);
      uVar9 = *puVar10;
      if (uVar5 != uVar9) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar10);
    } while (!bVar1);
    *puVar10 = uVar15 + uVar5;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar5 == uVar9) {
      return;
    }
  } while( true );
}

