// FUN_01472c7c @ 01472c7c size=636 calls_out=7 calls_in=0
// strings: assertion failed: prev.is_running() | assertion failed: !prev.is_complete() | waker missing | assertion failed: prev.is_complete() | assertion failed: prev.is_join_waker_set()assertion failed: snapshot.ref_count() > 0

void FUN_01472c7c(uint *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  int unaff_r4;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  uint *puVar17;
  undefined8 uVar18;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint local_3c;
  uint local_38;
  uint *local_34;
  undefined1 *local_30;
  uint *local_2c;
  undefined1 *local_28;
  
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
  if ((uVar4 & 8) != 0) {
    if ((uVar4 & 0x10) != 0) {
      if (param_1[0x12] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("waker missing",0x1b,&DAT_018acea4);
      }
      (**(code **)(param_1[0x12] + 8))(param_1[0x13]);
      DataMemoryBarrier(0xb);
      do {
        uVar4 = *param_1;
        bVar1 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar1);
      *param_1 = uVar4 & 0xffffffef;
      DataMemoryBarrier(0xb);
      if ((uVar4 & 2) == 0) {
        uVar14 = 0x24;
        puVar7 = &DAT_018ad27c;
        pcVar5 = "assertion failed: prev.is_complete()";
      }
      else {
        if ((uVar4 & 0x10) != 0) {
          if ((uVar4 & 8) == 0) {
            if (param_1[0x12] != 0) {
              (**(code **)(param_1[0x12] + 0xc))(param_1[0x13]);
            }
            param_1[0x12] = 0;
          }
          goto LAB_01472dd0;
        }
        uVar14 = 0x2a;
        puVar7 = &DAT_018ad28c;
        pcVar5 = 
        "assertion failed: prev.is_join_waker_set()assertion failed: snapshot.ref_count() > 0";
      }
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(pcVar5,uVar14,puVar7);
    }
    goto LAB_01472dd0;
  }
  uVar18 = thunk_FUN_016de0ee(uVar4,0x40);
  iVar16 = (int)uVar18 + (int)((ulonglong)uVar18 >> 0x20);
  uVar4 = param_1[8];
  uVar13 = param_1[9];
  if (*(char *)(iVar16 + 0x38) == '\x01') {
LAB_01472d08:
    uVar14 = *(undefined4 *)(iVar16 + 0x18);
    uVar15 = *(undefined4 *)(iVar16 + 0x1c);
    *(uint *)(iVar16 + 0x18) = uVar4;
    *(uint *)(iVar16 + 0x1c) = uVar13;
  }
  else {
    uVar14 = 0;
    uVar15 = 0;
    if (*(char *)(iVar16 + 0x38) != '\x02') {
      FUN_015e8e6c(iVar16,FUN_01655ec4);
      *(undefined1 *)(iVar16 + 0x38) = 1;
      goto LAB_01472d08;
    }
  }
  FUN_01470cc4(param_1 + 10);
  param_1[10] = 2;
  param_1[0xb] = uStack_54;
  param_1[0xc] = uStack_50;
  param_1[0xd] = uStack_4c;
  param_1[0xe] = uStack_48;
  param_1[0xf] = uStack_44;
  if (*(char *)(iVar16 + 0x38) != '\x01') {
    if (*(char *)(iVar16 + 0x38) == '\x02') goto LAB_01472dd0;
    FUN_015e8e6c(iVar16,FUN_01655ec4);
    *(undefined1 *)(iVar16 + 0x38) = 1;
  }
  *(undefined4 *)(iVar16 + 0x18) = uVar14;
  *(undefined4 *)(iVar16 + 0x1c) = uVar15;
LAB_01472dd0:
  iVar16 = FUN_01659b28(param_1[6],param_1);
  local_3c = 2;
  if (iVar16 == 0) {
    local_3c = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    uVar4 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar4 + local_3c * -0x40;
  DataMemoryBarrier(0xb);
  local_38 = uVar4 >> 6;
  if (uVar4 >> 6 < local_3c) {
    local_2c = &local_3c;
    local_34 = &local_38;
    local_28 = &LAB_00fac484;
    local_30 = &LAB_00fac484;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0056f1c8,&local_34,&DAT_018ad26c);
  }
  if (local_38 != local_3c) {
    return;
  }
  FUN_0147288c(param_1);
  if (param_1 == (uint *)0x0) {
    return;
  }
  iVar16 = FUN_016d3bc8();
  uVar4 = *(byte *)((int)param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar16 + 0x14) & 0x1f) != 0) ||
     (uVar13 = *(uint *)(iVar16 + 0x14) & 0xfffff000, iVar8 = uVar13 - 0x10, uVar13 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar16 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar13 = (uint)(*(byte *)((int)param_1 + -3) >> 5);
  iVar12 = *(int *)(iVar16 + 8) + 0x10;
  iVar10 = iVar8 * uVar4 + iVar8 + -4;
  iVar8 = iVar12 + iVar10;
  if (4 < uVar13) {
    if (uVar13 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar13 = *(uint *)(iVar8 + -4);
    if (uVar13 < 5) {
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
  if ((uint)(iVar8 - (int)param_1) < uVar13) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar8 - uVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar16 + 0x14);
  uVar13 = 1 << uVar4;
  *(undefined1 *)((int)param_1 + -3) = 0xff;
  *(undefined2 *)((int)param_1 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar16 + 0x10);
    uVar9 = *(uint *)(iVar16 + 0xc) | uVar11;
    if ((uVar13 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar11 == 0) || (uVar9 + uVar13 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar16,uVar4);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar14 = *puVar6;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar6 = uVar14;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar16 + 0x10) = uVar13 + uVar11;
      return;
    }
    puVar17 = (uint *)(iVar16 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar9 = *puVar17;
      if (uVar11 != uVar9) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar1);
    *puVar17 = uVar13 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar9) {
      return;
    }
  } while( true );
}

