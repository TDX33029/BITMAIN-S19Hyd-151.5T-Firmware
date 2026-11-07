// FUN_01a0e080 @ 01a0e080 size=4256 calls_out=21 calls_in=0
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_01a0e080(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 ****ppppuVar2;
  undefined4 ****ppppuVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  undefined4 ***pppuVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  int local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 ****local_f0;
  undefined4 ****local_ec;
  undefined4 ***local_e8;
  undefined4 ****local_e0;
  undefined4 ****local_dc;
  undefined4 ***local_d8;
  undefined4 ****local_d0;
  undefined4 ****local_cc;
  undefined4 ***local_c8;
  int local_c4;
  undefined4 local_c0;
  int local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 ****local_b0;
  undefined4 ****local_ac;
  undefined4 ***local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
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
  undefined4 local_54;
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
  switch(*(undefined1 *)((int)param_1 + 0x4d)) {
  case 0:
    *(undefined1 *)(param_1 + 0x13) = 0;
    *param_1 = param_1[8];
    param_1[1] = param_1[9];
    param_1[2] = param_1[10];
    param_1[0xc] = param_1[0x11];
    param_1[0xd] = param_1[0x12];
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d29d30);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d29d30);
  case 3:
    goto switchD_01a0e0b0_caseD_3;
  case 4:
    goto switchD_01a0e0b0_caseD_4;
  case 5:
    uVar15 = *(undefined8 *)(param_1 + 0x14);
    goto LAB_01a0ea10;
  case 6:
    uVar15 = *(undefined8 *)(param_1 + 0x14);
    goto LAB_01a0e130;
  }
  while( true ) {
    param_1[0x14] = param_1;
    *(undefined1 *)(param_1 + 0x1b) = 0;
switchD_01a0e0b0_caseD_3:
    FUN_01a07ba8(&local_b0,param_1 + 0x14,*param_2);
    uVar10 = local_a0;
    uVar12 = local_a4;
    pppuVar13 = local_a8;
    ppppuVar3 = local_ac;
    ppppuVar2 = local_b0;
    if ((char)local_b0 == '\x02') {
      uVar12 = 1;
      uVar11 = 3;
      goto LAB_01a0e8dc;
    }
    uVar1 = CONCAT13(local_ac._0_1_,local_b0._1_3_);
    iVar5 = local_9c;
    if (*(char *)(param_1 + 0x1b) == '\x03') {
      FUN_009cdcac(param_1 + 0x15);
    }
    if (((uint)ppppuVar2 & 1) != 0) break;
    *(undefined4 *****)((int)param_1 + 0x13) = ppppuVar3;
    param_1[4] = uVar1;
    *(undefined1 *)(param_1 + 0x1f) = 0;
    *(undefined4 ****)((int)param_1 + 0x17) = pppuVar13;
    *(char *)((int)param_1 + 0x1f) = (char)uVar10;
    *(undefined4 *)((int)param_1 + 0x1b) = uVar12;
    param_1[0x14] = param_1[0xc] + 8;
switchD_01a0e0b0_caseD_4:
    FUN_006177f4(&local_100,param_1 + 0x14,param_2);
    if (local_100 == 0) {
      uVar12 = 1;
      uVar11 = 4;
      goto LAB_01a0e8dc;
    }
    param_1[0xe] = local_100;
    param_1[0xf] = uStack_fc;
    param_1[0x10] = uStack_f8;
    cVar4 = *(char *)(param_1 + 0x1f);
    bVar14 = cVar4 == '\x03';
    if (bVar14) {
      cVar4 = *(char *)(param_1 + 0x1e);
    }
    if (bVar14 && cVar4 == '\x03') {
      FUN_0193c3cc(param_1 + 0x16);
    }
    local_b0 = (undefined4 ****)param_1[4];
    local_ac = (undefined4 ****)param_1[5];
    local_a8 = (undefined4 ***)param_1[6];
    local_a4 = param_1[7];
    uVar15 = (**(code **)(((undefined4 *)param_1[0x10])[1] + 0x28))(*(undefined4 *)param_1[0x10]);
    *(undefined8 *)(param_1 + 0x14) = uVar15;
LAB_01a0ea10:
    (**(code **)((int)((ulonglong)uVar15 >> 0x20) + 0xc))(&local_b0,(int)uVar15,param_2);
    pppuVar13 = local_a8;
    ppppuVar3 = local_ac;
    ppppuVar2 = local_b0;
    if (local_b0 == (undefined4 ****)&DAT_80000001) {
      uVar12 = 1;
      uVar11 = 5;
      goto LAB_01a0e8dc;
    }
    *(undefined1 *)(param_1 + 0x13) = 1;
    FUN_01139b38(param_1[0x14],param_1[0x15]);
    if (ppppuVar2 == (undefined4 ****)&DAT_80000000) {
      local_48 = (undefined4 ****)CONCAT31(local_48._1_3_,(char)ppppuVar3);
      if ((DAT_01d50f88 < 5) &&
         (((DAT_01d5054c - 1 < 2 ||
           ((DAT_01d5054c != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d50544), cVar4 != '\0')))) &&
          (iVar5 = FUN_01aaa278(DAT_01d50544), iVar5 != 0)))) {
        if (*(undefined4 *****)(DAT_01d50544 + 0x20) == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29d70);
        }
        local_2c = &local_8c;
        local_a8 = *(undefined4 ****)(DAT_01d50544 + 0x24);
        local_a4 = *(undefined4 *)(DAT_01d50544 + 0x28);
        local_38 = (undefined4 *)(DAT_01d50544 + 0x1c);
        local_b0 = (undefined4 ****)*local_38;
        local_40 = &local_30;
        local_a0 = 0;
        local_3c = (undefined4 ****)&DAT_00000001;
        local_88 = &local_6c;
        local_6c = &local_48;
        local_28 = (undefined4 *)&DAT_01d2ea4c;
        local_8c = (undefined4 ****)&DAT_00599ffb;
        local_68 = (undefined4 ****)FUN_01a04ca8;
        local_ac = *(undefined4 *****)(DAT_01d50544 + 0x20);
        local_30 = &local_b0;
        FUN_01aaaecc(DAT_01d50544,&local_40);
        iVar5 = DAT_01d50544;
        if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
          local_5c = *(undefined4 *****)(DAT_01d50544 + 0x14);
          local_58 = *(undefined4 ****)(DAT_01d50544 + 0x18);
          local_60 = (undefined4 ****)&DAT_00000001;
          DataMemoryBarrier(0xb);
          pcVar7 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            pcVar7 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          puVar9 = DAT_01d4edc8;
          if (DAT_01d51174 != 2) {
            puVar9 = &DAT_01cfc5e0;
          }
          iVar6 = (*(code *)puVar9[3])(pcVar7,&local_60);
          if (iVar6 != 0) {
            local_d0 = local_60;
            local_cc = local_5c;
            local_c8 = local_58;
            FUN_01aaa328(iVar5,pcVar7,puVar9[4],&local_d0,&local_40);
          }
        }
      }
      else {
        iVar5 = DAT_01d50544;
        if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
          local_ec = *(undefined4 *****)(DAT_01d50544 + 0x14);
          local_e8 = *(undefined4 ****)(DAT_01d50544 + 0x18);
          local_f0 = (undefined4 ****)&DAT_00000001;
          DataMemoryBarrier(0xb);
          pcVar7 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            pcVar7 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          puVar9 = DAT_01d4edc8;
          if (DAT_01d51174 != 2) {
            puVar9 = &DAT_01cfc5e0;
          }
          iVar6 = (*(code *)puVar9[3])(pcVar7,&local_f0);
          if (iVar6 != 0) {
            if (*(undefined4 *****)(DAT_01d50544 + 0x20) == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29d70);
            }
            local_a8 = *(undefined4 ****)(DAT_01d50544 + 0x24);
            local_5c = &local_6c;
            local_a4 = *(undefined4 *)(DAT_01d50544 + 0x28);
            local_30 = &local_60;
            local_2c = (undefined4 ****)&DAT_00000001;
            local_68 = &local_40;
            local_a0 = 0;
            local_58 = (undefined4 ***)&DAT_01d2ea4c;
            local_6c = (undefined4 ****)&DAT_00599ffb;
            local_3c = (undefined4 ****)FUN_01a04ca8;
            local_40 = &local_48;
            local_d0 = local_f0;
            local_cc = local_ec;
            local_c8 = local_e8;
            local_b0 = *(undefined4 *****)(DAT_01d50544 + 0x1c);
            local_ac = *(undefined4 *****)(DAT_01d50544 + 0x20);
            local_60 = &local_b0;
            local_28 = (undefined4 *)(DAT_01d50544 + 0x1c);
            FUN_01aaa328(iVar5,pcVar7,puVar9[4],&local_d0,&local_30);
          }
        }
      }
    }
    else {
      param_1[0x19] = ppppuVar3 + (int)pppuVar13 * 4;
      param_1[0x16] = ppppuVar3;
      param_1[0x17] = ppppuVar3;
      param_1[0x18] = ppppuVar2;
      *(undefined1 *)(param_1 + 0x13) = 0;
      while (iVar5 = param_1[0x17], iVar5 != param_1[0x19]) {
        param_1[0x17] = iVar5 + 0x10;
        FUN_01bed864(param_1 + 0x1a,iVar5,0x10);
        local_b0 = (undefined4 ****)param_1[0x1a];
        local_ac = (undefined4 ****)param_1[0x1b];
        local_a8 = (undefined4 ***)param_1[0x1c];
        local_a4 = param_1[0x1d];
        uVar15 = (**(code **)(((undefined4 *)param_1[0x10])[1] + 0x14))
                           (*(undefined4 *)param_1[0x10]);
        *(undefined8 *)(param_1 + 0x14) = uVar15;
LAB_01a0e130:
        cVar4 = (**(code **)((int)((ulonglong)uVar15 >> 0x20) + 0xc))((int)uVar15,param_2);
        if (cVar4 == '\x1c') {
          uVar12 = 1;
          uVar11 = 6;
          goto LAB_01a0e8dc;
        }
        FUN_01139b38(param_1[0x14],param_1[0x15]);
        if (cVar4 == '\x1b') {
          FUN_01bed4e2((uint)&local_b0 | 1,param_1 + 0x1a,0x10);
          local_9c = -0x80000000;
          local_b0 = (undefined4 ****)CONCAT31(local_b0._1_3_,1);
          FUN_01a15024(&local_d0,param_1[0xd],&local_b0);
          if (local_bc != -0x7ffffffe) {
            local_b0 = local_d0;
            local_ac = local_cc;
            local_a8 = local_c8;
            local_a4 = local_c4;
            local_a0 = local_c0;
            local_9c = local_bc;
            local_98 = uStack_b8;
            uStack_94 = uStack_b4;
            if (((DAT_01d50f88 < 5) &&
                ((DAT_01d50564 - 1 < 2 ||
                 ((DAT_01d50564 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d5055c), cVar4 != '\0')))))) &&
               (iVar5 = FUN_01aaa278(DAT_01d5055c), iVar5 != 0)) {
              if (*(undefined4 *****)(DAT_01d5055c + 0x20) == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29d50);
              }
              local_68 = &local_80;
              local_58 = *(undefined4 ****)(DAT_01d5055c + 0x24);
              local_54 = *(undefined4 *)(DAT_01d5055c + 0x28);
              local_84 = (undefined4 *)(DAT_01d5055c + 0x1c);
              local_60 = (undefined4 ****)*local_84;
              local_6c = &local_60;
              local_8c = &local_6c;
              local_50 = 0;
              local_88 = (undefined4 ****)&DAT_00000001;
              local_7c = &local_48;
              local_48 = &local_b0;
              local_64 = (undefined4 *)&DAT_01d2ea4c;
              local_80 = (undefined4 ***)&DAT_005bb18f;
              local_44 = (undefined4 ****)FUN_01a0f538;
              local_5c = *(undefined4 *****)(DAT_01d5055c + 0x20);
              FUN_01aaaecc(DAT_01d5055c,&local_8c);
              iVar5 = DAT_01d5055c;
              if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                local_3c = *(undefined4 *****)(DAT_01d5055c + 0x14);
                local_38 = *(undefined4 **)(DAT_01d5055c + 0x18);
                local_40 = (undefined4 ****)&DAT_00000001;
                DataMemoryBarrier(0xb);
                pcVar7 = DAT_01d4edc4;
                if (DAT_01d51174 != 2) {
                  pcVar7 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                }
                puVar9 = DAT_01d4edc8;
                if (DAT_01d51174 != 2) {
                  puVar9 = &DAT_01cfc5e0;
                }
                iVar6 = (*(code *)puVar9[3])(pcVar7,&local_40);
                if (iVar6 != 0) {
                  local_30 = local_40;
                  local_2c = local_3c;
                  local_28 = local_38;
                  FUN_01aaa328(iVar5,pcVar7,puVar9[4],&local_30,&local_8c);
                }
              }
            }
            else {
              iVar5 = DAT_01d5055c;
              if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                local_74 = *(undefined4 *****)(DAT_01d5055c + 0x14);
                local_70 = *(undefined4 **)(DAT_01d5055c + 0x18);
                local_78 = (undefined4 ****)&DAT_00000001;
                DataMemoryBarrier(0xb);
                pcVar7 = DAT_01d4edc4;
                if (DAT_01d51174 != 2) {
                  pcVar7 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                }
                puVar9 = DAT_01d4edc8;
                if (DAT_01d51174 != 2) {
                  puVar9 = &DAT_01cfc5e0;
                }
                iVar6 = (*(code *)puVar9[3])(pcVar7,&local_78);
                if (iVar6 != 0) {
                  if (*(undefined4 *****)(DAT_01d5055c + 0x20) == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29d50);
                  }
                  local_40 = &local_60;
                  local_6c = &local_40;
                  local_58 = *(undefined4 ****)(DAT_01d5055c + 0x24);
                  local_54 = *(undefined4 *)(DAT_01d5055c + 0x28);
                  local_3c = &local_48;
                  local_50 = 0;
                  local_68 = (undefined4 ****)&DAT_00000001;
                  local_38 = (undefined4 *)&DAT_01d2ea4c;
                  local_44 = &local_8c;
                  local_48 = (undefined4 ****)&DAT_005bb18f;
                  local_88 = (undefined4 ****)FUN_01a0f538;
                  local_8c = &local_b0;
                  local_30 = local_78;
                  local_2c = local_74;
                  local_28 = local_70;
                  local_64 = (undefined4 *)(DAT_01d5055c + 0x1c);
                  local_60 = *(undefined4 *****)(DAT_01d5055c + 0x1c);
                  local_5c = *(undefined4 *****)(DAT_01d5055c + 0x20);
                  FUN_01aaa328(iVar5,pcVar7,puVar9[4],&local_30,&local_6c);
                }
              }
            }
            if (-0x7fffffff < local_9c) {
              FUN_0134c054(local_9c,local_98,4,4);
            }
          }
        }
        else {
          local_48 = (undefined4 ****)CONCAT31(local_48._1_3_,cVar4);
          if (((DAT_01d50f88 < 5) &&
              ((DAT_01d50558 - 1 < 2 ||
               ((DAT_01d50558 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d50550), cVar4 != '\0')))))) &&
             (iVar5 = FUN_01aaa278(DAT_01d50550), iVar5 != 0)) {
            if (*(undefined4 *****)(DAT_01d50550 + 0x20) == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29d40);
            }
            local_2c = &local_8c;
            local_a8 = *(undefined4 ****)(DAT_01d50550 + 0x24);
            local_a4 = *(undefined4 *)(DAT_01d50550 + 0x28);
            local_38 = (undefined4 *)(DAT_01d50550 + 0x1c);
            local_b0 = (undefined4 ****)*local_38;
            local_30 = &local_b0;
            local_40 = &local_30;
            local_a0 = 0;
            local_3c = (undefined4 ****)&DAT_00000001;
            local_88 = &local_6c;
            local_6c = &local_48;
            local_28 = (undefined4 *)&DAT_01d2ea4c;
            local_8c = (undefined4 ****)&DAT_005b510c;
            local_68 = (undefined4 ****)FUN_01a04ca8;
            local_ac = *(undefined4 *****)(DAT_01d50550 + 0x20);
            FUN_01aaaecc(DAT_01d50550,&local_40);
            iVar5 = DAT_01d50550;
            if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
              local_5c = *(undefined4 *****)(DAT_01d50550 + 0x14);
              local_58 = *(undefined4 ****)(DAT_01d50550 + 0x18);
              local_60 = (undefined4 ****)&DAT_00000001;
              DataMemoryBarrier(0xb);
              pcVar7 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                pcVar7 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              puVar9 = DAT_01d4edc8;
              if (DAT_01d51174 != 2) {
                puVar9 = &DAT_01cfc5e0;
              }
              iVar6 = (*(code *)puVar9[3])(pcVar7,&local_60);
              if (iVar6 != 0) {
                local_d0 = local_60;
                local_cc = local_5c;
                local_c8 = local_58;
                FUN_01aaa328(iVar5,pcVar7,puVar9[4],&local_d0,&local_40);
              }
            }
          }
          else {
            iVar5 = DAT_01d50550;
            if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
              local_dc = *(undefined4 *****)(DAT_01d50550 + 0x14);
              local_d8 = *(undefined4 ****)(DAT_01d50550 + 0x18);
              local_e0 = (undefined4 ****)&DAT_00000001;
              DataMemoryBarrier(0xb);
              pcVar7 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                pcVar7 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              puVar9 = DAT_01d4edc8;
              if (DAT_01d51174 != 2) {
                puVar9 = &DAT_01cfc5e0;
              }
              iVar6 = (*(code *)puVar9[3])(pcVar7,&local_e0);
              if (iVar6 != 0) {
                if (*(undefined4 *****)(DAT_01d50550 + 0x20) == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29d40);
                }
                local_60 = &local_b0;
                local_30 = &local_60;
                local_a8 = *(undefined4 ****)(DAT_01d50550 + 0x24);
                local_a0 = 0;
                local_a4 = *(undefined4 *)(DAT_01d50550 + 0x28);
                local_5c = &local_6c;
                local_2c = (undefined4 ****)&DAT_00000001;
                local_58 = (undefined4 ***)&DAT_01d2ea4c;
                local_68 = &local_40;
                local_6c = (undefined4 ****)&DAT_005b510c;
                local_3c = (undefined4 ****)FUN_01a04ca8;
                local_40 = &local_48;
                local_d0 = local_e0;
                local_cc = local_dc;
                local_c8 = local_d8;
                local_b0 = *(undefined4 *****)(DAT_01d50550 + 0x1c);
                local_ac = *(undefined4 *****)(DAT_01d50550 + 0x20);
                local_28 = (undefined4 *)(DAT_01d50550 + 0x1c);
                FUN_01aaa328(iVar5,pcVar7,puVar9[4],&local_d0,&local_30);
              }
            }
          }
        }
      }
      FUN_0134c054(param_1[0x18],param_1[0x16],1,0x10);
    }
    *(undefined1 *)(param_1 + 0x13) = 0;
    FUN_019f8c54(param_1[0xe],param_1[0xf]);
  }
  local_d0 = (undefined4 ****)pppuVar13;
  local_cc = (undefined4 ****)uVar12;
  local_c8 = (undefined4 ***)uVar10;
  local_c4 = iVar5;
  if ((DAT_01d50f88 < 5) &&
     (((DAT_01d50540 - 1 < 2 ||
       ((DAT_01d50540 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d50538), cVar4 != '\0')))) &&
      (iVar5 = FUN_01aaa278(DAT_01d50538), iVar5 != 0)))) {
    if (*(undefined4 *****)(DAT_01d50538 + 0x20) == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29d60);
    }
    local_2c = &local_8c;
    local_a8 = *(undefined4 ****)(DAT_01d50538 + 0x24);
    local_a4 = *(undefined4 *)(DAT_01d50538 + 0x28);
    local_38 = (undefined4 *)(DAT_01d50538 + 0x1c);
    local_b0 = (undefined4 ****)*local_38;
    local_40 = &local_30;
    local_a0 = 0;
    local_3c = (undefined4 ****)&DAT_00000001;
    local_88 = &local_6c;
    local_6c = &local_d0;
    local_28 = (undefined4 *)&DAT_01d2ea4c;
    local_8c = (undefined4 ****)&DAT_005a0f49;
    local_68 = (undefined4 ****)&LAB_01a03334;
    local_ac = *(undefined4 *****)(DAT_01d50538 + 0x20);
    local_30 = &local_b0;
    FUN_01aaaecc(DAT_01d50538,&local_40);
    iVar5 = DAT_01d50538;
    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
      local_5c = *(undefined4 *****)(DAT_01d50538 + 0x14);
      local_58 = *(undefined4 ****)(DAT_01d50538 + 0x18);
      local_60 = (undefined4 ****)&DAT_00000001;
      DataMemoryBarrier(0xb);
      pcVar7 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      if (DAT_01d51174 == 2) {
        pcVar7 = DAT_01d4edc4;
      }
      puVar9 = &DAT_01cfc5e0;
      if (DAT_01d51174 == 2) {
        puVar9 = DAT_01d4edc8;
      }
      iVar6 = (*(code *)puVar9[3])(pcVar7,&local_60);
      if (iVar6 != 0) {
        FUN_01aaa328(iVar5,pcVar7,puVar9[4],&local_60,&local_40);
      }
    }
  }
  else {
    iVar5 = DAT_01d50538;
    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
      local_108 = *(undefined4 *)(DAT_01d50538 + 0x14);
      local_104 = *(undefined4 *)(DAT_01d50538 + 0x18);
      local_10c = 1;
      DataMemoryBarrier(0xb);
      pcVar7 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      if (DAT_01d51174 == 2) {
        pcVar7 = DAT_01d4edc4;
      }
      puVar9 = &DAT_01cfc5e0;
      if (DAT_01d51174 == 2) {
        puVar9 = DAT_01d4edc8;
      }
      iVar6 = (*(code *)puVar9[3])(pcVar7,&local_10c);
      if (iVar6 != 0) {
        if (*(undefined4 *****)(DAT_01d50538 + 0x20) == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29d60);
        }
        local_a8 = *(undefined4 ****)(DAT_01d50538 + 0x24);
        local_a4 = *(undefined4 *)(DAT_01d50538 + 0x28);
        local_5c = &local_6c;
        local_2c = (undefined4 ****)&DAT_00000001;
        local_68 = &local_40;
        local_30 = &local_60;
        local_40 = &local_d0;
        local_a0 = 0;
        local_58 = (undefined4 ***)&DAT_01d2ea4c;
        local_6c = (undefined4 ****)&DAT_005a0f49;
        local_3c = (undefined4 ****)&LAB_01a03334;
        local_b0 = *(undefined4 *****)(DAT_01d50538 + 0x1c);
        local_ac = *(undefined4 *****)(DAT_01d50538 + 0x20);
        local_60 = &local_b0;
        local_28 = (undefined4 *)(DAT_01d50538 + 0x1c);
        FUN_01aaa328(iVar5,pcVar7,puVar9[4],&local_10c,&local_30);
      }
    }
  }
  FUN_019fb03c(param_1 + 0xd);
  FUN_019fafc0(param_1);
  piVar8 = (int *)param_1[0xc];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar8;
    bVar14 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar14);
  *piVar8 = iVar5 + -1;
  uVar12 = 0;
  uVar11 = 1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(param_1[0xc]);
  }
LAB_01a0e8dc:
  *(undefined1 *)((int)param_1 + 0x4d) = uVar11;
  return uVar12;
}

