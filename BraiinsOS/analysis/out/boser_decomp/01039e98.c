// FUN_01039e98 @ 01039e98 size=3432 calls_out=27 calls_in=1
// strings: Verifying and upgrading system | boser::system_upgrade::upgrade | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::system_upgrade::upgrade | InvalidParamSegmentInvalidParamInvalidCatchAll

undefined8 FUN_01039e98(int *param_1,undefined4 *param_2)

{
  code *pcVar1;
  bool bVar2;
  char *pcVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  undefined *puVar11;
  int iVar12;
  int ***unaff_r5;
  undefined4 *puVar13;
  int **ppiVar14;
  int ***pppiVar15;
  int iVar16;
  ulonglong uVar17;
  int ****local_d0;
  int ****local_cc;
  undefined4 *local_c8;
  int ****local_c0;
  int ****local_bc;
  undefined4 *local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int ****local_a8;
  int ****local_a4;
  undefined4 *local_a0;
  int ***local_98;
  int iStack_94;
  int ***pppiStack_90;
  int *piStack_8c;
  int ****ppppiStack_88;
  int iStack_84;
  int ***local_7c;
  int ****local_78;
  int ****local_74;
  undefined4 *local_70;
  int ****local_6c;
  int ***local_68;
  undefined4 *local_64;
  int ****local_60;
  int ****local_5c;
  undefined4 *local_58;
  int ***local_50;
  int ***local_4c;
  int ***local_48;
  int ****local_44;
  int ****local_40;
  int ****local_3c;
  int ***local_38;
  int *local_34;
  int ****local_30;
  int local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x2d)) {
  case 0:
    unaff_r5 = (int ***)param_1[6];
    iVar9 = param_1[7];
    *(undefined1 *)(param_1 + 0xb) = 0;
    param_1[8] = param_1[10];
    if ((DAT_01d50f88 < 3) &&
       (((DAT_01d4c71c - 1 < 2 ||
         ((DAT_01d4c71c != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4c714), cVar5 != '\0')))) &&
        (iVar6 = FUN_01aaa278(DAT_01d4c714), iVar6 != 0)))) {
      local_3c = *(int *****)(DAT_01d4c714 + 0x20);
      if (local_3c == (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c1ddfc);
      }
      local_68 = (int ***)&local_48;
      local_38 = *(int ****)(DAT_01d4c714 + 0x24);
      local_34 = *(int **)(DAT_01d4c714 + 0x28);
      local_70 = (undefined4 *)(DAT_01d4c714 + 0x1c);
      local_40 = (int ****)*local_70;
      local_6c = (int ****)&local_40;
      local_78 = (int ****)&local_6c;
      local_30 = (int ****)0x0;
      local_74 = (int ****)&DAT_00000001;
      local_64 = (undefined4 *)&DAT_01d2ea4c;
      local_44 = (int ****)&DAT_0000003d;
      local_48 = (int ***)0x3ffaf3;
      FUN_01aaaecc(DAT_01d4c714,&local_78);
      iVar6 = DAT_01d4c714;
      if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
        local_5c = *(int *****)(DAT_01d4c714 + 0x14);
        local_58 = *(undefined4 **)(DAT_01d4c714 + 0x18);
        local_60 = (int ****)&DAT_00000003;
        DataMemoryBarrier(0xb);
        puVar13 = DAT_01d4edc8;
        pcVar3 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar13 = &DAT_01cfc5e0;
          pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar12 = (*(code *)puVar13[3])(pcVar3,&local_60);
        if (iVar12 != 0) {
          local_c0 = local_60;
          local_bc = local_5c;
          local_b8 = local_58;
          FUN_01aaa328(iVar6,pcVar3,puVar13[4],&local_c0,&local_78);
        }
      }
    }
    else {
      iVar6 = DAT_01d4c714;
      if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
        local_cc = *(int *****)(DAT_01d4c714 + 0x14);
        local_c8 = *(undefined4 **)(DAT_01d4c714 + 0x18);
        local_d0 = (int ****)&DAT_00000003;
        DataMemoryBarrier(0xb);
        puVar13 = DAT_01d4edc8;
        pcVar3 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar13 = &DAT_01cfc5e0;
          pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar12 = (*(code *)puVar13[3])(pcVar3,&local_d0);
        if (iVar12 != 0) {
          local_64 = (undefined4 *)(DAT_01d4c714 + 0x1c);
          local_40 = (int ****)*local_64;
          local_3c = *(int *****)(DAT_01d4c714 + 0x20);
          if (local_3c == (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c1ddfc);
          }
          local_60 = (int ****)&local_40;
          local_6c = (int ****)&local_60;
          local_38 = *(int ****)(DAT_01d4c714 + 0x24);
          local_30 = (int ****)0x0;
          local_34 = *(int **)(DAT_01d4c714 + 0x28);
          local_5c = (int ****)&local_78;
          local_68 = (int ***)&DAT_00000001;
          local_58 = (undefined4 *)&DAT_01d2ea4c;
          local_74 = (int ****)&DAT_0000003d;
          local_78 = (int ****)0x3ffaf3;
          local_c0 = local_d0;
          local_bc = local_cc;
          local_b8 = local_c8;
          FUN_01aaa328(iVar6,pcVar3,puVar13[4],&local_c0,&local_6c);
        }
      }
    }
    FUN_00b7d6b4(&local_c0,*(undefined4 *)(*(int *)(param_1[8] + 0xc) + 0x1c));
    if (local_c0 == (int ****)&DAT_80000016) {
      iVar6 = param_1[8];
      param_1[9] = (int)local_bc;
      *(undefined1 *)(param_1 + 0xb) = 1;
      FUN_01ae1a9c(&local_40);
      piVar8 = *(int **)(*(int *)(param_1[8] + 0xc) + 0x24);
      do {
        iVar12 = *piVar8;
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = iVar12 + 1;
      if (iVar12 < 0) goto LAB_0103ac28;
      FUN_00b33f58(param_1,*(undefined4 *)(iVar6 + 0x14),&local_40,0,0);
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar8;
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01177f84(piVar8);
      }
      FUN_00b343a0(param_1,1);
      param_1[0xc] = (int)unaff_r5;
      *(undefined1 *)(param_1 + 0x16b) = 0;
      param_1[0xd] = iVar9;
      param_1[0x16a] = param_1[8];
      goto switchD_01039eb4_caseD_3;
    }
    local_38 = (int ***)local_b8;
    local_34 = (int *)uStack_b4;
    local_30 = (int ****)uStack_b0;
    local_2c = uStack_ac;
    local_3c = local_bc;
    local_40 = local_c0;
    unaff_r5 = (int ***)FUN_00ead130();
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1de0c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1de0c);
  case 3:
