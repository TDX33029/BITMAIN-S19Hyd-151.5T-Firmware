// FUN_011b3978 @ 011b3978 size=4096 calls_out=23 calls_in=2
// strings: 

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffff4f */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_011b3978(char *param_1,int ****param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int ****ppppiVar6;
  int ****extraout_r1;
  int ****extraout_r1_00;
  int ****extraout_r1_01;
  int ****extraout_r1_02;
  int ****extraout_r1_03;
  int ****extraout_r1_04;
  char cVar7;
  char extraout_r2;
  char cVar8;
  char extraout_r2_00;
  char extraout_r2_01;
  char extraout_r2_02;
  int ***pppiVar9;
  int ***extraout_r2_03;
  int ***extraout_r2_04;
  int ***pppiVar10;
  uint uVar11;
  int ****extraout_r3;
  int ****ppppiVar12;
  int ****extraout_r3_00;
  int ****extraout_r3_01;
  int ****extraout_r3_02;
  int ****extraout_r3_03;
  int ****extraout_r3_04;
  int ****extraout_r3_05;
  uint *puVar13;
  int ****ppppiVar15;
  undefined1 *puVar14;
  int ****ppppiVar16;
  int ****ppppiVar17;
  int ****ppppiVar18;
  int ****ppppiVar19;
  uint uVar20;
  int ****unaff_r8;
  int ****unaff_r11;
  bool bVar21;
  int ****local_e4;
  int ****local_d8;
  char local_d0;
  char cStack_cf;
  ushort uStack_ce;
  int ****local_cc;
  int ****local_c8;
  int ****local_c4;
  int ****ppppiStack_c0;
  int ****ppppiStack_bc;
  undefined1 local_b8 [4];
  uint3 local_b4;
  int ****ppppiStack_b1;
  int ****ppppiStack_ad;
  undefined1 uStack_a9;
  int ****local_a8;
  int ****local_a4;
  int ****local_a0;
  int ****local_98;
  undefined1 local_94;
  int ****local_90;
  int ****ppppiStack_8c;
  int ****local_88;
  int ****local_80;
  int ****local_7c;
  int ****local_78;
  int ****local_74;
  int ****ppppiStack_70;
  int ****ppppiStack_6c;
  int ****ppppiStack_68;
  int ****local_64;
  int ****ppppiStack_60;
  int ****ppppiStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  int ****local_3c;
  int ****local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  ppppiVar16 = (int ****)param_2[4];
  ppppiVar6 = (int ****)param_2[5];
  if (ppppiVar16 <= ppppiVar6) {
LAB_011b3a60:
    local_b8[0] = 5;
LAB_011b3a64:
    local_b8[1] = 0;
    local_b8[2] = 0;
    stack0xffffff4b = (int ****)((uint)local_b4 << 8);
    uVar2 = FUN_00c629ac(param_2,local_b8);
LAB_011b3f7c:
    *(undefined4 *)(param_1 + 4) = uVar2;
    *param_1 = '\x06';
    return;
  }
  ppppiVar12 = param_2 + 3;
  pppiVar9 = *ppppiVar12;
LAB_011b39a0:
  uVar11 = (uint)*(byte *)((int)pppiVar9 + (int)ppppiVar6);
  if (uVar11 - 9 < 0x25) {
    ppppiVar18 = (int ****)(&switchD_011b39b8::switchdataD_011b39bc)[uVar11 - 9];
    switch(uVar11) {
    case 9:
    case 10:
    case 0xd:
    case 0x20:
      goto switchD_011b39b8_caseD_9;
    default:
      goto switchD_011b39b8_caseD_b;
    case 0x22:
      param_2[2] = (int ***)0x0;
      param_2[5] = (int ***)((int)ppppiVar6 + 1);
      FUN_0157e384(local_b8,ppppiVar12,param_2);
      if (CONCAT13(local_b8[3],CONCAT12(local_b8[2],CONCAT11(local_b8[1],local_b8[0]))) == 2) {
        *(uint *)(param_1 + 4) = CONCAT13(ppppiStack_b1._0_1_,local_b4);
        *param_1 = '\x06';
        return;
      }
      ppppiVar17 = (int ****)CONCAT13((char)ppppiStack_ad,ppppiStack_b1._1_3_);
      if ((char)ppppiStack_ad < '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(0,ppppiVar17);
      }
      if (ppppiVar17 == (int ****)0x0) {
        ppppiVar18 = (int ****)0x0;
        puVar13 = (uint *)&DAT_00000001;
      }
      else {
        puVar13 = (uint *)thunk_FUN_016d4a50(ppppiVar17);
        if ((int ****)puVar13 == (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,ppppiVar17);
        }
        ppppiVar18 = ppppiVar17;
      }
      FUN_016dd1aa(puVar13,CONCAT13(ppppiStack_b1._0_1_,local_b4),ppppiVar17);
      cVar7 = '\x03';
      ppppiVar6 = extraout_r1_01;
      pppiVar9 = extraout_r2_04;
      goto LAB_011b427c;
    case 0x2d:
      param_2[5] = (int ***)((int)ppppiVar6 + 1);
      puVar13 = (uint *)0x0;
      FUN_011b4dc8(&local_80,param_2,0);
      pppiVar9 = (int ***)((uint)local_80 ^ 3);
      if (!(pppiVar9 == (int ***)0x0 && local_7c == (int ****)0x0)) {
        if (local_80 == (int ****)0x0) {
LAB_011b401c:
          ppppiVar6 = (int ****)((uint)local_74 & 0x7fffffff);
          cVar7 = '\0';
          pppiVar9 = (int ***)0x7fefffff;
          if (ppppiVar6 < (int ****)0x7ff00000) {
            local_b8[0] = 0;
            FUN_01164f34(local_b8);
            cVar7 = '\x02';
            ppppiVar6 = extraout_r1;
            pppiVar9 = extraout_r2_03;
          }
          puVar13 = (uint *)&SUB_00000002;
        }
        else {
          cVar7 = '\x02';
          ppppiVar6 = local_80;
          if (local_80 != (int ****)&DAT_00000001) {
            puVar13 = (uint *)((uint)local_74 >> 0x1f);
          }
        }
        goto LAB_011b4278;
      }
      goto LAB_011b3f54;
    }
  }
  ppppiVar19 = (int ****)(uVar11 - 0x5b);
  ppppiVar18 = ppppiVar19;
  if (&DAT_00000020 < ppppiVar19) {
switchD_011b39b8_caseD_b:
    if (9 < uVar11 - 0x30) {
      local_b8[0] = '\n';
      local_b8[1] = '\0';
      local_b8[2] = 0;
      local_b8[3] = 0;
      ppppiVar18 = (int ****)FUN_00c629ac(param_2,local_b8);
      goto LAB_011b4980;
    }
    FUN_011b4dc8(&local_80,param_2,1);
    pppiVar9 = (int ***)((uint)local_80 ^ 3);
    if (!(pppiVar9 != (int ***)0x0 || local_7c != (int ****)0x0)) goto LAB_011b3f54;
    cVar7 = '\x02';
    ppppiVar6 = local_80;
    if (local_80 == (int ****)&SUB_00000002) {
      puVar13 = (uint *)((uint)local_74 >> 0x1f);
    }
    else {
      puVar13 = (uint *)0x0;
      if (local_80 != (int ****)&DAT_00000001) goto LAB_011b401c;
    }
LAB_011b4278:
    ppppiVar17 = (int ****)0x0;
    unaff_r8 = local_78;
    unaff_r11 = local_74;
LAB_011b427c:
    cVar8 = (char)pppiVar9;
    goto LAB_011b4558;
  }
  puVar13 = &switchD_011b3a8c::switchdataD_011b3a90;
  ppppiVar18 = (int ****)(&switchD_011b3a8c::switchdataD_011b3a90)[(int)ppppiVar19];
  ppppiVar17 = ppppiVar16;
  switch(ppppiVar19) {
  case (int ****)0x0:
    cVar7 = *(char *)(param_2 + 9);
    *(char *)(param_2 + 9) = cVar7 + -1;
    if (cVar7 == '\x01') {
      local_b8[0] = 0x18;
      local_b8[1] = 0;
      local_b8[2] = 0;
      stack0xffffff4b = (int ****)((uint)local_b4 << 8);
      uVar2 = FUN_00c629ac(param_2,local_b8);
      *param_1 = '\x06';
      *(undefined4 *)(param_1 + 4) = uVar2;
      return;
    }
    ppppiVar6 = (int ****)((int)ppppiVar6 + 1);
    ppppiVar18 = (int ****)&DAT_00000008;
    param_2[5] = (int ***)ppppiVar6;
    local_38 = (int ****)0x0;
    local_3c = (int ****)&DAT_00000008;
    local_40 = (int ****)0x0;
    if (ppppiVar16 <= ppppiVar6) goto LAB_011b4050;
    unaff_r11 = (int ****)&LAB_00800012_1;
    bVar21 = true;
    goto LAB_011b3b90;
  default:
    goto switchD_011b39b8_caseD_b;
  case (int ****)0xb:
    ppppiVar12 = (int ****)((int)ppppiVar6 + 1);
    param_2[5] = (int ***)ppppiVar12;
    if (ppppiVar16 < ppppiVar12) {
      ppppiVar17 = ppppiVar12;
    }
    if (ppppiVar16 <= ppppiVar12) goto LAB_011b3f68;
    cVar7 = *(char *)((int)pppiVar9 + (int)ppppiVar12);
    ppppiVar16 = (int ****)((int)ppppiVar6 + 2);
    param_2[5] = (int ***)ppppiVar16;
    if (cVar7 == 'a') {
      if (ppppiVar16 == ppppiVar17) goto LAB_011b3f68;
      cVar7 = *(char *)((int)pppiVar9 + (int)ppppiVar16);
      ppppiVar16 = (int ****)((int)ppppiVar6 + 3);
      param_2[5] = (int ***)ppppiVar16;
      if (cVar7 == 'l') {
        if (ppppiVar16 == ppppiVar17) goto LAB_011b3f68;
        cVar7 = *(char *)((int)pppiVar9 + (int)ppppiVar16);
        ppppiVar16 = ppppiVar6 + 1;
        param_2[5] = (int ***)ppppiVar16;
        if (cVar7 == 's') {
          if (ppppiVar16 == ppppiVar17) goto LAB_011b3f68;
          cVar7 = *(char *)((int)pppiVar9 + (int)ppppiVar16);
          ppppiVar6 = (int ****)((int)ppppiVar6 + 5);
          param_2[5] = (int ***)ppppiVar6;
          if (cVar7 == 'e') {
            cVar7 = '\x01';
            cVar8 = '\0';
            ppppiVar18 = (int ****)0x73;
            goto LAB_011b4558;
          }
        }
      }
    }
    break;
  case (int ****)0x13:
    ppppiVar12 = (int ****)((int)ppppiVar6 + 1);
    param_2[5] = (int ***)ppppiVar12;
    if (ppppiVar12 >= ppppiVar16 && ppppiVar12 != ppppiVar16) {
      ppppiVar17 = ppppiVar12;
    }
    if (ppppiVar12 < ppppiVar16) {
      cVar7 = *(char *)((int)pppiVar9 + (int)ppppiVar12);
      ppppiVar16 = (int ****)((int)ppppiVar6 + 2);
      param_2[5] = (int ***)ppppiVar16;
      if (cVar7 == 'u') {
        if (ppppiVar16 == ppppiVar17) goto LAB_011b3f68;
        cVar7 = *(char *)((int)pppiVar9 + (int)ppppiVar16);
        ppppiVar16 = (int ****)((int)ppppiVar6 + 3);
        param_2[5] = (int ***)ppppiVar16;
        if (cVar7 == 'l') {
          if (ppppiVar16 == ppppiVar17) goto LAB_011b3f68;
          cVar7 = *(char *)((int)pppiVar9 + (int)ppppiVar16);
          ppppiVar6 = ppppiVar6 + 1;
          param_2[5] = (int ***)ppppiVar6;
          if (cVar7 == 'l') {
            cVar7 = '\0';
            ppppiVar18 = (int ****)&DAT_0000006c;
            goto LAB_011b427c;
          }
        }
      }
      break;
    }
LAB_011b3f68:
    local_b8[0] = 5;
LAB_011b3f6c:
    local_b8[1] = 0;
    local_b8[2] = 0;
    stack0xffffff4b = (int ****)((uint)local_b4 << 8);
    uVar2 = FUN_011b4d78(param_2,local_b8);
    goto LAB_011b3f7c;
  case (int ****)0x19:
    ppppiVar12 = (int ****)((int)ppppiVar6 + 1);
    param_2[5] = (int ***)ppppiVar12;
    if (ppppiVar16 < ppppiVar12) {
      ppppiVar17 = ppppiVar12;
    }
    if (ppppiVar16 <= ppppiVar12) goto LAB_011b3f68;
    cVar7 = *(char *)((int)pppiVar9 + (int)ppppiVar12);
    ppppiVar16 = (int ****)((int)ppppiVar6 + 2);
    param_2[5] = (int ***)ppppiVar16;
    if (cVar7 == 'r') {
      if (ppppiVar16 == ppppiVar17) goto LAB_011b3f68;
      cVar7 = *(char *)((int)pppiVar9 + (int)ppppiVar16);
      ppppiVar16 = (int ****)((int)ppppiVar6 + 3);
      param_2[5] = (int ***)ppppiVar16;
      if (cVar7 != 'u') break;
      if (ppppiVar16 == ppppiVar17) goto LAB_011b3f68;
      cVar7 = *(char *)((int)pppiVar9 + (int)ppppiVar16);
      ppppiVar6 = ppppiVar6 + 1;
      param_2[5] = (int ***)ppppiVar6;
      if (cVar7 == 'e') {
        cVar8 = '\x01';
        cVar7 = '\x01';
        ppppiVar18 = (int ****)0x75;
        goto LAB_011b4558;
      }
    }
    break;
  case (int ****)0x20:
    cVar7 = *(char *)(param_2 + 9);
    *(char *)(param_2 + 9) = cVar7 + -1;
    if ((char)(cVar7 + -1) == '\0') {
      local_b8[0] = 0x18;
      goto LAB_011b3a64;
    }
    param_2[5] = (int ***)((int)ppppiVar6 + 1);
    local_94 = 1;
    local_98 = param_2;
    FUN_011bd334(local_b8,&local_98);
    ppppiVar6 = local_98;
    if (local_b8[0] == '\x01') {
      ppppiVar16 = (int ****)CONCAT13(ppppiStack_b1._0_1_,local_b4);
      ppppiVar6 = unaff_r11;
LAB_011b3e78:
      local_d0 = '\x06';
      unaff_r11 = ppppiVar6;
      local_cc = ppppiVar16;
      goto LAB_011b4394;
    }
    if (local_b8[1] != '\x01') {
LAB_011b4380:
      local_c4 = (int ****)0x0;
      local_cc = (int ****)0x0;
      local_d0 = '\x05';
      goto LAB_011b4394;
    }
    local_d8 = local_98 + 3;
    local_98[2] = (int ***)0x0;
    local_98[5] = (int ***)((int)local_98[5] + 1);
    FUN_0157e384(local_b8,local_d8,local_98);
    ppppiVar18 = (int ****)CONCAT13(ppppiStack_b1._0_1_,local_b4);
    if (CONCAT13(local_b8[3],CONCAT12(local_b8[2],CONCAT11(local_b8[1],local_b8[0]))) == 2) {
      ppppiVar16 = ppppiVar18;
      goto LAB_011b3e78;
    }
    ppppiVar17 = (int ****)CONCAT13((char)ppppiStack_ad,ppppiStack_b1._1_3_);
    unaff_r11 = ppppiVar6;
    if (ppppiVar17 == (int ****)&DAT_0000001e) {
      iVar3 = thunk_FUN_016dd50a(ppppiVar18,&DAT_003c519d,0x1e);
      if (iVar3 == 0) {
LAB_011b457c:
        local_cc = (int ****)FUN_011be240(ppppiVar6);
        if (local_cc != (int ****)0x0) goto LAB_011b4590;
        pppiVar9 = ppppiVar6[5];
        if (ppppiVar6[4] <= pppiVar9) goto LAB_011b4670;
        pppiVar10 = *local_d8;
        goto LAB_011b4648;
      }
      ppppiVar16 = (int ****)thunk_FUN_016d4a50(0x1e);
      if (ppppiVar16 == (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,0x1e);
      }
      ppppiVar19 = (int ****)&DAT_0000001e;
LAB_011b45a8:
      FUN_016dd1aa(ppppiVar16,ppppiVar18,ppppiVar17);
      local_d8 = ppppiVar17;
    }
    else {
      if ((char)ppppiStack_ad < '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(0,ppppiVar17);
      }
      if (ppppiVar17 == (int ****)0x0) {
        ppppiVar19 = (int ****)0x0;
        ppppiVar16 = (int ****)&DAT_00000001;
        goto LAB_011b45a8;
      }
      ppppiVar16 = (int ****)thunk_FUN_016d4a50(ppppiVar17);
      if (ppppiVar16 == (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,ppppiVar17);
      }
      FUN_016dd1aa(ppppiVar16,ppppiVar18,ppppiVar17);
      if (ppppiVar17 == (int ****)&DAT_80000000) goto LAB_011b457c;
      if (ppppiVar17 == (int ****)0x80000001) goto LAB_011b4380;
      ppppiVar19 = ppppiVar17;
      if (ppppiVar17 == (int ****)0x80000002) goto LAB_011b3e78;
    }
    local_88 = (int ****)0x0;
    local_90 = (int ****)0x0;
    local_80 = ppppiVar19;
    local_7c = ppppiVar16;
    local_78 = ppppiVar17;
    ppppiVar18 = (int ****)FUN_011be240(ppppiVar6);
    if (ppppiVar18 == (int ****)0x0) {
      FUN_011b3978(&local_d0,ppppiVar6);
      if (local_d0 != '\x06') {
        FUN_0120e850(local_b8,&local_90,&local_80,&local_d0);
        if (local_b8[0] != '\x06') {
          FUN_01164f34(local_b8);
        }
        puVar4 = (undefined4 *)((uint)&local_80 | 4);
        puVar5 = (undefined4 *)((uint)local_b8 | 4);
        goto LAB_011b46d8;
      }
    }
    else {
      local_d0 = '\x06';
      local_cc = ppppiVar18;
    }
    if (ppppiVar19 != (int ****)0x0) {
      thunk_FUN_016d3fb4(ppppiVar16);
    }
    goto LAB_011b461c;
  }
  local_b8[0] = 9;
  goto LAB_011b3f6c;
switchD_011b39b8_caseD_9:
  ppppiVar6 = (int ****)((int)ppppiVar6 + 1);
  param_2[5] = (int ***)ppppiVar6;
  if (ppppiVar16 == ppppiVar6) goto LAB_011b3a60;
  goto LAB_011b39a0;
  while( true ) {
    pppiVar9 = (int ***)((int)pppiVar9 + 1);
    ppppiVar6[5] = pppiVar9;
    if (ppppiVar6[4] == pppiVar9) break;
LAB_011b4648:
    uVar11 = *(byte *)((int)pppiVar10 + (int)pppiVar9) - 9;
    if ((0x17 < uVar11) || ((1 << (uVar11 & 0xff) & 0x800013U) == 0)) {
      if (*(byte *)((int)pppiVar10 + (int)pppiVar9) == 0x22) {
        ppppiVar6[2] = (int ***)0x0;
        ppppiVar6[5] = (int ***)((int)pppiVar9 + 1);
        FUN_0157e384(local_b8,local_d8,ppppiVar6);
        local_cc = (int ****)CONCAT13(ppppiStack_b1._0_1_,local_b4);
        if (CONCAT13(local_b8[3],CONCAT12(local_b8[2],CONCAT11(local_b8[1],local_b8[0]))) == 2)
        goto LAB_011b4590;
        FUN_0112691c(&local_80,local_cc,CONCAT13((char)ppppiStack_ad,ppppiStack_b1._1_3_));
        unaff_r11 = local_7c;
        ppppiVar16 = local_80;
        if (local_80 != (int ****)0x0) {
          local_a4 = local_7c;
          local_a8 = local_80;
          uStack_a9 = 0;
          ppppiStack_ad = (int ****)0x0;
          local_b4 = (uint3)local_7c;
          ppppiStack_b1 = (int ****)((uint)local_7c >> 0x18);
          local_b8[0] = (char)local_80;
          local_b8[1] = (char)((uint)local_80 >> 8);
          local_b8[2] = (undefined1)((uint)local_80 >> 0x10);
          local_b8[3] = (undefined1)((uint)local_80 >> 0x18);
          FUN_011b3794(&local_80,local_b8);
          if ((char)local_80 == '\x06') {
            local_cc = (int ****)FUN_011e19c8(local_7c);
            local_d0 = '\x06';
          }
          else {
            cStack_cf = (char)((uint)local_80 >> 8);
            uStack_ce = (ushort)((uint)local_80 >> 0x10);
            local_cc = local_7c;
            local_c8 = local_78;
            local_c4 = local_74;
            ppppiStack_c0 = ppppiStack_70;
            ppppiStack_bc = ppppiStack_6c;
            local_d0 = (char)local_80;
          }
          if (unaff_r11 != (int ****)0x0) {
            thunk_FUN_016d3fb4(ppppiVar16);
          }
          goto LAB_011b4394;
        }
        ppppiVar16 = local_7c;
      }
      else {
        ppppiVar16 = (int ****)FUN_011c30c8(ppppiVar6,&local_40);
      }
      local_cc = (int ****)FUN_011da0d4(ppppiVar16,ppppiVar6);
      goto LAB_011b4590;
    }
  }
LAB_011b4670:
  local_b8[0] = '\x05';
  local_b8[1] = '\0';
  local_b8[2] = 0;
  stack0xffffff4b = (int ****)((uint)stack0xffffff4b & 0xffffff00);
  local_cc = (int ****)FUN_00c629ac(ppppiVar6,local_b8);
LAB_011b4590:
  local_d0 = '\x06';
  unaff_r11 = ppppiVar6;
  goto LAB_011b4394;
LAB_011b46d8:
  FUN_011bd334(&local_40,&local_98);
  ppppiVar6 = local_98;
  if ((char)local_40 != '\x01') {
    if (local_40._1_1_ != '\x01') {
LAB_011b4990:
      local_d0 = '\x05';
      ppppiStack_ad = local_88;
      ppppiStack_b1 = ppppiStack_8c;
      stack0xffffff4b = local_90;
      cStack_cf = local_b8[0];
      uStack_ce = (ushort)(CONCAT12(local_b8[2],CONCAT11(local_b8[1],local_b8[0])) >> 8);
      local_cc = local_90;
      local_c8 = ppppiStack_8c;
      local_c4 = local_88;
      goto LAB_011b4394;
    }
    local_98[2] = (int ***)0x0;
    local_98[5] = (int ***)((int)local_98[5] + 1);
    FUN_0157e384(&local_40,local_98 + 3,local_98);
    ppppiVar18 = local_38;
    ppppiVar16 = local_3c;
    local_cc = local_3c;
    unaff_r11 = ppppiVar6;
    if (local_40 == (int ****)&SUB_00000002) goto LAB_011b4acc;
    uVar2 = 0;
    if ((int)local_38 < 0) {
LAB_011b4ba8:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar2,local_d8);
    }
    if (local_38 == (int ****)0x0) {
      local_d8 = (int ****)&DAT_00000001;
      FUN_016dd1aa(1,local_3c,0);
      local_e4 = (int ****)0x0;
    }
    else {
      local_d8 = (int ****)thunk_FUN_016d4a50(local_38);
      if (local_d8 == (int ****)0x0) {
        uVar2 = 1;
        local_d8 = ppppiVar18;
        goto LAB_011b4ba8;
      }
      FUN_016dd1aa(local_d8,ppppiVar16,ppppiVar18);
      if (ppppiVar18 == (int ****)0x80000001) {
        local_cc = local_d8;
        goto LAB_011b4acc;
      }
      if (ppppiVar18 == (int ****)&DAT_80000000) goto LAB_011b4990;
      local_e4 = ppppiVar18;
    }
    ppppiVar16 = (int ****)FUN_011be240(ppppiVar6);
    if (ppppiVar16 != (int ****)0x0) {
      local_3c = ppppiVar16;
LAB_011b4a4c:
      local_cc = local_3c;
      if (local_e4 != (int ****)0x0) {
        thunk_FUN_016d3fb4(local_d8);
      }
      goto LAB_011b4acc;
    }
    FUN_011b3978(&local_40,ppppiVar6);
    if ((char)local_40 == '\x06') {
      goto LAB_011b4a4c;
    }
    *puVar5 = local_40;
    puVar5[1] = local_3c;
    puVar5[2] = local_38;
    puVar5[3] = uStack_34;
    puVar5[4] = uStack_30;
    puVar5[5] = uStack_2c;
    local_80 = (int ****)
               CONCAT13(local_b8[3],CONCAT12(local_b8[2],CONCAT11(local_b8[1],local_b8[0])));
    local_7c = (int ****)CONCAT13(ppppiStack_b1._0_1_,local_b4);
    local_78 = (int ****)CONCAT13((char)ppppiStack_ad,ppppiStack_b1._1_3_);
    local_74 = (int ****)CONCAT13(uStack_a9,ppppiStack_ad._1_3_);
    ppppiStack_70 = local_a8;
    ppppiStack_6c = local_a4;
    ppppiStack_68 = local_a0;
    unaff_r11 = (int ****)&local_80;
    if (local_e4 == (int ****)&DAT_80000000) goto LAB_011b4990;
    local_cc = local_d8;
    if (local_e4 == (int ****)0x80000001) goto LAB_011b4acc;
    local_64 = local_e4;
    ppppiStack_60 = local_d8;
    ppppiStack_5c = ppppiVar18;
    local_58 = *puVar4;
    uStack_54 = puVar4[1];
    uStack_50 = puVar4[2];
    uStack_4c = puVar4[3];
    uStack_48 = puVar4[4];
    uStack_44 = puVar4[5];
    FUN_0120e850(local_b8,&local_90,&local_64);
    if (local_b8[0] != '\x06') {
      FUN_01164f34(local_b8);
    }
    goto LAB_011b46d8;
  }
  local_cc = local_3c;
