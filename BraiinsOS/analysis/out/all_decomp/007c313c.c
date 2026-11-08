// FUN_007c313c @ 007c313c size=860 calls_out=12 calls_in=0
// strings: assertion failed: prev.is_running() | assertion failed: !prev.is_complete() | waker missing | assertion failed: prev.is_complete() | assertion failed: prev.is_join_waker_set()assertion failed: snapshot.ref_count() > 0

void FUN_007c313c(uint *param_1)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint unaff_r6;
  int iVar14;
  undefined4 *puVar15;
  uint *puVar16;
  bool bVar17;
  undefined4 local_410 [248];
  undefined4 local_30;
  uint local_2c;
  uint *local_28;
  undefined1 *local_24;
  undefined4 *local_20;
  undefined1 *local_1c;
  
  DataMemoryBarrier(0xb);
  do {
    uVar3 = *param_1;
    bVar17 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar17);
  *param_1 = uVar3 ^ 3;
  DataMemoryBarrier(0xb);
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: prev.is_running()",0x23,&DAT_018ad24c);
  }
  if ((uVar3 & 2) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: !prev.is_complete()",0x25,&DAT_018ad25c);
  }
  if ((uVar3 & 8) == 0) {
    local_410[0] = 2;
    FUN_00890ac0(param_1 + 6,local_410);
  }
  else if ((uVar3 & 0x10) != 0) {
    if (param_1[0x106] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("waker missing",0x1b,&DAT_018acea4);
    }
    (**(code **)(param_1[0x106] + 8))(param_1[0x107]);
    DataMemoryBarrier(0xb);
    do {
      uVar3 = *param_1;
      bVar17 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar17);
    *param_1 = uVar3 & 0xffffffef;
    DataMemoryBarrier(0xb);
    if ((uVar3 & 2) == 0) {
      uVar6 = 0x24;
      puVar7 = &DAT_018ad27c;
      pcVar10 = "assertion failed: prev.is_complete()";
LAB_007c33b0:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(pcVar10,uVar6,puVar7);
    }
    if ((uVar3 & 0x10) == 0) {
      uVar6 = 0x2a;
      puVar7 = &DAT_018ad28c;
      pcVar10 = 
      "assertion failed: prev.is_join_waker_set()assertion failed: snapshot.ref_count() > 0";
      goto LAB_007c33b0;
    }
    if ((uVar3 & 8) == 0) {
      if (param_1[0x106] != 0) {
        (**(code **)(param_1[0x106] + 0xc))(param_1[0x107]);
      }
      param_1[0x106] = 0;
    }
  }
  if (param_1[6] != 0) goto LAB_007c3298;
  uVar3 = param_1[7];
  pcVar10 = (char *)(uVar3 + 0x180);
  if (*pcVar10 == '\0') {
    bVar17 = (bool)hasExclusiveAccess(pcVar10);
    if (!bVar17) goto LAB_007c32f0;
    *pcVar10 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_007c32f0:
    FUN_01280da8(pcVar10);
  }
  FUN_0128236c(pcVar10);
  *(int *)(uVar3 + 0x1a8) = *(int *)(uVar3 + 0x1a8) + -1;
  FUN_01282570(pcVar10);
  if (*pcVar10 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar17 = (bool)hasExclusiveAccess(pcVar10);
      if (bVar17) {
        *pcVar10 = '\0';
        goto LAB_007c3290;
      }
    } while (*pcVar10 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar10);
LAB_007c3290:
  FUN_01647770(pcVar10);
LAB_007c3298:
  local_30 = 1;
  DataMemoryBarrier(0xb);
  do {
    uVar3 = *param_1;
    bVar17 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar17);
  *param_1 = uVar3 - 0x40;
  DataMemoryBarrier(0xb);
  local_2c = uVar3 >> 6;
  if (uVar3 >> 6 == 0) {
    local_20 = &local_30;
    local_28 = &local_2c;
    local_1c = &LAB_00fac484;
    local_24 = &LAB_00fac484;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0056f1c8,&local_28,&DAT_018ad26c);
  }
  if (local_2c != 1) {
    return;
  }
  FUN_005c643c(param_1 + 6);
  if (param_1[0xc] == 1) {
    bVar17 = param_1[0xe] == 0 && param_1[0xf] == 0;
    if (param_1[0xe] != 0 || param_1[0xf] != 0) {
      unaff_r6 = param_1[0x10];
      bVar17 = unaff_r6 == 0;
    }
    if (!bVar17) {
      puVar15 = (undefined4 *)param_1[0x11];
      pcVar5 = (code *)*puVar15;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(unaff_r6);
      }
      if (puVar15[1] != 0) {
        thunk_FUN_016d3fb4(unaff_r6);
      }
    }
  }
  else if ((param_1[0xc] == 0) && (param_1[0xe] != 2 || param_1[0xf] != 0)) {
    FUN_007bea04();
  }
  if (param_1[0x106] != 0) {
    (**(code **)(param_1[0x106] + 0xc))(param_1[0x107]);
  }
  piVar2 = (int *)param_1[0x108];
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar17 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar17);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(param_1[0x108],param_1[0x109]);
    }
  }
  if (param_1 == (uint *)0x0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar3 = *(byte *)((int)param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar8 = uVar11 - 0x10, uVar11 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)((int)param_1 + -3) >> 5);
  iVar14 = *(int *)(iVar4 + 8) + 0x10;
  iVar12 = iVar8 * uVar3 + iVar8 + -4;
  iVar8 = iVar14 + iVar12;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar5)();
    }
    uVar11 = *(uint *)(iVar8 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar5)();
    }
    if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar5)();
    }
  }
  if ((uint)(iVar8 - (int)param_1) < uVar11) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar5)();
  }
  if (*(char *)(iVar8 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar5)();
  }
  if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar5)();
  }
  bVar1 = *(byte *)(iVar4 + 0x14);
  uVar11 = 1 << uVar3;
  *(undefined1 *)((int)param_1 + -3) = 0xff;
  *(undefined2 *)((int)param_1 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar4 + 0x10);
    uVar9 = *(uint *)(iVar4 + 0xc) | uVar13;
    if ((uVar11 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar5)();
    }
    if ((uVar13 == 0) || (uVar9 + uVar11 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar4,uVar3);
      FUN_016dddc0(&DAT_018ddd48);
      if (local_24 == (undefined1 *)0x0) {
        return;
      }
      puVar15 = (undefined4 *)FUN_016d2bc8();
      uVar6 = *puVar15;
      FUN_016d6ac4(local_28,local_24);
      *puVar15 = uVar6;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar11 + uVar13;
      return;
    }
    puVar16 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar9 = *puVar16;
      if (uVar13 != uVar9) goto LAB_016d409c;
      bVar17 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar17);
    *puVar16 = uVar11 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar9) {
      return;
    }
  } while( true );
}

