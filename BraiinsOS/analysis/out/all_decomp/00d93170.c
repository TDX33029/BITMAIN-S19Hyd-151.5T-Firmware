// FUN_00d93170 @ 00d93170 size=2272 calls_out=30 calls_in=0
// strings: failed to get host | failed to resolve host | /usr/bin/braa | executing braa command | unexpected braa output format

void FUN_00d93170(undefined4 *param_1,int *param_2,int **param_3)

{
  ushort uVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int **ppiVar5;
  code *pcVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int **ppiVar11;
  int **ppiVar12;
  ushort extraout_r12;
  ushort uVar13;
  undefined1 uVar14;
  bool bVar15;
  undefined8 uVar16;
  int **local_770;
  int local_768;
  code *local_764;
  int **local_760;
  int **local_75c;
  ushort local_750;
  undefined2 uStack_74e;
  undefined2 uStack_74c;
  undefined2 uStack_74a;
  int **ppiStack_748;
  int iStack_744;
  int local_740;
  int iStack_73c;
  int iStack_738;
  int iStack_734;
  undefined4 local_710;
  undefined4 local_70c;
  undefined2 local_708;
  int **local_4e8;
  int **local_4e4;
  int **local_4e0;
  code *local_4dc;
  int **ppiStack_4d8;
  int local_4d4;
  int iStack_4d0;
  int iStack_4cc;
  int iStack_4c8;
  int iStack_4c4;
  int iStack_4c0;
  int *local_280;
  code *local_27c;
  int **local_278;
  int iStack_274;
  int local_270;
  int iStack_26c;
  int iStack_268;
  int iStack_264;
  code *local_68;
  int **ppiStack_64;
  int iStack_60;
  int iStack_5c;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int **local_44;
  int **local_40;
  code *local_3c;
  int **local_38;
  int local_34;
  int local_30;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[5]) {
  case '\0':
    iVar8 = *param_2;
    param_2[6] = iVar8;
    param_2[3] = param_2[1];
    param_2[4] = param_2[2];
    *(undefined1 *)(param_2 + 0x13) = 0;
    if (*(char *)(iVar8 + 0x34) != '\0') {
LAB_00d931e0:
      iVar3 = *(int *)(iVar8 + 0x14);
      uVar7 = *(uint *)(iVar8 + 0x18);
      uVar9 = *(uint *)(iVar8 + 0x28);
      uVar10 = *(uint *)(iVar8 + 0x2c);
      if (uVar10 < uVar9) goto LAB_00d932cc;
      if (uVar9 != 0) {
        if (uVar9 < uVar7) {
          if (*(char *)(iVar3 + uVar9) < -0x40) goto LAB_00d932cc;
        }
        else if (uVar9 != uVar7) goto LAB_00d932cc;
      }
      if (uVar10 != 0) {
        if (uVar10 < uVar7) {
          if (*(char *)(iVar3 + uVar10) < -0x40) goto LAB_00d932cc;
        }
        else if (uVar10 != uVar7) {
LAB_00d932cc:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac();
        }
      }
      local_280 = (int *)(iVar3 + uVar9);
      local_27c = (code *)(uVar10 - uVar9);
      local_4e4 = (int **)&DAT_0157d360;
      local_4e0 = (int **)&DAT_0059a1de;
      local_4dc = FUN_00fac370;
      local_4e8 = &local_280;
      FUN_00600d2c(&local_750,&DAT_005988a1,&local_4e8);
      local_4e0 = ppiStack_748;
      param_2[7] = CONCAT22(uStack_74e,local_750);
      param_2[8] = CONCAT22(uStack_74a,uStack_74c);
      param_2[9] = (int)ppiStack_748;
      param_2[10] = (int)local_4dc;
      param_2[0xb] = (int)ppiStack_4d8;
      param_2[0xc] = local_4d4;
      param_2[0xd] = iStack_4d0;
      param_2[0xe] = iStack_4cc;
      param_2[0xf] = iStack_4c8;
      param_2[0x10] = iStack_4c4;
      param_2[0x11] = iStack_4c0;
      *(undefined1 *)(param_2 + 0x12) = 0;
switchD_00d9328c_caseD_0:
      local_75c = (int **)(param_2 + 0x13);
      iVar3 = param_2[7];
      iVar8 = param_2[8];
      FUN_0165a2a8(&local_750,iVar8,param_2[9]);
      if (iVar3 != 0) {
        thunk_FUN_016d3fb4(iVar8);
      }
      local_280 = (int *)CONCAT22(uStack_74e,local_750);
      local_27c = (code *)CONCAT22(uStack_74a,uStack_74c);
      local_278 = ppiStack_748;
      iStack_274 = iStack_744;
      local_270 = local_740;
      iStack_26c = iStack_73c;
      iStack_268 = iStack_738;
      iStack_264 = iStack_734;
      param_2[10] = (int)local_280;
      param_2[0xb] = (int)local_27c;
      param_2[0xc] = (int)ppiStack_748;
      param_2[0xd] = iStack_744;
      param_2[0xe] = local_740;
      param_2[0xf] = iStack_73c;
      param_2[0x10] = iStack_738;
      param_2[0x11] = iStack_734;
      goto LAB_00d933e4;
    }
LAB_00d93250:
    FUN_01602d08(&local_4e8);
    ppiVar5 = (int **)FUN_00f22088("failed to get host",&local_4e8);
LAB_00d93498:
    *(undefined1 *)(param_2 + 0x13) = 1;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187b60c);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187b60c);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x13]) {
    case '\0':
      iVar8 = param_2[6];
      if (*(char *)(iVar8 + 0x34) == '\0') goto LAB_00d93250;
      goto LAB_00d931e0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187b62c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187b62c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x12]) {
    case '\0':
      goto switchD_00d9328c_caseD_0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187bca0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187bca0);
    case '\x03':
    }