LAB_011b4acc:
  local_d0 = '\x06';
LAB_011b461c:
  FUN_01210ef0(&local_90);
LAB_011b4394:
  *(char *)(param_2 + 9) = *(char *)(param_2 + 9) + '\x01';
  pppiVar9 = param_2[5];
  unaff_r8 = (int ****)local_b8;
  if (pppiVar9 < param_2[4]) {
LAB_011b43b0:
    switch(*(char *)((int)*ppppiVar12 + (int)pppiVar9)) {
    case '\t':
    case '\n':
    case '\r':
    case ' ':
      goto switchD_011b43c8_caseD_9;
    case '\v':
    case '\f':
    case '\x0e':
    case '\x0f':
    case '\x10':
    case '\x11':
    case '\x12':
    case '\x13':
    case '\x14':
    case '\x15':
    case '\x16':
    case '\x17':
    case '\x18':
    case '\x19':
    case '\x1a':
    case '\x1b':
    case '\x1c':
    case '\x1d':
    case '\x1e':
    case '\x1f':
    case '!':
    case '\"':
    case '#':
    case '$':
    case '%':
    case '&':
    case '\'':
    case '(':
    case ')':
    case '*':
    case '+':
      goto switchD_011b43c8_caseD_b;
    case ',':
      local_80 = (int ****)&DAT_00000015;
      ppppiVar18 = (int ****)FUN_00c629ac(param_2,&local_80);
      goto LAB_011b4484;
    default:
      if (*(char *)((int)*ppppiVar12 + (int)pppiVar9) == '}') {
        param_2[5] = (int ***)((int)pppiVar9 + 1);
        ppppiVar6 = (int ****)CONCAT22(uStack_ce,CONCAT11(cStack_cf,local_d0));
        local_b8[0] = local_d0;
        local_b8[1] = cStack_cf;
        local_b8[2] = (undefined1)uStack_ce;
        local_b8[3] = (undefined1)(uStack_ce >> 8);
        local_b4 = (uint3)local_cc;
        ppppiStack_b1._0_1_ = (undefined1)((uint)local_cc >> 0x18);
        ppppiStack_b1._1_3_ = SUB43(local_c8,0);
        ppppiStack_ad._0_1_ = (char)((uint)local_c8 >> 0x18);
        ppppiStack_ad._1_3_ = SUB43(local_c4,0);
        uStack_a9 = (undefined1)((uint)local_c4 >> 0x18);
        local_a8 = ppppiStack_c0;
        local_a4 = ppppiStack_bc;
        ppppiVar19 = local_cc;
        ppppiVar17 = local_c4;
        if (local_d0 == '\x06') goto LAB_011b44fc;
        ppppiVar6 = (int ****)(uint)uStack_ce;
        puVar13 = (uint *)local_c8;
        ppppiVar18 = local_cc;
        unaff_r8 = ppppiStack_c0;
        unaff_r11 = ppppiStack_bc;
        cVar8 = cStack_cf;
        cVar7 = local_d0;
        goto LAB_011b4550;
      }
switchD_011b43c8_caseD_b:
      local_80 = (int ****)&DAT_00000016;
      ppppiVar18 = (int ****)FUN_00c629ac(param_2,&local_80);
      goto LAB_011b4484;
    }
  }
