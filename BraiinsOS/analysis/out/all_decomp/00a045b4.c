// FUN_00a045b4 @ 00a045b4 size=772 calls_out=5 calls_in=3
// strings: 

void FUN_00a045b4(int param_1,uint *param_2)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
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
        uVar6 = *puVar10;
        bVar1 = (bool)hasExclusiveAccess(puVar10);
      } while (!bVar1);
      *puVar10 = uVar6 - 1;
      DataMemoryBarrier(0xb);
      if (uVar6 != 1) {
        return;
      }
      puVar10 = param_2 + 8;
      DataMemoryBarrier(0xb);
      do {
        uVar6 = *puVar10;
        bVar1 = (bool)hasExclusiveAccess(puVar10);
      } while (!bVar1);
      *puVar10 = uVar6 | 1;
      DataMemoryBarrier(0xb);
      if ((uVar6 & 1) == 0) {
        FUN_00a059d0(param_2 + 0x10);
      }
      puVar10 = param_2 + 0x22;
      DataMemoryBarrier(0xb);
      do {
        uVar6 = *puVar10;
        bVar1 = (bool)hasExclusiveAccess(puVar10);
      } while (!bVar1);
      *(char *)puVar10 = '\x01';
      DataMemoryBarrier(0xb);
      if ((char)uVar6 == '\0') {
        return;
      }
      uVar9 = param_2[8];
      uVar6 = param_2[1];
      for (uVar15 = *param_2 & 0xfffffffe; uVar15 != (uVar9 & 0xfffffffe); uVar15 = uVar15 + 2) {
        uVar7 = (uVar15 & 0x3f) >> 1;
        if (uVar7 == 0x1f) {
          uVar7 = *(uint *)(uVar6 + 0x1f0);
LAB_00a047a0:
          thunk_FUN_016d3fb4(uVar6);
        }
        else {
          puVar10 = (uint *)(uVar6 + uVar7 * 0x10);
          uVar7 = uVar6;
          if ((*puVar10 & 0x7fffffff) != 0) {
            uVar6 = puVar10[1];
            goto LAB_00a047a0;
          }
        }
        uVar6 = uVar7;
      }
      if (uVar6 != 0) {
        thunk_FUN_016d3fb4(uVar6);
      }
      FUN_006fffb0(param_2 + 0x12);
    }
    else {
      DataMemoryBarrier(0xb);
      do {
        uVar6 = *param_2;
        bVar1 = (bool)hasExclusiveAccess(param_2);
      } while (!bVar1);
      *param_2 = uVar6 - 1;
      DataMemoryBarrier(0xb);
      if (uVar6 != 1) {
        return;
      }
      FUN_009eedb8(param_2 + 2);
      puVar10 = param_2 + 0x11;
      DataMemoryBarrier(0xb);
      do {
        uVar6 = *puVar10;
        bVar1 = (bool)hasExclusiveAccess(puVar10);
      } while (!bVar1);
      *(char *)puVar10 = '\x01';
      DataMemoryBarrier(0xb);
      if ((char)uVar6 == '\0') {
        return;
      }
      FUN_006fffb0(param_2 + 4);
      FUN_006fffb0(param_2 + 10);
    }
    goto LAB_014b47f4;
  }
  puVar10 = param_2 + 0x28;
  DataMemoryBarrier(0xb);
  do {
    uVar6 = *puVar10;
    bVar1 = (bool)hasExclusiveAccess(puVar10);
  } while (!bVar1);
  *puVar10 = uVar6 - 1;
  DataMemoryBarrier(0xb);
  if (uVar6 != 1) {
    return;
  }
  puVar10 = param_2 + 8;
  DataMemoryBarrier(0xb);
  do {
    uVar6 = *puVar10;
    bVar1 = (bool)hasExclusiveAccess(puVar10);
  } while (!bVar1);
  *puVar10 = uVar6 | param_2[0x12];
  DataMemoryBarrier(0xb);
  if ((param_2[0x12] & uVar6) == 0) {
    FUN_009f1740(param_2 + 0x13);
    FUN_009f1740(param_2 + 0x1c);
  }
  puVar10 = param_2 + 0x2a;
  DataMemoryBarrier(0xb);
  do {
    uVar6 = *puVar10;
    bVar1 = (bool)hasExclusiveAccess(puVar10);
  } while (!bVar1);
  *(char *)puVar10 = '\x01';
  DataMemoryBarrier(0xb);
  if ((char)uVar6 == '\0') {
    return;
  }
  uVar15 = param_2[0x12] - 1;
  uVar6 = uVar15 & param_2[8];
  uVar15 = uVar15 & *param_2;
  if (uVar15 < uVar6) {
    uVar6 = uVar6 - uVar15;
joined_r0x009eb5c8:
    if (uVar6 != 0) {
      uVar7 = param_2[0x10];
      uVar9 = param_2[0x25];
      do {
        uVar4 = uVar7;
        if (uVar15 < uVar7) {
          uVar4 = 0;
        }
        iVar5 = uVar9 + uVar4 * -0x10 + uVar15 * 0x10;
        if ((*(uint *)(iVar5 + 4) & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(iVar5 + 8));
        }
        uVar15 = uVar15 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  else {
    if (uVar6 < uVar15) {
      uVar6 = (uVar6 - uVar15) + param_2[0x10];
      goto joined_r0x009eb5c8;
    }
    if ((param_2[8] & ~param_2[0x12]) != *param_2) {
      uVar6 = param_2[0x10];
      goto joined_r0x009eb5c8;
    }
  }
  if (param_2[0x26] != 0) {
    thunk_FUN_016d3fb4(param_2[0x25]);
  }
  FUN_006fffb0(param_2 + 0x15);
  FUN_006fffb0(param_2 + 0x1e);
LAB_014b47f4:
  if (param_2 == (uint *)0x0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar6 = *(byte *)((int)param_2 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar15 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar11 = uVar15 - 0x10, uVar15 == 0)) {
    iVar11 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar15 = (uint)(*(byte *)((int)param_2 + -3) >> 5);
  iVar14 = *(int *)(iVar5 + 8) + 0x10;
  iVar13 = iVar11 * uVar6 + iVar11 + -4;
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
  bVar3 = *(byte *)(iVar5 + 0x14);
  uVar15 = 1 << uVar6;
  *(undefined1 *)((int)param_2 + -3) = 0xff;
  *(undefined2 *)((int)param_2 + -2) = 0;
  do {
    uVar7 = *(uint *)(iVar5 + 0x10);
    uVar9 = *(uint *)(iVar5 + 0xc) | uVar7;
    if ((uVar15 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar7 == 0) || (uVar9 + uVar15 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar6);
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
      *(uint *)(iVar5 + 0x10) = uVar15 + uVar7;
      return;
    }
    puVar10 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar10);
      uVar9 = *puVar10;
      if (uVar7 != uVar9) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar10);
    } while (!bVar1);
    *puVar10 = uVar15 + uVar7;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar7 == uVar9) {
      return;
    }
  } while( true );
}

