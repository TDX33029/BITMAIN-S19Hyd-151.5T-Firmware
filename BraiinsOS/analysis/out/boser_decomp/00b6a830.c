// FUN_00b6a830 @ 00b6a830 size=3540 calls_out=36 calls_in=1
// strings: Changing root password | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00b6a830(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int ****ppppiVar9;
  int iVar10;
  int ***pppiVar11;
  int *piVar12;
  undefined1 uVar13;
  uint uVar14;
  undefined4 *puVar15;
  int ****ppppiVar16;
  int ****ppppiVar17;
  undefined4 uVar18;
  uint uVar19;
  int ****ppppiVar20;
  undefined4 *puVar21;
  int ****ppppiVar22;
  int ****ppppiVar23;
  char *pcVar24;
  ulonglong uVar25;
  undefined4 *local_1a0;
  undefined4 local_19c;
  undefined4 *local_188;
  int ****local_178;
  undefined4 *local_16c;
  int local_168;
  undefined1 *local_164;
  int ****local_158;
  undefined4 local_154;
  undefined1 *local_150;
  int ****local_148;
  int ****ppppiStack_144;
  int ***pppiStack_140;
  int ****local_138;
  int ****ppppiStack_134;
  int ****ppppiStack_130;
  int ****local_128;
  int ****local_124;
  int ***local_120;
  int ****local_11c;
  int ****ppppiStack_118;
  int ****ppppiStack_114;
  undefined4 uStack_110;
  int ****local_108;
  int ***local_104;
  int ****local_100;
  undefined4 uStack_fc;
  int ****ppppiStack_f8;
  undefined4 uStack_f4;
  int ***local_f0;
  int ****local_ec;
  int ****local_e8;
  int ****local_e4;
  int ****local_e0;
  int ****local_dc;
  int ****local_d8;
  int ****local_d4;
  int ****local_d0;
  int ****ppppiStack_cc;
  uint *local_c8;
  undefined4 local_c4;
  undefined4 local_b8;
  int ****local_b4;
  int ****ppppiStack_b0;
  undefined1 *puStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  uint *local_88;
  undefined4 local_84;
  int ****local_80;
  int ****local_7c;
  undefined1 *local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int ****local_60;
  undefined1 local_5c;
  undefined2 uStack_5b;
  undefined1 uStack_59;
  undefined1 *local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  ppppiVar22 = (int ****)&local_e0;
  puVar21 = (undefined4 *)((uint)ppppiVar22 | 0x10);
  ppppiVar16 = (int ****)&local_dc;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x1e)) {
  case 0:
    *(undefined1 *)((int)param_2 + 0x79) = 0;
    param_2[4] = *param_2;
    param_2[5] = param_2[1];
    param_2[6] = param_2[2];
    bVar2 = 0;
    *(undefined2 *)(param_2 + 0x1d) = 0;
LAB_00b6a8f4:
    local_168 = param_2[4];
    local_178 = (int ****)param_2[5];
    *(undefined1 *)((int)param_2 + 0x76) = 1;
    uVar18 = param_2[6];
    if ((DAT_01d50f88 < 3) &&
       (((DAT_01d4cbe0 - 1 < 2 ||
         ((DAT_01d4cbe0 != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4cbd8), cVar6 != '\0')))) &&
        (iVar7 = FUN_01aaa278(DAT_01d4cbd8), iVar7 != 0)))) {
      local_dc = *(int *****)(DAT_01d4cbd8 + 0x20);
      if (local_dc == (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c1307c);
      }
      local_124 = &local_f0;
      local_d8 = *(int *****)(DAT_01d4cbd8 + 0x24);
      local_d4 = *(int *****)(DAT_01d4cbd8 + 0x28);
      local_100 = (int ****)(DAT_01d4cbd8 + 0x1c);
      local_e0 = (int ****)*local_100;
      local_108 = (int ****)&local_128;
      local_d0 = (int ****)0x0;
      local_104 = (int ***)&DAT_00000001;
      local_120 = (int ***)&DAT_01d2ea4c;
      local_ec = (int ****)&DAT_0000002d;
      local_f0 = (int ***)0x3eedd7;
      local_128 = ppppiVar22;
      FUN_01aaaecc(DAT_01d4cbd8,&local_108);
      iVar7 = DAT_01d4cbd8;
      if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
        local_7c = *(int *****)(DAT_01d4cbd8 + 0x14);
        local_78 = *(undefined1 **)(DAT_01d4cbd8 + 0x18);
        local_80 = (int ****)&DAT_00000003;
        DataMemoryBarrier(0xb);
        puVar15 = DAT_01d4edc8;
        pcVar24 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar15 = &DAT_01cfc5e0;
          pcVar24 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar8 = (*(code *)puVar15[3])(pcVar24,&local_80);
        if (iVar8 != 0) {
          local_60 = local_80;
          local_5c = SUB41(local_7c,0);
          uStack_5b = (undefined2)((uint)local_7c >> 8);
          uStack_59 = (undefined1)((uint)local_7c >> 0x18);
          local_58 = local_78;
          FUN_01aaa328(iVar7,pcVar24,puVar15[4],&local_60,&local_108);
        }
      }
    }
    else {
      iVar7 = DAT_01d4cbd8;
      if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
        local_154 = *(undefined4 *)(DAT_01d4cbd8 + 0x14);
        local_150 = *(undefined1 **)(DAT_01d4cbd8 + 0x18);
        local_158 = (int ****)&DAT_00000003;
        DataMemoryBarrier(0xb);
        puVar15 = DAT_01d4edc8;
        pcVar24 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar15 = &DAT_01cfc5e0;
          pcVar24 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar8 = (*(code *)puVar15[3])(pcVar24,&local_158);
        if (iVar8 != 0) {
          local_120 = (int ***)(DAT_01d4cbd8 + 0x1c);
          local_e0 = (int ****)*local_120;
          local_dc = *(int *****)(DAT_01d4cbd8 + 0x20);
          if (local_dc == (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c1307c);
          }
          local_7c = (int ****)&local_108;
          local_d8 = *(int *****)(DAT_01d4cbd8 + 0x24);
          local_d4 = *(int *****)(DAT_01d4cbd8 + 0x28);
          local_80 = (int ****)&local_e0;
          local_128 = (int ****)&local_80;
          local_124 = (int ****)&DAT_00000001;
          local_104 = (int ***)&DAT_0000002d;
          local_d0 = (int ****)0x0;
          local_78 = &DAT_01d2ea4c;
          local_108 = (int ****)0x3eedd7;
          local_60 = local_158;
          local_5c = (undefined1)local_154;
          uStack_5b = (undefined2)((uint)local_154 >> 8);
          uStack_59 = (undefined1)((uint)local_154 >> 0x18);
          local_58 = local_150;
          FUN_01aaa328(iVar7,pcVar24,puVar15[4],&local_60,&local_128);
        }
      }
    }
    iVar7 = thunk_FUN_01be5118(0xb);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xb);
    }
    FUN_01bed4e2(iVar7,
                 "/etc/shadowevent open/boser/boser-buildroot/src/session.rs:247event open/boser/boser-buildroot/src/session.rs:250event open/boser/boser-buildroot/src/session.rs:200"
                 ,0xb);
    local_58 = (undefined1 *)0xb;
    local_5c = (undefined1)iVar7;
    uStack_5b = (undefined2)((uint)iVar7 >> 8);
    uStack_59 = (undefined1)((uint)iVar7 >> 0x18);
    local_60 = (int ****)&DAT_0000000b;
    FUN_0121dec8(&local_e0,&local_60);
    if (local_e0 == (int ****)&DAT_80000016) {
      ppppiVar22 = (int ****)(param_2 + 7);
      *ppppiVar22 = (int ***)local_dc;
      param_2[8] = local_d8;
      param_2[9] = local_d4;
      ppppiVar9 = (int ****)thunk_FUN_01be5118(4);
      if (ppppiVar9 == (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620();
      }
      iVar7 = 0;
      *ppppiVar9 = (int ***)0x746f6f72;
      iVar8 = param_2[8];
      *(undefined1 *)((int)param_2 + 0x76) = 0;
      local_128 = (int ****)&SUB_00000004;
      local_120 = (int ***)&SUB_00000004;
      if (param_2[9] != 0) {
        iVar10 = param_2[9] * 0x48;
        do {
          if ((*(int *)(iVar8 + 0x38) == 4) && ((int ***)**(int **)(iVar8 + 0x34) == *ppppiVar9)) {
            iVar7 = iVar8;
            break;
          }
          iVar8 = iVar8 + 0x48;
          iVar10 = iVar10 + -0x48;
        } while (iVar10 != 0);
      }
      local_7c = (int ****)&LAB_00632348;
      local_80 = (int ****)&local_128;
      local_124 = ppppiVar9;
      FUN_00664898(&local_60,&DAT_0059d79d,&local_80);
      local_7c = (int ****)CONCAT13(uStack_59,CONCAT21(uStack_5b,local_5c));
      local_80 = local_60;
      local_78 = local_58;
      FUN_00768b9c(&local_60,&local_80);
      ppppiVar23 = (int ****)0x80000002;
      local_d8 = (int ****)CONCAT13(uStack_59,CONCAT21(uStack_5b,local_5c));
      local_e0 = (int ****)0x80000002;
      local_dc = local_60;
      if (iVar7 == 0) {
        local_108 = local_60;
        local_100 = local_d4;
        local_104 = (int ***)local_d8;
        if (local_168 != -0x80000000) {
          FUN_019bb7e0(local_168,local_178);
        }
LAB_00b6b430:
        FUN_019bb7e0(local_128,local_124);
        pppiVar11 = local_104;
        ppppiVar20 = local_108;
        ppppiVar9 = local_100;
      }
      else {
        FUN_0121d330(&local_e0);
        if (local_168 == -0x80000000) {
          ppppiVar16 = (int ****)&DAT_80000000;
          ppppiVar9 = (int ****)&DAT_80000000;
        }
        else if ((bVar2 & 1) == 0) {
          FUN_016623e0(&local_60,0x10);
          uVar5 = CONCAT13(uStack_59,CONCAT21(uStack_5b,local_5c));
          FUN_01660534(&local_e0,local_178,uVar18,uVar5,local_58,0);
          FUN_019bb7e0(local_60,uVar5);
          FUN_019bb7e0(local_168,local_178);
          ppppiVar16 = local_dc;
          ppppiVar9 = local_d8;
          ppppiVar23 = local_d4;
          if (local_e0 == (int ****)&DAT_00000001) goto LAB_00b6b420;
        }
        else {
          FUN_016623e0(&local_60,8);
          uVar5 = CONCAT13(uStack_59,CONCAT21(uStack_5b,local_5c));
          FUN_0165dcb8(&local_e0,local_178,uVar18,uVar5,local_58);
          FUN_019bb7e0(local_60,uVar5);
          FUN_019bb7e0(local_168,local_178);
          ppppiVar16 = local_dc;
          ppppiVar9 = local_d8;
          ppppiVar23 = local_d4;
          if (local_e0 != (int ****)0x0) {
LAB_00b6b420:
            ppppiVar23 = (int ****)&DAT_80000004;
            ppppiVar16 = local_178;
            local_108 = local_dc;
            local_104 = (int ***)local_d8;
            local_100 = local_d4;
            goto LAB_00b6b430;
          }
        }
        if (*(int *)(iVar7 + 0x3c) != -0x80000000) {
          FUN_019bb7e0(*(int *)(iVar7 + 0x3c),*(undefined4 *)(iVar7 + 0x40));
        }
        *(int *****)(iVar7 + 0x3c) = ppppiVar16;
        *(int *****)(iVar7 + 0x40) = ppppiVar9;
        *(int *****)(iVar7 + 0x44) = ppppiVar23;
        FUN_019bb7e0(local_128,local_124);
        pppiVar11 = (int ***)thunk_FUN_01be5118(0xb);
        if (pppiVar11 == (int ***)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,0xb);
        }
        pcVar24 = 
        "/etc/shadowevent open/boser/boser-buildroot/src/session.rs:247event open/boser/boser-buildroot/src/session.rs:250event open/boser/boser-buildroot/src/session.rs:200"
        ;
        FUN_01bed4e2(pppiVar11,
                     "/etc/shadowevent open/boser/boser-buildroot/src/session.rs:247event open/boser/boser-buildroot/src/session.rs:250event open/boser/boser-buildroot/src/session.rs:200"
                     ,0xb);
        local_d8 = (int ****)&DAT_0000000b;
        local_e0 = (int ****)0xb;
        local_dc = (int ****)pppiVar11;
        FUN_0132b898(&local_e0,0xb,4,1,1);
        ppppiVar16 = local_d8;
        ppppiVar9 = (int ****)(param_2 + 10);
        *(undefined4 *)((int)local_dc + (int)local_d8) = 0x706d742e;
        *ppppiVar9 = (int ***)local_e0;
        param_2[0xb] = local_dc;
        param_2[0xc] = local_d8 + 1;
        uVar19 = (uint)local_d4 >> 8;
        local_e0 = (int ****)0x0;
        local_dc = (int ****)&DAT_000001b6;
        local_d8 = (int ****)&LAB_01000100;
        local_d4 = (int ****)CONCAT31((uint3)uVar19 & 0xffff00,1);
        FUN_019a581c(&local_60,&local_e0,param_2[0xb],param_2[0xc]);
        if ((char)local_60 == '\x04') {
          pppiVar11 = (int ***)CONCAT13(uStack_59,CONCAT21(uStack_5b,local_5c));
LAB_00b6af8c:
          param_2[0xd] = pppiVar11;
          local_dc = (int ****)FUN_0121e368;
          local_e0 = ppppiVar22;
          FUN_012817e4(&local_60,param_2 + 0xd,&DAT_00590e5f,&local_e0);
          ppppiVar22 = (int ****)&local_e0;
          if (((char)local_60 == '\x04') || (((uint)local_60 & 0xff) == 4)) {
            *(undefined1 *)(param_2 + 0x1c) = 0;
            uVar18 = 0xb;
            param_2[0xe] = ppppiVar9;
            param_2[0xf] = 
            "/etc/shadowevent open/boser/boser-buildroot/src/session.rs:247event open/boser/boser-buildroot/src/session.rs:250event open/boser/boser-buildroot/src/session.rs:200"
            ;
            param_2[0x10] = 0xb;
            goto LAB_00b6aff8;
          }
          pppiVar11 = (int ***)CONCAT13(uStack_59,CONCAT21(uStack_5b,local_5c));
          ppppiVar20 = local_60;
LAB_00b6b460:
          FUN_01bf01d6(param_2[0xd]);
        }
        else {
          pppiVar11 = (int ***)CONCAT13(uStack_59,CONCAT21(uStack_5b,local_5c));
          ppppiVar20 = local_60;
          if (((uint)local_60 & 0xff) == 4) goto LAB_00b6af8c;
        }
        FUN_019bb7e0(param_2[10],param_2[0xb]);
        ppppiVar23 = (int ****)0x80000002;
      }
      FUN_00b6baf0(param_2 + 7);
      ppppiVar17 = (int ****)pppiVar11;
    }
    else {
      ppppiVar17 = local_d8;
      ppppiVar20 = local_dc;
      ppppiVar9 = local_d4;
      ppppiVar16 = local_d0;
      ppppiVar22 = ppppiStack_cc;
      ppppiVar23 = local_e0;
    }
    if ((*(char *)((int)param_2 + 0x76) == '\x01') && (local_168 != -0x80000000)) {
      FUN_019bb7e0(local_168,local_178);
    }
