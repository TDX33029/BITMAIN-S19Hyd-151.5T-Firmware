// FUN_01a0ccdc @ 01a0ccdc size=4112 calls_out=19 calls_in=0
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_01a0ccdc(undefined4 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 ******ppppppuVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  bool bVar13;
  undefined8 uVar14;
  byte local_100;
  undefined1 uStack_ff;
  undefined2 uStack_fe;
  int local_fc;
  undefined4 ******local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 uStack_e4;
  undefined3 uStack_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  int local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  byte local_c1;
  undefined4 *******local_c0;
  undefined4 *******local_bc;
  undefined1 *local_b8;
  undefined4 *******local_b0;
  undefined4 *******local_ac;
  undefined4 *local_a8;
  undefined4 *******local_a0;
  undefined4 *******local_9c;
  undefined1 *local_98;
  undefined4 local_94;
  undefined4 *******local_88;
  undefined4 *******local_84;
  undefined1 *local_80;
  undefined4 *******local_74;
  undefined4 *******local_70;
  undefined4 *local_6c;
  undefined4 ******local_68;
  undefined4 *******local_64;
  undefined4 *******local_60;
  undefined4 *******local_5c;
  undefined4 *local_58;
  undefined4 *******local_54;
  undefined4 *******local_50;
  undefined4 *local_4c;
  undefined4 *******local_48;
  undefined4 *******local_44;
  undefined4 *******local_40;
  undefined4 *******local_3c;
  undefined4 *local_38;
  undefined4 *******local_30;
  undefined4 *******local_2c;
  undefined4 *local_28;
  
  puVar6 = param_1 + 4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x13)) {
  case 0:
    *puVar6 = *param_1;
    param_1[5] = param_1[1];
    param_1[6] = param_1[2];
    param_1[0xe] = param_1[0xc];
    param_1[0xf] = param_1[0xd];
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d29ed0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d29ed0);
  case 3:
    goto switchD_01a0cd0c_caseD_3;
  case 4:
    goto switchD_01a0cd0c_caseD_4;
  case 5:
    uVar14 = *(undefined8 *)(param_1 + 0x14);
    goto LAB_01a0cd74;
  }
  while( true ) {
    *(undefined1 *)(param_1 + 0x1b) = 0;
    param_1[0x14] = puVar6;
switchD_01a0cd0c_caseD_3:
    FUN_01a07ba8(&local_100,param_1 + 0x14,*param_2);
    local_94 = local_ec;
    uVar3 = local_f0;
    uVar11 = local_f4;
    ppppppuVar2 = local_f8;
    bVar4 = local_100;
    if (local_100 == 2) {
      uVar11 = 1;
      uVar12 = 3;
      goto LAB_01a0dab0;
    }
    uStack_e4 = CONCAT13((undefined1)local_fc,CONCAT21(uStack_fe,uStack_ff));
    uStack_e0 = (undefined3)((uint)local_fc >> 8);
    if (*(char *)(param_1 + 0x1b) == '\x03') {
      FUN_009cdcac(param_1 + 0x15);
    }
    if ((bVar4 & 1) != 0) break;
    *(uint *)((int)param_1 + 0x23) = CONCAT31(uStack_e0,uStack_e4._3_1_);
    param_1[8] = uStack_e4;
    *(undefined1 *)(param_1 + 0x1f) = 0;
    *(undefined4 *******)((int)param_1 + 0x27) = ppppppuVar2;
    *(char *)((int)param_1 + 0x2f) = (char)uVar3;
    *(undefined4 *)((int)param_1 + 0x2b) = uVar11;
    param_1[0x14] = param_1[0xe] + 8;
switchD_01a0cd0c_caseD_4:
    FUN_006177f4(&local_d0,param_1 + 0x14,param_2);
    if (local_d0 == 0) {
      uVar11 = 1;
      uVar12 = 4;
      goto LAB_01a0dab0;
    }
    param_1[0x10] = local_d0;
    param_1[0x11] = uStack_cc;
    param_1[0x12] = uStack_c8;
    cVar5 = *(char *)(param_1 + 0x1f);
    bVar13 = cVar5 == '\x03';
    if (bVar13) {
      cVar5 = *(char *)(param_1 + 0x1e);
    }
    if (bVar13 && cVar5 == '\x03') {
      FUN_0193c3cc(param_1 + 0x16);
    }
    uVar11 = param_1[8];
    local_fc = param_1[9];
    local_f8 = (undefined4 ******)param_1[10];
    local_f4 = param_1[0xb];
    local_100 = (byte)uVar11;
    uStack_ff = (undefined1)((uint)uVar11 >> 8);
    uStack_fe = (undefined2)((uint)uVar11 >> 0x10);
    uVar14 = (**(code **)(((undefined4 *)param_1[0x12])[1] + 0x14))(*(undefined4 *)param_1[0x12]);
    *(undefined8 *)(param_1 + 0x14) = uVar14;
LAB_01a0cd74:
    bVar4 = (**(code **)((int)((ulonglong)uVar14 >> 0x20) + 0xc))((int)uVar14,param_2);
    if (bVar4 == 0x1c) {
      uVar11 = 1;
      uVar12 = 5;
      goto LAB_01a0dab0;
    }
    FUN_01139b38(param_1[0x14],param_1[0x15]);
    if (bVar4 == 0x1b) {
      FUN_019f8c54(param_1[0x10],param_1[0x11]);
      FUN_01bed4e2(&uStack_fe,param_1 + 8,0x10);
      uStack_ff = 2;
      FUN_01a14e4c(&local_a0,param_1[0xf],&local_100);
      if ((char)local_a0 == '\x01') {
        FUN_01bed4e2(&local_88,(uint)&local_a0 | 1,0x12);
        if ((DAT_01d50f88 < 5) &&
           (((DAT_01d505ac - 1 < 2 ||
             ((DAT_01d505ac != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d505a4), cVar5 != '\0')))) &&
            (iVar7 = FUN_01aaa278(DAT_01d505a4), iVar7 != 0)))) {
          if (*(int *)(DAT_01d505a4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29f00);
          }
          local_50 = &local_68;
          local_f8 = *(undefined4 *******)(DAT_01d505a4 + 0x24);
          local_f4 = *(undefined4 *)(DAT_01d505a4 + 0x28);
          local_6c = (undefined4 *)(DAT_01d505a4 + 0x1c);
          uVar11 = *local_6c;
          local_54 = (undefined4 *******)&local_100;
          local_74 = &local_54;
          local_70 = (undefined4 *******)&DAT_00000001;
          local_64 = &local_48;
          local_f0 = 0;
          local_100 = (byte)uVar11;
          uStack_ff = (undefined1)((uint)uVar11 >> 8);
          uStack_fe = (undefined2)((uint)uVar11 >> 0x10);
          local_4c = (undefined4 *)&DAT_01d2ea4c;
          local_68 = (undefined4 ******)&DAT_005950ec;
          local_44 = (undefined4 *******)FUN_01a04ce4;
          local_fc = *(int *)(DAT_01d505a4 + 0x20);
          local_48 = &local_88;
          FUN_01aaaecc(DAT_01d505a4,&local_74);
          iVar7 = DAT_01d505a4;
          if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
            local_3c = *(undefined4 ********)(DAT_01d505a4 + 0x14);
            local_38 = *(undefined4 **)(DAT_01d505a4 + 0x18);
            local_40 = (undefined4 *******)&DAT_00000001;
            DataMemoryBarrier(0xb);
            puVar10 = DAT_01d4edc8;
            pcVar1 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar10 = &DAT_01cfc5e0;
              pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar8 = (*(code *)puVar10[3])(pcVar1,&local_40);
            if (iVar8 != 0) {
              local_30 = local_40;
              local_2c = local_3c;
              local_28 = local_38;
              FUN_01aaa328(iVar7,pcVar1,puVar10[4],&local_30,&local_74);
            }
          }
        }
        else {
          iVar7 = DAT_01d505a4;
          if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
            local_5c = *(undefined4 ********)(DAT_01d505a4 + 0x14);
            local_58 = *(undefined4 **)(DAT_01d505a4 + 0x18);
            local_60 = (undefined4 *******)&DAT_00000001;
            DataMemoryBarrier(0xb);
            puVar10 = DAT_01d4edc8;
            pcVar1 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar10 = &DAT_01cfc5e0;
              pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar8 = (*(code *)puVar10[3])(pcVar1,&local_60);
            if (iVar8 != 0) {
              uVar11 = *(undefined4 *)(DAT_01d505a4 + 0x1c);
              if (*(int *)(DAT_01d505a4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29f00);
              }
              local_40 = (undefined4 *******)&local_100;
              local_f8 = *(undefined4 *******)(DAT_01d505a4 + 0x24);
              local_f4 = *(undefined4 *)(DAT_01d505a4 + 0x28);
              local_3c = &local_48;
              local_54 = &local_40;
              local_50 = (undefined4 *******)&DAT_00000001;
              local_44 = &local_74;
              local_f0 = 0;
              local_100 = (byte)uVar11;
              uStack_ff = (undefined1)((uint)uVar11 >> 8);
              uStack_fe = (undefined2)((uint)uVar11 >> 0x10);
              local_38 = (undefined4 *)&DAT_01d2ea4c;
              local_48 = (undefined4 *******)&DAT_005950ec;
              local_70 = (undefined4 *******)FUN_01a04ce4;
              local_30 = local_60;
              local_2c = local_5c;
              local_28 = local_58;
              local_fc = *(int *)(DAT_01d505a4 + 0x20);
              local_74 = &local_88;
              local_4c = (undefined4 *)(DAT_01d505a4 + 0x1c);
              FUN_01aaa328(iVar7,pcVar1,puVar10[4],&local_30,&local_54);
            }
          }
        }
      }
    }
    else {
      local_c1 = bVar4;
      if (((DAT_01d50f88 < 5) &&
          ((DAT_01d505c4 - 1 < 2 ||
           ((DAT_01d505c4 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d505bc), cVar5 != '\0')))))) &&
         (iVar7 = FUN_01aaa278(DAT_01d505bc), iVar7 != 0)) {
        if (*(int *)(DAT_01d505bc + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29ee0);
        }
        local_2c = &local_74;
        local_f8 = *(undefined4 *******)(DAT_01d505bc + 0x24);
        local_f4 = *(undefined4 *)(DAT_01d505bc + 0x28);
        local_38 = (undefined4 *)(DAT_01d505bc + 0x1c);
        uVar11 = *local_38;
        local_30 = (undefined4 *******)&local_100;
        local_40 = &local_30;
        local_f0 = 0;
        local_3c = (undefined4 *******)&DAT_00000001;
        local_70 = &local_54;
        local_54 = (undefined4 *******)&local_c1;
        local_100 = (byte)uVar11;
        uStack_ff = (undefined1)((uint)uVar11 >> 8);
        uStack_fe = (undefined2)((uint)uVar11 >> 0x10);
        local_28 = (undefined4 *)&DAT_01d2ea4c;
        local_74 = (undefined4 *******)&DAT_00582c7b;
        local_50 = (undefined4 *******)FUN_01a04ca8;
        local_fc = *(int *)(DAT_01d505bc + 0x20);
        FUN_01aaaecc(DAT_01d505bc,&local_40);
        iVar7 = DAT_01d505bc;
        if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
          local_84 = *(undefined4 ********)(DAT_01d505bc + 0x14);
          local_80 = *(undefined1 **)(DAT_01d505bc + 0x18);
          local_88 = (undefined4 *******)&DAT_00000001;
          DataMemoryBarrier(0xb);
          puVar10 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar10 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar8 = (*(code *)puVar10[3])(pcVar1,&local_88);
          if (iVar8 != 0) {
            local_a0 = local_88;
            local_9c = local_84;
            local_98 = local_80;
            FUN_01aaa328(iVar7,pcVar1,puVar10[4],&local_a0,&local_40);
          }
        }
      }
      else {
        iVar7 = DAT_01d505bc;
        if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
          local_bc = *(undefined4 ********)(DAT_01d505bc + 0x14);
          local_b8 = *(undefined1 **)(DAT_01d505bc + 0x18);
          local_c0 = (undefined4 *******)&DAT_00000001;
          DataMemoryBarrier(0xb);
          puVar10 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar10 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar8 = (*(code *)puVar10[3])(pcVar1,&local_c0);
          if (iVar8 != 0) {
            uVar11 = *(undefined4 *)(DAT_01d505bc + 0x1c);
            if (*(int *)(DAT_01d505bc + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29ee0);
            }
            local_88 = (undefined4 *******)&local_100;
            local_30 = &local_88;
            local_f8 = *(undefined4 *******)(DAT_01d505bc + 0x24);
            local_f4 = *(undefined4 *)(DAT_01d505bc + 0x28);
            local_84 = &local_54;
            local_f0 = 0;
            local_100 = (byte)uVar11;
            uStack_ff = (undefined1)((uint)uVar11 >> 8);
            uStack_fe = (undefined2)((uint)uVar11 >> 0x10);
            local_2c = (undefined4 *******)&DAT_00000001;
            local_80 = &DAT_01d2ea4c;
            local_50 = &local_40;
            local_54 = (undefined4 *******)&DAT_00582c7b;
            local_3c = (undefined4 *******)FUN_01a04ca8;
            local_40 = (undefined4 *******)&local_c1;
            local_a0 = local_c0;
            local_9c = local_bc;
            local_98 = local_b8;
            local_fc = *(int *)(DAT_01d505bc + 0x20);
            local_28 = (undefined4 *)(DAT_01d505bc + 0x1c);
            FUN_01aaa328(iVar7,pcVar1,puVar10[4],&local_a0,&local_30);
          }
        }
      }
      FUN_01bed4e2(&uStack_fe,param_1 + 8,0x10);
      uStack_ff = 1;
      local_100 = bVar4;
      FUN_01a14e4c(&local_a0,param_1[0xf],&local_100);
      if ((char)local_a0 == '\x01') {
        FUN_01bed4e2(&local_88,(uint)&local_a0 | 1,0x12);
        if (((DAT_01d50f88 < 5) &&
            ((DAT_01d505d0 - 1 < 2 ||
             ((DAT_01d505d0 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d505c8), cVar5 != '\0')))))) &&
           (iVar7 = FUN_01aaa278(DAT_01d505c8), iVar7 != 0)) {
          if (*(int *)(DAT_01d505c8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29ef0);
          }
          local_50 = &local_68;
          local_f8 = *(undefined4 *******)(DAT_01d505c8 + 0x24);
          local_f4 = *(undefined4 *)(DAT_01d505c8 + 0x28);
          local_6c = (undefined4 *)(DAT_01d505c8 + 0x1c);
          uVar11 = *local_6c;
          local_54 = (undefined4 *******)&local_100;
          local_74 = &local_54;
          local_70 = (undefined4 *******)&DAT_00000001;
          local_64 = &local_48;
          local_f0 = 0;
          local_100 = (byte)uVar11;
          uStack_ff = (undefined1)((uint)uVar11 >> 8);
          uStack_fe = (undefined2)((uint)uVar11 >> 0x10);
          local_4c = (undefined4 *)&DAT_01d2ea4c;
          local_68 = (undefined4 ******)&DAT_00576579;
          local_44 = (undefined4 *******)FUN_01a04ce4;
          local_fc = *(int *)(DAT_01d505c8 + 0x20);
          local_48 = &local_88;
          FUN_01aaaecc(DAT_01d505c8,&local_74);
          iVar7 = DAT_01d505c8;
          if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
            local_3c = *(undefined4 ********)(DAT_01d505c8 + 0x14);
            local_38 = *(undefined4 **)(DAT_01d505c8 + 0x18);
            local_40 = (undefined4 *******)&DAT_00000001;
            DataMemoryBarrier(0xb);
            puVar10 = DAT_01d4edc8;
            pcVar1 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar10 = &DAT_01cfc5e0;
              pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar8 = (*(code *)puVar10[3])(pcVar1,&local_40);
            if (iVar8 != 0) {
              local_30 = local_40;
              local_2c = local_3c;
              local_28 = local_38;
              FUN_01aaa328(iVar7,pcVar1,puVar10[4],&local_30,&local_74);
            }
          }
        }
        else {
          iVar7 = DAT_01d505c8;
          if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
            local_ac = *(undefined4 ********)(DAT_01d505c8 + 0x14);
            local_a8 = *(undefined4 **)(DAT_01d505c8 + 0x18);
            local_b0 = (undefined4 *******)&DAT_00000001;
            DataMemoryBarrier(0xb);
            puVar10 = DAT_01d4edc8;
            pcVar1 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar10 = &DAT_01cfc5e0;
              pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar8 = (*(code *)puVar10[3])(pcVar1,&local_b0);
            if (iVar8 != 0) {
              uVar11 = *(undefined4 *)(DAT_01d505c8 + 0x1c);
              if (*(int *)(DAT_01d505c8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29ef0);
              }
              local_40 = (undefined4 *******)&local_100;
              local_f8 = *(undefined4 *******)(DAT_01d505c8 + 0x24);
              local_f4 = *(undefined4 *)(DAT_01d505c8 + 0x28);
              local_3c = &local_48;
              local_54 = &local_40;
              local_50 = (undefined4 *******)&DAT_00000001;
              local_44 = &local_74;
              local_f0 = 0;
              local_100 = (byte)uVar11;
              uStack_ff = (undefined1)((uint)uVar11 >> 8);
              uStack_fe = (undefined2)((uint)uVar11 >> 0x10);
              local_38 = (undefined4 *)&DAT_01d2ea4c;
              local_48 = (undefined4 *******)&DAT_00576579;
              local_70 = (undefined4 *******)FUN_01a04ce4;
              local_30 = local_b0;
              local_2c = local_ac;
              local_28 = local_a8;
              local_fc = *(int *)(DAT_01d505c8 + 0x20);
              local_74 = &local_88;
              local_4c = (undefined4 *)(DAT_01d505c8 + 0x1c);
              FUN_01aaa328(iVar7,pcVar1,puVar10[4],&local_30,&local_54);
            }
          }
        }
      }
      FUN_019f8c54(param_1[0x10],param_1[0x11]);
    }
  }
  local_98 = (undefined1 *)uVar3;
  local_a0 = (undefined4 *******)ppppppuVar2;
  local_9c = (undefined4 *******)uVar11;
  if ((DAT_01d50f88 < 5) &&
     (((DAT_01d505b8 - 1 < 2 ||
       ((DAT_01d505b8 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d505b0), cVar5 != '\0')))) &&
      (iVar7 = FUN_01aaa278(DAT_01d505b0), iVar7 != 0)))) {
    if (*(int *)(DAT_01d505b0 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29f10);
    }
    local_2c = &local_74;
    local_f8 = *(undefined4 *******)(DAT_01d505b0 + 0x24);
    local_f4 = *(undefined4 *)(DAT_01d505b0 + 0x28);
    local_38 = (undefined4 *)(DAT_01d505b0 + 0x1c);
    uVar11 = *local_38;
    local_40 = &local_30;
    local_f0 = 0;
    local_3c = (undefined4 *******)&DAT_00000001;
    local_70 = &local_54;
    local_54 = &local_a0;
    local_100 = (byte)uVar11;
    uStack_ff = (undefined1)((uint)uVar11 >> 8);
    uStack_fe = (undefined2)((uint)uVar11 >> 0x10);
    local_28 = (undefined4 *)&DAT_01d2ea4c;
    local_74 = (undefined4 *******)&DAT_005939a7;
    local_50 = (undefined4 *******)&LAB_01a03334;
    local_fc = *(int *)(DAT_01d505b0 + 0x20);
    local_30 = (undefined4 *******)&local_100;
    FUN_01aaaecc(DAT_01d505b0,&local_40);
    iVar7 = DAT_01d505b0;
    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
      local_84 = *(undefined4 ********)(DAT_01d505b0 + 0x14);
      local_80 = *(undefined1 **)(DAT_01d505b0 + 0x18);
      local_88 = (undefined4 *******)&DAT_00000001;
      DataMemoryBarrier(0xb);
      puVar10 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar10 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar8 = (*(code *)puVar10[3])(pcVar1,&local_88);
      if (iVar8 != 0) {
        FUN_01aaa328(iVar7,pcVar1,puVar10[4],&local_88,&local_40);
      }
    }
  }
  else {
    iVar7 = DAT_01d505b0;
    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
      local_d8 = *(undefined4 *)(DAT_01d505b0 + 0x14);
      local_d4 = *(undefined4 *)(DAT_01d505b0 + 0x18);
      local_dc = 1;
      DataMemoryBarrier(0xb);
      puVar10 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar10 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar8 = (*(code *)puVar10[3])(pcVar1,&local_dc);
      if (iVar8 != 0) {
        uVar11 = *(undefined4 *)(DAT_01d505b0 + 0x1c);
        if (*(int *)(DAT_01d505b0 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29f10);
        }
        local_84 = &local_54;
        local_f8 = *(undefined4 *******)(DAT_01d505b0 + 0x24);
        local_f4 = *(undefined4 *)(DAT_01d505b0 + 0x28);
        local_30 = &local_88;
        local_2c = (undefined4 *******)&DAT_00000001;
        local_50 = &local_40;
        local_f0 = 0;
        local_40 = &local_a0;
        local_100 = (byte)uVar11;
        uStack_ff = (undefined1)((uint)uVar11 >> 8);
        uStack_fe = (undefined2)((uint)uVar11 >> 0x10);
        local_80 = &DAT_01d2ea4c;
        local_54 = (undefined4 *******)&DAT_005939a7;
        local_3c = (undefined4 *******)&LAB_01a03334;
        local_fc = *(int *)(DAT_01d505b0 + 0x20);
        local_88 = (undefined4 *******)&local_100;
        local_28 = (undefined4 *)(DAT_01d505b0 + 0x1c);
        FUN_01aaa328(iVar7,pcVar1,puVar10[4],&local_dc,&local_30);
      }
    }
  }
  FUN_0193c71c(param_1 + 0xf);
  FUN_019fafc0(puVar6);
  piVar9 = (int *)param_1[0xe];
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar9;
    bVar13 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar13);
  *piVar9 = iVar7 + -1;
  uVar11 = 0;
  uVar12 = 1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(param_1[0xe]);
  }
LAB_01a0dab0:
  *(undefined1 *)(param_1 + 0x13) = uVar12;
  return uVar11;
}

