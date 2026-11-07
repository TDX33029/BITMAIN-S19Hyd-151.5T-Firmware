// FUN_00f7bbe4 @ 00f7bbe4 size=3116 calls_out=23 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage | boser_buildroot::sessionopen/boser/boser-buildroot/src/session.rsevent open/boser/boser-buildroot/src/session.rs:130event open/boser/boser-buildroot/src/session.rs:113 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser_buildroot::sessionopen/boser/boser-buildroot/src/session.rsevent open/boser/boser-buildroot/src/session.rs:130event open/boser/boser-buildroot/src/session.rs:113 | InvalidParamSegmentInvalidParamInvalidCatchAll

undefined4 FUN_00f7bbe4(int param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int ****ppppiVar7;
  int ****ppppiVar8;
  undefined *puVar9;
  uint uVar10;
  int **ppiVar11;
  undefined4 *puVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int ****local_120;
  int ****local_11c;
  int ****ppppiStack_118;
  int ***local_d0;
  int ***local_cc;
  int ***local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined8 local_80;
  int ****local_78;
  int ****local_74;
  int ****local_70;
  int ****local_68;
  int ****local_64;
  int ****local_60;
  int **local_5c;
  int ***local_58;
  int ***local_54;
  int ****local_50;
  int ****local_4c;
  int ****local_48;
  int ****local_44;
  int ****local_40;
  undefined4 *local_3c;
  int ***local_38;
  code *local_34;
  int ****local_30;
  int ****local_2c;
  int ****local_28;
  
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
  }
  uVar16 = FUN_019ec558(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  iVar13 = param_1 + 0x18;
  if (*(char *)(param_1 + 0x70) == '\0') {
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x68);
    goto LAB_00f7bc70;
  }
  if (*(char *)(param_1 + 0x70) != '\x03') {
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c19154);
  }
  do {
    iVar4 = FUN_019e84a0(iVar13,param_2);
    if (iVar4 != 0) {
      *(undefined1 *)(param_1 + 0x70) = 3;
      FUN_019ec558((int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
      return 1;
    }
    FUN_01431b40(iVar13);
    iVar4 = *(int *)(param_1 + 0x6c);
    uVar17 = FUN_00b81808();
    local_80 = uVar17;
    if (DAT_01d50f88 < 2) {
      if (1 < DAT_01d4c350 - 1) {
        if (DAT_01d4c350 != 0) {
          cVar3 = FUN_01aaafa8(&DAT_01d4c348);
          if (cVar3 != '\0') goto LAB_00f7bd18;
        }
        goto LAB_00f7be84;
      }
LAB_00f7bd18:
      iVar5 = FUN_01aaa278(DAT_01d4c348);
      if (iVar5 == 0) goto LAB_00f7be84;
      if (*(int ****)(DAT_01d4c348 + 0x20) == (int ***)0x0) goto LAB_00f7c7e8;
      local_40 = (int ****)&local_78;
      local_c8 = *(int ****)(DAT_01d4c348 + 0x24);
      local_c4 = *(undefined4 *)(DAT_01d4c348 + 0x28);
      local_48 = (int ****)(DAT_01d4c348 + 0x1c);
      local_d0 = *local_48;
      local_44 = &local_d0;
      local_50 = (int ****)&local_44;
      local_c0 = 0;
      local_4c = (int ****)&DAT_00000001;
      local_74 = (int ****)&local_68;
      local_68 = (int ****)&local_80;
      local_3c = (undefined4 *)&DAT_01d2ea4c;
      local_78 = (int ****)&DAT_0059cf64;
      local_64 = (int ****)FUN_012fceb8;
      local_cc = *(int ****)(DAT_01d4c348 + 0x20);
      FUN_01aaaecc(DAT_01d4c348,&local_50);
      iVar5 = DAT_01d4c348;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_2c = *(int *****)(DAT_01d4c348 + 0x14);
        local_28 = *(int *****)(DAT_01d4c348 + 0x18);
        local_30 = (int ****)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar12 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar12 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar6 = (*(code *)puVar12[3])(pcVar1,&local_30);
        if (iVar6 != 0) {
          local_120 = local_30;
          local_11c = local_2c;
          ppppiStack_118 = local_28;
          FUN_01aaa328(iVar5,pcVar1,puVar12[4],&local_120,&local_50);
        }
      }
    }
    else {
LAB_00f7be84:
      iVar5 = DAT_01d4c348;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_74 = *(int *****)(DAT_01d4c348 + 0x14);
        local_70 = *(int *****)(DAT_01d4c348 + 0x18);
        local_78 = (int ****)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar12 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar12 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar6 = (*(code *)puVar12[3])(pcVar1,&local_78);
        if (iVar6 != 0) {
          if (*(int ****)(DAT_01d4c348 + 0x20) == (int ***)0x0) {
LAB_00f7c7e8:
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c139a8);
          }
          local_2c = (int ****)&local_68;
          local_c8 = *(int ****)(DAT_01d4c348 + 0x24);
          local_c4 = *(undefined4 *)(DAT_01d4c348 + 0x28);
          local_30 = &local_d0;
          local_44 = (int ****)&local_30;
          local_c0 = 0;
          local_40 = (int ****)&DAT_00000001;
          local_64 = (int ****)&local_50;
          local_28 = (int ****)&DAT_01d2ea4c;
          local_4c = (int ****)FUN_012fceb8;
          local_68 = (int ****)&DAT_0059cf64;
          local_50 = (int ****)&local_80;
          local_120 = local_78;
          local_11c = local_74;
          ppppiStack_118 = local_70;
          local_d0 = *(int ****)(DAT_01d4c348 + 0x1c);
          local_cc = *(int ****)(DAT_01d4c348 + 0x20);
          local_3c = (undefined4 *)(DAT_01d4c348 + 0x1c);
          FUN_01aaa328(iVar5,pcVar1,puVar12[4],&local_120,&local_44);
        }
      }
    }
    uVar17 = FUN_00b81df8(iVar4 + 8);
    iVar4 = (int)uVar17;
    iVar5 = *(int *)(iVar4 + 0x14);
    puVar14 = *(uint **)(*(int *)(iVar4 + 0x24) + 0x28);
    do {
      puVar15 = puVar14;
      if (iVar5 == 0) goto LAB_00f7c040;
      uVar10 = puVar15[1];
      iVar5 = iVar5 + -1;
      puVar14 = (uint *)puVar15[10];
    } while ((int)(local_80._4_4_ - (uVar10 + ((int ***)local_80 < (int ***)*puVar15))) < 0 !=
             (SBORROW4(local_80._4_4_,uVar10) !=
             SBORROW4(local_80._4_4_ - uVar10,(uint)((int ***)local_80 < (int ***)*puVar15))));
    FUN_006666fc(&local_120,puVar15[7],puVar15[8]);
    if (local_120 == (int ****)&DAT_80000000) {
LAB_00f7c040:
      local_60 = (int ****)0x0;
      local_64 = (int ****)&SUB_00000004;
      local_68 = (int ****)0x0;
      local_5c = (int **)0x0;
LAB_00f7c05c:
      if (DAT_01d50f88 < 2) {
        if (1 < DAT_01d4c35c - 1) {
          if (DAT_01d4c35c != 0) {
            cVar3 = FUN_01aaafa8(&DAT_01d4c354);
            if (cVar3 != '\0') goto LAB_00f7c088;
          }
          goto LAB_00f7c4c4;
        }
LAB_00f7c088:
        iVar5 = FUN_01aaa278(DAT_01d4c354);
        if (iVar5 == 0) goto LAB_00f7c4c4;
        if (*(int ****)(DAT_01d4c354 + 0x20) != (int ***)0x0) {
          local_40 = &local_38;
          local_c8 = *(int ****)(DAT_01d4c354 + 0x24);
          local_c4 = *(undefined4 *)(DAT_01d4c354 + 0x28);
          local_48 = (int ****)(DAT_01d4c354 + 0x1c);
          local_d0 = *local_48;
          local_44 = &local_d0;
          local_50 = (int ****)&local_44;
          local_c0 = 0;
          local_4c = (int ****)&DAT_00000001;
          local_3c = (undefined4 *)&DAT_01d2ea4c;
          local_34 = (code *)0x33;
          local_38 = (int ***)0x3ef264;
          local_cc = *(int ****)(DAT_01d4c354 + 0x20);
          FUN_01aaaecc(DAT_01d4c354,&local_50);
          iVar5 = DAT_01d4c354;
          if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
            local_2c = *(int *****)(DAT_01d4c354 + 0x14);
            local_28 = *(int *****)(DAT_01d4c354 + 0x18);
            local_30 = (int ****)&SUB_00000004;
            DataMemoryBarrier(0xb);
            puVar12 = DAT_01d4edc8;
            pcVar1 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar12 = &DAT_01cfc5e0;
              pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar6 = (*(code *)puVar12[3])(pcVar1,&local_30);
            if (iVar6 != 0) {
              local_120 = local_30;
              local_11c = local_2c;
              ppppiStack_118 = local_28;
              FUN_01aaa328(iVar5,pcVar1,puVar12[4],&local_120,&local_50);
            }
          }
          goto LAB_00f7c760;
        }
LAB_00f7c804:
        puVar9 = &DAT_01c139b8;
LAB_00f7c80c:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,puVar9);
      }