LAB_00b6b4a4:
    local_164 = (undefined1 *)((int)param_2 + 0x75);
    local_16c = param_2 + 4;
    *(undefined1 *)((int)param_2 + 0x76) = 0;
    uVar13 = 1;
    *local_164 = 1;
    FUN_00b6ba48(local_16c);
    *param_1 = ppppiVar23;
    param_1[3] = ppppiVar9;
    param_1[1] = ppppiVar20;
    param_1[2] = ppppiVar17;
    param_1[4] = ppppiVar16;
    param_1[5] = ppppiVar22;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c133c0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c133c0);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x75)) {
    case 0:
      bVar2 = *(byte *)(param_2 + 0x1d);
      goto LAB_00b6a8f4;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1308c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1308c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x1c)) {
    case 0:
      ppppiVar9 = (int ****)param_2[0xe];
      pcVar24 = (char *)param_2[0xf];
      uVar18 = param_2[0x10];
LAB_00b6aff8:
      param_2[0x11] = ppppiVar9;
      param_2[0x12] = pcVar24;
      param_2[0x13] = uVar18;
      FUN_019afae4(&local_148,ppppiVar9[1],ppppiVar9[2]);
      FUN_019afae4(&local_138,param_2[0x12],param_2[0x13]);
      local_e0 = local_148;
      local_dc = ppppiStack_144;
      local_d8 = (int ****)pppiStack_140;
      local_d4 = local_138;
      local_d0 = ppppiStack_134;
      ppppiStack_cc = ppppiStack_130;
      local_128 = local_148;
      local_124 = ppppiStack_144;
      local_120 = pppiStack_140;
      local_11c = local_138;
      ppppiStack_118 = ppppiStack_134;
      ppppiStack_114 = ppppiStack_130;
      param_2[0x14] = local_148;
      param_2[0x15] = ppppiStack_144;
      param_2[0x16] = pppiStack_140;
      param_2[0x17] = local_138;
      param_2[0x18] = ppppiStack_134;
      param_2[0x19] = ppppiStack_130;
      param_2[0x1a] = uStack_110;
      *(undefined1 *)(param_2 + 0x1b) = 0;
switchD_00b6ad50_caseD_0:
      local_108 = (int ****)param_2[0x14];
      local_104 = (int ***)param_2[0x15];
      local_100 = (int ****)param_2[0x16];
      uStack_fc = param_2[0x17];
      ppppiStack_f8 = (int ****)param_2[0x18];
      uStack_f4 = param_2[0x19];
      uVar25 = FUN_019ef7f4(&DAT_01c230d0);
      ppppiVar22 = ppppiStack_f8;
      iVar7 = (int)(uVar25 >> 0x20);
      iVar8 = 0x218;
      if ((uVar25 & 1) != 0) {
        iVar8 = 0x148;
      }
      uVar18 = *(undefined4 *)(iVar7 + iVar8);
      do {
        do {
          iVar8 = DAT_01d50474;
          uVar19 = DAT_01d50470;
          uVar14 = DAT_01d50470 + 1;
          iVar10 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
          bVar3 = (bool)hasExclusiveAccess(0x1d50470);
        } while (!bVar3);
        bVar3 = DAT_01d50470 == 0;
        bVar4 = DAT_01d50474 == 0;
        DAT_01d50470 = uVar14;
        DAT_01d50474 = iVar10;
      } while (bVar3 && bVar4);
      iVar10 = 0x200;
      if ((uVar25 & 1) != 0) {
        iVar10 = 0x138;
      }
      local_c8 = *(uint **)(iVar7 + iVar10 + 8);
      if (local_c8 != (uint *)0x0) {
        do {
          uVar14 = *local_c8;
          bVar3 = (bool)hasExclusiveAccess(local_c8);
        } while (!bVar3);
        *local_c8 = uVar14 + 1;
        if ((int)uVar14 < 0) {
LAB_00b6b154:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0xb6b154);
          (*pcVar1)();
        }
        local_19c = *(undefined4 *)(iVar7 + iVar10 + 0xc);
        do {
          uVar14 = *local_c8;
          bVar3 = (bool)hasExclusiveAccess(local_c8);
        } while (!bVar3);
        *local_c8 = uVar14 + 1;
        if (0x7fffffff < uVar14) goto LAB_00b6b154;
      }
      puVar15 = (undefined4 *)((uint)&local_60 | 4);
      *puVar15 = local_108;
      puVar15[1] = local_104;
      puVar15[2] = local_100;
      puVar15[3] = uStack_fc;
      puVar15[4] = ppppiStack_f8;
      puVar15[5] = uStack_f4;
      ppppiStack_b0 = (int ****)CONCAT13(uStack_59,CONCAT21(uStack_5b,local_5c));
      local_80 = local_60;
      local_78 = local_58;
      local_74 = local_54;
      uStack_70 = uStack_50;
      uStack_6c = uStack_4c;
      uStack_68 = uStack_48;
      local_b8 = 0;
      local_b4 = local_60;
      puStack_ac = local_58;
      local_a8 = local_54;
      uStack_a4 = uStack_50;
      uStack_a0 = uStack_4c;
      uStack_9c = uStack_48;
      puVar21[4] = uVar19;
      puVar21[5] = iVar8;
      *puVar21 = 0;
      puVar21[1] = 0;
      local_d8 = (int ****)&DAT_01c229d0;
      local_e0 = (int ****)&DAT_000000cc;
      local_c4 = local_19c;
      local_84 = local_19c;
      local_dc = (int ****)0x0;
      local_90 = 0;
      local_94 = 0;
      local_98 = 0;
      local_60 = (int ****)0x0;
      local_88 = local_c8;
      local_7c = ppppiStack_b0;
      iVar8 = FUN_01be5878(&local_60,0x20,0x60);
      ppppiVar9 = local_60;
      if ((iVar8 != 0) || (local_60 == (int ****)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(0x20,0x60);
      }
      FUN_01bed4e2(local_60,&local_e0,0x60);
      FUN_019f02d4(&local_e0,uVar18,ppppiVar9,1,uVar25);
      if (((uint)local_e0 & 0xfe) != 4) {
        local_5c = SUB41(local_dc,0);
        uStack_59 = (undefined1)((uint)local_dc >> 0x18);
        local_60 = local_e0;
        uStack_5b = (undefined2)((uint)local_dc >> 8);
        local_dc = (int ****)FUN_019a7d7c;
        local_e0 = (int ****)&local_60;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_005ab28b,&local_e0,&DAT_01c230d0);
      }
      FUN_009298dc((int)uVar25,iVar7);
      param_2[0x1a] = ppppiVar9;
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c204ac);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c204ac);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x1b)) {
      case 0:
        goto switchD_00b6ad50_caseD_0;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c230e0);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c230e0);
      case 3:
        ppppiVar9 = (int ****)param_2[0x1a];
      }
    }
    local_164 = (undefined1 *)((int)param_2 + 0x75);
    local_188 = param_2 + 0x1c;
    local_1a0 = param_2 + 0x14;
    ppppiVar16 = (int ****)(param_2 + 0x1b);
    FUN_014b4c40(&local_e0,ppppiVar9,*param_3);
    if (((uint)local_e0 & 1) == 0) {
      local_f0 = (int ***)local_d8;
      local_ec = local_d4;
      local_e8 = local_d0;
      local_e4 = ppppiStack_cc;
      piVar12 = (int *)param_2[0x1a];
      if (*piVar12 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar3 = (bool)hasExclusiveAccess(piVar12);
        if (!bVar3) goto LAB_00b6b2e0;
        *piVar12 = 0x84;
      }
      else {
        ClearExclusiveLocal();
LAB_00b6b2e0:
        (**(code **)(piVar12[2] + 0x10))();
      }
      if (local_f0 == (int ***)0x0 && local_ec == (int ****)0x0) {
        ppppiVar17 = (int ****)((uint)local_e8 >> 8 | (int)local_e4 << 0x18);
        ppppiVar20 = local_e8;
        ppppiVar9 = local_e4;
      }
      else {
        FUN_019a18a8(&local_e0,0x28,"background task failed",0x16);
        ppppiVar9 = local_dc;
        ppppiVar20 = local_e0;
        FUN_00b71c38(&local_f0);
        ppppiVar17 = (int ****)((uint)ppppiVar20 >> 8 | (int)ppppiVar9 << 0x18);
      }
      ppppiVar9 = (int ****)((uint)ppppiVar9 >> 8);
      uVar19 = (uint)ppppiVar20 & 0xff;
      *(undefined1 *)ppppiVar16 = 1;
      if (uVar19 != 5) {
        FUN_00b6bb40(local_1a0);
        *(undefined1 *)local_188 = 1;
        if (uVar19 != 4) {
          pppiVar11 = (int ***)((int)ppppiVar9 << 8 | (uint)ppppiVar17 >> 0x18);
          ppppiVar20 = (int ****)(uVar19 | (int)ppppiVar17 << 8);
          goto LAB_00b6b460;
        }
        FUN_01bf01d6(param_2[0xd]);
        FUN_019bb7e0(param_2[10],param_2[0xb]);
        FUN_00b6baf0(param_2 + 7);
        ppppiVar23 = (int ****)&DAT_80000016;
        ppppiVar20 = (int ****)&SUB_00000004;
        goto LAB_00b6b4a4;
      }
    }
    else {
      *(undefined1 *)ppppiVar16 = 3;
    }
    uVar13 = 3;
    *local_164 = 3;
    *(undefined1 *)local_188 = 3;
    *param_1 = 0x80000017;
  }
  *(undefined1 *)(param_2 + 0x1e) = uVar13;
  return;
}

