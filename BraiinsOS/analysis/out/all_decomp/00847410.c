// FUN_00847410 @ 00847410 size=1296 calls_out=18 calls_in=0
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers.

void FUN_00847410(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  bool bVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  uint extraout_r2;
  undefined *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  uint *puVar15;
  int *piVar16;
  uint uVar17;
  undefined4 *unaff_r11;
  undefined8 uVar18;
  uint local_ec;
  undefined1 auStack_e8 [80];
  uint local_98;
  uint local_94;
  uint local_90;
  undefined4 *local_8c;
  uint *local_88;
  uint local_84;
  undefined8 local_68;
  uint local_60;
  uint local_5c;
  undefined1 *local_58;
  undefined1 local_50;
  undefined8 local_48;
  uint local_40;
  undefined4 *local_3c;
  uint *local_38;
  uint local_34;
  uint *local_30;
  uint local_2c;
  
  uVar3 = (&switchD_00847430::switchdataD_00847434)[*(byte *)(param_2 + 0x5c)];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(param_2 + 0x5c)) {
  case 0:
    unaff_r11 = *(undefined4 **)(param_2 + 0x58);
    FUN_0165a798(&local_98);
    if (local_90 < 850000000) {
      puVar9 = (undefined1 *)(local_90 + 150000000);
      uVar3 = local_98;
      uVar12 = local_94;
LAB_008474b0:
      local_48 = FUN_0164ec90(&DAT_01860acc);
      iVar14 = 0x180;
      if ((local_48 & 1) != 0) {
        iVar14 = 0xb8;
      }
      if (*(undefined1 **)((int)(local_48 >> 0x20) + iVar14 + 0x90) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                     ,0x73,&DAT_01860acc);
      }
      local_94 = 0;
      local_98 = 0;
      local_50 = 0;
      local_60 = uVar3;
      local_5c = uVar12;
      local_58 = puVar9;
      local_68 = local_48;
    }
    else {
      uVar12 = local_94 + (0xfffffffe < local_98);
      if ((-1 < (int)((local_94 ^ uVar12) & ~local_94)) &&
         (puVar9 = (undefined1 *)(local_90 + 0xcd560780), puVar9 != &DAT_3b9aca00)) {
        uVar3 = local_98 + 1;
        goto LAB_008474b0;
      }
      FUN_01656dc8(&local_98);
    }
    FUN_016dd1aa(auStack_e8,&local_98,0x50);
    uVar3 = FUN_016dd1aa(param_2,auStack_e8,0x50);
    *(undefined4 **)(param_2 + 0x50) = unaff_r11 + 2;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01860adc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01860adc);
  }
  uVar18 = thunk_FUN_016de0ee(uVar3,0x40);
  iVar14 = (int)uVar18 + (int)((ulonglong)uVar18 >> 0x20);
  piVar16 = (int *)*param_3;
  uVar3 = (uint)*(byte *)(iVar14 + 0x38);
  if (uVar3 == 1) {
LAB_00847578:
    uVar3 = ~(uint)*(byte *)(iVar14 + 0x30) & 1 | (uint)(*(char *)(iVar14 + 0x31) != '\0');
  }
  else if (uVar3 != 2) {
    FUN_015e8e6c(iVar14,FUN_007e604c);
    *(undefined1 *)(iVar14 + 0x38) = 1;
    goto LAB_00847578;
  }
  puVar15 = *(uint **)(param_2 + 0x50);
  FUN_008b51ac(&local_98,puVar15);
  uVar10 = local_94;
  uVar12 = local_98;
  if (local_98 == 3) {
    uVar10 = *puVar15;
    if (uVar10 == 0) {
      puVar6 = &DAT_0187be18;
      goto LAB_0084789c;
    }
    piVar11 = (int *)(uVar10 + 0x20);
    do {
      iVar14 = *piVar11;
      if (iVar14 != 0) {
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
        if (iVar14 != 2) goto LAB_008475ec;
        iVar14 = piVar16[1];
        puVar5 = (undefined4 *)(*piVar16 + 8);
        goto LAB_00847764;
      }
      bVar1 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar1);
    *piVar11 = 1;
    DataMemoryBarrier(0xb);
LAB_008475ec:
    if (iVar14 == 0) {
      if (*(undefined4 **)(uVar10 + 0x18) == (undefined4 *)0x0) {
        iVar14 = piVar16[1];
LAB_008476cc:
        uVar18 = (**(code **)*piVar16)(iVar14);
        unaff_r11 = (undefined4 *)((ulonglong)uVar18 >> 0x20);
        local_ec = (uint)uVar18;
        if (*(int *)(uVar10 + 0x18) != 0) {
          (**(code **)(*(int *)(uVar10 + 0x18) + 0xc))(*(undefined4 *)(uVar10 + 0x1c));
        }
        *(undefined8 *)(uVar10 + 0x18) = uVar18;
        iVar14 = *piVar11;
      }
      else {
        iVar14 = piVar16[1];
        if (*(int *)(uVar10 + 0x1c) != iVar14 ||
            *(undefined4 **)(uVar10 + 0x18) != (undefined4 *)*piVar16) goto LAB_008476cc;
        iVar14 = *piVar11;
      }
      if (iVar14 == 1) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(piVar11);
          if (bVar1) {
            *piVar11 = 0;
            DataMemoryBarrier(0xb);
            goto LAB_00847770;
          }
        } while (*piVar11 == 1);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      iVar4 = *(int *)(uVar10 + 0x18);
      iVar14 = *(int *)(uVar10 + 0x1c);
      *(undefined4 *)(uVar10 + 0x18) = 0;
      if (iVar4 == 0) {
        puVar6 = &DAT_01882284;
LAB_0084789c:
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(puVar6);
      }
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar1);
      *piVar11 = 0;
      puVar5 = (undefined4 *)(iVar4 + 4);
      DataMemoryBarrier(0xb);
