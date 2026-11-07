// FUN_0170c408 @ 0170c408 size=1996 calls_out=15 calls_in=2
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0170c408(uint *param_1,int *param_2,undefined4 ******param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  char *pcVar4;
  undefined4 ******ppppppuVar5;
  char cVar6;
  uint uVar7;
  undefined4 *****pppppuVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 *****pppppuVar16;
  undefined4 ******unaff_r8;
  undefined4 *****pppppuVar17;
  undefined4 ******local_c8;
  int local_c0;
  undefined4 ******local_94;
  undefined4 *******local_90;
  undefined4 ******local_8c;
  undefined4 *****local_88;
  undefined4 *****pppppuStack_84;
  undefined4 ****ppppuStack_80;
  undefined4 ****ppppuStack_7c;
  undefined4 *******local_74;
  undefined *local_70;
  uint *local_6c;
  undefined *local_68;
  undefined4 ******local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 *******local_54;
  undefined **local_50;
  uint *local_4c;
  undefined4 ******local_48;
  undefined4 *******local_44;
  undefined4 *******local_40;
  undefined4 ******local_3c;
  undefined4 *****local_38;
  undefined4 *****local_34;
  undefined4 ****local_30;
  undefined4 ****ppppuStack_2c;
  
  local_94 = param_3;
  if (param_4 == 0 || *param_2 == 0) {
    uVar15 = (uint)*(byte *)param_3;
    if (uVar15 == 0) {
      uVar9 = 0;
    }
    else if (uVar15 == 1) {
      uVar9 = (uint)*(byte *)((int)param_3 + 1) << 8;
    }
    else {
      unaff_r8 = (undefined4 ******)FUN_014333b0();
      pppppuVar8 = param_3[1];
      (*(code *)**pppppuVar8)(&local_40,pppppuVar8 + 3,pppppuVar8[1],pppppuVar8[2]);
      *unaff_r8 = local_40;
      unaff_r8[1] = local_3c;
      unaff_r8[2] = local_38;
      unaff_r8[3] = local_34;
      uVar9 = 0;
    }
    local_40 = (undefined4 *******)(uVar9 | uVar15);
    local_3c = unaff_r8;
    (*(code *)*param_3[2])(&local_38,param_3 + 5,param_3[3],param_3[4]);
    *param_1 = (uint)local_40;
    param_1[1] = (uint)local_3c;
    param_1[2] = (uint)local_38;
    param_1[3] = (uint)local_34;
    param_1[4] = (uint)local_30;
    param_1[5] = (uint)ppppuStack_2c;
    param_1[6] = 0;
    return;
  }
  FUN_01933ff0(&local_40,*param_2 + 8);
  ppppppuVar5 = local_3c;
  if (local_40 == (undefined4 *******)0x1) {
    local_8c = (undefined4 ******)CONCAT31(local_8c._1_3_,local_38._0_1_);
    local_90 = (undefined4 *******)local_3c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_90,&DAT_01d191f4,&DAT_01d20c6c);
  }
  uVar9 = (uint)*(byte *)param_3;
  uVar15 = (uint)local_38 & 0xff;
  if (uVar9 == 0) {
    uVar7 = 0;
  }
  else if (uVar9 == 2) {
    unaff_r8 = (undefined4 ******)FUN_014333b0();
    pppppuVar8 = param_3[1];
    (*(code *)**pppppuVar8)(&local_40,pppppuVar8 + 3,pppppuVar8[1],pppppuVar8[2]);
    *unaff_r8 = local_40;
    unaff_r8[1] = local_3c;
    unaff_r8[2] = local_38;
    unaff_r8[3] = local_34;
    uVar7 = 0;
  }
  else {
    uVar7 = (uint)*(byte *)((int)param_3 + 1) << 8;
  }
  local_90 = (undefined4 *******)(uVar7 | uVar9);
  local_8c = unaff_r8;
  (*(code *)*param_3[2])(&local_88,param_3 + 5,param_3[3],param_3[4]);
  uVar9 = FUN_01743c30(ppppppuVar5[10],ppppppuVar5[0xb],ppppppuVar5[0xc],ppppppuVar5[0xd],&local_90)
  ;
  if (ppppppuVar5[8] == (undefined4 *****)0x0) {
    FUN_017098dc(ppppppuVar5 + 6,ppppppuVar5 + 10);
  }
  pppppuVar8 = ppppppuVar5[6];
  pppppuVar16 = ppppppuVar5[7];
  bVar3 = false;
  local_c0 = 0;
  uVar7 = uVar9;
  do {
    uVar7 = (uint)pppppuVar16 & uVar7;
    uVar12 = *(uint *)((int)pppppuVar8 + uVar7);
    uVar13 = uVar12 ^ (uVar9 >> 0x19) * 0x1010101;
    uVar13 = ~uVar13 & 0x80808080 & uVar13 + 0xfefefeff;
    while (uVar13 != 0) {
      iVar10 = FUN_01744014(&local_90,
                            ppppppuVar5[6] +
                            (uVar7 + ((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                                    (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18)
                                     >> 3) & (uint)pppppuVar16) * -6 + -6);
      uVar13 = uVar13 - 1 & uVar13;
      if (iVar10 != 0) {
        FUN_0177266c(&local_90);
        if ((DAT_01d50f88 == 0) &&
           (((DAT_01d4fb20 - 1 < 2 ||
             ((DAT_01d4fb20 != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4fb18), cVar6 != '\0')))) &&
            (iVar10 = FUN_01aaa278(DAT_01d4fb18), iVar10 != 0)))) {
          local_3c = *(undefined4 *******)(DAT_01d4fb18 + 0x20);
          if (local_3c == (undefined4 ******)0x0) {
LAB_0170cbc0:
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d20c7c);
          }
          local_50 = &local_68;
          local_38 = *(undefined4 ******)(DAT_01d4fb18 + 0x24);
          local_34 = *(undefined4 ******)(DAT_01d4fb18 + 0x28);
          local_6c = (uint *)(DAT_01d4fb18 + 0x1c);
          local_40 = (undefined4 *******)*local_6c;
          local_54 = &local_40;
          local_74 = &local_54;
          local_30 = (undefined4 ****)0x0;
          local_70 = (undefined *)0x1;
          local_64 = &local_48;
          local_48 = &local_94;
          local_4c = (uint *)&DAT_01d2ea4c;
          local_68 = &DAT_005af865;
          local_44 = (undefined4 *******)&DAT_01743c28;
          FUN_01aaaecc(DAT_01d4fb18,&local_74);
          iVar10 = DAT_01d4fb18;
          if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
            local_8c = *(undefined4 *******)(DAT_01d4fb18 + 0x14);
            local_88 = *(undefined4 ******)(DAT_01d4fb18 + 0x18);
            local_90 = (undefined4 *******)&DAT_00000005;
            DataMemoryBarrier(0xb);
            puVar14 = DAT_01d4edc8;
            pcVar4 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar14 = &DAT_01cfc5e0;
              pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar11 = (*(code *)puVar14[3])(pcVar4,&local_90);
            if (iVar11 != 0) {
              FUN_01aaa328(iVar10,pcVar4,puVar14[4],&local_90,&local_74);
            }
          }
        }
        else {
          iVar10 = DAT_01d4fb18;
          if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
            local_5c = *(undefined4 *)(DAT_01d4fb18 + 0x14);
            local_58 = *(undefined4 *)(DAT_01d4fb18 + 0x18);
            local_60 = 5;
            DataMemoryBarrier(0xb);
            puVar14 = DAT_01d4edc8;
            pcVar4 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar14 = &DAT_01cfc5e0;
              pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar11 = (*(code *)puVar14[3])(pcVar4,&local_60);
            if (iVar11 != 0) {
              local_4c = (uint *)(DAT_01d4fb18 + 0x1c);
              local_40 = (undefined4 *******)*local_4c;
              local_3c = *(undefined4 *******)(DAT_01d4fb18 + 0x20);
              if (local_3c == (undefined4 ******)0x0) goto LAB_0170cbc0;
              local_38 = *(undefined4 ******)(DAT_01d4fb18 + 0x24);
              local_8c = &local_48;
              local_34 = *(undefined4 ******)(DAT_01d4fb18 + 0x28);
              local_90 = &local_40;
              local_50 = (undefined **)&DAT_00000001;
              local_44 = &local_74;
              local_74 = &local_94;
              local_30 = (undefined4 ****)0x0;
              local_88 = (undefined4 *****)&DAT_01d2ea4c;
              local_48 = (undefined4 ******)&DAT_005af865;
              local_70 = &DAT_01743c28;
              local_54 = &local_90;
              FUN_01aaa328(iVar10,pcVar4,puVar14[4],&local_60,&local_54);
            }
          }
        }
        *(undefined1 *)param_1 = 3;
        goto LAB_0170c9e8;
      }
    }
    uVar13 = uVar12 & 0x80808080;
    if (bVar3) goto LAB_0170c6ac;
    if (uVar13 == 0) {
      bVar3 = false;
    }
    else {
      local_c8 = (undefined4 ******)
                 (uVar7 + ((uint)LZCOUNT((uVar12 & 0x80) << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                         (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3) &
                 (uint)pppppuVar16);
LAB_0170c6ac:
      if ((uVar13 & uVar12 << 1) != 0) {
        if (-1 < *(char *)((int)pppppuVar8 + (int)local_c8)) {
          uVar7 = (uint)*pppppuVar8 & 0x80808080;
          local_c8 = (undefined4 ******)
                     ((uint)LZCOUNT(((uint)*pppppuVar8 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10
                                    | (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3);
        }
        pppppuVar17 = ppppppuVar5[6];
        local_40 = local_90;
        local_3c = local_8c;
        local_38 = local_88;
        local_34 = pppppuStack_84;
        local_30 = ppppuStack_80;
        ppppuStack_2c = ppppuStack_7c;
        bVar1 = *(byte *)((int)pppppuVar17 + (int)local_c8);
        pppppuVar8 = ppppppuVar5[7];
        pppppuVar16 = ppppppuVar5[8];
        ppppppuVar5[9] = (undefined4 *****)((int)ppppppuVar5[9] + 1);
        bVar2 = (byte)(uVar9 >> 0x19);
        *(byte *)((int)pppppuVar17 + (int)local_c8) = bVar2;
        ppppppuVar5[8] = (undefined4 *****)((int)pppppuVar16 - (bVar1 & 1));
        *(byte *)((int)pppppuVar17 + ((uint)pppppuVar8 & (uint)(local_c8 + -1)) + 4) = bVar2;
        pppppuVar17[(int)local_c8 * -6 + -6] = local_90;
        pppppuVar17[(int)local_c8 * -6 + -5] = local_8c;
        pppppuVar17[(int)local_c8 * -6 + -4] = local_88;
        pppppuVar17[(int)local_c8 * -6 + -3] = pppppuStack_84;
        pppppuVar17[(int)local_c8 * -6 + -2] = ppppuStack_80;
        pppppuVar17[(int)local_c8 * -6 + -1] = ppppuStack_7c;
        uVar9 = (uint)*(byte *)param_3;
        if (uVar9 == 0) {
          uVar7 = 0;
        }
        else if (uVar9 == 2) {
          local_c8 = (undefined4 ******)FUN_014333b0();
          pppppuVar8 = param_3[1];
          (*(code *)**pppppuVar8)(&local_40,pppppuVar8 + 3,pppppuVar8[1],pppppuVar8[2]);
          *local_c8 = local_40;
          local_c8[1] = local_3c;
          local_c8[2] = local_38;
          local_c8[3] = local_34;
          uVar7 = 0;
        }
        else {
          uVar7 = (uint)*(byte *)((int)param_3 + 1) << 8;
        }
        local_40 = (undefined4 *******)(uVar7 | uVar9);
        local_3c = local_c8;
        (*(code *)*param_3[2])(&local_38,param_3 + 5,param_3[3],param_3[4]);
        uVar9 = FUN_017048d8(param_2);
        *param_1 = (uint)local_40;
        param_1[1] = (uint)local_3c;
        param_1[2] = (uint)local_38;
        param_1[3] = (uint)local_34;
        param_1[4] = (uint)local_30;
        param_1[5] = (uint)ppppuStack_2c;
        param_1[6] = uVar9;
LAB_0170c9e8:
        FUN_00a97e8c(ppppppuVar5,uVar15);
        return;
      }
      bVar3 = true;
    }
    local_c0 = local_c0 + 4;
    uVar7 = local_c0 + uVar7;
  } while( true );
}

