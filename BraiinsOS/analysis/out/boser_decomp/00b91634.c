// FUN_00b91634 @ 00b91634 size=964 calls_out=12 calls_in=0
// strings: BUG: ethernet interface lookup task panicked

void FUN_00b91634(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined4 **ppuVar4;
  undefined4 **ppuVar5;
  undefined1 uVar6;
  undefined ***pppuVar7;
  undefined1 uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 *puVar14;
  int iVar15;
  uint unaff_r10;
  ulonglong uVar16;
  undefined4 **local_a8;
  undefined1 local_a4;
  undefined2 local_a3;
  undefined1 local_a1;
  undefined ***local_a0;
  code *local_9c;
  undefined4 **local_98;
  undefined4 local_94;
  undefined **local_90;
  undefined1 local_8c;
  undefined2 local_8b;
  undefined1 local_89;
  uint *local_88;
  int local_84;
  undefined4 local_78;
  undefined1 local_70;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint *local_50;
  int local_4c;
  
  puVar14 = (undefined4 *)((uint)&local_a0 | 0x10);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 8)) {
  case 0:
    uVar16 = FUN_019ef7f4(&DAT_01c13dec);
    unaff_r10 = (uint)(uVar16 >> 0x20);
    iVar11 = 0x218;
    if ((uVar16 & 1) != 0) {
      iVar11 = 0x148;
    }
    uVar12 = *(undefined4 *)(unaff_r10 + iVar11);
    do {
      do {
        iVar11 = DAT_01d50474;
        uVar13 = DAT_01d50470;
        uVar9 = DAT_01d50470 + 1;
        iVar15 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
        bVar2 = (bool)hasExclusiveAccess(0x1d50470);
      } while (!bVar2);
      bVar2 = DAT_01d50470 == 0;
      bVar3 = DAT_01d50474 == 0;
      DAT_01d50470 = uVar9;
      DAT_01d50474 = iVar15;
    } while (bVar2 && bVar3);
    local_84 = 0x200;
    if ((uVar16 & 1) != 0) {
      local_84 = 0x138;
    }
    local_84 = unaff_r10 + local_84;
    local_88 = *(uint **)(local_84 + 8);
    if (local_88 != (uint *)0x0) {
      do {
        uVar9 = *local_88;
        bVar2 = (bool)hasExclusiveAccess(local_88);
      } while (!bVar2);
      *local_88 = uVar9 + 1;
      if ((int)uVar9 < 0) {
LAB_00b9172c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xb9172c);
        (*pcVar1)();
      }
      local_84 = *(int *)(local_84 + 0xc);
      do {
        uVar9 = *local_88;
        bVar2 = (bool)hasExclusiveAccess(local_88);
      } while (!bVar2);
      *local_88 = uVar9 + 1;
      if (0x7fffffff < uVar9) goto LAB_00b9172c;
    }
    local_70 = 1;
    local_98 = (undefined4 **)&PTR_LAB_01c13e64;
    local_a0 = (undefined ***)0xcc;
    *puVar14 = 0;
    puVar14[1] = 0;
    puVar14[4] = uVar13;
    puVar14[5] = iVar11;
    local_78 = 0;
    local_9c = (code *)0x0;
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_a8 = (undefined4 **)0x0;
    local_50 = local_88;
    local_4c = local_84;
    iVar11 = FUN_01be5878(&local_a8,0x20,0x60);
    ppuVar4 = local_a8;
    if ((iVar11 != 0) || (local_a8 == (undefined4 **)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x60);
    }
    FUN_01bed4e2(local_a8,&local_a0,0x60);
    FUN_019f02d4(&local_a0,uVar12,ppuVar4,1,uVar16);
    if (((uint)local_a0 & 0xfe) != 4) {
      local_a4 = SUB41(local_9c,0);
      local_a1 = (undefined1)((uint)local_9c >> 0x18);
      local_a8 = local_a0;
      local_a3 = (undefined2)((uint)local_9c >> 8);
      local_9c = FUN_019a7d7c;
      local_a0 = (undefined ***)&local_a8;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005ab28b,&local_a0,&DAT_01c13dec);
    }
    FUN_014397e4((int)uVar16,unaff_r10);
    *(undefined4 ***)(param_2 + 4) = ppuVar4;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c13dfc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c13dfc);
  }
  uVar12 = *param_3;
  uVar13 = 0;
  local_9c = (code *)0x0;
  local_a0 = (undefined ***)0x1;
  uVar9 = FUN_019ec670(uVar12);
  if ((uVar9 & 0xff) == 2) {
LAB_00b91844:
    (**(code **)(*(int *)(*(int *)(param_2 + 4) + 8) + 0xc))(*(int *)(param_2 + 4),&local_a0,uVar12)
    ;
    iVar11 = local_94;
    ppuVar4 = local_98;
    pppuVar7 = local_a0;
    local_a8 = (undefined4 **)local_90;
    uVar9 = 0;
    if (local_a0 != (undefined ***)0x0 || local_9c != (code *)0x0) {
      uVar9 = uVar13;
    }
    local_a4 = local_8c;
    FUN_019edbc4(uVar9,unaff_r10);
    uVar6 = local_a4;
    ppuVar5 = local_a8;
    if (((uint)pppuVar7 & 1) == 0) {
      piVar10 = *(int **)(param_2 + 4);
      if (*piVar10 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar2 = (bool)hasExclusiveAccess(piVar10);
        if (!bVar2) goto LAB_00b91904;
        *piVar10 = 0x84;
      }
      else {
        ClearExclusiveLocal();
LAB_00b91904:
        (**(code **)(piVar10[2] + 0x10))();
      }
      if (ppuVar4 != (undefined4 **)0x0 || local_94 != 0) {
        local_a0 = (undefined ***)ppuVar4;
        local_98 = ppuVar5;
        local_94 = CONCAT13(local_89,CONCAT21(local_8b,uVar6));
        local_9c = (code *)iVar11;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("BUG: ethernet interface lookup task panicked",0x2c,&local_a0,&DAT_01c13dcc,
                     &DAT_01c13e0c);
      }
      *param_1 = ppuVar5;
      uVar8 = 1;
      *(undefined1 *)(param_1 + 1) = uVar6;
      goto LAB_00b91930;
    }
  }
  else if ((uVar9 & 1) == 0) {
    uVar13 = (uVar9 & 0xffffff) >> 8;
    unaff_r10 = (uVar9 & 0xffffff) >> 0x10;
    goto LAB_00b91844;
  }
  *(undefined1 *)param_1 = 2;
  uVar8 = 3;
LAB_00b91930:
  *(undefined1 *)(param_2 + 8) = uVar8;
  return;
}

