// FUN_00a2dc78 @ 00a2dc78 size=740 calls_out=8 calls_in=0
// strings: assertion failed: prev.is_running() | assertion failed: !prev.is_complete() | waker missing | assertion failed: prev.is_complete() | assertion failed: prev.is_join_waker_set()assertion failed: snapshot.ref_count() > 0

void FUN_00a2dc78(uint *param_1)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint unaff_r6;
  int iVar14;
  undefined4 *puVar15;
  uint *puVar16;
  bool bVar17;
  undefined4 local_78 [20];
  uint local_28;
  uint local_24;
  uint *local_20;
  undefined1 *local_1c;
  uint *local_18;
  undefined1 *local_14;
  
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
    local_78[0] = 2;
    FUN_00a1ff8c(param_1 + 6,local_78);
  }
  else if ((uVar3 & 0x10) != 0) {
    if (param_1[0x20] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("waker missing",0x1b,&DAT_018acea4);
    }
    (**(code **)(param_1[0x20] + 8))(param_1[0x21]);
    DataMemoryBarrier(0xb);
    do {
      uVar3 = *param_1;
      bVar17 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar17);
    *param_1 = uVar3 & 0xffffffef;
    DataMemoryBarrier(0xb);
    if ((uVar3 & 2) == 0) {
      uVar7 = 0x24;
      puVar8 = &DAT_018ad27c;
      pcVar5 = "assertion failed: prev.is_complete()";
    }
    else {
      if ((uVar3 & 0x10) != 0) {
        if ((uVar3 & 8) == 0) {
          if (param_1[0x20] != 0) {
            (**(code **)(param_1[0x20] + 0xc))(param_1[0x21]);
          }
          param_1[0x20] = 0;
        }
        goto LAB_00a2dd44;
      }
      uVar7 = 0x2a;
      puVar8 = &DAT_018ad28c;
      pcVar5 = 
      "assertion failed: prev.is_join_waker_set()assertion failed: snapshot.ref_count() > 0";
    }
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(pcVar5,uVar7,puVar8);
  }
LAB_00a2dd44:
  iVar4 = FUN_01659b28(param_1[6],param_1);
  local_28 = 2;
  if (iVar4 == 0) {
    local_28 = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    uVar3 = *param_1;
    bVar17 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar17);
  *param_1 = uVar3 + local_28 * -0x40;
  DataMemoryBarrier(0xb);
  if (uVar3 >> 6 < local_28) {
    local_18 = &local_28;
    local_20 = &local_24;
    local_14 = &LAB_00fac484;
    local_1c = &LAB_00fac484;
    local_24 = uVar3 >> 6;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0056f1c8,&local_20,&DAT_018ad26c);
  }
  if (uVar3 >> 6 != local_28) {
    return;
  }
  piVar2 = (int *)param_1[6];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar17 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar17);
  *piVar2 = iVar4 + -1;
  local_18 = (uint *)unaff_r4;
  local_14 = (undefined1 *)unaff_r5;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_016586fc(param_1[6]);
  }
  if (param_1[10] == 1) {
    bVar17 = param_1[0xc] == 0 && param_1[0xd] == 0;
    if (param_1[0xc] != 0 || param_1[0xd] != 0) {
      unaff_r6 = param_1[0xe];
      bVar17 = unaff_r6 == 0;
    }
    if (!bVar17) {
      puVar15 = (undefined4 *)param_1[0xf];
      pcVar6 = (code *)*puVar15;
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(unaff_r6);
      }
      if (puVar15[1] != 0) {
        thunk_FUN_016d3fb4(unaff_r6);
      }
    }
  }
  else if (param_1[10] == 0) {
    FUN_00ac5018(param_1 + 0xc);
  }
  if (param_1[0x20] != 0) {
    (**(code **)(param_1[0x20] + 0xc))(param_1[0x21]);
  }
  piVar2 = (int *)param_1[0x22];
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar17 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar17);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(param_1[0x22],param_1[0x23]);
    }
  }
  local_1c = (undefined1 *)local_18;
  if (param_1 == (uint *)0x0) {
    return;
  }
  local_18 = (uint *)local_14;
  iVar4 = FUN_016d3bc8();
  uVar3 = *(byte *)((int)param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar9 = uVar11 - 0x10, uVar11 == 0)) {
    iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)((int)param_1 + -3) >> 5);
  iVar14 = *(int *)(iVar4 + 8) + 0x10;
  iVar12 = iVar9 * uVar3 + iVar9 + -4;
  iVar9 = iVar14 + iVar12;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar6)();
    }
    uVar11 = *(uint *)(iVar9 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar6)();
    }
    if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar6)();
    }
  }
  if ((uint)(iVar9 - (int)param_1) < uVar11) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar6)();
  }
  if (*(char *)(iVar9 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar6)();
  }
  if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar6)();
  }
  bVar1 = *(byte *)(iVar4 + 0x14);
  uVar11 = 1 << uVar3;
  *(undefined1 *)((int)param_1 + -3) = 0xff;
  *(undefined2 *)((int)param_1 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar4 + 0x10);
    uVar10 = *(uint *)(iVar4 + 0xc) | uVar13;
    if ((uVar11 & uVar10) != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar6)();
    }
    if ((uVar13 == 0) || (uVar10 + uVar11 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar4,uVar3);
      FUN_016dddc0(&DAT_018ddd48);
      if (local_24 == 0) {
        return;
      }
      puVar15 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar15;
      FUN_016d6ac4(local_28,local_24);
      *puVar15 = uVar7;
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
      uVar10 = *puVar16;
      if (uVar13 != uVar10) goto LAB_016d409c;
      bVar17 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar17);
    *puVar16 = uVar11 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar10) {
      return;
    }
  } while( true );
}

