// FUN_00a6bc44 @ 00a6bc44 size=2204 calls_out=16 calls_in=2
// strings: boser::bosminer::senderopen/boser/boser/src/bosminer/sender.rsevent open/boser/boser/src/bosminer/sender.rs:57 | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::bosminer::senderopen/boser/boser/src/bosminer/sender.rsevent open/boser/boser/src/bosminer/sender.rs:57 | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::bosminer::senderopen/boser/boser/src/bosminer/sender.rsevent open/boser/boser/src/bosminer/sender.rs:57 | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_00a6bc44(int *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined4 ***pppuVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  undefined4 ***local_94;
  undefined4 **local_90;
  undefined4 ***local_8c;
  undefined4 ****local_88;
  undefined4 ***local_84;
  int *local_80;
  undefined4 ****local_78;
  undefined4 ***local_74;
  int *local_70;
  undefined4 ****local_68;
  undefined4 ***local_64;
  int *local_60;
  undefined4 ***local_5c;
  int local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 ***local_48;
  undefined4 ****local_44;
  undefined4 ****local_40;
  undefined4 ***local_3c;
  int *local_38;
  undefined4 ****ppppuStack_30;
  undefined4 ***pppuStack_2c;
  int *piStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[5]) {
  case '\0':
    iVar4 = *param_1;
    param_1[1] = iVar4;
    param_1[2] = 0;
    break;
  case '\x01':
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xa6c580);
    (*pcVar1)();
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0efd0);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0xf]) {
    case '\0':
      puVar6 = (uint *)param_1[6];
      goto LAB_00a6c184;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0ef80);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c0ef80);
    case '\x03':
      goto switchD_00a6bc9c_caseD_3;
    }
  case '\x04':
    goto switchD_00a6bc60_caseD_4;
  }
  do {
    puVar6 = (uint *)(iVar4 + 8);
    param_1[6] = (int)puVar6;
    *(undefined1 *)(param_1 + 0xf) = 0;
LAB_00a6c184:
    uVar9 = *puVar6;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(param_1 + 0xe) = 0;
    param_1[0xd] = 0;
    param_1[7] = (int)puVar6;
    param_1[8] = uVar9 >> 2;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
switchD_00a6bc9c_caseD_3:
    iVar4 = FUN_019e0cbc(param_1 + 7,*param_2);
    if (iVar4 != 0) {
      uVar2 = 3;
      *(undefined1 *)(param_1 + 0xf) = 3;
LAB_00a6c0f8:
      *(undefined1 *)(param_1 + 5) = uVar2;
      return;
    }
    FUN_019ede44(param_1 + 7);
    *(undefined1 *)(param_1 + 0xf) = 1;
    FUN_01656cb0(&local_5c,param_1[1] + 0x18);
    if (local_5c == (undefined4 ***)0x0) {
      iVar5 = *(int *)(local_58 + 8);
      iVar14 = *(int *)(local_58 + 0xc);
      iVar4 = *(int *)(local_58 + 0x10);
      iVar13 = *(int *)(local_58 + 0x14);
      *(undefined4 *)(local_58 + 8) = 0;
      *(undefined4 *)(local_58 + 0xc) = 4;
      *(undefined4 *)(local_58 + 0x10) = 0;
      *(undefined4 *)(local_58 + 0x14) = 0;
      FUN_00a97e8c(local_58,local_54 & 0xff);
    }
    else {
      FUN_00a97e8c(local_58,local_54 & 0xff);
      if ((DAT_01d50f88 < 5) &&
         (((DAT_01d4bb1c - 1 < 2 ||
           ((DAT_01d4bb1c != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4bb14), cVar3 != '\0')))) &&
          (iVar4 = FUN_01aaa278(DAT_01d4bb14), iVar4 != 0)))) {
        if (*(int *)(DAT_01d4bb14 + 0x20) == 0) {
LAB_00a6c568:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c11368);
        }
        local_64 = &local_48;
        local_54 = *(uint *)(DAT_01d4bb14 + 0x24);
        local_50 = *(undefined4 *)(DAT_01d4bb14 + 0x28);
        local_70 = (int *)(DAT_01d4bb14 + 0x1c);
        local_5c = (undefined4 ***)*local_70;
        local_78 = &local_68;
        local_4c = 0;
        local_74 = (undefined4 ***)&DAT_00000001;
        local_48 = (undefined4 ***)0x3ec34f;
        local_60 = (int *)&DAT_01d2ea4c;
        local_44 = (undefined4 ****)&DAT_00000065;
        local_68 = &local_5c;
        local_58 = *(int *)(DAT_01d4bb14 + 0x20);
        FUN_01aaaecc(DAT_01d4bb14,&local_78);
        iVar4 = DAT_01d4bb14;
        if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
          local_3c = *(undefined4 ****)(DAT_01d4bb14 + 0x14);
          local_38 = *(int **)(DAT_01d4bb14 + 0x18);
          local_40 = (undefined4 ****)&DAT_00000001;
          DataMemoryBarrier(0xb);
          pcVar11 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            pcVar11 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          puVar12 = DAT_01d4edc8;
          if (DAT_01d51174 != 2) {
            puVar12 = &DAT_01cfc5e0;
          }
          iVar5 = (*(code *)puVar12[3])(pcVar11,&local_40);
          if (iVar5 != 0) {
            ppppuStack_30 = local_40;
            pppuStack_2c = local_3c;
            piStack_28 = local_38;
            FUN_01aaa328(iVar4,pcVar11,puVar12[4],&ppppuStack_30,&local_78);
          }
        }
      }
      else {
        iVar4 = DAT_01d4bb14;
        if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
          local_74 = *(undefined4 ****)(DAT_01d4bb14 + 0x14);
          local_70 = *(int **)(DAT_01d4bb14 + 0x18);
          local_78 = (undefined4 ****)&DAT_00000001;
          DataMemoryBarrier(0xb);
          pcVar11 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            pcVar11 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          puVar12 = DAT_01d4edc8;
          if (DAT_01d51174 != 2) {
            puVar12 = &DAT_01cfc5e0;
          }
          iVar5 = (*(code *)puVar12[3])(pcVar11,&local_78);
          if (iVar5 != 0) {
            if (*(int *)(DAT_01d4bb14 + 0x20) == 0) goto LAB_00a6c568;
            local_54 = *(uint *)(DAT_01d4bb14 + 0x24);
            local_3c = &local_48;
            local_50 = *(undefined4 *)(DAT_01d4bb14 + 0x28);
            local_68 = &local_40;
            local_4c = 0;
            local_64 = (undefined4 ***)&DAT_00000001;
            local_38 = (int *)&DAT_01d2ea4c;
            local_44 = (undefined4 ****)&DAT_00000065;
            local_48 = (undefined4 ***)0x3ec34f;
            ppppuStack_30 = local_78;
            pppuStack_2c = local_74;
            piStack_28 = local_70;
            local_60 = (int *)(DAT_01d4bb14 + 0x1c);
            local_5c = *(undefined4 ****)(DAT_01d4bb14 + 0x1c);
            local_58 = *(int *)(DAT_01d4bb14 + 0x20);
            local_40 = &local_5c;
            FUN_01aaa328(iVar4,pcVar11,puVar12[4],&ppppuStack_30,&local_68);
          }
        }
      }
      iVar14 = 4;
      iVar13 = 0;
      iVar4 = 0;
      iVar5 = 0;
    }
    param_1[6] = iVar5;
    param_1[7] = iVar14;
    param_1[8] = iVar4;
    param_1[9] = iVar13;
    while( true ) {
      if (param_1[9] == 0) break;
      iVar4 = param_1[8];
      uVar10 = iVar4 + 1;
      uVar9 = uVar10 - param_1[6];
      if (uVar10 < (uint)param_1[6]) {
        uVar9 = uVar10;
      }
      param_1[8] = uVar9;
      param_1[9] = param_1[9] + -1;
      piVar8 = (int *)(param_1[7] + iVar4 * 0x10);
      iVar4 = piVar8[1];
      iVar5 = piVar8[2];
      iVar13 = piVar8[3];
      param_1[10] = *piVar8;
      param_1[0xb] = iVar4;
      param_1[0xc] = iVar5;
      param_1[0xd] = iVar13;
      if (param_1[10] == -0x80000000) goto LAB_00a6c164;
      FUN_01bed864(param_1 + 0xe,piVar8,0x10);
      *(undefined1 *)(param_1 + 0x1c) = 0;
      param_1[0x12] = (int)(param_1 + 2);
switchD_00a6bc60_caseD_4:
      uVar15 = FUN_00a63a18(param_1 + 0xe,param_2);
      pppuVar7 = (undefined4 ***)(uVar15 >> 0x20);
      if ((uVar15 & 1) != 0) {
        uVar2 = 4;
        goto LAB_00a6c0f8;
      }
      FUN_00a6183c(param_1 + 0xe);
      if (pppuVar7 != (undefined4 ***)0x0) {
        local_94 = pppuVar7;
        if (((DAT_01d50f88 < 4) &&
            ((DAT_01d4bb40 - 1 < 2 ||
             ((DAT_01d4bb40 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4bb38), cVar3 != '\0')))))) &&
           (iVar4 = FUN_01aaa278(DAT_01d4bb38), iVar4 != 0)) {
          if (*(int *)(DAT_01d4bb38 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0efe0);
          }
          local_64 = &local_90;
          local_54 = *(uint *)(DAT_01d4bb38 + 0x24);
          local_50 = *(undefined4 *)(DAT_01d4bb38 + 0x28);
          local_70 = (int *)(DAT_01d4bb38 + 0x1c);
          local_5c = (undefined4 ***)*local_70;
          local_68 = &local_5c;
          local_78 = &local_68;
          local_4c = 0;
          local_74 = (undefined4 ***)&DAT_00000001;
          local_90 = (undefined4 **)&DAT_005af3c5;
          local_60 = (int *)&DAT_01d2ea4c;
          local_8c = &local_48;
          local_48 = &local_94;
          local_44 = (undefined4 ****)FUN_00667a08;
          local_58 = *(int *)(DAT_01d4bb38 + 0x20);
          FUN_01aaaecc(DAT_01d4bb38,&local_78);
          iVar4 = DAT_01d4bb38;
          if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
            local_3c = *(undefined4 ****)(DAT_01d4bb38 + 0x14);
            local_38 = *(int **)(DAT_01d4bb38 + 0x18);
            local_40 = (undefined4 ****)0x2;
            DataMemoryBarrier(0xb);
            pcVar11 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pcVar11 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            puVar12 = DAT_01d4edc8;
            if (DAT_01d51174 != 2) {
              puVar12 = &DAT_01cfc5e0;
            }
            iVar5 = (*(code *)puVar12[3])(pcVar11,&local_40);
            if (iVar5 != 0) {
              ppppuStack_30 = local_40;
              pppuStack_2c = local_3c;
              piStack_28 = local_38;
              FUN_01aaa328(iVar4,pcVar11,puVar12[4],&ppppuStack_30,&local_78);
            }
          }
        }
        else {
          iVar4 = DAT_01d4bb38;
          if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
            local_84 = *(undefined4 ****)(DAT_01d4bb38 + 0x14);
            local_80 = *(int **)(DAT_01d4bb38 + 0x18);
            local_88 = (undefined4 ****)0x2;
            DataMemoryBarrier(0xb);
            pcVar11 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pcVar11 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            puVar12 = DAT_01d4edc8;
            if (DAT_01d51174 != 2) {
              puVar12 = &DAT_01cfc5e0;
            }
            iVar5 = (*(code *)puVar12[3])(pcVar11,&local_88);
            if (iVar5 != 0) {
              if (*(int *)(DAT_01d4bb38 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0efe0);
              }
              local_3c = &local_48;
              local_54 = *(uint *)(DAT_01d4bb38 + 0x24);
              local_50 = *(undefined4 *)(DAT_01d4bb38 + 0x28);
              local_40 = &local_5c;
              local_68 = &local_40;
              local_4c = 0;
              local_64 = (undefined4 ***)&DAT_00000001;
              local_48 = (undefined4 ***)&DAT_005af3c5;
              local_38 = (int *)&DAT_01d2ea4c;
              local_44 = &local_78;
              local_78 = &local_94;
              local_74 = (undefined4 ***)FUN_00667a08;
              ppppuStack_30 = local_88;
              pppuStack_2c = local_84;
              piStack_28 = local_80;
              local_60 = (int *)(DAT_01d4bb38 + 0x1c);
              local_5c = *(undefined4 ****)(DAT_01d4bb38 + 0x1c);
              local_58 = *(int *)(DAT_01d4bb38 + 0x20);
              FUN_01aaa328(iVar4,pcVar11,puVar12[4],&ppppuStack_30,&local_68);
            }
          }
        }
        (*(code *)**local_94)();
      }
    }
    param_1[10] = -0x80000000;
LAB_00a6c164:
    FUN_009d4300(param_1 + 6);
    iVar4 = param_1[1];
  } while( true );
}

