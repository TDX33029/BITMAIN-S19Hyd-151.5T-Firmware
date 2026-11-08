// FUN_01a033a4 @ 01a033a4 size=5216 calls_out=21 calls_in=0
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

undefined4 FUN_01a033a4(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined1 uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint *puVar14;
  bool bVar15;
  undefined8 uVar16;
  uint local_350;
  int local_34c;
  uint local_348;
  undefined4 local_344;
  uint local_340;
  undefined4 uStack_33c;
  undefined1 auStack_338 [272];
  int *local_228;
  undefined4 local_220;
  int local_21c;
  undefined4 uStack_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 ****local_e0;
  undefined4 ****local_dc;
  int *local_d8;
  int local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  char local_c1;
  undefined4 ****local_c0;
  undefined4 ****local_bc;
  undefined1 *local_b8;
  undefined4 ****local_b0;
  undefined4 ****local_ac;
  int *local_a8;
  undefined4 ****local_a0;
  undefined4 ****local_9c;
  undefined1 *local_98;
  undefined4 ****local_88;
  undefined4 ****local_84;
  undefined1 *local_80;
  undefined4 ****local_74;
  undefined4 ****local_70;
  int *local_6c;
  undefined4 ***local_68;
  undefined4 ****local_64;
  undefined4 ****local_60;
  undefined4 ****local_5c;
  int *local_58;
  undefined4 ****local_54;
  undefined4 ****local_50;
  int *local_4c;
  undefined4 ****local_48;
  undefined4 ****local_44;
  undefined4 ****local_40;
  undefined4 ****local_3c;
  int *local_38;
  undefined4 ****local_30;
  undefined4 ****local_2c;
  int *local_28;
  
  puVar14 = param_1 + 4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x176)) {
  case 0:
    *(undefined2 *)(param_1 + 0x5d) = 0;
    *param_1 = param_1[8];
    param_1[1] = param_1[9];
    param_1[2] = param_1[10];
    param_1[0x56] = param_1[0x5b];
    param_1[0x57] = param_1[0x5c];
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d29e70);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d29e70);
  case 3:
    goto switchD_01a033d0_caseD_3;
  case 4:
    goto switchD_01a033d0_caseD_4;
  case 5:
    uVar16 = *(undefined8 *)(param_1 + 0x5e);
    goto LAB_01a03600;
  }
  while( true ) {
    param_1[0x5e] = param_1;
    *(undefined1 *)(param_1 + 0x65) = 0;
switchD_01a033d0_caseD_3:
    FUN_01a04d28(&local_220,param_1 + 0x5e,*param_2);
    if (local_220 == (undefined4 ***)0x3 && local_21c == 0) {
      uVar10 = 3;
      goto LAB_01a04344;
    }
    FUN_01bed4e2(&local_350,&local_220,0x130);
    *(undefined1 *)((int)param_1 + 0x175) = 1;
    if (*(char *)(param_1 + 0x65) == '\x03') {
      FUN_009cdcac(param_1 + 0x5f);
    }
    piVar6 = local_228;
    if (local_350 == 2 && local_34c == 0) break;
    *(undefined2 *)(param_1 + 0x5d) = 1;
    param_1[0xc] = local_350;
    param_1[0xf] = local_344;
    param_1[0xd] = local_34c;
    param_1[0x10] = local_340;
    param_1[0x11] = uStack_33c;
    param_1[0xe] = local_348;
    FUN_01bed4e2(param_1 + 0x12,auStack_338,0x110);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar6;
      bVar15 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar15);
    *piVar6 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38404(piVar6);
    }
    if ((param_1[0xc] & 1) != 0) {
      uVar7 = param_1[0xe];
      uVar9 = param_1[0xf];
      uVar11 = param_1[0x10];
      uVar13 = param_1[0x11];
      *(undefined1 *)(param_1 + 0x69) = 0;
      *puVar14 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
                 uVar9 >> 0x18;
      param_1[5] = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                   uVar7 >> 0x18;
      param_1[6] = uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
                   uVar13 >> 0x18;
      param_1[7] = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
                   uVar11 >> 0x18;
      param_1[0x5e] = param_1[0x56] + 8;
switchD_01a033d0_caseD_4:
      FUN_006177f4(&local_d0,param_1 + 0x5e,param_2);
      if (local_d0 == 0) {
        uVar10 = 4;
      }
      else {
        param_1[0x58] = local_d0;
        param_1[0x59] = uStack_cc;
        param_1[0x5a] = uStack_c8;
        cVar1 = *(char *)(param_1 + 0x69);
        bVar15 = cVar1 == '\x03';
        if (bVar15) {
          cVar1 = *(char *)(param_1 + 0x68);
        }
        if (bVar15 && cVar1 == '\x03') {
          FUN_0193c3cc(param_1 + 0x60);
        }
        uVar12 = *(undefined4 *)param_1[0x5a];
        iVar3 = ((undefined4 *)param_1[0x5a])[1];
        *(undefined1 *)(param_1 + 0x5d) = 0;
        FUN_01bed4e2(&local_220,param_1 + 0xc,0x128);
        uVar16 = (**(code **)(iVar3 + 0x10))(uVar12,&local_220);
        *(undefined8 *)(param_1 + 0x5e) = uVar16;
LAB_01a03600:
        cVar1 = (**(code **)((int)((ulonglong)uVar16 >> 0x20) + 0xc))((int)uVar16,param_2);
        if (cVar1 != '\x1c') {
          FUN_01139b38(param_1[0x5e],param_1[0x5f]);
          if (cVar1 != '\x1b') {
            local_c1 = cVar1;
            if (((DAT_01d50f88 < 5) &&
                ((DAT_01d506e4 - 1 < 2 ||
                 ((DAT_01d506e4 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d506dc), cVar2 != '\0')))))) &&
               (iVar3 = FUN_01aaa278(DAT_01d506dc), iVar3 != 0)) {
              if (*(int *)(DAT_01d506dc + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29e80);
              }
              local_2c = &local_74;
              uStack_218 = *(undefined4 *)(DAT_01d506dc + 0x24);
              local_214 = *(undefined4 *)(DAT_01d506dc + 0x28);
              local_38 = (int *)(DAT_01d506dc + 0x1c);
              local_220 = (undefined4 ***)*local_38;
              local_30 = (undefined4 ****)&local_220;
              local_40 = &local_30;
              local_210 = 0;
              local_3c = (undefined4 ****)&DAT_00000001;
              local_70 = &local_54;
              local_74 = (undefined4 ****)&DAT_00589d78;
              local_54 = (undefined4 ****)&local_c1;
              local_28 = (int *)&DAT_01d2ea4c;
              local_50 = (undefined4 ****)FUN_01a04ca8;
              local_21c = *(int *)(DAT_01d506dc + 0x20);
              FUN_01aaaecc(DAT_01d506dc,&local_40);
              iVar3 = DAT_01d506dc;
              if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                local_84 = *(undefined4 *****)(DAT_01d506dc + 0x14);
                local_80 = *(undefined1 **)(DAT_01d506dc + 0x18);
                local_88 = (undefined4 ****)&DAT_00000001;
                DataMemoryBarrier(0xb);
                pcVar5 = DAT_01d4edc4;
                if (DAT_01d51174 != 2) {
                  pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                }
                puVar8 = DAT_01d4edc8;
                if (DAT_01d51174 != 2) {
                  puVar8 = &DAT_01cfc5e0;
                }
                iVar4 = (*(code *)puVar8[3])(pcVar5,&local_88);
                if (iVar4 != 0) {
                  local_a0 = local_88;
                  local_9c = local_84;
                  local_98 = local_80;
                  FUN_01aaa328(iVar3,pcVar5,puVar8[4],&local_a0,&local_40);
                }
              }
            }
            else {
              iVar3 = DAT_01d506dc;
              if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                local_bc = *(undefined4 *****)(DAT_01d506dc + 0x14);
                local_b8 = *(undefined1 **)(DAT_01d506dc + 0x18);
                local_c0 = (undefined4 ****)&DAT_00000001;
                DataMemoryBarrier(0xb);
                pcVar5 = DAT_01d4edc4;
                if (DAT_01d51174 != 2) {
                  pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                }
                puVar8 = DAT_01d4edc8;
                if (DAT_01d51174 != 2) {
                  puVar8 = &DAT_01cfc5e0;
                }
                iVar4 = (*(code *)puVar8[3])(pcVar5,&local_c0);
                if (iVar4 != 0) {
                  if (*(int *)(DAT_01d506dc + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29e80);
                  }
                  local_88 = (undefined4 ****)&local_220;
                  local_30 = &local_88;
                  uStack_218 = *(undefined4 *)(DAT_01d506dc + 0x24);
                  local_210 = 0;
                  local_214 = *(undefined4 *)(DAT_01d506dc + 0x28);
                  local_84 = &local_54;
                  local_2c = (undefined4 ****)&DAT_00000001;
                  local_80 = &DAT_01d2ea4c;
                  local_50 = &local_40;
                  local_54 = (undefined4 ****)&DAT_00589d78;
                  local_3c = (undefined4 ****)FUN_01a04ca8;
                  local_40 = (undefined4 ****)&local_c1;
                  local_a0 = local_c0;
                  local_9c = local_bc;
                  local_98 = local_b8;
                  local_220 = *(undefined4 ****)(DAT_01d506dc + 0x1c);
                  local_21c = *(int *)(DAT_01d506dc + 0x20);
                  local_28 = (int *)(DAT_01d506dc + 0x1c);
                  FUN_01aaa328(iVar3,pcVar5,puVar8[4],&local_a0,&local_30);
                }
              }
            }
            FUN_01bed4e2((int)&local_220 + 2,puVar14,0x10);
            local_220 = (undefined4 ***)CONCAT22(local_220._2_2_,0x100);
            local_220 = (undefined4 ***)CONCAT31(local_220._1_3_,cVar1);
            FUN_01a14e4c(&local_a0,param_1[0x57],&local_220);
            if ((char)local_a0 == '\x01') {
              FUN_01bed4e2(&local_88,(uint)&local_a0 | 1,0x12);
              if ((DAT_01d50f88 < 5) &&
                 (((DAT_01d506f0 - 1 < 2 ||
                   ((DAT_01d506f0 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d506e8), cVar1 != '\0')))) &&
                  (iVar3 = FUN_01aaa278(DAT_01d506e8), iVar3 != 0)))) {
                if (*(int *)(DAT_01d506e8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29e90);
                }
                local_50 = &local_68;
                uStack_218 = *(undefined4 *)(DAT_01d506e8 + 0x24);
                local_214 = *(undefined4 *)(DAT_01d506e8 + 0x28);
                local_6c = (int *)(DAT_01d506e8 + 0x1c);
                local_220 = (undefined4 ***)*local_6c;
                local_74 = &local_54;
                local_210 = 0;
                local_70 = (undefined4 ****)&DAT_00000001;
                local_64 = &local_48;
                local_4c = (int *)&DAT_01d2ea4c;
                local_68 = (undefined4 ***)&DAT_005ae0b0;
                local_44 = (undefined4 ****)FUN_01a04ce4;
                local_21c = *(int *)(DAT_01d506e8 + 0x20);
                local_54 = (undefined4 ****)&local_220;
                local_48 = &local_88;
                FUN_01aaaecc(DAT_01d506e8,&local_74);
                iVar3 = DAT_01d506e8;
                if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                  local_3c = *(undefined4 *****)(DAT_01d506e8 + 0x14);
                  local_38 = *(int **)(DAT_01d506e8 + 0x18);
                  local_40 = (undefined4 ****)&DAT_00000001;
                  DataMemoryBarrier(0xb);
                  pcVar5 = DAT_01d4edc4;
                  if (DAT_01d51174 != 2) {
                    pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                  }
                  puVar8 = DAT_01d4edc8;
                  if (DAT_01d51174 != 2) {
                    puVar8 = &DAT_01cfc5e0;
                  }
                  iVar4 = (*(code *)puVar8[3])(pcVar5,&local_40);
                  if (iVar4 != 0) {
                    local_30 = local_40;
                    local_2c = local_3c;
                    local_28 = local_38;
                    FUN_01aaa328(iVar3,pcVar5,puVar8[4],&local_30,&local_74);
                  }
                }
              }
              else {
                iVar3 = DAT_01d506e8;
                if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                  local_ac = *(undefined4 *****)(DAT_01d506e8 + 0x14);
                  local_a8 = *(int **)(DAT_01d506e8 + 0x18);
                  local_b0 = (undefined4 ****)&DAT_00000001;
                  DataMemoryBarrier(0xb);
                  pcVar5 = DAT_01d4edc4;
                  if (DAT_01d51174 != 2) {
                    pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                  }
                  puVar8 = DAT_01d4edc8;
                  if (DAT_01d51174 != 2) {
                    puVar8 = &DAT_01cfc5e0;
                  }
                  iVar4 = (*(code *)puVar8[3])(pcVar5,&local_b0);
                  if (iVar4 != 0) {
                    if (*(int *)(DAT_01d506e8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29e90);
                    }
                    local_3c = &local_48;
                    local_54 = &local_40;
                    uStack_218 = *(undefined4 *)(DAT_01d506e8 + 0x24);
                    local_214 = *(undefined4 *)(DAT_01d506e8 + 0x28);
                    local_210 = 0;
                    local_50 = (undefined4 ****)&DAT_00000001;
                    local_38 = (int *)&DAT_01d2ea4c;
                    local_44 = &local_74;
                    local_48 = (undefined4 ****)&DAT_005ae0b0;
                    local_70 = (undefined4 ****)FUN_01a04ce4;
                    local_30 = local_b0;
                    local_2c = local_ac;
                    local_28 = local_a8;
                    local_220 = *(undefined4 ****)(DAT_01d506e8 + 0x1c);
                    local_21c = *(int *)(DAT_01d506e8 + 0x20);
                    local_74 = &local_88;
                    local_4c = (int *)(DAT_01d506e8 + 0x1c);
                    local_40 = (undefined4 ****)&local_220;
                    FUN_01aaa328(iVar3,pcVar5,puVar8[4],&local_30,&local_54);
                  }
                }
              }
            }
            FUN_019f8c54(param_1[0x58],param_1[0x59]);
            goto LAB_01a041d4;
          }
          FUN_019f8c54(param_1[0x58],param_1[0x59]);
          FUN_01bed4e2((int)&local_220 + 2,puVar14,0x10);
          local_220._0_2_ = CONCAT11(2,(undefined1)local_220);
          FUN_01a14e4c(&local_a0,param_1[0x57],&local_220);
          if ((char)local_a0 == '\x01') {
            FUN_01bed4e2(&local_88,(uint)&local_a0 | 1,0x12);
            if (((DAT_01d50f88 < 5) &&
                ((DAT_01d50708 - 1 < 2 ||
                 ((DAT_01d50708 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d50700), cVar1 != '\0')))))) &&
               (iVar3 = FUN_01aaa278(DAT_01d50700), iVar3 != 0)) {
              if (*(int *)(DAT_01d50700 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29ea0);
              }
              local_50 = &local_68;
              uStack_218 = *(undefined4 *)(DAT_01d50700 + 0x24);
              local_214 = *(undefined4 *)(DAT_01d50700 + 0x28);
              local_6c = (int *)(DAT_01d50700 + 0x1c);
              local_220 = (undefined4 ***)*local_6c;
              local_74 = &local_54;
              local_210 = 0;
              local_70 = (undefined4 ****)&DAT_00000001;
              local_64 = &local_48;
              local_4c = (int *)&DAT_01d2ea4c;
              local_68 = (undefined4 ***)&DAT_0057f3a7;
              local_44 = (undefined4 ****)FUN_01a04ce4;
              local_21c = *(int *)(DAT_01d50700 + 0x20);
              local_54 = (undefined4 ****)&local_220;
              local_48 = &local_88;
              FUN_01aaaecc(DAT_01d50700,&local_74);
              iVar3 = DAT_01d50700;
              if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                local_3c = *(undefined4 *****)(DAT_01d50700 + 0x14);
                local_38 = *(int **)(DAT_01d50700 + 0x18);
                local_40 = (undefined4 ****)&DAT_00000001;
                DataMemoryBarrier(0xb);
                pcVar5 = DAT_01d4edc4;
                if (DAT_01d51174 != 2) {
                  pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                }
                puVar8 = DAT_01d4edc8;
                if (DAT_01d51174 != 2) {
                  puVar8 = &DAT_01cfc5e0;
                }
                iVar4 = (*(code *)puVar8[3])(pcVar5,&local_40);
                if (iVar4 != 0) {
                  local_30 = local_40;
                  local_2c = local_3c;
                  local_28 = local_38;
                  FUN_01aaa328(iVar3,pcVar5,puVar8[4],&local_30,&local_74);
                }
              }
            }
            else {
              iVar3 = DAT_01d50700;
              if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                local_5c = *(undefined4 *****)(DAT_01d50700 + 0x14);
                local_58 = *(int **)(DAT_01d50700 + 0x18);
                local_60 = (undefined4 ****)&DAT_00000001;
                DataMemoryBarrier(0xb);
                pcVar5 = DAT_01d4edc4;
                if (DAT_01d51174 != 2) {
                  pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                }
                puVar8 = DAT_01d4edc8;
                if (DAT_01d51174 != 2) {
                  puVar8 = &DAT_01cfc5e0;
                }
                iVar4 = (*(code *)puVar8[3])(pcVar5,&local_60);
                if (iVar4 != 0) {
                  if (*(int *)(DAT_01d50700 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29ea0);
                  }
                  local_3c = &local_48;
                  local_54 = &local_40;
                  uStack_218 = *(undefined4 *)(DAT_01d50700 + 0x24);
                  local_214 = *(undefined4 *)(DAT_01d50700 + 0x28);
                  local_210 = 0;
                  local_50 = (undefined4 ****)&DAT_00000001;
                  local_38 = (int *)&DAT_01d2ea4c;
                  local_44 = &local_74;
                  local_48 = (undefined4 ****)&DAT_0057f3a7;
                  local_70 = (undefined4 ****)FUN_01a04ce4;
                  local_30 = local_60;
                  local_2c = local_5c;
                  local_28 = local_58;
                  local_220 = *(undefined4 ****)(DAT_01d50700 + 0x1c);
                  local_21c = *(int *)(DAT_01d50700 + 0x20);
                  local_74 = &local_88;
                  local_4c = (int *)(DAT_01d50700 + 0x1c);
                  local_40 = (undefined4 ****)&local_220;
                  FUN_01aaa328(iVar3,pcVar5,puVar8[4],&local_30,&local_54);
                }
              }
            }
          }
          goto LAB_01a041e8;
        }
        uVar10 = 5;
      }
