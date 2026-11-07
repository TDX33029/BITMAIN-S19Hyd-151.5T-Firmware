// FUN_00a62f28 @ 00a62f28 size=2188 calls_out=24 calls_in=2
// strings: boser::bosminer::senderopen/boser/boser/src/bosminer/sender.rsevent open/boser/boser/src/bosminer/sender.rs:57 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::bosminer::senderopen/boser/boser/src/bosminer/sender.rsevent open/boser/boser/src/bosminer/sender.rs:57 | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::bosminer::senderopen/boser/boser/src/bosminer/sender.rsevent open/boser/boser/src/bosminer/sender.rs:57

undefined4 FUN_00a62f28(undefined4 *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  char *pcVar3;
  undefined4 ****ppppuVar4;
  char cVar5;
  undefined4 ****ppppuVar6;
  int *piVar7;
  int iVar8;
  undefined4 ***pppuVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  undefined1 uVar13;
  int **ppiVar14;
  undefined4 ***pppuVar15;
  undefined4 ***pppuVar16;
  int *piVar17;
  undefined4 ***pppuVar18;
  undefined4 *puVar19;
  int *piVar20;
  undefined4 ****unaff_r8;
  uint uVar21;
  ulonglong uVar22;
  undefined8 uVar23;
  uint local_9c;
  undefined4 ***local_98;
  undefined4 ****local_94;
  int **local_90;
  int ***local_8c;
  code *local_88;
  undefined4 ****local_84;
  undefined *local_80;
  undefined4 ***local_7c;
  undefined4 ***local_78;
  undefined4 ***local_74;
  undefined4 ***local_70;
  undefined4 ***local_68;
  undefined **local_64;
  undefined4 ****local_60;
  undefined4 ***local_5c;
  undefined4 ****local_58;
  undefined4 ****local_54;
  undefined4 ***pppuStack_50;
  undefined4 local_4c;
  undefined4 ***local_48;
  undefined4 ****local_44;
  undefined4 ***local_40;
  undefined4 ***local_3c;
  undefined4 ***local_38;
  undefined4 ****local_30;
  undefined4 ***local_2c;
  undefined4 ***pppuStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 9)) {
  case 0:
    param_1[1] = *param_1;
    param_1[2] = 0;
LAB_00a63574:
    param_1[10] = 1;
    param_1[0xb] = param_1 + 1;
    param_1[0xc] = 0;
LAB_00a63594:
    piVar20 = param_1 + 0xc;
    piVar11 = param_1 + 0xb;
    if (param_1[10] != 0) {
      piVar11 = (int *)param_1[0xb];
    }
    iVar8 = *piVar11;
    FUN_01656cb0(&local_5c,iVar8 + 8);
    ppppuVar6 = local_58;
    if (local_5c == (undefined4 ***)0x1) {
      local_2c = (undefined4 ***)CONCAT31(local_2c._1_3_,local_54._0_1_);
      local_30 = local_58;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_30,&DAT_01c0ce58,&DAT_01c23498);
    }
    uVar21 = (uint)local_54 & 0xff;
    FUN_009d2fdc(local_58 + 2,1);
    if (ppppuVar6[5] == (undefined4 ***)0x0) {
LAB_00a63614:
      DataMemoryBarrier(0xb);
      if (*(char *)(iVar8 + 0x4c) != '\0') {
        FUN_00a97e8c(ppppuVar6,uVar21);
        pppuVar18 = (undefined4 ***)0x80000000;
        goto LAB_00a63668;
      }
      uVar23 = (*(code *)**(undefined4 **)*param_2)(((undefined4 *)*param_2)[1]);
      piVar11 = (int *)thunk_FUN_01be5118(0x34);
      if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x34);
      }
      *(undefined2 *)(piVar11 + 0xc) = 0;
      piVar11[9] = 0;
      *(undefined8 *)(piVar11 + 10) = uVar23;
      *piVar11 = 1;
      piVar11[1] = 1;
      piVar11[2] = 0;
      do {
        iVar8 = *piVar11;
        bVar2 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar2);
      *piVar11 = iVar8 + 1;
      if (iVar8 < 0) goto LAB_00a63860;
      FUN_009d2be0(ppppuVar6 + 6,piVar11,&DAT_01c0ceb8);
      FUN_00a97e8c(ppppuVar6,uVar21);
      piVar12 = (int *)*piVar20;
      if (piVar12 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *piVar12;
          bVar2 = (bool)hasExclusiveAccess(piVar12);
        } while (!bVar2);
        *piVar12 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00a97164(*piVar20);
        }
      }
      *piVar20 = (int)piVar11;
      goto LAB_00a637b0;
    }
    ppppuVar6[5] = (undefined4 ***)((int)ppppuVar6[5] + -1);
    pppuVar15 = (undefined4 ***)((int)ppppuVar6[4] + 1);
    pppuVar9 = ppppuVar6[3] + (int)ppppuVar6[4] * 4;
    pppuVar18 = (undefined4 ***)*pppuVar9;
    pppuVar16 = (undefined4 ***)((int)pppuVar15 - (int)ppppuVar6[2]);
    if (pppuVar15 < ppppuVar6[2]) {
      pppuVar16 = pppuVar15;
    }
    ppppuVar6[4] = pppuVar16;
    if (pppuVar18 == (undefined4 ***)0x80000000) goto LAB_00a63614;
    local_94 = (undefined4 ****)pppuVar9[2];
    unaff_r8 = (undefined4 ****)pppuVar9[1];
    local_98 = (undefined4 ***)pppuVar9[3];
    FUN_00a97e8c(ppppuVar6,uVar21);
    ppppuVar6 = unaff_r8;
    if (pppuVar18 == (undefined4 ***)0x80000001) goto LAB_00a637b0;