LAB_011b446c:
  local_80 = (int ****)0x3;
  ppppiVar18 = (int ****)FUN_00c629ac(param_2,&local_80);
LAB_011b4484:
  ppppiVar17 = ppppiStack_c0;
  puVar13 = (uint *)local_c4;
  ppppiVar16 = local_cc;
  local_b8[0] = local_d0;
  local_b8[1] = cStack_cf;
  local_b8[2] = (undefined1)uStack_ce;
  local_b8[3] = (undefined1)(uStack_ce >> 8);
  local_b4 = (uint3)local_cc;
  ppppiStack_b1._0_1_ = (undefined1)((uint)local_cc >> 0x18);
  ppppiStack_b1._1_3_ = SUB43(local_c8,0);
  ppppiStack_ad._0_1_ = (char)((uint)local_c8 >> 0x18);
  ppppiStack_ad._1_3_ = SUB43(local_c4,0);
  uStack_a9 = (undefined1)((uint)local_c4 >> 0x18);
  local_a8 = ppppiStack_c0;
  local_a4 = ppppiStack_bc;
  local_a0 = ppppiVar18;
  if (local_d0 == '\x06') {
    if (*ppppiVar18 == (int ***)0x1) {
      FUN_009b8520(ppppiVar18 + 1);
    }
    else if ((*ppppiVar18 == (int ***)0x0) && (ppppiVar18[2] != (int ***)0x0)) {
      thunk_FUN_016d3fb4(ppppiVar18[1]);
    }
    thunk_FUN_016d3fb4(ppppiVar18);
    ppppiVar6 = extraout_r1_04;
    ppppiVar18 = ppppiVar16;
    cVar8 = extraout_r2_02;
  }
  else {
    FUN_01164f34(local_b8);
    ppppiVar6 = extraout_r1_03;
    cVar8 = extraout_r2_01;
  }
  cVar7 = '\x06';
  goto LAB_011b4550;