switchD_01039eb4_caseD_3:
    uVar17 = FUN_0103b254(param_1 + 0xc,*param_2);
    pppiVar15 = (int ***)(uVar17 >> 0x20);
    if ((uVar17 & 1) != 0) {
      uVar4 = 3;
      goto LAB_0103a91c;
    }
    if ((char)param_1[0x16b] == '\x03') {
      FUN_0103b1f4(param_1 + 0x10);
    }
    if (pppiVar15 == (int ***)0x0) {
      if (((DAT_01d50f88 < 3) &&
          ((DAT_01d4c728 - 1 < 2 ||
           ((DAT_01d4c728 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4c720), cVar5 != '\0')))))) &&
         (iVar9 = FUN_01aaa278(DAT_01d4c720), iVar9 != 0)) {
        if (*(int *)(DAT_01d4c720 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c1de1c);
        }
        local_bc = (int ****)&local_6c;
        local_38 = *(int ****)(DAT_01d4c720 + 0x24);
        local_34 = *(int **)(DAT_01d4c720 + 0x28);
        local_c0 = (int ****)&local_40;
        local_60 = (int ****)&local_c0;
        local_5c = (int ****)&DAT_00000001;
        local_30 = (int ****)0x0;
        local_b8 = (undefined4 *)&DAT_01d2ea4c;
        local_68 = (int ***)&DAT_0000001b;
        local_6c = (int ****)0x3ffb11;
        local_58 = (undefined4 *)(DAT_01d4c720 + 0x1c);
        local_40 = (int ****)*(int ****)(DAT_01d4c720 + 0x1c);
        local_3c = (int ****)*(int *)(DAT_01d4c720 + 0x20);
        FUN_00ba793c(&local_60);
      }
      else {
        iVar9 = DAT_01d4c720;
        if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
          local_a4 = *(int *****)(DAT_01d4c720 + 0x14);
          local_a0 = *(undefined4 **)(DAT_01d4c720 + 0x18);
          local_a8 = (int ****)&DAT_00000003;
          DataMemoryBarrier(0xb);
          puVar13 = DAT_01d4edc8;
          pcVar3 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar13 = &DAT_01cfc5e0;
            pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar6 = (*(code *)puVar13[3])(pcVar3,&local_a8);
          if (iVar6 != 0) {
            if (*(int *)(DAT_01d4c720 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c1de1c);
            }
            local_5c = (int ****)&local_78;
            local_38 = *(int ****)(DAT_01d4c720 + 0x24);
            local_34 = *(int **)(DAT_01d4c720 + 0x28);
            local_60 = (int ****)&local_40;
            local_6c = (int ****)&local_60;
            local_30 = (int ****)0x0;
            local_68 = (int ***)&DAT_00000001;
            local_74 = (int ****)&DAT_0000001b;
            local_58 = (undefined4 *)&DAT_01d2ea4c;
            local_78 = (int ****)0x3ffb11;
            local_c0 = local_a8;
            local_bc = local_a4;
            local_b8 = local_a0;
            local_64 = (undefined4 *)(DAT_01d4c720 + 0x1c);
            local_40 = (int ****)*(int ****)(DAT_01d4c720 + 0x1c);
            local_3c = (int ****)*(int *)(DAT_01d4c720 + 0x20);
            FUN_01aaa328(iVar9,pcVar3,puVar13[4],&local_c0,&local_6c);
          }
        }
      }
      FUN_00b343a0(param_1,2);
      iVar6 = param_1[8];
      iVar12 = param_1[9];
      iVar9 = param_1[5];
      uVar10 = *(undefined4 *)(iVar6 + 4);
      local_bc = (int ****)&SUB_00000004;
      iVar16 = *(int *)(iVar6 + 0xc);
      pppiVar15 = (int ***)*param_1;
      uVar7 = *(undefined4 *)(iVar6 + 8);
      *(undefined1 *)(param_1 + 0xb) = 0;
      local_b8 = (undefined4 *)0x0;
      local_c0 = (int ****)0x0;
      do {
        ppiVar14 = *pppiVar15;
        bVar2 = (bool)hasExclusiveAccess(pppiVar15);
      } while (!bVar2);
      *pppiVar15 = (int **)((int)ppiVar14 + 1);
      if ((int)ppiVar14 < 0) {
LAB_0103ac28:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x103ac28);
        (*pcVar1)();
      }
      local_3c = (int ****)param_1[1];
      unaff_r5 = (int ***)param_1[2];
      local_34 = (int *)param_1[3];
      local_30 = (int ****)param_1[4];
      local_2c = CONCAT31(local_2c._1_3_,(char)iVar9);
      local_40 = (int ****)pppiVar15;
      local_38 = unaff_r5;
      iVar9 = FUN_00b7c40c(iVar16 + 8,1,uVar10,uVar7,&local_c0,iVar12,&local_40);
      puVar11 = &DAT_01c13710;
      param_1[0xc] = iVar9;
      param_1[0xd] = (int)&DAT_01c13710;
      goto LAB_0103a8f4;
    }
    local_7c = pppiVar15;
    if (((DAT_01d50f88 < 3) &&
        ((DAT_01d4c734 - 1 < 2 ||
         ((DAT_01d4c734 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4c72c), cVar5 != '\0')))))) &&
       (iVar9 = FUN_01aaa278(DAT_01d4c72c), iVar9 != 0)) {
      if (*(int *)(DAT_01d4c72c + 0x20) == 0) {
LAB_0103abbc:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c1de2c);
      }
      local_5c = &local_48;
      local_38 = *(int ****)(DAT_01d4c72c + 0x24);
      local_34 = *(int **)(DAT_01d4c72c + 0x28);
      local_64 = (undefined4 *)(DAT_01d4c72c + 0x1c);
      local_40 = (int ****)*local_64;
      local_60 = (int ****)&local_40;
      local_6c = (int ****)&local_60;
      local_30 = (int ****)0x0;
      local_68 = (int ***)&DAT_00000001;
      local_44 = (int ****)&local_78;
      local_78 = &local_7c;
      local_58 = (undefined4 *)&DAT_01d2ea4c;
      local_48 = (int ***)&DAT_005b26a3;
      local_74 = (int ****)FUN_00667a08;
      local_3c = (int ****)*(int *)(DAT_01d4c72c + 0x20);
      FUN_01aaaecc(DAT_01d4c72c,&local_6c);
      iVar9 = DAT_01d4c72c;
      if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
        local_bc = *(int *****)(DAT_01d4c72c + 0x14);
        local_b8 = *(undefined4 **)(DAT_01d4c72c + 0x18);
        local_c0 = (int ****)&DAT_00000003;
        DataMemoryBarrier(0xb);
        puVar13 = DAT_01d4edc8;
        pcVar3 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar13 = &DAT_01cfc5e0;
          pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar6 = (*(code *)puVar13[3])(pcVar3,&local_c0);
        if (iVar6 != 0) {
          FUN_01aaa328(iVar9,pcVar3,puVar13[4],&local_c0,&local_6c);
        }
      }
    }
    else {
      iVar9 = DAT_01d4c72c;
      if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
        local_74 = *(int *****)(DAT_01d4c72c + 0x14);
        local_70 = *(undefined4 **)(DAT_01d4c72c + 0x18);
        local_78 = (int ****)&DAT_00000003;
        DataMemoryBarrier(0xb);
        puVar13 = DAT_01d4edc8;
        pcVar3 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar13 = &DAT_01cfc5e0;
          pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar6 = (*(code *)puVar13[3])(pcVar3,&local_78);
        if (iVar6 != 0) {
          if (*(int *)(DAT_01d4c72c + 0x20) == 0) goto LAB_0103abbc;
          local_5c = &local_50;
          local_38 = *(int ****)(DAT_01d4c72c + 0x24);
          local_34 = *(int **)(DAT_01d4c72c + 0x28);
          local_60 = (int ****)&local_40;
          local_6c = (int ****)&local_60;
          local_68 = (int ***)&DAT_00000001;
          local_4c = (int ***)&local_48;
          local_48 = (int ***)&local_7c;
          local_30 = (int ****)0x0;
          local_58 = (undefined4 *)&DAT_01d2ea4c;
          local_50 = (int ***)&DAT_005b26a3;
          local_44 = (int ****)FUN_00667a08;
          local_c0 = local_78;
          local_bc = local_74;
          local_b8 = local_70;
          local_64 = (undefined4 *)(DAT_01d4c72c + 0x1c);
          local_40 = (int ****)*(int ****)(DAT_01d4c72c + 0x1c);
          local_3c = (int ****)*(int *)(DAT_01d4c72c + 0x20);
          FUN_01aaa328(iVar9,pcVar3,puVar13[4],&local_c0,&local_6c);
        }
      }
    }
    iVar9 = thunk_FUN_01be5118(0x18);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x18);
    }
    FUN_01bed4e2(iVar9,"Upgrade image is invalid",0x18);
    local_30 = (int ****)&local_c0;
    local_c0 = (int ****)CONCAT31(local_c0._1_3_,4);
    local_38 = (int ***)0x18;
    local_40 = (int ****)&DAT_00000018;
    local_3c = (int ****)iVar9;
    local_34 = param_1;
    FUN_00ab3338(*(undefined4 *)(*param_1 + 8),&local_40);
    unaff_r5 = local_7c;
