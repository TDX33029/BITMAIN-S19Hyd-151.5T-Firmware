// FUN_00f3ba8c @ 00f3ba8c size=2184 calls_out=22 calls_in=3
// strings: boser::led_manageropen/boser/boser/src/led_manager.rsevent open/boser/boser/src/led_manager.rs:152event open/boser/boser/src/led_manager.rs:63 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::led_manageropen/boser/boser/src/led_manager.rsevent open/boser/boser/src/led_manager.rs:152event open/boser/boser/src/led_manager.rs:63 | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::led_manageropen/boser/boser/src/led_manager.rsevent open/boser/boser/src/led_manager.rs:152event open/boser/boser/src/led_manager.rs:63

void FUN_00f3ba8c(uint *param_1,int *param_2,undefined4 *param_3)

{
  code *pcVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 ****ppppuVar12;
  undefined4 ***pppuVar13;
  uint unaff_r5;
  int ****ppppiVar14;
  uint uVar15;
  int *unaff_r7;
  undefined4 *puVar16;
  bool bVar17;
  int ****local_dc;
  code *local_d8;
  undefined4 *local_d4;
  undefined *local_d0;
  int ****local_cc;
  int ****local_c8;
  int ****local_c4;
  undefined1 *local_c0;
  int ****local_bc;
  undefined **local_b8;
  undefined4 *local_b4;
  int ****local_b0;
  int ****local_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 ****local_98;
  uint local_94;
  int local_90;
  int local_8c;
  int local_88;
  undefined4 local_84;
  int local_50;
  int iStack_4c;
  int iStack_48;
  undefined1 local_44;
  int ****local_40;
  int ****local_3c;
  undefined1 *local_38;
  int ****local_30;
  int ****ppppiStack_2c;
  undefined1 *puStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x6e)) {
  case 0:
    *param_2 = param_2[0x1a];
    ppppiVar14 = (int ****)(param_2 + 0x1b);
    *(char *)ppppiVar14 = *(char *)((int)param_2 + 0x6d);
    if (*(char *)(param_2[0x1a] + 0x30) != *(char *)((int)param_2 + 0x6d)) {
      if ((DAT_01d50f88 < 3) &&
         (((DAT_01d4c7c0 - 1 < 2 ||
           ((DAT_01d4c7c0 != 0 && (cVar7 = FUN_01aaafa8(&DAT_01d4c7b8), cVar7 != '\0')))) &&
          (iVar8 = FUN_01aaa278(DAT_01d4c7b8), iVar8 != 0)))) {
        local_94 = *(uint *)(DAT_01d4c7b8 + 0x20);
        if (local_94 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c1f97c);
        }
        local_90 = *(int *)(DAT_01d4c7b8 + 0x24);
        local_8c = *(int *)(DAT_01d4c7b8 + 0x28);
        local_b8 = &local_d0;
        local_d4 = (undefined4 *)(DAT_01d4c7b8 + 0x1c);
        local_98 = (undefined4 ****)*local_d4;
        local_bc = (int ****)&local_98;
        local_dc = (int ****)&local_bc;
        local_d8 = (code *)0x1;
        local_cc = (int ****)&local_b0;
        local_88 = 0;
        local_b4 = (undefined4 *)&DAT_01d2ea4c;
        local_d0 = &DAT_005b0b55;
        local_ac = (int ****)FUN_00ba809c;
        local_b0 = ppppiVar14;
        FUN_01aaaecc(DAT_01d4c7b8,&local_dc);
        iVar8 = DAT_01d4c7b8;
        if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
          local_3c = *(int *****)(DAT_01d4c7b8 + 0x14);
          local_38 = *(undefined1 **)(DAT_01d4c7b8 + 0x18);
          local_40 = (int ****)&DAT_00000003;
          DataMemoryBarrier(0xb);
          puVar16 = DAT_01d4edc8;
          pcVar2 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar16 = &DAT_01cfc5e0;
            pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar9 = (*(code *)puVar16[3])(pcVar2,&local_40);
          if (iVar9 != 0) {
            local_30 = local_40;
            ppppiStack_2c = local_3c;
            puStack_28 = local_38;
            FUN_01aaa328(iVar8,pcVar2,puVar16[4],&local_30,&local_dc);
          }
        }
      }
      else {
        iVar8 = DAT_01d4c7b8;
        if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
          local_c4 = *(int *****)(DAT_01d4c7b8 + 0x14);
          local_c0 = *(undefined1 **)(DAT_01d4c7b8 + 0x18);
          local_c8 = (int ****)&DAT_00000003;
          DataMemoryBarrier(0xb);
          puVar16 = DAT_01d4edc8;
          pcVar2 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar16 = &DAT_01cfc5e0;
            pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar9 = (*(code *)puVar16[3])(pcVar2,&local_c8);
          if (iVar9 != 0) {
            local_b4 = (undefined4 *)(DAT_01d4c7b8 + 0x1c);
            local_98 = (undefined4 ****)*local_b4;
            local_94 = *(uint *)(DAT_01d4c7b8 + 0x20);
            if (local_94 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c1f97c);
            }
            local_40 = (int ****)&local_98;
            local_90 = *(int *)(DAT_01d4c7b8 + 0x24);
            local_8c = *(int *)(DAT_01d4c7b8 + 0x28);
            local_3c = (int ****)&local_b0;
            local_bc = (int ****)&local_40;
            local_88 = 0;
            local_b8 = (undefined **)&DAT_00000001;
            local_ac = (int ****)&local_dc;
            local_38 = &DAT_01d2ea4c;
            local_b0 = (int ****)&DAT_005b0b55;
            local_d8 = FUN_00ba809c;
            local_30 = local_c8;
            ppppiStack_2c = local_c4;
            puStack_28 = local_c0;
            local_dc = ppppiVar14;
            FUN_01aaa328(iVar8,pcVar2,puVar16[4],&local_30,&local_bc);
          }
        }
      }
      FUN_00ada164(&local_a8,(char)param_2[0x1b],*(undefined4 *)*param_2);
      iVar8 = *param_2;
      param_2[1] = local_a8;
      param_2[2] = iStack_a4;
      param_2[3] = iStack_a0;
      *(undefined1 *)(param_2 + 10) = 0;
      param_2[4] = iVar8;