LAB_00f7c4c4:
      iVar5 = DAT_01d4c354;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_4c = *(int *****)(DAT_01d4c354 + 0x14);
        local_48 = *(int *****)(DAT_01d4c354 + 0x18);
        local_50 = (int ****)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar12 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar12 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar6 = (*(code *)puVar12[3])(pcVar1,&local_50);
        if (iVar6 != 0) {
          if (*(int ****)(DAT_01d4c354 + 0x20) == (int ***)0x0) goto LAB_00f7c804;
          local_2c = &local_38;
          local_c8 = *(int ****)(DAT_01d4c354 + 0x24);
          local_c4 = *(undefined4 *)(DAT_01d4c354 + 0x28);
          local_30 = &local_d0;
          local_44 = (int ****)&local_30;
          local_c0 = 0;
          local_40 = (int ****)&DAT_00000001;
          local_34 = (code *)0x33;
          local_28 = (int ****)&DAT_01d2ea4c;
          local_38 = (int ***)0x3ef264;
          local_120 = local_50;
          local_11c = local_4c;
          ppppiStack_118 = local_48;
          local_d0 = *(int ****)(DAT_01d4c354 + 0x1c);
          local_cc = *(int ****)(DAT_01d4c354 + 0x20);
          local_3c = (undefined4 *)(DAT_01d4c354 + 0x1c);
          FUN_01aaa328(iVar5,pcVar1,puVar12[4],&local_120,&local_44);
        }
      }
    }
    else {
      ppppiVar7 = (int ****)thunk_FUN_01be5118(0x30);
      if (ppppiVar7 == (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,0x30);
      }
      *ppppiVar7 = (int ***)local_120;
      ppppiVar7[1] = (int ***)local_11c;
      ppppiVar7[2] = (int ***)ppppiStack_118;
      local_28 = (int ****)&DAT_00000001;
      local_30 = (int ****)&SUB_00000004;
      local_2c = ppppiVar7;
      uVar2 = local_80;
      while( true ) {
        puVar15 = puVar14;
        ppppiVar8 = local_28;
        local_80._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
        local_80._0_4_ = (int ***)uVar2;
        if (iVar5 == 0) break;
        uVar10 = puVar15[1];
        iVar5 = iVar5 + -1;
        puVar14 = (uint *)puVar15[10];
        if ((int)(local_80._4_4_ - (uVar10 + ((int ***)local_80 < (int ***)*puVar15))) < 0 ==
            (SBORROW4(local_80._4_4_,uVar10) !=
            SBORROW4(local_80._4_4_ - uVar10,(uint)((int ***)local_80 < (int ***)*puVar15)))) {
          local_80 = uVar2;
          FUN_006666fc(&local_d0,puVar15[7],puVar15[8]);
          uVar2 = local_80;
          if (local_d0 == (int ***)0x80000000) break;
          if (ppppiVar8 == local_30) {
            FUN_006520b4(&local_30,ppppiVar8,1,4,0xc);
            ppppiVar7 = local_2c;
            uVar2 = local_80;
          }
          local_28 = (int ****)((int)ppppiVar8 + 1);
          ppppiVar8 = ppppiVar7 + (int)ppppiVar8 * 3;
          *ppppiVar8 = local_d0;
          ppppiVar8[1] = local_cc;
          ppppiVar8[2] = local_c8;
        }
      }
      local_80 = uVar2;
      ppiVar11 = (int **)0x0;
      local_68 = local_30;
      local_64 = local_2c;
      local_60 = local_28;
      local_5c = (int **)0x0;
      if (local_28 == (int ****)0x0) goto LAB_00f7c05c;
      ppppiVar7 = local_2c + 1;
      iVar5 = (int)local_28 * 0xc;
      do {
        FUN_00b8ca34(&local_d0,iVar4 + 8,*ppppiVar7,ppppiVar7[1]);
        if (local_c8 != (int ***)0x80000000) {
          FUN_019bb7e0(local_c8,local_c4);
          ppiVar11 = (int **)((int)ppiVar11 + 1);
          local_5c = ppiVar11;
        }
        ppppiVar7 = ppppiVar7 + 3;
        iVar5 = iVar5 + -0xc;
      } while (iVar5 != 0);
      if ((int)ppiVar11 < 1) goto LAB_00f7c05c;
      if (DAT_01d50f88 < 3) {
        if (1 < DAT_01d4c368 - 1) {
          if (DAT_01d4c368 != 0) {
            cVar3 = FUN_01aaafa8(&DAT_01d4c360);
            if (cVar3 != '\0') goto LAB_00f7c35c;
          }
          goto LAB_00f7c61c;
        }
LAB_00f7c35c:
        iVar5 = FUN_01aaa278(DAT_01d4c360);
        if (iVar5 == 0) goto LAB_00f7c61c;
        if (*(int ****)(DAT_01d4c360 + 0x20) == (int ***)0x0) {
LAB_00f7c820:
          puVar9 = &DAT_01c139c8;
          goto LAB_00f7c80c;
        }
        local_40 = &local_58;
        local_c8 = *(int ****)(DAT_01d4c360 + 0x24);
        local_c4 = *(undefined4 *)(DAT_01d4c360 + 0x28);
        local_48 = (int ****)(DAT_01d4c360 + 0x1c);
        local_d0 = *local_48;
        local_50 = (int ****)&local_44;
        local_c0 = 0;
        local_4c = (int ****)&DAT_00000001;
        local_54 = (int ***)&local_38;
        local_38 = &local_5c;
        local_3c = (undefined4 *)&DAT_01d2ea4c;
        local_58 = (int ***)&DAT_005ad1dc;
        local_34 = FUN_012fce60;
        local_cc = *(int ****)(DAT_01d4c360 + 0x20);
        local_44 = &local_d0;
        FUN_01aaaecc(DAT_01d4c360,&local_50);
        iVar5 = DAT_01d4c360;
        if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
          local_2c = *(int *****)(DAT_01d4c360 + 0x14);
          local_28 = *(int *****)(DAT_01d4c360 + 0x18);
          local_30 = (int ****)&DAT_00000003;
          DataMemoryBarrier(0xb);
          puVar12 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar12 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar6 = (*(code *)puVar12[3])(pcVar1,&local_30);
          if (iVar6 != 0) {
            local_120 = local_30;
            local_11c = local_2c;
            ppppiStack_118 = local_28;
            FUN_01aaa328(iVar5,pcVar1,puVar12[4],&local_120,&local_50);
          }
        }
      }
      else {
LAB_00f7c61c:
        iVar5 = DAT_01d4c360;
        if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
          local_4c = *(int *****)(DAT_01d4c360 + 0x14);
          local_48 = *(int *****)(DAT_01d4c360 + 0x18);
          local_50 = (int ****)&DAT_00000003;
          DataMemoryBarrier(0xb);
          puVar12 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar12 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar6 = (*(code *)puVar12[3])(pcVar1,&local_50);
          if (iVar6 != 0) {
            if (*(int ****)(DAT_01d4c360 + 0x20) == (int ***)0x0) goto LAB_00f7c820;
            local_2c = &local_58;
            local_c8 = *(int ****)(DAT_01d4c360 + 0x24);
            local_c4 = *(undefined4 *)(DAT_01d4c360 + 0x28);
            local_44 = (int ****)&local_30;
            local_c0 = 0;
            local_40 = (int ****)&DAT_00000001;
            local_54 = (int ***)&local_38;
            local_38 = &local_5c;
            local_28 = (int ****)&DAT_01d2ea4c;
            local_58 = (int ***)&DAT_005ad1dc;
            local_34 = FUN_012fce60;
            local_120 = local_50;
            local_11c = local_4c;
            ppppiStack_118 = local_48;
            local_d0 = *(int ****)(DAT_01d4c360 + 0x1c);
            local_cc = *(int ****)(DAT_01d4c360 + 0x20);
            local_3c = (undefined4 *)(DAT_01d4c360 + 0x1c);
            local_30 = &local_d0;
            FUN_01aaa328(iVar5,pcVar1,puVar12[4],&local_120,&local_44);
          }
        }
      }
    }
LAB_00f7c760:
    FUN_006a41c0(&local_68);
    FUN_00a97e8c(iVar4,(uint)((ulonglong)uVar17 >> 0x20) & 1);
LAB_00f7bc70:
    FUN_019e6e74(&local_d0,&DAT_01c19164,600,0,0,&DAT_01c19164);
    FUN_01bed4e2(&local_120,&local_d0,0x50);
    FUN_01bed4e2(iVar13,&local_120,0x50);
  } while( true );
}

