// FUN_007abc00 @ 007abc00 size=1016 calls_out=9 calls_in=4
// strings: 

void FUN_007abc00(int param_1,uint *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined *local_28;
  int iStack_24;
  uint *local_20;
  undefined4 local_1c;
  
  if (param_1 != 0) {
    if (param_1 == 1) {
      puVar15 = param_2 + 0x20;
      DataMemoryBarrier(0xb);
      do {
        uVar5 = *puVar15;
        bVar2 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar2);
      *puVar15 = uVar5 - 1;
      DataMemoryBarrier(0xb);
      if (uVar5 != 1) {
        return;
      }
      puVar15 = param_2 + 8;
      DataMemoryBarrier(0xb);
      do {
        uVar5 = *puVar15;
        bVar2 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar2);
      *puVar15 = uVar5 | 1;
      DataMemoryBarrier(0xb);
      if ((uVar5 & 1) == 0) {
        FUN_006bbb60(param_2 + 0x10);
      }
      puVar15 = param_2 + 0x22;
      DataMemoryBarrier(0xb);
      do {
        uVar5 = *puVar15;
        bVar2 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar2);
      *(char *)puVar15 = '\x01';
      DataMemoryBarrier(0xb);
      if ((char)uVar5 == '\0') {
        return;
      }
      uVar6 = param_2[8];
      uVar5 = param_2[1];
      for (uVar14 = *param_2 & 0xfffffffe; uVar14 != (uVar6 & 0xfffffffe); uVar14 = uVar14 + 2) {
        uVar7 = (uVar14 & 0x3f) >> 1;
        if (uVar7 == 0x1f) {
          uVar7 = *(uint *)(uVar5 + 0x4d8);
          thunk_FUN_016d3fb4(uVar5);
        }
        else {
          FUN_006c25e4(uVar5 + uVar7 * 0x28);
          uVar7 = uVar5;
        }
        uVar5 = uVar7;
      }
      if (uVar5 != 0) {
        thunk_FUN_016d3fb4(uVar5);
      }
      FUN_006fffb0(param_2 + 0x12);
    }
    else {
      DataMemoryBarrier(0xb);
      do {
        uVar5 = *param_2;
        bVar2 = (bool)hasExclusiveAccess(param_2);
      } while (!bVar2);
      *param_2 = uVar5 - 1;
      DataMemoryBarrier(0xb);
      if (uVar5 != 1) {
        return;
      }
      puVar15 = param_2 + 2;
      do {
        if (*puVar15 != 0) {
          ClearExclusiveLocal();
          FUN_015bf680(puVar15);
          goto LAB_007abe0c;
        }
        bVar2 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar2);
      *puVar15 = 1;
      DataMemoryBarrier(0xb);
LAB_007abe0c:
      uVar5 = 0;
      if ((DAT_018dd988 & 0x7fffffff) == 0) {
        cVar1 = (char)param_2[3];
      }
      else {
        uVar5 = FUN_015bf3f8();
        uVar5 = uVar5 ^ 1;
        cVar1 = (char)param_2[3];
      }
      if (cVar1 != '\0') {
        uVar14 = (uint)local_1c >> 8;
        local_1c = CONCAT31((int3)uVar14,(char)uVar5);
        local_28 = &DAT_01883df0;
        local_20 = puVar15;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_20,&DAT_018589a8);
      }
      if ((char)param_2[0x10] == '\0') {
        *(undefined1 *)(param_2 + 0x10) = 1;
        FUN_006bbce0(param_2 + 4);
        FUN_006bbce0(param_2 + 10);
      }
      if (((uVar5 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar8 = FUN_015bf3f8(), iVar8 == 0)) {
        *(undefined1 *)(param_2 + 3) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        uVar5 = *puVar15;
        bVar2 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar2);
      *puVar15 = 0;
      if (uVar5 == 2) {
        FUN_016d6968(0xf0,puVar15,0x81,1);
      }
      puVar15 = param_2 + 0x11;
      DataMemoryBarrier(0xb);
      do {
        uVar5 = *puVar15;
        bVar2 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar2);
      *(char *)puVar15 = '\x01';
      DataMemoryBarrier(0xb);
      if ((char)uVar5 == '\0') {
        return;
      }
      FUN_006fffb0(param_2 + 4);
      FUN_006fffb0(param_2 + 10);
    }
    goto LAB_007abf68;
  }
  puVar15 = param_2 + 0x28;
  DataMemoryBarrier(0xb);
  do {
    uVar5 = *puVar15;
    bVar2 = (bool)hasExclusiveAccess(puVar15);
  } while (!bVar2);
  *puVar15 = uVar5 - 1;
  DataMemoryBarrier(0xb);
  if (uVar5 != 1) {
    return;
  }
  puVar15 = param_2 + 8;
  DataMemoryBarrier(0xb);
  do {
    uVar5 = *puVar15;
    bVar2 = (bool)hasExclusiveAccess(puVar15);
  } while (!bVar2);
  *puVar15 = uVar5 | param_2[0x12];
  DataMemoryBarrier(0xb);
  if ((param_2[0x12] & uVar5) == 0) {
    FUN_006bbb60(param_2 + 0x13);
    FUN_006bbb60(param_2 + 0x1c);
  }
  puVar15 = param_2 + 0x2a;
  DataMemoryBarrier(0xb);
  do {
    uVar5 = *puVar15;
    bVar2 = (bool)hasExclusiveAccess(puVar15);
  } while (!bVar2);
  *(char *)puVar15 = '\x01';
  DataMemoryBarrier(0xb);
  if ((char)uVar5 == '\0') {
    return;
  }
  uVar5 = param_2[0x12] - 1;
  uVar14 = uVar5 & *param_2;
  uVar5 = uVar5 & param_2[8];
  if (uVar14 < uVar5) {
    uVar5 = uVar5 - uVar14;
joined_r0x007abee8:
    if (uVar5 != 0) {
      uVar6 = param_2[0x10];
      iVar8 = param_2[0x25] + uVar14 * 0x28;
      do {
        uVar7 = uVar6;
        if (uVar14 < uVar6) {
          uVar7 = 0;
        }
        FUN_006c25e4(iVar8 + uVar7 * -0x28);
        uVar14 = uVar14 + 1;
        iVar8 = iVar8 + 0x28;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  else {
    if (uVar5 < uVar14) {
      uVar5 = (uVar5 - uVar14) + param_2[0x10];
      goto joined_r0x007abee8;
    }
    if ((param_2[8] & ~param_2[0x12]) != *param_2) {
      uVar5 = param_2[0x10];
      goto joined_r0x007abee8;
    }
  }
  if (param_2[0x26] != 0) {
    thunk_FUN_016d3fb4(param_2[0x25]);
  }
  FUN_006fffb0(param_2 + 0x15);
  FUN_006fffb0(param_2 + 0x1e);
LAB_007abf68:
  if (param_2 == (uint *)0x0) {
    return;
  }
  iVar8 = FUN_016d3bc8();
  uVar5 = *(byte *)((int)param_2 + -3) & 0x1f;
  if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
     (uVar14 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar10 = uVar14 - 0x10, uVar14 == 0)) {
    iVar10 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar14 = (uint)(*(byte *)((int)param_2 + -3) >> 5);
  iVar13 = *(int *)(iVar8 + 8) + 0x10;
  iVar12 = iVar10 * uVar5 + iVar10 + -4;
  iVar10 = iVar13 + iVar12;
  if (4 < uVar14) {
    if (uVar14 != 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar3)();
    }
    uVar14 = *(uint *)(iVar10 + -4);
    if (uVar14 < 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar3)();
    }
    if (*(char *)(iVar10 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar3)();
    }
  }
  if ((uint)(iVar10 - (int)param_2) < uVar14) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar3)();
  }
  if (*(char *)(iVar10 - uVar14) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar3)();
  }
  if (*(char *)(iVar13 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar3)();
  }
  bVar4 = *(byte *)(iVar8 + 0x14);
  uVar14 = 1 << uVar5;
  *(undefined1 *)((int)param_2 + -3) = 0xff;
  *(undefined2 *)((int)param_2 + -2) = 0;
  do {
    uVar7 = *(uint *)(iVar8 + 0x10);
    uVar6 = *(uint *)(iVar8 + 0xc) | uVar7;
    if ((uVar14 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar3)();
    }
    if ((uVar7 == 0) || (uVar6 + uVar14 == (2 << (bVar4 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar8,uVar5);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar9 = (undefined4 *)FUN_016d2bc8();
      uVar11 = *puVar9;
      FUN_016d6ac4(local_28,iStack_24);
      *puVar9 = uVar11;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar8 + 0x10) = uVar14 + uVar7;
      return;
    }
    puVar15 = (uint *)(iVar8 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar6 = *puVar15;
      if (uVar7 != uVar6) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar2);
    *puVar15 = uVar14 + uVar7;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar7 == uVar6) {
      return;
    }
  } while( true );
}