LAB_00f3bed0:
      param_2[5] = iVar8;
      *(undefined2 *)((int)param_2 + 0x29) = 0x100;
      param_2[6] = param_2[1];
      param_2[7] = param_2[2];
      param_2[8] = param_2[3];
      ppppiVar14 = (int ****)(iVar8 + 0x14);
      DataMemoryBarrier(0xb);
      if (*(int *)(iVar8 + 0x2c) != 0) {
        local_98 = &local_30;
        local_30 = ppppiVar14;
        FUN_019a768c(iVar8 + 0x2c,1,&local_98,&DAT_01c191f8,&DAT_01d293e0);
      }
      param_2[0xb] = (int)ppppiVar14;
      *(undefined1 *)(param_2 + 0x19) = 0;
LAB_00f3bf18:
      *(undefined1 *)(param_2 + 0x18) = 0;
      param_2[0xc] = (int)ppppiVar14;
LAB_00f3bf2c:
      *(undefined1 *)(param_2 + 0xf) = 0;
      param_2[0xd] = (int)ppppiVar14;
LAB_00f3bf3c:
      param_2[0xe] = (int)ppppiVar14;
LAB_00f3bf40:
      param_2[0x10] = (int)ppppiVar14;
      *(undefined1 *)(param_2 + 0x17) = 0;
      param_2[0x13] = 0;
      param_2[0x14] = 0;
      param_2[0x15] = 1;
      param_2[0x16] = 1;
      param_2[0x11] = 0;
switchD_00f3c214_caseD_4:
      bVar5 = FUN_019f9bc4(param_2 + 0x10,param_3);
      if (bVar5 != 2) {
        FUN_0193c3cc(param_2 + 0x10);
        if ((bVar5 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c232b0);
        }
        iVar9 = param_2[0xc];
        *(undefined1 *)(param_2 + 0xf) = 1;
        *(undefined1 *)(param_2 + 0x19) = 1;
        *(undefined1 *)(param_2 + 0x18) = 1;
        param_2[9] = iVar9;
        uVar10 = FUN_0120e1e8(&DAT_01c1f9ac);
        iVar8 = *(int *)(iVar9 + 0x14);
        *(undefined4 *)(iVar9 + 0x14) = uVar10;
        *(undefined1 *)((int)param_2 + 0x29) = 1;
        param_2[0xb] = iVar8;
        FUN_019f5854(iVar8);
        iVar8 = param_2[0xb];
        *(undefined1 *)((int)param_2 + 0x29) = 0;
        param_2[0xc] = iVar8;
        goto LAB_00f3c008;
      }
      *(undefined1 *)(param_2 + 0xf) = 4;
      uVar6 = 3;
      *(undefined1 *)(param_2 + 0x18) = 3;
      *(undefined1 *)(param_2 + 0x19) = 3;
      goto LAB_00f3c024;
    }
