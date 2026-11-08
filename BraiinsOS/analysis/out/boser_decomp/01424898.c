// FUN_01424898 @ 01424898 size=1380 calls_out=16 calls_in=2
// strings: overflow when adding duration to instant | pong received implies ping_sent_at | bdp enabled implies bytes

undefined8 FUN_01424898(uint *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined *puVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  bool bVar20;
  uint in_fpscr;
  double dVar21;
  double dVar22;
  double dVar23;
  uint local_80;
  uint uStack_7c;
  uint *puStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  undefined4 local_64;
  undefined1 *local_60;
  uint local_50;
  uint local_4c;
  uint *local_48;
  uint local_40;
  uint local_3c;
  uint *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  FUN_01933ff0(&local_40,param_1[0x1c] + 8);
  uVar2 = local_3c;
  if (local_40 == 1) {
    local_64 = CONCAT31(local_64._1_3_,local_38._0_1_);
    local_68 = local_3c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_68,&DAT_01cf4960,&DAT_01cf4970);
  }
  uVar4 = (uint)local_38 & 0xff;
  puVar11 = &local_40;
  FUN_01421a04(puVar11,*(undefined4 *)(local_3c + 0x40),*(undefined4 *)(local_3c + 0x44));
  puVar3 = local_38;
  uVar17 = local_3c;
  uVar19 = local_40;
  iVar12 = uVar2 + 8;
  puVar18 = param_1 + 10;
  uVar14 = *(uint *)param_1[0x1c];
  if ((undefined1 *)param_1[0xc] != &DAT_3b9aca00) {
    FUN_01424e74(puVar18,uVar14 < 3,iVar12);
    FUN_01424ff8(puVar18,param_2,uVar14 < 3,iVar12);
  }
  if (*(undefined1 **)(uVar2 + 0x18) == &DAT_3b9aca00) {
LAB_01424970:
    uVar13 = 2;
    goto LAB_01424974;
  }
  iVar10 = *(int *)(uVar2 + 0x48);
  FUN_007038d0(iVar10 + 0x18,*param_2);
  piVar7 = (int *)(iVar10 + 8);
  iVar10 = *piVar7;
  if (iVar10 == 3) {
    DataMemoryBarrier(0xb);
    do {
      bVar20 = (bool)hasExclusiveAccess(piVar7);
      if (bVar20) {
        *piVar7 = 0;
        goto LAB_014249d4;
      }
      iVar10 = *piVar7;
    } while (iVar10 == 3);
  }
  ClearExclusiveLocal();
LAB_014249d4:
  DataMemoryBarrier(0xb);
  if (iVar10 != 3) {
    if (iVar10 == 4) {
      local_80 = CONCAT22(local_80._2_2_,0xb01);
      FUN_01386464(&local_68,&local_80);
      uVar1 = (undefined1)local_68;
      if ((local_68 & 0xff) == 3) goto LAB_01424ad0;
      if ((local_68 & 0xff) != 4) {
        FUN_01bed4e2((uint)puVar11 | 1,(uint)&local_68 | 1,0x17);
        local_40 = CONCAT31(local_40._1_3_,uVar1);
        FUN_013b8db0(&local_80,puVar11);
        if ((local_80 & 0xff) == 5) goto LAB_01424ad0;
        if ((local_80 & 0xff) != 6) {
          local_40 = local_80;
          local_3c = uStack_7c;
          local_38 = puStack_78;
          local_34 = uStack_74;
          local_30 = uStack_70;
          uStack_2c = uStack_6c;
          FUN_01431954(puVar11);
          puVar11 = &local_80;
          goto LAB_01424970;
        }
      }
    }
    uVar13 = 2;
    if ((((undefined1 *)param_1[0xc] != &DAT_3b9aca00) && (0x3b9aca01 < param_1[0x14])) &&
       (iVar12 = (**(code **)(param_1[0x17] + 0xc))(param_1[0x16],param_2), iVar12 == 0)) {
      FUN_014252ac(puVar18);
      uVar13 = 1;
      param_1[0xc] = (uint)&DAT_3b9aca00;
      *(undefined1 *)(uVar2 + 0x4c) = 1;
    }
    goto LAB_01424974;
  }
