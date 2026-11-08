// FUN_016351cc @ 016351cc size=844 calls_out=13 calls_in=0
// strings: assertion failed: prev.is_running() | assertion failed: !prev.is_complete() | waker missing | assertion failed: prev.is_complete() | assertion failed: prev.is_join_waker_set()assertion failed: snapshot.ref_count() > 0

void FUN_016351cc(uint *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  undefined4 local_50 [10];
  undefined4 local_28;
  uint local_24;
  uint *local_20;
  undefined1 *local_1c;
  undefined4 *local_18;
  undefined1 *local_14;
  
  DataMemoryBarrier(0xb);
  do {
    uVar5 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar5 ^ 3;
  DataMemoryBarrier(0xb);
  if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: prev.is_running()",0x23,&DAT_018ad24c);
  }
  if ((uVar5 & 2) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: !prev.is_complete()",0x25,&DAT_018ad25c);
  }
  if ((uVar5 & 8) == 0) {
    local_50[0] = 2;
    FUN_016530b0(param_1 + 6,local_50);
  }
  else if ((uVar5 & 0x10) != 0) {
    if (param_1[0x18] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("waker missing",0x1b,&DAT_018acea4);
    }
    (**(code **)(param_1[0x18] + 8))(param_1[0x19]);
    DataMemoryBarrier(0xb);
    do {
      uVar5 = *param_1;
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = uVar5 & 0xffffffef;
    DataMemoryBarrier(0xb);
    if ((uVar5 & 2) == 0) {
      uVar8 = 0x24;
      puVar9 = &DAT_018ad27c;
      pcVar12 = "assertion failed: prev.is_complete()";
LAB_01635440:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(pcVar12,uVar8,puVar9);
    }
    if ((uVar5 & 0x10) == 0) {
      uVar8 = 0x2a;
      puVar9 = &DAT_018ad28c;
      pcVar12 = 
      "assertion failed: prev.is_join_waker_set()assertion failed: snapshot.ref_count() > 0";
      goto LAB_01635440;
    }
    if ((uVar5 & 8) == 0) {
      if (param_1[0x18] != 0) {
        (**(code **)(param_1[0x18] + 0xc))(param_1[0x19]);
      }
      param_1[0x18] = 0;
    }
  }
  if (param_1[6] != 0) goto LAB_01635328;
  uVar5 = param_1[7];
  pcVar12 = (char *)(uVar5 + 0x180);
  if (*pcVar12 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar12);
    if (!bVar1) goto LAB_01635380;
    *pcVar12 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_01635380:
    FUN_01280da8(pcVar12);
  }
  FUN_0128236c(pcVar12);
  *(int *)(uVar5 + 0x1a8) = *(int *)(uVar5 + 0x1a8) + -1;
  FUN_01282570(pcVar12);
  if (*pcVar12 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar12);
      if (bVar1) {
        *pcVar12 = '\0';
        goto LAB_01635320;
      }
    } while (*pcVar12 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar12);
LAB_01635320:
  FUN_01647770(pcVar12);
LAB_01635328:
  local_28 = 1;
  DataMemoryBarrier(0xb);
  do {
    uVar5 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar5 - 0x40;
  DataMemoryBarrier(0xb);
  if (uVar5 >> 6 == 0) {
    local_18 = &local_28;
    local_20 = &local_24;
    local_14 = &LAB_00fac484;
    local_1c = &LAB_00fac484;
    local_24 = uVar5 >> 6;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0056f1c8,&local_20,&DAT_018ad26c);
  }
  if (uVar5 >> 6 != 1) {
    return;
  }
  FUN_005c643c(param_1 + 6);
  if (param_1[0xc] == 1) {
    FUN_0163472c(param_1 + 0xe);
  }
  else if ((param_1[0xc] == 0) && (param_1[0xe] != 0x80000000)) {
    if (param_1[0xe] != 0) {
      thunk_FUN_016d3fb4(param_1[0xf]);
    }
    piVar4 = (int *)param_1[0x12];
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_016592f4(param_1[0x12]);
    }
  }
  if (param_1[0x18] != 0) {
    (**(code **)(param_1[0x18] + 0xc))(param_1[0x19]);
  }
  piVar4 = (int *)param_1[0x1a];
  if (piVar4 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(param_1[0x1a],param_1[0x1b]);
    }
  }
  if (param_1 == (uint *)0x0) {
    return;
  }
  iVar7 = FUN_016d3bc8();
  uVar5 = *(byte *)((int)param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
     (uVar13 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar10 = uVar13 - 0x10, uVar13 == 0)) {
    iVar10 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar13 = (uint)(*(byte *)((int)param_1 + -3) >> 5);
  iVar16 = *(int *)(iVar7 + 8) + 0x10;
  iVar14 = iVar10 * uVar5 + iVar10 + -4;
  iVar10 = iVar16 + iVar14;
  if (4 < uVar13) {
    if (uVar13 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar13 = *(uint *)(iVar10 + -4);
    if (uVar13 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar10 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar10 - (int)param_1) < uVar13) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar10 - uVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar16 + iVar14) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar7 + 0x14);
  uVar13 = 1 << uVar5;
  *(undefined1 *)((int)param_1 + -3) = 0xff;
  *(undefined2 *)((int)param_1 + -2) = 0;
  do {
    uVar15 = *(uint *)(iVar7 + 0x10);
    uVar11 = *(uint *)(iVar7 + 0xc) | uVar15;
    if ((uVar13 & uVar11) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar15 == 0) || (uVar11 + uVar13 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar7,uVar5);
      FUN_016dddc0(&DAT_018ddd48);
      if (local_24 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar6;
      FUN_016d6ac4(local_28,local_24);
      *puVar6 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar7 + 0x10) = uVar13 + uVar15;
      return;
    }
    puVar17 = (uint *)(iVar7 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar11 = *puVar17;
      if (uVar15 != uVar11) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar1);
    *puVar17 = uVar13 + uVar15;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar15 == uVar11) {
      return;
    }
  } while( true );
}