switchD_011b43c8_caseD_9:
  pppiVar9 = (int ***)((int)pppiVar9 + 1);
  param_2[5] = pppiVar9;
  if (param_2[4] == pppiVar9) goto LAB_011b446c;
  goto LAB_011b43b0;
LAB_011b3b90:
  do {
    ppppiVar15 = local_38;
    while( true ) {
      uVar11 = (uint)*(byte *)((int)*ppppiVar12 + (int)ppppiVar6);
      if ((0x17 < uVar11 - 9) || ((1 << (uVar11 - 9 & 0xff) & 0x800013U) == 0)) break;
      ppppiVar6 = (int ****)((int)ppppiVar6 + 1);
      param_2[5] = (int ***)ppppiVar6;
      if (ppppiVar16 == ppppiVar6) goto LAB_011b4050;
    }
    if (uVar11 == 0x5d) {
      cVar7 = '\x04';
      ppppiVar17 = local_38;
      puVar13 = (uint *)local_3c;
      ppppiVar19 = local_40;
      goto LAB_011b40b0;
    }
    if (!bVar21) {
      if (uVar11 != 0x2c) {
        local_b8[0] = '\a';
        local_b8[1] = '\0';
        local_b8[2] = 0;
        stack0xffffff4b = (int ****)((uint)local_b4 << 8);
        ppppiVar19 = (int ****)FUN_00c629ac(param_2,local_b8);
        ppppiVar17 = extraout_r3_04;
        goto LAB_011b406c;
      }
      ppppiVar6 = (int ****)((int)ppppiVar6 + 1);
      param_2[5] = (int ***)ppppiVar6;
      if (ppppiVar16 <= ppppiVar6) {
LAB_011b4908:
        local_b8[0] = '\x05';
        local_b8[1] = '\0';
        local_b8[2] = 0;
        stack0xffffff4b = (int ****)((uint)stack0xffffff4b & 0xffffff00);
        ppppiVar19 = (int ****)FUN_00c629ac(param_2,local_b8);
        ppppiVar17 = extraout_r3_03;
        goto LAB_011b406c;
      }
      while( true ) {
        uVar11 = (uint)*(byte *)((int)*ppppiVar12 + (int)ppppiVar6);
        uVar20 = uVar11 - 9;
        if ((0x17 < uVar20) || ((1 << (uVar20 & 0xff) & 0x800013U) == 0)) break;
        ppppiVar6 = (int ****)((int)ppppiVar6 + 1);
        param_2[5] = (int ***)ppppiVar6;
        if (ppppiVar16 == ppppiVar6) goto LAB_011b4908;
      }
      if (uVar11 == 0x5d) {
        local_b8[0] = '\x15';
        local_b8[1] = '\0';
        local_b8[2] = 0;
        stack0xffffff4b = (int ****)((uint)local_b4 << 8);
        ppppiVar19 = (int ****)FUN_00c629ac(param_2,local_b8);
        ppppiVar17 = extraout_r3_05;
        goto LAB_011b406c;
      }
    }
    FUN_011b3978(local_b8,param_2);
    if (local_b8[0] == '\x06') {
      ppppiVar19 = (int ****)CONCAT13(ppppiStack_b1._0_1_,local_b4);
      ppppiVar17 = extraout_r3;
      goto LAB_011b406c;
    }
    uVar1 = *(undefined2 *)((uint)local_b8 | 1);
    local_7c = (int ****)CONCAT13(ppppiStack_b1._0_1_,local_b4);
    local_78 = (int ****)CONCAT13((char)ppppiStack_ad,ppppiStack_b1._1_3_);
    local_74 = (int ****)CONCAT13(uStack_a9,ppppiStack_ad._1_3_);
    *(undefined1 *)((undefined2 *)((uint)&local_80 | 1) + 1) =
         *(undefined1 *)((undefined2 *)((uint)local_b8 | 1) + 1);
    *(undefined2 *)((uint)&local_80 | 1) = uVar1;
    local_80 = (int ****)CONCAT31(local_80._1_3_,local_b8[0]);
    ppppiStack_70 = local_a8;
    ppppiStack_6c = local_a4;
    if (ppppiVar15 == local_40) {
      FUN_0157eb1c(&local_40);
      ppppiVar18 = local_3c;
    }
    ppppiVar6 = ppppiVar18 + (int)ppppiVar15 * 6;
    *ppppiVar6 = (int ***)local_80;
    ppppiVar6[1] = (int ***)local_7c;
    ppppiVar6[2] = (int ***)local_78;
    ppppiVar6[3] = (int ***)local_74;
    ppppiVar6[4] = (int ***)ppppiStack_70;
    ppppiVar6[5] = (int ***)ppppiStack_6c;
    ppppiVar16 = (int ****)param_2[4];
    ppppiVar6 = (int ****)param_2[5];
    bVar21 = false;
    local_38 = (int ****)((int)ppppiVar15 + 1);
  } while (ppppiVar6 < ppppiVar16);