LAB_01424ad0:
  puVar5 = *(undefined1 **)(uVar2 + 0x18);
  if (puVar5 == &DAT_3b9aca00) {
    uVar8 = 0x22;
    puVar9 = &DAT_01cf4980;
    pcVar6 = "pong received implies ping_sent_at";
    goto LAB_01424d28;
  }
  *(undefined1 **)(uVar2 + 0x18) = &DAT_3b9aca00;
  local_4c = uVar17;
  local_50 = uVar19;
  local_68 = *(uint *)(uVar2 + 0x10);
  local_64 = *(undefined4 *)(uVar2 + 0x14);
  local_48 = puVar3;
  local_60 = puVar5;
  FUN_019ac248(&local_40,&local_50,&local_68);
  uVar8 = local_30;
  uVar13 = local_34;
  puVar11 = local_38;
  uVar16 = local_40;
  if ((undefined1 *)param_1[0xc] != &DAT_3b9aca00) {
    if (*(undefined1 **)(uVar2 + 0x38) != &DAT_3b9aca00) {
      FUN_01421a04(&local_40,*(undefined4 *)(uVar2 + 0x40),*(undefined4 *)(uVar2 + 0x44));
      *(uint *)(uVar2 + 0x30) = local_40;
      *(uint *)(uVar2 + 0x34) = local_3c;
      *(uint **)(uVar2 + 0x38) = local_38;
    }
    FUN_01424e74(puVar18,uVar14 < 3,iVar12);
    FUN_01424ff8(puVar18,param_2,uVar14 < 3,iVar12);
  }
  if ((undefined1 *)param_1[2] == &DAT_3b9aca00) goto LAB_01424970;
  if (*(int *)(uVar2 + 8) != 1) {
    uVar8 = 0x19;
    puVar9 = &DAT_01cf4990;
    pcVar6 = "bdp enabled implies bytes";
    goto LAB_01424d28;
  }
  uVar15 = *(uint *)(uVar2 + 0xc);
  *(undefined4 *)(uVar2 + 8) = 1;
  *(undefined4 *)(uVar2 + 0xc) = 0;
  uVar14 = param_1[8];
  if (uVar14 == 0x1000000) {
LAB_01424c98:
    FUN_014317d0(param_1);
    uVar13 = 2;
  }
  else {
    dVar22 = (double)FUN_01bf0e80(puVar11,uVar13);
    dVar23 = *(double *)(param_1 + 6);
    dVar21 = (double)VectorUnsignedToFloat(uVar8,(byte)(in_fpscr >> 0x16) & 3);
    dVar21 = dVar21 / 1000000000.0 + dVar22;
    if (uVar16 != 0) {
      dVar21 = 0.0;
    }
    dVar22 = dVar23 + (dVar21 - dVar23) * 0.125;
    if (dVar23 == 0.0) {
      dVar22 = dVar21;
    }
    dVar21 = (double)VectorUnsignedToFloat(uVar15,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
    dVar21 = dVar21 / (dVar22 * 1.5);
    *(double *)(param_1 + 6) = dVar22;
    if ((dVar21 < *(double *)(param_1 + 4)) ||
       (*(double *)(param_1 + 4) = dVar21, uVar15 < (uVar14 << 1) / 3)) goto LAB_01424c98;
    puVar11 = (uint *)0x1000000;
    if (uVar15 << 1 < 0x1000000) {
      puVar11 = (uint *)(uVar15 << 1);
    }
    uVar14 = param_1[2] >> 1;
    uVar13 = 0;
    if ((*param_1 & 1) != 0) {
      uVar14 = (param_1[2] >> 1) + 500000000;
    }
    param_1[8] = (uint)puVar11;
    param_1[9] = 0;
    *param_1 = (uint)((byte)param_1[1] & 1) << 0x1f | *param_1 >> 1;
    param_1[1] = param_1[1] >> 1;
    param_1[2] = uVar14;
  }
  uVar16 = param_1[1];
  puVar9 = &DAT_01d281d4;
  pcVar6 = "overflow when adding duration to instant";
  uVar14 = uVar19 + *param_1;
  uVar19 = uVar17 + uVar16 + (uint)CARRY4(uVar19,*param_1);
  uVar8 = 0x28;
  if ((int)uVar16 < 0 != (int)((uVar17 ^ uVar19) & ~(uVar17 ^ uVar16)) < 0) {
LAB_01424d28:
                    /* WARNING: Subroutine does not return */
    FUN_0130739c(pcVar6,uVar8,puVar9);
  }
  puVar5 = (undefined1 *)(param_1[2] + (int)puVar3);
  if (&DAT_3b9aca00 <= puVar5) {
    bVar20 = 0xfffffffe < uVar14;
    uVar14 = uVar14 + 1;
    uVar17 = uVar19 + bVar20;
    if ((int)((uVar19 ^ uVar17) & ~uVar19) < 0) goto LAB_01424d28;
    puVar5 = puVar5 + -1000000000;
    uVar19 = uVar17;
  }
  *(undefined1 **)(uVar2 + 0x28) = puVar5;
  *(uint *)(uVar2 + 0x20) = uVar14;
  *(uint *)(uVar2 + 0x24) = uVar19;
LAB_01424974:
  FUN_00a97e8c(uVar2,uVar4);
  return CONCAT44(puVar11,uVar13);
}