LAB_0103aa84:
    piVar8 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar8;
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = iVar9 + -1;
    if (iVar9 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0121cce0(*param_1);
    }
    if ((char)param_1[0xb] == '\x01') {
      piVar8 = (int *)param_1[9];
      DataMemoryBarrier(0xb);
      *(undefined1 *)(piVar8 + 2) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar9 = *piVar8;
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = iVar9 + -1;
      if (iVar9 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a38efc(param_1[9]);
      }
    }
    break;
  case 4:
    iVar9 = param_1[0xc];
    puVar11 = (undefined *)param_1[0xd];
LAB_0103a8f4:
    (**(code **)(puVar11 + 0xc))(&local_40,iVar9,param_2);
    if (local_40 == (int ****)0x80000017) {
      uVar4 = 4;
LAB_0103a91c:
      *(undefined1 *)((int)param_1 + 0x2d) = uVar4;
      uVar7 = 1;
      goto LAB_0103ab08;
    }
    local_98 = (int ***)local_40;
    iStack_94 = (int)local_3c;
    pppiStack_90 = local_38;
    piStack_8c = local_34;
    ppppiStack_88 = local_30;
    iStack_84 = local_2c;
    FUN_01139b38(param_1[0xc],param_1[0xd]);
    if (local_98 != (int ***)&DAT_80000016) {
      local_60 = &local_98;
      if (1 < DAT_01d51b00) {
        local_c0 = (int ****)&local_60;
        local_bc = (int ****)&LAB_00f9d594;
        local_30 = (int ****)&DAT_01c1de3c;
        local_34 = (int *)&DAT_0000001e;
        local_38 = (int ***)0x3ffb38;
        local_3c = (int ****)0x1e;
        local_40 = (int ****)0x3ffb38;
        FUN_0193b350(&DAT_0057163a,&local_c0,2,&local_40);
      }
      iVar9 = thunk_FUN_01be5118(0xe);
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0xe);
      }
      FUN_01bed4e2(iVar9,"Upgrade failed",0xe);
      local_30 = (int ****)&local_c0;
      local_c0 = (int ****)CONCAT31(local_c0._1_3_,4);
      local_38 = (int ***)0xe;
      local_40 = (int ****)&DAT_0000000e;
      local_3c = (int ****)iVar9;
      local_34 = param_1;
      FUN_00ab3338(*(undefined4 *)(*param_1 + 8),&local_40);
      if (local_98 != (int ***)&DAT_80000016) {
        piVar8 = (int *)((uint)&local_98 | 4);
        local_3c = (int ****)*piVar8;
        local_38 = (int ***)piVar8[1];
        local_34 = (int *)piVar8[2];
        local_30 = (int ****)piVar8[3];
        local_2c = piVar8[4];
        local_40 = (int ****)local_98;
        unaff_r5 = (int ***)FUN_00ead130(&local_40);
        goto LAB_0103aa84;
      }
    }
    piVar8 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar8;
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = iVar9 + -1;
    unaff_r5 = (int ***)0x0;
    if (iVar9 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0121cce0(*param_1);
    }
  }
  *(undefined2 *)(param_1 + 0xb) = 0x100;
  uVar7 = 0;
LAB_0103ab08:
  return CONCAT44(unaff_r5,uVar7);
}