LAB_011b4050:
  ppppiVar15 = local_38;
  local_b8[0] = '\x02';
  local_b8[1] = '\0';
  local_b8[2] = 0;
  stack0xffffff4b = (int ****)((uint)stack0xffffff4b & 0xffffff00);
  ppppiVar19 = (int ****)FUN_00c629ac(param_2,local_b8);
  ppppiVar17 = extraout_r3_00;
LAB_011b406c:
  puVar14 = (undefined1 *)((int)ppppiVar15 + 1);
  ppppiVar6 = ppppiVar18;
  while (puVar14 = puVar14 + -1, puVar14 != (undefined1 *)0x0) {
    FUN_01157e90(ppppiVar6);
    ppppiVar6 = ppppiVar6 + 6;
    ppppiVar17 = extraout_r3_01;
  }
  if (local_40 != (int ****)0x0) {
    thunk_FUN_016d3fb4(ppppiVar18);
    ppppiVar17 = extraout_r3_02;
  }
  ppppiVar16 = (int ****)param_2[4];
  cVar7 = '\x06';
  ppppiVar6 = (int ****)param_2[5];
  puVar13 = (uint *)(int ****)0x0;
LAB_011b40b0:
  ppppiVar18 = local_80;
  *(char *)(param_2 + 9) = *(char *)(param_2 + 9) + '\x01';
  local_80 = (int ****)CONCAT31(local_80._1_3_,cVar7);
  unaff_r8 = ppppiVar19;
  local_7c = ppppiVar19;
  local_78 = (int ****)puVar13;
  local_74 = ppppiVar17;
  if (ppppiVar6 < ppppiVar16) {
LAB_011b40d8:
    cVar8 = *(char *)((int)*ppppiVar12 + (int)ppppiVar6);
    switch(cVar8) {
    case '\t':
    case '\n':
    case '\r':
    case ' ':
      goto switchD_011b40f0_caseD_9;
    case '\v':
    case '\f':
    case '\x0e':
    case '\x0f':
    case '\x10':
    case '\x11':
    case '\x12':
    case '\x13':
    case '\x14':
    case '\x15':
    case '\x16':
    case '\x17':
    case '\x18':
    case '\x19':
    case '\x1a':
    case '\x1b':
    case '\x1c':
    case '\x1d':
    case '\x1e':
    case '\x1f':
    case '!':
    case '\"':
    case '#':
    case '$':
    case '%':
    case '&':
    case '\'':
    case '(':
    case ')':
    case '*':
    case '+':
      goto switchD_011b40f0_caseD_b;
    case ',':
      ppppiVar6 = (int ****)((int)ppppiVar6 + 1);
      param_2[5] = (int ***)ppppiVar6;
      if (ppppiVar16 <= ppppiVar6) goto LAB_011b4b00;
      goto LAB_011b4a80;
    default:
      if (cVar8 == ']') {
        param_2[5] = (int ***)((int)ppppiVar6 + 1);
        ppppiVar6 = (int ****)local_b8;
        local_b8[1] = (char)((uint)ppppiVar18 >> 8);
        local_b8[2] = (undefined1)((uint)ppppiVar18 >> 0x10);
        local_b8[3] = (undefined1)((uint)ppppiVar18 >> 0x18);
        local_b4 = (uint3)ppppiVar19;
        ppppiStack_b1._0_1_ = (undefined1)((uint)ppppiVar19 >> 0x18);
        ppppiStack_b1._1_3_ = SUB43(puVar13,0);
        ppppiStack_ad._0_1_ = (char)((uint)puVar13 >> 0x18);
        ppppiStack_ad._1_3_ = SUB43(ppppiVar17,0);
        uStack_a9 = (undefined1)((uint)ppppiVar17 >> 0x18);
        local_a8 = ppppiStack_70;
        local_a4 = ppppiStack_6c;
        local_b8[0] = cVar7;
        if (cVar7 == '\x06') {
LAB_011b44fc:
          puVar13 = (uint *)ppppiVar17;
          ppppiVar17 = local_a8;
          ppppiVar18 = (int ****)CONCAT13(ppppiStack_b1._0_1_,local_b4);
          cVar8 = (char)ppppiVar19;
          cVar7 = '\x06';
        }
        else {
          ppppiVar6 = (int ****)((uint)ppppiVar18 >> 0x10);
          ppppiVar18 = ppppiVar19;
          unaff_r8 = ppppiStack_70;
          unaff_r11 = ppppiStack_6c;
          cVar8 = local_b8[1];
        }
        goto LAB_011b4550;
      }
switchD_011b40f0_caseD_b:
      local_40 = (int ****)&DAT_00000016;
      ppppiVar18 = (int ****)FUN_00c629ac(param_2,&local_40);
      goto LAB_011b41a8;
    }
  }
