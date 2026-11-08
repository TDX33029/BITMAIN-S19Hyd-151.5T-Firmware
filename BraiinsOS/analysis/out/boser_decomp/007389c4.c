// FUN_007389c4 @ 007389c4 size=968 calls_out=13 calls_in=0
// strings: 

void FUN_007389c4(undefined1 *param_1,int *param_2,undefined4 *param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint *puVar4;
  undefined4 **ppuVar5;
  undefined1 uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  uint *local_d0;
  undefined1 uStack_cc;
  undefined2 local_cb;
  undefined1 local_c9;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined2 local_bc;
  undefined1 local_ba;
  undefined4 *local_b8 [2];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined4 **local_a0;
  code *local_9c;
  undefined *local_98;
  uint *local_88;
  int local_84;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint *local_48;
  int local_44;
  
  puVar14 = (undefined4 *)((uint)&local_a0 | 0x10);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[2]) {
  case '\0':
    FUN_006666fc(&local_dc,*(undefined4 *)(*param_2 + 4),*(undefined4 *)(*param_2 + 8));
    uVar15 = FUN_019ef7f4(&DAT_01c07e58);
    iVar9 = (int)(uVar15 >> 0x20);
    iVar10 = 0x218;
    if ((uVar15 & 1) != 0) {
      iVar10 = 0x148;
    }
    uVar12 = *(undefined4 *)(iVar9 + iVar10);
    do {
      do {
        iVar10 = DAT_01d50474;
        uVar7 = DAT_01d50470;
        uVar13 = DAT_01d50470 + 1;
        iVar11 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
        bVar2 = (bool)hasExclusiveAccess(0x1d50470);
      } while (!bVar2);
      bVar2 = DAT_01d50470 == 0;
      bVar3 = DAT_01d50474 == 0;
      DAT_01d50470 = uVar13;
      DAT_01d50474 = iVar11;
    } while (bVar2 && bVar3);
    local_84 = 0x200;
    if ((uVar15 & 1) != 0) {
      local_84 = 0x138;
    }
    local_84 = iVar9 + local_84;
    local_88 = *(uint **)(local_84 + 8);
    if (local_88 != (uint *)0x0) {
      do {
        uVar13 = *local_88;
        bVar2 = (bool)hasExclusiveAccess(local_88);
      } while (!bVar2);
      *local_88 = uVar13 + 1;
      if ((int)uVar13 < 0) {
LAB_00738af0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x738af0);
        (*pcVar1)();
      }
      local_84 = *(int *)(local_84 + 0xc);
      do {
        uVar13 = *local_88;
        bVar2 = (bool)hasExclusiveAccess(local_88);
      } while (!bVar2);
      *local_88 = uVar13 + 1;
      if (0x7fffffff < uVar13) goto LAB_00738af0;
    }
    puVar14[4] = uVar7;
    puVar14[5] = iVar10;
    *puVar14 = 0;
    puVar14[1] = 0;
    local_78 = 0;
    local_9c = (code *)0x0;
    local_50 = 0;
    local_54 = 0;
    local_58 = 0;
    local_d0 = (undefined4 *)0x0;
    local_6c = local_d8;
    local_a0 = (undefined4 **)0xcc;
    local_68 = local_d4;
    local_70 = local_dc;
    local_98 = &DAT_01c080a8;
    local_48 = local_88;
    local_44 = local_84;
    iVar10 = FUN_01be5878(&local_d0,0x20,0x60);
    puVar4 = local_d0;
    if ((iVar10 != 0) || (local_d0 == (undefined4 *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x60);
    }
    FUN_01bed4e2(local_d0,&local_a0,0x60);
    FUN_019f02d4(&local_a0,uVar12,puVar4,1,uVar15);
    if (((uint)local_a0 & 0xfe) != 4) {
      uStack_cc = SUB41(local_9c,0);
      local_c9 = (undefined1)((uint)local_9c >> 0x18);
      local_d0 = (uint *)local_a0;
      local_cb = (undefined2)((uint)local_9c >> 8);
      local_9c = FUN_019a7d7c;
      local_a0 = &local_d0;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005ab28b,&local_a0,&DAT_01c07e58);
    }
    FUN_014397e4((int)uVar15,iVar9);
    param_2[1] = (int)puVar4;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c07e68);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c07e68);
  }
  uVar12 = *param_3;
  local_a0 = (undefined4 **)CONCAT31(local_a0._1_3_,2);
  uVar7 = FUN_019ec670(uVar12);
  if ((uVar7 & 0xff) == 2) {
    uVar13 = 0;
LAB_00738c0c:
    (**(code **)(*(int *)(param_2[1] + 8) + 0xc))(param_2[1],&local_a0,uVar12);
    ppuVar5 = local_a0;
    uVar7 = (uint)local_a0 & 0xff;
    FUN_01bed4e2(&local_d0,(uint)&local_a0 | 1,0x17);
    if (uVar7 != 2) {
      uVar13 = 0;
    }
    FUN_019edbc4(uVar13,puVar14);
    if (uVar7 != 2) {
      local_b8[0] = local_d0;
      uStack_b0 = uStack_c8;
      uStack_ac = uStack_c4;
      uStack_a8 = uStack_c0;
      local_a4 = local_bc;
      local_a2 = local_ba;
      piVar8 = (int *)param_2[1];
      if (*piVar8 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar2 = (bool)hasExclusiveAccess(piVar8);
        if (!bVar2) goto LAB_00738cb4;
        *piVar8 = 0x84;
      }
      else {
        ClearExclusiveLocal();
LAB_00738cb4:
        (**(code **)(piVar8[2] + 0x10))();
      }
      if (((uint)ppuVar5 & 1) != 0) {
        FUN_01bed4e2(&local_a0,(uint)local_b8 | 7,0x10);
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_003e06e0,0x2c,&local_a0,&DAT_01c07d28,&DAT_01c07e78);
      }
      FUN_01bed4e2(param_1,local_b8,0x11);
      uVar6 = 1;
      goto LAB_00738cdc;
    }
  }
  else if ((uVar7 & 1) == 0) {
    uVar13 = (uVar7 & 0xffffff) >> 8;
    puVar14 = (undefined4 *)((uVar7 & 0xffffff) >> 0x10);
    goto LAB_00738c0c;
  }
  uVar6 = 3;
  *param_1 = 3;
LAB_00738cdc:
  *(undefined1 *)(param_2 + 2) = uVar6;
  return;
}