LAB_01a04344:
      uVar12 = 1;
      goto LAB_01a04348;
    }
    local_220 = (undefined4 ***)CONCAT22(local_220._2_2_,1);
    FUN_01a14e4c(&local_a0,param_1[0x57],&local_220);
    if ((char)local_a0 == '\x01') {
      FUN_01bed4e2(&local_88,(uint)&local_a0 | 1,0x12);
      if (((DAT_01d50f88 < 5) &&
          ((DAT_01d50714 - 1 < 2 ||
           ((DAT_01d50714 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d5070c), cVar1 != '\0')))))) &&
         (iVar3 = FUN_01aaa278(DAT_01d5070c), iVar3 != 0)) {
        if (*(int *)(DAT_01d5070c + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29ec0);
        }
        local_50 = &local_68;
        uStack_218 = *(undefined4 *)(DAT_01d5070c + 0x24);
        local_214 = *(undefined4 *)(DAT_01d5070c + 0x28);
        local_6c = (int *)(DAT_01d5070c + 0x1c);
        local_220 = (undefined4 ***)*local_6c;
        local_74 = &local_54;
        local_210 = 0;
        local_70 = (undefined4 ****)&DAT_00000001;
        local_64 = &local_48;
        local_4c = (int *)&DAT_01d2ea4c;
        local_68 = (undefined4 ***)&DAT_005bd3ee;
        local_44 = (undefined4 ****)FUN_01a04ce4;
        local_21c = *(int *)(DAT_01d5070c + 0x20);
        local_54 = (undefined4 ****)&local_220;
        local_48 = &local_88;
        FUN_01aaaecc(DAT_01d5070c,&local_74);
        iVar3 = DAT_01d5070c;
        if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
          local_3c = *(undefined4 *****)(DAT_01d5070c + 0x14);
          local_38 = *(int **)(DAT_01d5070c + 0x18);
          local_40 = (undefined4 ****)&DAT_00000001;
          DataMemoryBarrier(0xb);
          pcVar5 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          puVar8 = DAT_01d4edc8;
          if (DAT_01d51174 != 2) {
            puVar8 = &DAT_01cfc5e0;
          }
          iVar4 = (*(code *)puVar8[3])(pcVar5,&local_40);
          if (iVar4 != 0) {
            local_30 = local_40;
            local_2c = local_3c;
            local_28 = local_38;
            FUN_01aaa328(iVar3,pcVar5,puVar8[4],&local_30,&local_74);
          }
        }
      }
      else {
        iVar3 = DAT_01d5070c;
        if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
          local_dc = *(undefined4 *****)(DAT_01d5070c + 0x14);
          local_d8 = *(int **)(DAT_01d5070c + 0x18);
          local_e0 = (undefined4 ****)&DAT_00000001;
          DataMemoryBarrier(0xb);
          pcVar5 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          puVar8 = DAT_01d4edc8;
          if (DAT_01d51174 != 2) {
            puVar8 = &DAT_01cfc5e0;
          }
          iVar4 = (*(code *)puVar8[3])(pcVar5,&local_e0);
          if (iVar4 != 0) {
            if (*(int *)(DAT_01d5070c + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29ec0);
            }
            local_3c = &local_48;
            local_54 = &local_40;
            uStack_218 = *(undefined4 *)(DAT_01d5070c + 0x24);
            local_214 = *(undefined4 *)(DAT_01d5070c + 0x28);
            local_210 = 0;
            local_50 = (undefined4 ****)&DAT_00000001;
            local_38 = (int *)&DAT_01d2ea4c;
            local_44 = &local_74;
            local_48 = (undefined4 ****)&DAT_005bd3ee;
            local_70 = (undefined4 ****)FUN_01a04ce4;
            local_30 = local_e0;
            local_2c = local_dc;
            local_28 = local_d8;
            local_220 = *(undefined4 ****)(DAT_01d5070c + 0x1c);
            local_21c = *(int *)(DAT_01d5070c + 0x20);
            local_74 = &local_88;
            local_4c = (int *)(DAT_01d5070c + 0x1c);
            local_40 = (undefined4 ****)&local_220;
            FUN_01aaa328(iVar3,pcVar5,puVar8[4],&local_30,&local_54);
          }
        }
      }
    }