LAB_011b4194:
  local_40 = (int ****)&SUB_00000002;
  ppppiVar18 = (int ****)FUN_00c629ac(param_2,&local_40);
  goto LAB_011b41a8;
switchD_011b40f0_caseD_9:
  ppppiVar6 = (int ****)((int)ppppiVar6 + 1);
  param_2[5] = (int ***)ppppiVar6;
  if (ppppiVar16 == ppppiVar6) goto LAB_011b4194;
  goto LAB_011b40d8;
  while( true ) {
    ppppiVar6 = (int ****)((int)ppppiVar6 + 1);
    param_2[5] = (int ***)ppppiVar6;
    if (ppppiVar16 == ppppiVar6) break;
LAB_011b4a80:
    uVar11 = (uint)*(byte *)((int)*ppppiVar12 + (int)ppppiVar6);
    uVar20 = uVar11 - 9;
    if ((0x17 < uVar20) || ((1 << (uVar20 & 0xff) & 0x800013U) == 0)) {
      if (uVar11 == 0x5d) {
        local_40 = (int ****)&DAT_00000015;
        ppppiVar18 = (int ****)FUN_00c629ac(param_2,&local_40);
        goto LAB_011b41a8;
      }
      break;
    }
  }
LAB_011b4b00:
  local_40 = (int ****)&DAT_00000016;
  ppppiVar18 = (int ****)FUN_00c629ac(param_2,&local_40);
