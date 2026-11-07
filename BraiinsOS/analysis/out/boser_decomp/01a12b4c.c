// FUN_01a12b4c @ 01a12b4c size=5276 calls_out=22 calls_in=0
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_01a12b4c(undefined4 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 ****ppppuVar2;
  undefined4 ****ppppuVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 extraout_r1;
  int *piVar10;
  undefined4 ***pppuVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  int local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 ****local_100;
  undefined4 ****local_fc;
  undefined4 ***local_f8;
  undefined4 ****local_f0;
  undefined4 ****local_ec;
  undefined4 *local_e8;
  undefined4 ****local_e0;
  undefined4 ****local_dc;
  undefined4 ***local_d8;
  undefined4 ****local_d0;
  undefined4 ****ppppuStack_cc;
  undefined4 ***pppuStack_c8;
  int local_c4;
  undefined4 local_c0;
  int local_bc;
  undefined4 *puStack_b8;
  undefined4 uStack_b4;
  undefined4 ****local_b0;
  undefined4 ****local_ac;
  undefined4 ***local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  int local_9c;
  undefined4 *local_98;
  undefined4 local_94;
  undefined4 ****local_8c;
  undefined4 ****local_88;
  undefined4 *local_84;
  undefined4 ***local_80;
  undefined4 ****local_7c;
  undefined4 ****local_78;
  undefined4 ****local_74;
  undefined4 *local_70;
  undefined4 ****local_6c;
  undefined4 ****local_68;
  undefined4 *local_64;
  undefined4 ****local_60;
  undefined4 ****local_5c;
  undefined4 ***local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 ****local_48;
  undefined4 ****local_44;
  undefined4 ****local_40;
  undefined4 ****local_3c;
  undefined4 *local_38;
  undefined4 ****local_30;
  undefined4 ****local_2c;
  undefined4 *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x5a)) {
  case 0:
    *(undefined2 *)(param_1 + 0x16) = 0;
    *param_1 = param_1[8];
    param_1[1] = param_1[9];
    param_1[2] = param_1[10];
    param_1[0xc] = param_1[0x14];
    param_1[0xd] = param_1[0x15];
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d29d80);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d29d80);
  case 3:
    goto switchD_01a12b7c_caseD_3;
  case 4:
    goto switchD_01a12b7c_caseD_4;
  case 5:
    uVar16 = *(undefined8 *)(param_1 + 0x19);
    goto LAB_01a13a78;
  case 6:
    uVar16 = *(undefined8 *)(param_1 + 0x18);
    goto LAB_01a12d18;
  }
  while( true ) {
    param_1[0x18] = param_1;
    *(undefined1 *)(param_1 + 0x1f) = 0;
switchD_01a12b7c_caseD_3:
    FUN_01a1239c(&local_b0,param_1 + 0x18,*param_2);
    uVar4 = local_94;
    puVar9 = local_98;
    iVar7 = local_9c;
    uVar14 = local_a0;
    uVar13 = local_a4;
    pppuVar11 = local_a8;
    ppppuVar3 = local_ac;
    ppppuVar2 = local_b0;
    if (local_b0 == (undefined4 ****)0x2) {
      uVar13 = 1;
      uVar12 = 3;
      goto LAB_01a13a10;
    }
    *(undefined1 *)((int)param_1 + 0x59) = 1;
    if (*(char *)(param_1 + 0x1f) == '\x03') {
      FUN_009cdcac(param_1 + 0x19);
    }
    if (((uint)ppppuVar2 & 1) != 0) break;
    *(undefined2 *)(param_1 + 0x16) = 1;
    param_1[0xf] = puVar9;
    *(undefined1 *)(param_1 + 0x23) = 0;
    param_1[4] = ppppuVar3;
    param_1[5] = pppuVar11;
    param_1[7] = uVar14;
    param_1[0xe] = iVar7;
    param_1[0x10] = uVar4;
    param_1[6] = uVar13;
    param_1[0x18] = param_1[0xc] + 8;
switchD_01a12b7c_caseD_4:
    FUN_006177f4(&local_110,param_1 + 0x18,param_2);
    if (local_110 == 0) {
      uVar13 = 1;
      uVar12 = 4;
      goto LAB_01a13a10;
    }
    param_1[0x11] = local_110;
    param_1[0x12] = uStack_10c;
    param_1[0x13] = uStack_108;
    cVar5 = *(char *)(param_1 + 0x23);
    bVar15 = cVar5 == '\x03';
    if (bVar15) {
      cVar5 = *(char *)(param_1 + 0x22);
    }
    if (bVar15 && cVar5 == '\x03') {
      FUN_0193c3cc(param_1 + 0x1a);
    }
    if (param_1[0xe] == -0x80000000) {
      local_b0 = (undefined4 ****)param_1[4];
      local_ac = (undefined4 ****)param_1[5];
      local_a8 = (undefined4 ***)param_1[6];
      local_a4 = param_1[7];
      uVar16 = (**(code **)(((undefined4 *)param_1[0x13])[1] + 0x14))(*(undefined4 *)param_1[0x13]);
      *(undefined8 *)(param_1 + 0x18) = uVar16;
LAB_01a12d18:
      cVar5 = (**(code **)((int)((ulonglong)uVar16 >> 0x20) + 0xc))((int)uVar16,param_2);
      if (cVar5 == '\x1c') {
        uVar13 = 1;
        uVar12 = 6;
        goto LAB_01a13a10;
      }
      FUN_01139b38(param_1[0x18],param_1[0x19]);
      if (cVar5 == '\x1b') {
        FUN_01bed4e2((uint)&local_b0 | 1,param_1 + 4,0x10);
        local_9c = -0x80000000;
        local_b0 = (undefined4 ****)CONCAT31(local_b0._1_3_,1);
        FUN_01a15024(&local_d0,param_1[0xd],&local_b0);
        if (local_bc != -0x7ffffffe) {
          local_b0 = local_d0;
          local_ac = ppppuStack_cc;
          local_a8 = pppuStack_c8;
          local_a4 = local_c4;
          local_a0 = local_c0;
          local_9c = local_bc;
          local_98 = puStack_b8;
          local_94 = uStack_b4;
          if ((DAT_01d50f88 < 5) &&
             (((DAT_01d50570 - 1 < 2 ||
               ((DAT_01d50570 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d50568), cVar5 != '\0')))) &&
              (iVar7 = FUN_01aaa278(DAT_01d50568), iVar7 != 0)))) {
            if (*(undefined4 *****)(DAT_01d50568 + 0x20) == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29da0);
            }
            local_68 = &local_80;
            local_58 = *(undefined4 ****)(DAT_01d50568 + 0x24);
            uStack_54 = *(undefined4 *)(DAT_01d50568 + 0x28);
            local_84 = (undefined4 *)(DAT_01d50568 + 0x1c);
            local_60 = (undefined4 ****)*local_84;
            local_6c = &local_60;
            local_8c = &local_6c;
            local_50 = 0;
            local_88 = (undefined4 ****)&DAT_00000001;
            local_7c = &local_48;
            local_48 = &local_b0;
            local_64 = (undefined4 *)&DAT_01d2ea4c;
            local_80 = (undefined4 ***)&DAT_0057854e;
            local_44 = (undefined4 ****)FUN_01a0f538;
            local_5c = *(undefined4 *****)(DAT_01d50568 + 0x20);
            FUN_01aaaecc(DAT_01d50568,&local_8c);
            iVar7 = DAT_01d50568;
            if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
              local_3c = *(undefined4 *****)(DAT_01d50568 + 0x14);
              local_38 = *(undefined4 **)(DAT_01d50568 + 0x18);
              local_40 = (undefined4 ****)&DAT_00000001;
              DataMemoryBarrier(0xb);
              puVar9 = DAT_01d4edc8;
              pcVar1 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                puVar9 = &DAT_01cfc5e0;
                pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar8 = (*(code *)puVar9[3])(pcVar1,&local_40);
              if (iVar8 != 0) {
                local_30 = local_40;
                local_2c = local_3c;
                local_28 = local_38;
                FUN_01aaa328(iVar7,pcVar1,puVar9[4],&local_30,&local_8c);
              }
            }
          }
          else {
            iVar7 = DAT_01d50568;
            if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
              local_74 = *(undefined4 *****)(DAT_01d50568 + 0x14);
              local_70 = *(undefined4 **)(DAT_01d50568 + 0x18);
              local_78 = (undefined4 ****)&DAT_00000001;
              DataMemoryBarrier(0xb);
              puVar9 = DAT_01d4edc8;
              pcVar1 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                puVar9 = &DAT_01cfc5e0;
                pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar8 = (*(code *)puVar9[3])(pcVar1,&local_78);
              if (iVar8 != 0) {
                if (*(undefined4 *****)(DAT_01d50568 + 0x20) == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29da0);
                }
                local_3c = &local_48;
                local_58 = *(undefined4 ****)(DAT_01d50568 + 0x24);
                uStack_54 = *(undefined4 *)(DAT_01d50568 + 0x28);
                local_40 = &local_60;
                local_6c = &local_40;
                local_50 = 0;
                local_68 = (undefined4 ****)&DAT_00000001;
                local_44 = &local_8c;
                local_8c = &local_b0;
                local_38 = (undefined4 *)&DAT_01d2ea4c;
                local_48 = (undefined4 ****)&DAT_0057854e;
                local_88 = (undefined4 ****)FUN_01a0f538;
                local_30 = local_78;
                local_2c = local_74;
                local_28 = local_70;
                local_64 = (undefined4 *)(DAT_01d50568 + 0x1c);
                local_60 = *(undefined4 *****)(DAT_01d50568 + 0x1c);
                local_5c = *(undefined4 *****)(DAT_01d50568 + 0x20);
                FUN_01aaa328(iVar7,pcVar1,puVar9[4],&local_30,&local_6c);
              }
            }
          }
          if (-0x7fffffff < local_9c) {
            iVar7 = local_9c;
            puVar9 = local_98;
            goto LAB_01a1393c;
          }
        }
        goto LAB_01a13948;
      }
      local_48 = (undefined4 ****)CONCAT31(local_48._1_3_,cVar5);
      if (((DAT_01d50f88 < 5) &&
          ((DAT_01d50588 - 1 < 2 ||
           ((DAT_01d50588 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d50580), cVar5 != '\0')))))) &&
         (iVar7 = FUN_01aaa278(DAT_01d50580), iVar7 != 0)) {
        if (*(undefined4 *****)(DAT_01d50580 + 0x20) == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29d90);
        }
        local_2c = &local_8c;
        local_a8 = *(undefined4 ****)(DAT_01d50580 + 0x24);
        local_a4 = *(undefined4 *)(DAT_01d50580 + 0x28);
        local_38 = (undefined4 *)(DAT_01d50580 + 0x1c);
        local_b0 = (undefined4 ****)*local_38;
        local_30 = &local_b0;
        local_40 = &local_30;
        local_a0 = 0;
        local_3c = (undefined4 ****)&DAT_00000001;
        local_88 = &local_6c;
        local_6c = &local_48;
        local_28 = (undefined4 *)&DAT_01d2ea4c;
        local_8c = (undefined4 ****)&DAT_00572b9d;
        local_68 = (undefined4 ****)FUN_01a04ca8;
        local_ac = *(undefined4 *****)(DAT_01d50580 + 0x20);
        FUN_01aaaecc(DAT_01d50580,&local_40);
        iVar7 = DAT_01d50580;
        if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
          local_5c = *(undefined4 *****)(DAT_01d50580 + 0x14);
          local_58 = *(undefined4 ****)(DAT_01d50580 + 0x18);
          local_60 = (undefined4 ****)&DAT_00000001;
          DataMemoryBarrier(0xb);
          puVar9 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar9 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar8 = (*(code *)puVar9[3])(pcVar1,&local_60);
          if (iVar8 != 0) {
            local_d0 = local_60;
            ppppuStack_cc = local_5c;
            pppuStack_c8 = local_58;
            FUN_01aaa328(iVar7,pcVar1,puVar9[4],&local_d0,&local_40);
          }
        }
      }
      else {
        iVar7 = DAT_01d50580;
        if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
          local_dc = *(undefined4 *****)(DAT_01d50580 + 0x14);
          local_d8 = *(undefined4 ****)(DAT_01d50580 + 0x18);
          local_e0 = (undefined4 ****)&DAT_00000001;
          DataMemoryBarrier(0xb);
          puVar9 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar9 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar8 = (*(code *)puVar9[3])(pcVar1,&local_e0);
          if (iVar8 != 0) {
            if (*(undefined4 *****)(DAT_01d50580 + 0x20) == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29d90);
            }
            local_5c = &local_6c;
            local_a8 = *(undefined4 ****)(DAT_01d50580 + 0x24);
            local_a4 = *(undefined4 *)(DAT_01d50580 + 0x28);
            local_60 = &local_b0;
            local_30 = &local_60;
            local_a0 = 0;
            local_2c = (undefined4 ****)&DAT_00000001;
            local_68 = &local_40;
            local_40 = &local_48;
            local_58 = (undefined4 ***)&DAT_01d2ea4c;
            local_6c = (undefined4 ****)&DAT_00572b9d;
            local_3c = (undefined4 ****)FUN_01a04ca8;
            local_d0 = local_e0;
            ppppuStack_cc = local_dc;
            pppuStack_c8 = local_d8;
            local_b0 = *(undefined4 *****)(DAT_01d50580 + 0x1c);
            local_ac = *(undefined4 *****)(DAT_01d50580 + 0x20);
            local_28 = (undefined4 *)(DAT_01d50580 + 0x1c);
            FUN_01aaa328(iVar7,pcVar1,puVar9[4],&local_d0,&local_30);
          }
        }
      }
      FUN_019f8c54(param_1[0x11],param_1[0x12]);
    }
    else {
      iVar7 = param_1[0xf];
      *(undefined1 *)(param_1 + 0x16) = 0;
      param_1[0x1b] = iVar7;
      param_1[0x1c] = iVar7;
      param_1[0x1d] = param_1[0xe];
      param_1[0x1e] = iVar7 + param_1[0x10] * 4;
      while (puVar9 = (undefined4 *)param_1[0x1c], puVar9 != (undefined4 *)param_1[0x1e]) {
        uVar13 = *puVar9;
        param_1[0x1c] = puVar9 + 1;
        param_1[0x18] = uVar13;
        local_b0 = (undefined4 ****)param_1[4];
        local_ac = (undefined4 ****)param_1[5];
        local_a8 = (undefined4 ***)param_1[6];
        local_a4 = param_1[7];
        uVar16 = (**(code **)(((undefined4 *)param_1[0x13])[1] + 0x2c))
                           (*(undefined4 *)param_1[0x13]);
        *(undefined8 *)(param_1 + 0x19) = uVar16;
LAB_01a13a78:
        bVar6 = (**(code **)((int)((ulonglong)uVar16 >> 0x20) + 0xc))((int)uVar16,param_2);
        if (bVar6 == 2) {
          uVar13 = 1;
          uVar12 = 5;
          goto LAB_01a13a10;
        }
        FUN_01139b38(param_1[0x19],param_1[0x1a]);
        if ((bVar6 & 1) == 0) {
          puVar9 = (undefined4 *)thunk_FUN_01be5118(4);
          if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,4);
          }
          *puVar9 = param_1[0x18];
          FUN_01bed4e2((uint)&local_b0 | 1,param_1 + 4,0x10);
          local_94 = 1;
          local_9c = 1;
          local_b0 = (undefined4 ****)(CONCAT31(local_b0._1_3_,extraout_r1) & 0xffffff01);
          local_98 = puVar9;
          FUN_01a15024(&local_d0,param_1[0xd],&local_b0);
          if (local_bc != -0x7ffffffe) {
            local_b0 = local_d0;
            local_ac = ppppuStack_cc;
            local_a8 = pppuStack_c8;
            local_a4 = local_c4;
            local_a0 = local_c0;
            local_9c = local_bc;
            local_98 = puStack_b8;
            local_94 = uStack_b4;
            if (((DAT_01d50f88 < 5) &&
                ((DAT_01d505a0 - 1 < 2 ||
                 ((DAT_01d505a0 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d50598), cVar5 != '\0')))))) &&
               (iVar7 = FUN_01aaa278(DAT_01d50598), iVar7 != 0)) {
              if (*(undefined4 *****)(DAT_01d50598 + 0x20) == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29dd0);
              }
              local_68 = &local_80;
              local_58 = *(undefined4 ****)(DAT_01d50598 + 0x24);
              uStack_54 = *(undefined4 *)(DAT_01d50598 + 0x28);
              local_84 = (undefined4 *)(DAT_01d50598 + 0x1c);
              local_60 = (undefined4 ****)*local_84;
              local_6c = &local_60;
              local_8c = &local_6c;
              local_50 = 0;
              local_88 = (undefined4 ****)&DAT_00000001;
              local_7c = &local_48;
              local_48 = &local_b0;
              local_64 = (undefined4 *)&DAT_01d2ea4c;
              local_80 = (undefined4 ***)&DAT_0057b504;
              local_44 = (undefined4 ****)FUN_01a0f538;
              local_5c = *(undefined4 *****)(DAT_01d50598 + 0x20);
              FUN_01aaaecc(DAT_01d50598,&local_8c);
              iVar7 = DAT_01d50598;
              if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                local_3c = *(undefined4 *****)(DAT_01d50598 + 0x14);
                local_38 = *(undefined4 **)(DAT_01d50598 + 0x18);
                local_40 = (undefined4 ****)&DAT_00000001;
                DataMemoryBarrier(0xb);
                puVar9 = DAT_01d4edc8;
                pcVar1 = DAT_01d4edc4;
                if (DAT_01d51174 != 2) {
                  puVar9 = &DAT_01cfc5e0;
                  pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                }
                iVar8 = (*(code *)puVar9[3])(pcVar1,&local_40);
                if (iVar8 != 0) {
                  local_30 = local_40;
                  local_2c = local_3c;
                  local_28 = local_38;
                  FUN_01aaa328(iVar7,pcVar1,puVar9[4],&local_30,&local_8c);
                }
              }
            }
            else {
              iVar7 = DAT_01d50598;
              if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                local_ec = *(undefined4 *****)(DAT_01d50598 + 0x14);
                local_e8 = *(undefined4 **)(DAT_01d50598 + 0x18);
                local_f0 = (undefined4 ****)&DAT_00000001;
                DataMemoryBarrier(0xb);
                puVar9 = DAT_01d4edc8;
                pcVar1 = DAT_01d4edc4;
                if (DAT_01d51174 != 2) {
                  puVar9 = &DAT_01cfc5e0;
                  pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                }
                iVar8 = (*(code *)puVar9[3])(pcVar1,&local_f0);
                if (iVar8 != 0) {
                  if (*(undefined4 *****)(DAT_01d50598 + 0x20) == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29dd0);
                  }
                  local_3c = &local_48;
                  local_58 = *(undefined4 ****)(DAT_01d50598 + 0x24);
                  uStack_54 = *(undefined4 *)(DAT_01d50598 + 0x28);
                  local_40 = &local_60;
                  local_6c = &local_40;
                  local_50 = 0;
                  local_68 = (undefined4 ****)&DAT_00000001;
                  local_44 = &local_8c;
                  local_8c = &local_b0;
                  local_38 = (undefined4 *)&DAT_01d2ea4c;
                  local_48 = (undefined4 ****)&DAT_0057b504;
                  local_88 = (undefined4 ****)FUN_01a0f538;
                  local_30 = local_f0;
                  local_2c = local_ec;
                  local_28 = local_e8;
                  local_64 = (undefined4 *)(DAT_01d50598 + 0x1c);
                  local_60 = *(undefined4 *****)(DAT_01d50598 + 0x1c);
                  local_5c = *(undefined4 *****)(DAT_01d50598 + 0x20);
                  FUN_01aaa328(iVar7,pcVar1,puVar9[4],&local_30,&local_6c);
                }
              }
            }
            if (-0x7fffffff < local_9c) {
              FUN_0134c054(local_9c,local_98,4,4);
            }
          }
        }
        else {
          local_48 = (undefined4 ****)CONCAT31(local_48._1_3_,extraout_r1);
          if (((DAT_01d50f88 < 5) &&
              ((DAT_01d5057c - 1 < 2 ||
               ((DAT_01d5057c != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d50574), cVar5 != '\0')))))) &&
             (iVar7 = FUN_01aaa278(DAT_01d50574), iVar7 != 0)) {
            if (*(undefined4 *****)(DAT_01d50574 + 0x20) == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29dc0);
            }
            local_2c = &local_8c;
            local_a8 = *(undefined4 ****)(DAT_01d50574 + 0x24);
            local_a4 = *(undefined4 *)(DAT_01d50574 + 0x28);
            local_38 = (undefined4 *)(DAT_01d50574 + 0x1c);
            local_b0 = (undefined4 ****)*local_38;
            local_30 = &local_b0;
            local_40 = &local_30;
            local_a0 = 0;
            local_3c = (undefined4 ****)&DAT_00000001;
            local_88 = &local_6c;
            local_6c = &local_48;
            local_28 = (undefined4 *)&DAT_01d2ea4c;
            local_8c = (undefined4 ****)&DAT_005b4713;
            local_68 = (undefined4 ****)FUN_01a04ca8;
            local_ac = *(undefined4 *****)(DAT_01d50574 + 0x20);
            FUN_01aaaecc(DAT_01d50574,&local_40);
            iVar7 = DAT_01d50574;
            if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
              local_5c = *(undefined4 *****)(DAT_01d50574 + 0x14);
              local_58 = *(undefined4 ****)(DAT_01d50574 + 0x18);
              local_60 = (undefined4 ****)&DAT_00000001;
              DataMemoryBarrier(0xb);
              puVar9 = DAT_01d4edc8;
              pcVar1 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                puVar9 = &DAT_01cfc5e0;
                pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar8 = (*(code *)puVar9[3])(pcVar1,&local_60);
              if (iVar8 != 0) {
                local_d0 = local_60;
                ppppuStack_cc = local_5c;
                pppuStack_c8 = local_58;
                FUN_01aaa328(iVar7,pcVar1,puVar9[4],&local_d0,&local_40);
              }
            }
          }
          else {
            iVar7 = DAT_01d50574;
            if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
              local_fc = *(undefined4 *****)(DAT_01d50574 + 0x14);
              local_f8 = *(undefined4 ****)(DAT_01d50574 + 0x18);
              local_100 = (undefined4 ****)&DAT_00000001;
              DataMemoryBarrier(0xb);
              puVar9 = DAT_01d4edc8;
              pcVar1 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                puVar9 = &DAT_01cfc5e0;
                pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar8 = (*(code *)puVar9[3])(pcVar1,&local_100);
              if (iVar8 != 0) {
                if (*(undefined4 *****)(DAT_01d50574 + 0x20) == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29dc0);
                }
                local_5c = &local_6c;
                local_a8 = *(undefined4 ****)(DAT_01d50574 + 0x24);
                local_a4 = *(undefined4 *)(DAT_01d50574 + 0x28);
                local_60 = &local_b0;
                local_30 = &local_60;
                local_a0 = 0;
                local_2c = (undefined4 ****)&DAT_00000001;
                local_68 = &local_40;
                local_40 = &local_48;
                local_58 = (undefined4 ***)&DAT_01d2ea4c;
                local_6c = (undefined4 ****)&DAT_005b4713;
                local_3c = (undefined4 ****)FUN_01a04ca8;
                local_d0 = local_100;
                ppppuStack_cc = local_fc;
                pppuStack_c8 = local_f8;
                local_b0 = *(undefined4 *****)(DAT_01d50574 + 0x1c);
                local_ac = *(undefined4 *****)(DAT_01d50574 + 0x20);
                local_28 = (undefined4 *)(DAT_01d50574 + 0x1c);
                FUN_01aaa328(iVar7,pcVar1,puVar9[4],&local_d0,&local_30);
              }
            }
          }
        }
      }
      puVar9 = (undefined4 *)param_1[0x1b];
      iVar7 = param_1[0x1d];