LAB_01a041d4:
    if (*(char *)(param_1 + 0x5d) != '\0') {
      FUN_019fb3fc(param_1 + 0xc);
    }
LAB_01a041e8:
    *(undefined2 *)(param_1 + 0x5d) = 0;
  }
  if ((DAT_01d50f88 < 5) &&
     (((DAT_01d506fc - 1 < 2 ||
       ((DAT_01d506fc != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d506f4), cVar1 != '\0')))) &&
      (iVar3 = FUN_01aaa278(DAT_01d506f4), iVar3 != 0)))) {
    if (*(int *)(DAT_01d506f4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29eb0);
    }
    local_2c = &local_74;
    uStack_218 = *(undefined4 *)(DAT_01d506f4 + 0x24);
    local_214 = *(undefined4 *)(DAT_01d506f4 + 0x28);
    local_38 = (int *)(DAT_01d506f4 + 0x1c);
    local_220 = (undefined4 ***)*local_38;
    local_40 = &local_30;
    local_210 = 0;
    local_3c = (undefined4 ****)&DAT_00000001;
    local_70 = &local_54;
    local_54 = &local_a0;
    local_28 = (int *)&DAT_01d2ea4c;
    local_74 = (undefined4 ****)&DAT_0057e1fc;
    local_50 = (undefined4 ****)&LAB_01a03334;
    local_21c = *(int *)(DAT_01d506f4 + 0x20);
    local_30 = (undefined4 ****)&local_220;
    FUN_01aaaecc(DAT_01d506f4,&local_40);
    iVar3 = DAT_01d506f4;
    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
      local_84 = *(undefined4 *****)(DAT_01d506f4 + 0x14);
      local_80 = *(undefined1 **)(DAT_01d506f4 + 0x18);
      local_88 = (undefined4 ****)&DAT_00000001;
      DataMemoryBarrier(0xb);
      pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      if (DAT_01d51174 == 2) {
        pcVar5 = DAT_01d4edc4;
      }
      puVar8 = &DAT_01cfc5e0;
      if (DAT_01d51174 == 2) {
        puVar8 = DAT_01d4edc8;
      }
      iVar4 = (*(code *)puVar8[3])(pcVar5,&local_88);
      if (iVar4 != 0) {
        FUN_01aaa328(iVar3,pcVar5,puVar8[4],&local_88,&local_40);
      }
    }
  }
  else {
    iVar3 = DAT_01d506f4;
    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
      local_e8 = *(undefined4 *)(DAT_01d506f4 + 0x14);
      local_e4 = *(undefined4 *)(DAT_01d506f4 + 0x18);
      local_ec = 1;
      DataMemoryBarrier(0xb);
      pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      if (DAT_01d51174 == 2) {
        pcVar5 = DAT_01d4edc4;
      }
      puVar8 = &DAT_01cfc5e0;
      if (DAT_01d51174 == 2) {
        puVar8 = DAT_01d4edc8;
      }
      iVar4 = (*(code *)puVar8[3])(pcVar5,&local_ec);
      if (iVar4 != 0) {
        if (*(int *)(DAT_01d506f4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29eb0);
        }
        uStack_218 = *(undefined4 *)(DAT_01d506f4 + 0x24);
        local_84 = &local_54;
        local_214 = *(undefined4 *)(DAT_01d506f4 + 0x28);
        local_30 = &local_88;
        local_2c = (undefined4 ****)&DAT_00000001;
        local_50 = &local_40;
        local_40 = &local_a0;
        local_210 = 0;
        local_80 = &DAT_01d2ea4c;
        local_54 = (undefined4 ****)&DAT_0057e1fc;
        local_3c = (undefined4 ****)&LAB_01a03334;
        local_220 = *(undefined4 ****)(DAT_01d506f4 + 0x1c);
        local_21c = *(int *)(DAT_01d506f4 + 0x20);
        local_88 = (undefined4 ****)&local_220;
        local_28 = (int *)(DAT_01d506f4 + 0x1c);
        FUN_01aaa328(iVar3,pcVar5,puVar8[4],&local_ec,&local_30);
      }
    }
  }
  FUN_01a0572c(&local_350);
  *(undefined1 *)((int)param_1 + 0x175) = 0;
  FUN_0193c71c(param_1 + 0x57);
  FUN_019fb37c(param_1);
  piVar6 = (int *)param_1[0x56];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar6;
    bVar15 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar15);
  *piVar6 = iVar3 + -1;
  uVar12 = 0;
  uVar10 = 1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(param_1[0x56]);
  }
LAB_01a04348:
  *(undefined1 *)((int)param_1 + 0x176) = uVar10;
  return uVar12;
}