LAB_00d933e4:
    local_760 = (int **)(param_2 + 6);
    FUN_0164e5d4(&local_48,param_2 + 10,*param_3);
    uVar7 = (uint)local_48 & 0xffff;
    if (uVar7 == 5) {
      *(undefined1 *)(param_2 + 0x12) = 3;
      *(undefined1 *)(param_2 + 0x13) = 3;
      *param_1 = 0x80000001;
      *(undefined1 *)(param_2 + 5) = 3;
      return;
    }
    if ((short)param_2[10] == 3) {
      piVar4 = (int *)param_2[0xb];
      if (*piVar4 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar15 = (bool)hasExclusiveAccess(piVar4);
        if (bVar15) {
          *piVar4 = 0x84;
          goto LAB_00d93478;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      (**(code **)(piVar4[2] + 0x10))();
    }
LAB_00d93478:
    pcVar6 = local_3c;
    ppiVar11 = local_44;
    *(undefined1 *)(param_2 + 0x12) = 1;
    if (uVar7 == 4) {
      ppiVar5 = (int **)FUN_00d9714c(local_44);
      goto LAB_00d93498;
    }
    if (uVar7 == 3) {
      if (local_38 != local_40) {
        local_764 = (code *)local_40[3];
        local_768 = 3;
        local_75c = (int **)local_40[4];
        ppiVar12 = (int **)local_40[1];
        uVar13 = *(ushort *)((int)local_40 + 10);
        ppiVar5 = (int **)(uint)*(ushort *)(local_40 + 2);
        uVar1 = *(ushort *)((int)local_40 + 2);
        uVar7 = (uint)*(ushort *)local_40;
        goto joined_r0x00d93530;
      }
      local_768 = 3;
LAB_00d93568:
      ppiVar5 = (int **)FUN_00f155bc("failed to resolve host",0x16);
      uVar14 = 2;
      bVar15 = true;
      uVar13 = extraout_r12;
    }
    else {
      uVar13 = (ushort)((uint)local_40 >> 0x10);
      local_768 = 2;
      local_75c = local_38;
      uVar1 = local_48._2_2_;
      local_764 = local_3c;
      ppiVar12 = local_44;
      ppiVar5 = local_40;
joined_r0x00d93530:
      if (uVar7 == 2) goto LAB_00d93568;
      bVar15 = (uVar7 & 1) == 0;
      uStack_74e = SUB42(ppiVar12,0);
      uStack_74c = (undefined2)((uint)ppiVar12 >> 0x10);
      if (bVar15) {
        ppiVar12 = (int **)CONCAT22(uStack_74e,uVar1);
        uVar7 = 0;
      }
      else {
        uVar7 = (int)ppiVar5 << 0x10;
      }
      uVar14 = !bVar15;
      ppiVar5 = (int **)(uVar7 | (uint)ppiVar12 >> 0x10);
      bVar15 = false;
      local_770 = ppiVar12;
      local_750 = uVar1;
    }
    if ((local_768 == 3) && (pcVar6 != (code *)0x0)) {
      thunk_FUN_016d3fb4(ppiVar11);
    }
    *(undefined1 *)(param_2 + 0x13) = 1;
    if (!bVar15) {
      local_4e4 = (int **)&LAB_00fb9bd8;
      *(int ***)((int)param_2 + 0x25) = local_75c;
      *(code **)((int)param_2 + 0x21) = local_764;
      local_4dc = (code *)&DAT_0157d360;
      local_4e0 = (int **)(param_2 + 3);
      *(ushort *)((int)param_2 + 0x1f) = uVar13;
      *(int ***)((int)param_2 + 0x1b) = ppiVar5;
      *(short *)((int)param_2 + 0x19) = (short)local_770;
      *(undefined1 *)(param_2 + 6) = uVar14;
      local_4e8 = local_760;
      FUN_00600d2c(&local_750,&DAT_00579f06,&local_4e8);
      piVar4 = param_2 + 0xa8;
      param_2[0xb] = CONCAT22(uStack_74e,local_750);
      param_2[0xc] = CONCAT22(uStack_74a,uStack_74c);
      param_2[0xd] = (int)ppiStack_748;
      FUN_015f7334(piVar4,"/usr/bin/braa",0xd);
      *(undefined1 *)(param_2 + 199) = 0;
      FUN_015f71d4(piVar4,param_2[0xc],param_2[0xd]);
      FUN_01641e84(&local_280,piVar4);
      FUN_00ef635c(&local_4e8,&local_280,&DAT_0187b61c);
      FUN_016dd1aa(&local_750,&local_4e8,0x268);
      FUN_016dd1aa(param_2 + 0xe,&local_750,0x268);
      goto switchD_00d9319c_caseD_4;
    }
    break;
  case '\x04':
switchD_00d9319c_caseD_4:
    FUN_00ef9ea0(&local_4e8,param_2 + 0xe,param_3);
    ppiVar12 = local_4e0;
    ppiVar5 = local_4e4;
    ppiVar11 = local_4e8;
    if (local_4e8 == (int **)0x80000002) {
      *param_1 = 0x80000001;
      *(undefined1 *)(param_2 + 5) = 4;
      return;
    }
    local_68 = local_4dc;
    ppiStack_64 = ppiStack_4d8;
    iStack_60 = local_4d4;
    iStack_5c = iStack_4d0;
    FUN_00d97574(param_2 + 0xe);
    if (ppiVar11 == (int **)0x80000001) {
      param_3 = (int **)FUN_00d97884();
LAB_00d93758:
      FUN_00d971fc(param_2 + 0xa8);
    }
    else {
      if (ppiVar11 == (int **)&DAT_80000000) {
        local_4e4 = ppiVar12;
        local_4e8 = ppiVar5;
        param_3 = (int **)FUN_00e7b5bc(&local_4e8,"executing braa command",0x16);
        goto LAB_00d93758;
      }
      local_40 = ppiVar12;
      local_3c = local_68;
      local_38 = ppiStack_64;
      local_34 = iStack_60;
      local_30 = iStack_5c;
      local_44 = ppiVar5;
      local_48 = ppiVar11;
      FUN_00d971fc(param_2 + 0xa8);
      if (local_30 == 0) {
        FUN_006008c8(&local_54,ppiVar5,ppiVar12);
        FUN_00fb6cfc(&local_750,local_50,local_4c,&DAT_00418eb8,1);
        local_70c = local_4c;
        local_710 = 0;
        local_708 = 1;
        FUN_016dd1aa(&local_4e8,&local_750,0x50);
        FUN_00f2a998(&local_280,&local_4e8);
        pcVar2 = local_27c;
        pcVar6 = (code *)0x0;
        if (local_278 != (int **)0x0) {
          pcVar6 = local_27c + (int)local_278 * 8;
        }
        if (local_278 != (int **)0x0 && pcVar6 != (code *)0x8) {
          uVar16 = FUN_010ceb84(*(undefined4 *)(pcVar6 + -8),*(undefined4 *)(pcVar6 + -4));
          param_3 = (int **)((ulonglong)uVar16 >> 0x20);
          FUN_00edfde0(&local_4e8,param_3,0,1,1);
          ppiVar5 = local_4e0;
          ppiVar12 = local_4e4;
          if (local_4e8 == (int **)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(local_4e4,local_4e0);
          }
          FUN_016dd1aa(local_4e0,(int)uVar16,param_3);
          if (local_280 != (int *)0x0) {
            thunk_FUN_016d3fb4(local_27c);
          }
          if (param_3 != (int **)0x0) {
            if ((local_54 & 0x7fffffff) != 0) {
              thunk_FUN_016d3fb4(local_50);
            }
            FUN_00d978cc(&local_48);
            if (param_2[0xb] != 0) {
              thunk_FUN_016d3fb4(param_2[0xc]);
            }
            goto LAB_00d93780;
          }
          local_27c = (code *)&DAT_0157d360;
          local_280 = param_2 + 3;
          FUN_0082d318(&local_4e8,&DAT_005a4e28,&local_280);
          local_750 = (ushort)local_4e8;
          uStack_74e = (undefined2)((uint)local_4e8 >> 0x10);
          uStack_74c = SUB42(local_4e4,0);
          uStack_74a = (undefined2)((uint)local_4e4 >> 0x10);
          ppiStack_748 = local_4e0;
          param_3 = (int **)FUN_00f2213c(&local_750);
          if (ppiVar12 != (int **)0x0) {
            thunk_FUN_016d3fb4(ppiVar5);
          }
        }
        else {
          param_3 = (int **)FUN_00f155bc("unexpected braa output format",0x1d);
          if (local_280 != (int *)0x0) {
            thunk_FUN_016d3fb4(pcVar2);
          }
        }
        if ((local_54 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_50);
        }
      }
      else {
        local_27c = FUN_016041cc;
        local_280 = &local_48;
        FUN_00600d2c(&local_4e8,&DAT_00574ce2,&local_280);
        local_750 = (ushort)local_4e8;
        uStack_74e = (undefined2)((uint)local_4e8 >> 0x10);
        uStack_74c = SUB42(local_4e4,0);
        uStack_74a = (undefined2)((uint)local_4e4 >> 0x10);
        ppiStack_748 = local_4e0;
        param_3 = (int **)FUN_00f2213c(&local_750);
        ppiVar11 = local_48;
      }
      if (ppiVar11 != (int **)0x0) {
        thunk_FUN_016d3fb4(local_44);
      }
      if (local_3c != (code *)0x0) {
        thunk_FUN_016d3fb4(local_38);
      }
    }
    ppiVar12 = (int **)&DAT_80000000;
    if (param_2[0xb] != 0) {
      thunk_FUN_016d3fb4(param_2[0xc]);
    }
    ppiVar5 = param_3;
    goto LAB_00d93780;
  }
  ppiVar12 = (int **)&DAT_80000000;
LAB_00d93780:
  *param_1 = ppiVar12;
  param_1[1] = ppiVar5;
  param_1[2] = param_3;
  *(undefined1 *)(param_2 + 5) = 1;
  return;
}