LAB_01a1393c:
      FUN_0134c054(iVar7,puVar9,4,4);
LAB_01a13948:
      FUN_019f8c54(param_1[0x11],param_1[0x12]);
    }
    *(undefined2 *)(param_1 + 0x16) = 0;
  }
  local_d0 = (undefined4 ****)pppuVar11;
  ppppuStack_cc = (undefined4 ****)uVar13;
  pppuStack_c8 = (undefined4 ***)uVar14;
  local_c4 = iVar7;
  if ((DAT_01d50f88 < 5) &&
     (((DAT_01d50594 - 1 < 2 ||
       ((DAT_01d50594 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d5058c), cVar5 != '\0')))) &&
      (iVar7 = FUN_01aaa278(DAT_01d5058c), iVar7 != 0)))) {
    if (*(undefined4 *****)(DAT_01d5058c + 0x20) == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29db0);
    }
    local_2c = &local_8c;
    local_30 = &local_b0;
    local_a8 = *(undefined4 ****)(DAT_01d5058c + 0x24);
    local_a4 = *(undefined4 *)(DAT_01d5058c + 0x28);
    local_38 = (undefined4 *)(DAT_01d5058c + 0x1c);
    local_b0 = (undefined4 ****)*local_38;
    local_40 = &local_30;
    local_a0 = 0;
    local_3c = (undefined4 ****)&DAT_00000001;
    local_88 = &local_6c;
    local_6c = &local_d0;
    local_28 = (undefined4 *)&DAT_01d2ea4c;
    local_8c = (undefined4 ****)&DAT_005aa0b9;
    local_68 = (undefined4 ****)&LAB_01a03334;
    local_ac = *(undefined4 *****)(DAT_01d5058c + 0x20);
    FUN_01aaaecc(DAT_01d5058c,&local_40);
    iVar7 = DAT_01d5058c;
    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
      local_5c = *(undefined4 *****)(DAT_01d5058c + 0x14);
      local_58 = *(undefined4 ****)(DAT_01d5058c + 0x18);
      local_60 = (undefined4 ****)&DAT_00000001;
      DataMemoryBarrier(0xb);
      puVar9 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar9 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar8 = (*(code *)puVar9[3])(pcVar1,&local_60);
      if (iVar8 != 0) {
        FUN_01aaa328(iVar7,pcVar1,puVar9[4],&local_60,&local_40);
      }
    }
  }
  else {
    iVar7 = DAT_01d5058c;
    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
      local_118 = *(undefined4 *)(DAT_01d5058c + 0x14);
      local_114 = *(undefined4 *)(DAT_01d5058c + 0x18);
      local_11c = 1;
      DataMemoryBarrier(0xb);
      puVar9 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar9 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar8 = (*(code *)puVar9[3])(pcVar1,&local_11c);
      if (iVar8 != 0) {
        if (*(undefined4 *****)(DAT_01d5058c + 0x20) == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29db0);
        }
        local_a8 = *(undefined4 ****)(DAT_01d5058c + 0x24);
        local_5c = &local_6c;
        local_a4 = *(undefined4 *)(DAT_01d5058c + 0x28);
        local_60 = &local_b0;
        local_30 = &local_60;
        local_2c = (undefined4 ****)&DAT_00000001;
        local_68 = &local_40;
        local_40 = &local_d0;
        local_a0 = 0;
        local_58 = (undefined4 ***)&DAT_01d2ea4c;
        local_6c = (undefined4 ****)&DAT_005aa0b9;
        local_3c = (undefined4 ****)&LAB_01a03334;
        local_b0 = *(undefined4 *****)(DAT_01d5058c + 0x1c);
        local_ac = *(undefined4 *****)(DAT_01d5058c + 0x20);
        local_28 = (undefined4 *)(DAT_01d5058c + 0x1c);
        FUN_01aaa328(iVar7,pcVar1,puVar9[4],&local_11c,&local_30);
      }
    }
  }
  *(undefined1 *)((int)param_1 + 0x59) = 0;
  FUN_019fb03c(param_1 + 0xd);
  FUN_019fba9c(param_1);
  piVar10 = (int *)param_1[0xc];
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar10;
    bVar15 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar15);
  *piVar10 = iVar7 + -1;
  uVar13 = 0;
  uVar12 = 1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(param_1[0xc]);
  }
LAB_01a13a10:
  *(undefined1 *)((int)param_1 + 0x5a) = uVar12;
  return uVar13;
}

