// FUN_014725ec @ 014725ec size=500 calls_out=5 calls_in=0
// strings: assertion failed: prev.is_running() | assertion failed: !prev.is_complete() | waker missing | assertion failed: prev.is_complete() | assertion failed: prev.is_join_waker_set()assertion failed: snapshot.ref_count() > 0

void FUN_014725ec(uint *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  undefined4 local_60 [12];
  uint local_30;
  uint local_2c;
  uint *local_28;
  undefined1 *local_24;
  uint *local_20;
  undefined1 *local_1c;
  
  DataMemoryBarrier(0xb);
  do {
    uVar4 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar4 ^ 3;
  DataMemoryBarrier(0xb);
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: prev.is_running()",0x23,&DAT_018ad24c);
  }
  if ((uVar4 & 2) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: !prev.is_complete()",0x25,&DAT_018ad25c);
  }
  if ((uVar4 & 8) == 0) {
    local_60[0] = 2;
    FUN_0146dbb8(param_1 + 6,local_60);
  }
  else if ((uVar4 & 0x10) != 0) {
    if (param_1[0x18] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("waker missing",0x1b,&DAT_018acea4);
    }
    (**(code **)(param_1[0x18] + 8))(param_1[0x19]);
    DataMemoryBarrier(0xb);
    do {
      uVar4 = *param_1;
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = uVar4 & 0xffffffef;
    DataMemoryBarrier(0xb);
    if ((uVar4 & 2) == 0) {
      uVar8 = 0x24;
      puVar9 = &DAT_018ad27c;
      pcVar6 = "assertion failed: prev.is_complete()";
    }
    else {
      if ((uVar4 & 0x10) != 0) {
        if ((uVar4 & 8) == 0) {
          if (param_1[0x18] != 0) {
            (**(code **)(param_1[0x18] + 0xc))(param_1[0x19]);
          }
          param_1[0x18] = 0;
        }
        goto LAB_014726b8;
      }
      uVar8 = 0x2a;
      puVar9 = &DAT_018ad28c;
      pcVar6 = 
      "assertion failed: prev.is_join_waker_set()assertion failed: snapshot.ref_count() > 0";
    }
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(pcVar6,uVar8,puVar9);
  }
LAB_014726b8:
  iVar5 = FUN_01659cf4(param_1[6],param_1);
  local_30 = 2;
  if (iVar5 == 0) {
    local_30 = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    uVar4 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar4 + local_30 * -0x40;
  DataMemoryBarrier(0xb);
  local_2c = uVar4 >> 6;
  if (uVar4 >> 6 < local_30) {
    local_20 = &local_30;
    local_28 = &local_2c;
    local_1c = &LAB_00fac484;
    local_24 = &LAB_00fac484;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0056f1c8,&local_28,&DAT_018ad26c);
  }
  if (local_2c != local_30) {
    return;
  }
  FUN_014719bc(param_1);
  if (param_1 == (uint *)0x0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar4 = *(byte *)((int)param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar12 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar10 = uVar12 - 0x10, uVar12 == 0)) {
    iVar10 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar12 = (uint)(*(byte *)((int)param_1 + -3) >> 5);
  iVar15 = *(int *)(iVar5 + 8) + 0x10;
  iVar13 = iVar10 * uVar4 + iVar10 + -4;
  iVar10 = iVar15 + iVar13;
  if (4 < uVar12) {
    if (uVar12 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar12 = *(uint *)(iVar10 + -4);
    if (uVar12 < 5) {
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
  if ((uint)(iVar10 - (int)param_1) < uVar12) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar10 - uVar12) != '\0') {
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
  uVar12 = 1 << uVar4;
  *(undefined1 *)((int)param_1 + -3) = 0xff;
  *(undefined2 *)((int)param_1 + -2) = 0;
  do {
    uVar14 = *(uint *)(iVar5 + 0x10);
    uVar11 = *(uint *)(iVar5 + 0xc) | uVar14;
    if ((uVar12 & uVar11) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar14 == 0) || (uVar11 + uVar12 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar5,uVar4);
      FUN_016dddc0(&DAT_018ddd48);
      if (local_24 == (undefined1 *)0x0) {
        return;
      }
      puVar7 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar7;
      FUN_016d6ac4(local_28,local_24);
      *puVar7 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar12 + uVar14;
      return;
    }
    puVar16 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar11 = *puVar16;
      if (uVar14 != uVar11) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar1);
    *puVar16 = uVar12 + uVar14;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar14 == uVar11) {
      return;
    }
  } while( true );
}