LAB_011b41a8:
  ppppiVar17 = ppppiStack_70;
  puVar13 = (uint *)local_74;
  ppppiVar16 = local_7c;
  local_b8[0] = (char)local_80;
  local_b8[1] = (char)((uint)local_80 >> 8);
  local_b8[2] = (undefined1)((uint)local_80 >> 0x10);
  local_b8[3] = (undefined1)((uint)local_80 >> 0x18);
  local_b4 = (uint3)local_7c;
  ppppiStack_b1._0_1_ = (undefined1)((uint)local_7c >> 0x18);
  ppppiStack_b1._1_3_ = SUB43(local_78,0);
  ppppiStack_ad._0_1_ = (char)((uint)local_78 >> 0x18);
  ppppiStack_ad._1_3_ = SUB43(local_74,0);
  uStack_a9 = (undefined1)((uint)local_74 >> 0x18);
  local_a8 = ppppiStack_70;
  local_a4 = ppppiStack_6c;
  local_a0 = ppppiVar18;
  if (local_b8[0] == '\x06') {
    if (*ppppiVar18 == (int ***)0x1) {
      FUN_009b8520(ppppiVar18 + 1);
    }
    else if ((*ppppiVar18 == (int ***)0x0) && (ppppiVar18[2] != (int ***)0x0)) {
      thunk_FUN_016d3fb4(ppppiVar18[1]);
    }
    thunk_FUN_016d3fb4(ppppiVar18);
    ppppiVar6 = extraout_r1_02;
    ppppiVar18 = ppppiVar16;
    cVar8 = extraout_r2_00;
  }
  else {
    FUN_01164f34(local_b8);
    ppppiVar6 = extraout_r1_00;
    cVar8 = extraout_r2;
  }
  cVar7 = '\x06';
LAB_011b4550:
  if (cVar7 == '\x06') {
LAB_011b4980:
    local_78 = (int ****)FUN_011da0d4(ppppiVar18,param_2);
LAB_011b3f54:
    *(int *****)(param_1 + 4) = local_78;
    *param_1 = '\x06';
    return;
  }
LAB_011b4558:
  *param_1 = cVar7;
  *(short *)(param_1 + 2) = (short)ppppiVar6;
  param_1[1] = cVar8;
  *(int *****)(param_1 + 4) = ppppiVar18;
  *(uint **)(param_1 + 8) = puVar13;
  *(int *****)(param_1 + 0xc) = ppppiVar17;
  *(int *****)(param_1 + 0x10) = unaff_r8;
  *(int *****)(param_1 + 0x14) = unaff_r11;
  return;
}

