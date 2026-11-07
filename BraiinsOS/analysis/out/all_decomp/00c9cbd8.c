// FUN_00c9cbd8 @ 00c9cbd8 size=668 calls_out=11 calls_in=6
// strings: BUG: halt task has panicked

longlong FUN_00c9cbd8(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  int *piVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint unaff_r8;
  undefined8 uVar12;
  uint local_f0;
  int local_ec;
  uint local_e8;
  int local_e4;
  uint uStack_e0;
  undefined4 uStack_dc;
  uint local_30;
  undefined4 local_2c;
  undefined1 local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[4]) {
  case '\0':
    uVar6 = param_1[1];
    unaff_r8 = (uint)(byte)uVar6;
    uVar10 = *param_1;
    uVar9 = param_1[2];
    *(undefined4 *)((int)param_1 + 0x11) = 0x1010000;
    uVar12 = FUN_00cf5430();
    local_2c = (undefined4)uVar12;
    puVar11 = param_1 + 3;
    *puVar11 = (uint)((ulonglong)uVar12 >> 0x20);
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined2 *)((int)param_1 + 0x12) = 0;
    local_28 = 0;
    local_ec = CONCAT31(local_ec._1_3_,(byte)uVar6);
    local_f0 = uVar10;
    local_30 = uVar9;
    uVar6 = FUN_00d0a208(&local_f0,&DAT_01876cec);
    param_1[6] = uVar6;
    *(undefined1 *)((int)param_1 + 0x11) = 1;
    param_1[7] = (uint)puVar11;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01876cfc);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01876cfc);
  case '\x03':
    puVar11 = (uint *)param_1[7];
    break;
  case '\x04':
    goto LAB_00c9ccac;
  }
  cVar2 = FUN_00c80c04(puVar11,param_2);
  if (cVar2 == '\x02') {
    uVar3 = 3;
LAB_00c9cccc:
    *(undefined1 *)(param_1 + 4) = uVar3;
    return CONCAT44(unaff_r8,1);
  }
  *(undefined1 *)((int)param_1 + 0x11) = 0;
LAB_00c9ccac:
  FUN_00d42b78(&local_f0,param_1[6],param_2);
  if ((local_f0 & 1) != 0) {
    uVar3 = 4;
    goto LAB_00c9cccc;
  }
  piVar5 = (int *)param_1[6];
  if (*piVar5 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar1 = (bool)hasExclusiveAccess(piVar5);
    if (bVar1) {
      *piVar5 = 0x84;
      goto LAB_00c9cd28;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  (**(code **)(piVar5[2] + 0x10))();
LAB_00c9cd28:
  if (local_e8 != 0 || local_e4 != 0) {
    local_f0 = local_e8;
    local_ec = local_e4;
    local_e8 = uStack_e0;
    local_e4 = uStack_dc;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: halt task has panicked",0x1b,&local_f0,&DAT_01876120,&DAT_01876d0c);
  }
  puVar11 = param_1 + 3;
  uVar6 = *puVar11;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  if (uVar6 != 0) {
    DataMemoryBarrier(0xb);
    if (*(int *)(uVar6 + 0x10) < 0) {
      puVar7 = (uint *)(uVar6 + 0x10);
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar1);
      *puVar7 = *puVar7 & 0x7fffffff;
      DataMemoryBarrier(0xb);
      uVar6 = *puVar11;
    }
    else {
      uVar6 = *puVar11;
    }
    if (uVar6 != 0) {
      do {
        while (bVar4 = FUN_00cefe20(puVar11), bVar4 == 2) {
          if (*puVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_0187bde8);
          }
          DataMemoryBarrier(0xb);
          if (*(int *)(*puVar11 + 0x10) == 0) goto LAB_00c9cdd8;
          FUN_016da3a8();
        }
      } while ((bVar4 & 1) != 0);
LAB_00c9cdd8:
      piVar5 = (int *)*puVar11;
      if (piVar5 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *piVar5;
          bVar1 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar1);
        *piVar5 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0078cf4c(*puVar11);
        }
      }
    }
  }
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined2 *)((int)param_1 + 0x13) = 0;
  return (ulonglong)uStack_e0 << 0x20;
}