LAB_00a63664:
    local_9c = (uint)ppppuVar6 >> 8;
LAB_00a63668:
    param_1[5] = pppuVar18;
    *(short *)((int)param_1 + 0x19) = (short)local_9c;
    *(char *)((int)param_1 + 0x1b) = (char)(local_9c >> 0x10);
    param_1[7] = local_94;
    param_1[8] = local_98;
    *(char *)(param_1 + 6) = (char)unaff_r8;
    FUN_00a621b4(param_1 + 10);
    if (param_1[5] == -0x80000000) {
      if (param_1[2] != 0) {
        FUN_0084ec48();
      }
      FUN_009de9a0(param_1 + 1);
      uVar10 = 0;
      uVar13 = 1;
      break;
    }
    param_1[10] = param_1[5];
    param_1[0xb] = param_1[6];
    param_1[0xc] = param_1[7];
    param_1[0xd] = param_1[8];
    *(undefined1 *)(param_1 + 0x18) = 0;
    param_1[0xe] = param_1 + 2;
switchD_00a62f54_caseD_4:
    uVar22 = FUN_00a63a18(param_1 + 10,param_2);
    ppiVar14 = (int **)(uVar22 >> 0x20);
    if ((uVar22 & 1) == 0) {
      FUN_00a6183c(param_1 + 10);
      if (ppiVar14 != (int **)0x0) {
        local_90 = ppiVar14;
        if ((DAT_01d50f88 < 4) &&
           (((DAT_01d4bb34 - 1 < 2 ||
             ((DAT_01d4bb34 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4bb2c), cVar5 != '\0')))) &&
            (iVar8 = FUN_01aaa278(DAT_01d4bb2c), iVar8 != 0)))) {
          if ((undefined4 ****)DAT_01d4bb2c[8] == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0efc0);
          }
          local_64 = &local_80;
          local_54 = (undefined4 ****)DAT_01d4bb2c[9];
          pppuStack_50 = DAT_01d4bb2c[10];
          local_84 = DAT_01d4bb2c + 7;
          local_5c = *local_84;
          local_68 = &local_5c;
          local_8c = (int ***)&local_68;
          local_4c = 0;
          local_88 = (code *)0x1;
          local_7c = &local_48;
          local_48 = &local_90;
          local_60 = (undefined4 ****)&DAT_01d2ea4c;
          local_80 = &DAT_00598d01;
          local_44 = (undefined4 ****)FUN_00667a08;
          local_58 = (undefined4 ****)DAT_01d4bb2c[8];
          FUN_01aaaecc(DAT_01d4bb2c,&local_8c);
          ppppuVar6 = DAT_01d4bb2c;
          unaff_r8 = &local_58;
          if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
            local_3c = DAT_01d4bb2c[5];
            local_38 = DAT_01d4bb2c[6];
            local_40 = (undefined4 ***)0x2;
            DataMemoryBarrier(0xb);
            puVar19 = DAT_01d4edc8;
            pcVar3 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar19 = &DAT_01cfc5e0;
              pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar8 = (*(code *)puVar19[3])(pcVar3,&local_40);
            unaff_r8 = ppppuVar6;
            if (iVar8 != 0) {
              local_30 = (undefined4 ****)local_40;
              local_2c = local_3c;
              pppuStack_28 = local_38;
              FUN_01aaa328(ppppuVar6,pcVar3,puVar19[4],&local_30,&local_8c);
            }
          }
        }
        else {
          ppppuVar6 = DAT_01d4bb2c;
          if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
            local_74 = DAT_01d4bb2c[5];
            local_70 = DAT_01d4bb2c[6];
            local_78 = (undefined4 ***)0x2;
            DataMemoryBarrier(0xb);
            puVar19 = DAT_01d4edc8;
            pcVar3 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar19 = &DAT_01cfc5e0;
              pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar8 = (*(code *)puVar19[3])(pcVar3,&local_78);
            if (iVar8 != 0) {
              if ((undefined4 ****)DAT_01d4bb2c[8] == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0efc0);
              }
              local_3c = &local_48;
              unaff_r8 = (undefined4 ****)DAT_01d4bb2c[9];
              pppuStack_50 = DAT_01d4bb2c[10];
              local_40 = &local_5c;
              local_68 = &local_40;
              local_4c = 0;
              local_64 = (undefined **)&DAT_00000001;
              local_44 = &local_8c;
              local_8c = &local_90;
              local_38 = (undefined4 ***)&DAT_01d2ea4c;
              local_48 = (undefined4 ***)&DAT_00598d01;
              local_88 = FUN_00667a08;
              local_30 = (undefined4 ****)local_78;
              local_2c = local_74;
              pppuStack_28 = local_70;
              local_60 = DAT_01d4bb2c + 7;
              local_5c = DAT_01d4bb2c[7];
              local_58 = (undefined4 ****)DAT_01d4bb2c[8];
              local_54 = unaff_r8;
              FUN_01aaa328(ppppuVar6,pcVar3,puVar19[4],&local_30,&local_68);
            }
          }
        }
        (*(code *)**local_90)();
      }
      goto LAB_00a63574;
    }
    uVar10 = 1;
    uVar13 = 4;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c0efb0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0efb0);
  case 3:
    piVar11 = param_1 + 10;
    if (param_1[0xc] == 0) goto LAB_00a63594;
    piVar12 = param_1 + 0xb;
    piVar20 = (int *)*piVar12;
    if (param_1[10] == 0) {
      piVar20 = piVar12;
    }
    FUN_009d405c(&local_5c,*piVar20 + 8);
    unaff_r8 = (undefined4 ****)((uint)local_58 & 0xff);
    if (local_5c != (undefined4 ***)0x80000000) {
      local_98 = pppuStack_50;
      local_94 = local_54;
      pppuVar18 = local_5c;
      ppppuVar6 = local_58;
      goto LAB_00a63664;
    }
    if (unaff_r8 == (undefined4 ****)0x2) {
      pppuVar18 = (undefined4 ***)0x80000000;
      goto LAB_00a63668;
    }
    piVar20 = (int *)param_1[0xc];
    if (piVar20 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c23478);
    }
    do {
      iVar8 = *piVar20;
      bVar2 = (bool)hasExclusiveAccess(piVar20);
    } while (!bVar2);
    *piVar20 = iVar8 + 1;
    if (iVar8 < 0) {
LAB_00a63860:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xa63860);
      (*pcVar1)();
    }
    ppppuVar6 = (undefined4 ****)FUN_009d418c(piVar20 + 2,*param_2);
    piVar17 = (int *)*piVar12;
    if (ppppuVar6 != (undefined4 ****)0x0) {
      piVar7 = piVar12;
      if (*piVar11 != 0) {
        piVar7 = piVar17;
      }
      FUN_01656cb0(&local_5c,*piVar7 + 8);
      ppppuVar4 = local_58;
      if (local_5c == (undefined4 ***)0x1) {
        local_2c = (undefined4 ***)CONCAT31(local_2c._1_3_,local_54._0_1_);
        local_30 = local_58;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,&local_30,&DAT_01c0d734,&DAT_01c23498);
      }
      unaff_r8 = (undefined4 ****)((uint)local_54 & 0xff);
      FUN_009d2be0(local_58 + 6,piVar20,&DAT_01c0dfc4);
      FUN_00a97e8c(ppppuVar4,unaff_r8);
      local_94 = ppppuVar6;
    }
    if (*piVar11 == 0) {
      piVar17 = piVar12;
    }
    DataMemoryBarrier(0xb);
    if (*(char *)(*piVar17 + 0x4c) == '\0') {
      pppuVar18 = (undefined4 ***)0x80000001;
    }
    else {
      piVar17 = (int *)*piVar12;
      if (*piVar11 == 0) {
        piVar17 = piVar12;
      }
      FUN_009d405c(&local_5c,*piVar17 + 8);
      pppuVar18 = local_5c;
      if (local_5c != (undefined4 ***)0x80000000) {
        unaff_r8 = (undefined4 ****)((uint)local_58 & 0xff);
        local_9c = (uint)local_58 >> 8;
        local_98 = pppuStack_50;
        local_94 = local_54;
      }
    }
    if (ppppuVar6 == (undefined4 ****)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar20;
        bVar2 = (bool)hasExclusiveAccess(piVar20);
      } while (!bVar2);
      *piVar20 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00a97164(piVar20);
      }
    }
    if (pppuVar18 != (undefined4 ***)0x80000001) goto LAB_00a63668;
LAB_00a637b0:
    uVar10 = 1;
    uVar13 = 3;
    break;
  case 4:
    goto switchD_00a62f54_caseD_4;
  }
  *(undefined1 *)(param_1 + 9) = uVar13;
  return uVar10;
}