LAB_00f3c198:
    uVar15 = 4;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1f98c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1f98c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[10]) {
    case '\0':
      iVar8 = param_2[4];
      goto LAB_00f3bed0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1f99c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1f99c);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x19]) {
      case '\0':
        ppppiVar14 = (int ****)param_2[0xb];
        goto LAB_00f3bf18;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c23280);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c23280);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x18]) {
      case '\0':
        ppppiVar14 = (int ****)param_2[0xc];
        goto LAB_00f3bf2c;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c23290);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c23290);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0xf]) {
      case '\0':
        ppppiVar14 = (int ****)param_2[0xd];
        goto LAB_00f3bf3c;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c232a0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c232a0);
      case '\x03':
        ppppiVar14 = (int ****)param_2[0xe];
        goto LAB_00f3bf40;
      }
      goto switchD_00f3c214_caseD_4;
    case '\x04':
      iVar8 = param_2[0xc];
    }
LAB_00f3c008:
    FUN_01209998(&local_98,iVar8,*param_3);
    iVar4 = local_88;
    iVar9 = local_8c;
    iVar8 = local_90;
    if (((uint)local_98 & 1) != 0) {
      uVar6 = 4;
LAB_00f3c024:
      *(undefined1 *)(param_2 + 10) = uVar6;
LAB_00f3c028:
      *(undefined1 *)param_1 = 5;
      uVar6 = 3;
      goto LAB_00f3c1b0;
    }
    piVar11 = (int *)param_2[0xc];
    if (*piVar11 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar17 = (bool)hasExclusiveAccess(piVar11);
      if (!bVar17) goto LAB_00f3c074;
      *piVar11 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_00f3c074:
      (**(code **)(piVar11[2] + 0x10))();
    }
    bVar17 = iVar8 == 0 && iVar9 == 0;
    if (iVar8 != 0 || iVar9 != 0) {
      bVar17 = iVar4 == 0;
    }
    if (!bVar17) {
      FUN_00b76e0c(iVar4,local_84);
LAB_00f3c390:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xf3c390);
      (*pcVar1)();
    }
    FUN_00ada0a8(&local_98,param_2[5]);
    uVar3 = local_94;
    ppppuVar12 = local_98;
    if (((char)local_98 == '\x04') || (uVar15 = (uint)local_98 & 0xff, uVar15 == 4)) {
      iVar8 = param_2[5];
      ppppuVar12 = *(undefined4 *****)(iVar8 + 0xc);
      do {
        pppuVar13 = *ppppuVar12;
        bVar17 = (bool)hasExclusiveAccess(ppppuVar12);
      } while (!bVar17);
      *ppppuVar12 = (undefined4 ***)((int)pppuVar13 + 1);
      if ((int)pppuVar13 < 0) goto LAB_00f3c390;
      unaff_r7 = param_2 + 6;
      local_94 = *(uint *)(iVar8 + 0x10);
      *(undefined1 *)((int)param_2 + 0x2a) = 0;
      local_50 = *unaff_r7;
      iStack_4c = param_2[7];
      iStack_48 = param_2[8];
      local_44 = 0;
      local_98 = ppppuVar12;
      uVar10 = FUN_0120db94(&local_98,&DAT_01c1f9cc);
      iVar8 = param_2[9];
      piVar11 = *(int **)(iVar8 + 0x14);
      if (*piVar11 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar17 = (bool)hasExclusiveAccess(piVar11);
        if (!bVar17) goto LAB_00f3c148;
        *piVar11 = 0x84;
      }
      else {
        ClearExclusiveLocal();
LAB_00f3c148:
        (**(code **)(piVar11[2] + 0x10))();
      }
      *(undefined4 *)(iVar8 + 0x14) = uVar10;
      unaff_r5 = 0;
      *(undefined1 *)((int)param_2 + 0x29) = 0;
      FUN_019f8c54(param_2[9],1);
      *(undefined1 *)(param_2 + 10) = 1;
      uVar15 = 4;
      *(undefined1 *)((int)param_2 + 0x2a) = 0;
    }
    else {
      *(undefined1 *)((int)param_2 + 0x29) = 0;
      FUN_019f8c54(param_2[9],1);
      FUN_00ba80d8(param_2 + 6);
      *(undefined1 *)(param_2 + 10) = 1;
      *(undefined1 *)((int)param_2 + 0x2a) = 0;
      if (uVar15 == 5) goto LAB_00f3c028;
      unaff_r5 = (uint)ppppuVar12 >> 8 | uVar3 << 0x18;
      unaff_r7 = (int *)(uVar3 >> 8);
    }
    FUN_00ba6dc4(param_2 + 1);
    if (uVar15 == 4) {
      *(char *)(*param_2 + 0x30) = (char)param_2[0x1b];
      goto LAB_00f3c198;
    }
  }
  *param_1 = uVar15 | unaff_r5 << 8;
  param_1[1] = (int)unaff_r7 << 8 | unaff_r5 >> 0x18;
  uVar6 = 1;
LAB_00f3c1b0:
  *(undefined1 *)((int)param_2 + 0x6e) = uVar6;
  return;
}