LAB_00847764:
      (*(code *)*puVar5)(iVar14);
    }
LAB_00847770:
    FUN_008b51ac(&local_48,puVar15);
    uVar12 = (uint)local_48;
    uVar2 = local_48;
    if ((uint)local_48 != 3) goto LAB_008477c0;
    iVar14 = FUN_016540e8((uint)(uVar3 == 2) | uVar3 & 1,param_2,piVar16);
    if (iVar14 != 0) goto LAB_008477c8;
    uVar12 = 3;
    uVar17 = 0;
    uVar2 = local_48;
  }
  else {
    local_2c = local_84;
    local_30 = local_88;
    if (local_98 == 2) {
      piVar16 = (int *)*puVar15;
      if (piVar16 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar14 = *piVar16;
          bVar1 = (bool)hasExclusiveAccess(piVar16);
        } while (!bVar1);
        *piVar16 = iVar14 + -1;
        if (iVar14 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089f224(*puVar15);
        }
      }
      *puVar15 = 0;
    }
    local_34 = local_2c;
    local_38 = local_30;
    local_3c = local_8c;
    local_40 = local_90;
    uVar2 = CONCAT44(uVar10,(uint)local_48);
LAB_008477c0:
    local_48._4_4_ = (uint)(uVar2 >> 0x20);
    if (uVar12 == 4) {
LAB_008477c8:
      *param_1 = 4;
      *(undefined1 *)(param_2 + 0x5c) = 3;
      return;
    }
    uVar10 = local_34 >> 8 & 0xff;
    uVar17 = local_34 & 0xff;
    local_ec = local_40;
    uVar3 = local_48._4_4_ & 0xff;
    puVar15 = local_38;
    unaff_r11 = local_3c;
  }
  local_48 = uVar2;
  FUN_00a07b4c(param_2);
  if ((uVar12 & 6) == 2) {
    uVar7 = 2;
    puVar5 = (undefined4 *)&SUB_00000002;
    uVar3 = extraout_r2;
LAB_00847864:
    *(char *)((int)param_1 + 0x15) = (char)uVar10;
    *(undefined1 *)(param_1 + 5) = 1;
    *param_1 = uVar7;
    param_1[1] = uVar3;
    param_1[2] = 4;
    param_1[3] = puVar5;
    param_1[4] = 4;
    *(undefined1 *)(param_2 + 0x5c) = 1;
    return;
  }
  if (puVar15 < &DAT_00000004) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,4,puVar15,&DAT_01864d18);
  }
  if (uVar17 == 2) {
    uVar13 = 0x1d;
    puVar8 = &DAT_01864d28;
    puVar6 = &DAT_00345b38;
  }
  else {
    if ((uVar12 & 1) != 0) {
      uVar13 = *unaff_r11;
      if (local_ec != 0) {
        thunk_FUN_016d3fb4(unaff_r11);
      }
      puVar5 = (undefined4 *)thunk_FUN_016d4a50(4);
      if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(1,4);
      }
      uVar7 = 1;
      *puVar5 = uVar13;
      goto LAB_00847864;
    }
    uVar13 = 0x20;
    puVar8 = &DAT_01864d38;
    puVar6 = &DAT_00566290;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb74b8(puVar6,uVar13,puVar8);
}

