// FUN_00f6b320 @ 00f6b320 size=2264 calls_out=30 calls_in=0
// strings: Board | BUG: response serialization failedAPI

void FUN_00f6b320(undefined4 *param_1,int *param_2,int ****param_3)

{
  char cVar1;
  int ****ppppiVar2;
  int ****ppppiVar3;
  undefined1 uVar4;
  int iVar5;
  int ****ppppiVar6;
  int ****ppppiVar7;
  int *piVar8;
  int ***pppiVar9;
  int ****ppppiVar10;
  undefined4 uVar11;
  int ****ppppiVar12;
  int ****ppppiVar13;
  int ****extraout_r12;
  int ****ppppiVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int ****local_90c;
  int ****local_908;
  int ****local_904;
  int ****local_900;
  int ****local_8fc;
  int ****local_8f8;
  int ****local_8f4;
  int ****local_8f0;
  int ****local_8ec;
  int ****local_8e8;
  int ****local_8e4;
  int ****local_8e0;
  int ****local_8dc;
  undefined1 auStack_8d8 [704];
  int ****local_618;
  int ****local_614;
  int ****local_610;
  int ****ppppiStack_60c;
  int ****local_608;
  int ****local_604;
  int ****local_600;
  int ****local_5fc;
  undefined8 local_5f8 [88];
  int ****local_338;
  int ****local_334;
  int ****local_330;
  int ****local_74;
  int ****local_70;
  int ****local_6c;
  int ****local_68;
  int ****ppppiStack_64;
  int ****ppppiStack_60;
  int ****ppppiStack_5c;
  int ***local_58;
  int ****local_54;
  int ***pppiStack_50;
  int ***pppiStack_4c;
  int ***pppiStack_48;
  int ***pppiStack_44;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x171]) {
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c199bc);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c199bc);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[1]) {
    case '\0':
      iVar5 = *param_2;
      goto LAB_00f6b3b0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c199ec);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c199ec);
    case '\x03':
      goto switchD_00f6b394_caseD_3;
    case '\x04':
    }
LAB_00f6b458:
    local_904 = (int ****)(param_2 + 1);
    FUN_00f68990(&local_618,param_2 + 6,param_3);
    ppppiVar3 = local_5fc;
    ppppiVar2 = local_600;
    ppppiVar12 = local_604;
    ppppiVar10 = local_608;
    ppppiVar7 = ppppiStack_60c;
    ppppiVar13 = local_610;
    ppppiVar6 = local_614;
    ppppiVar14 = local_618;
    if (local_618 == (int ****)&SUB_00000004 && local_614 == (int ****)0x0) {
      uVar4 = 4;
      goto LAB_00f6b490;
    }
    local_8fc = ppppiStack_60c;
    local_90c = local_5fc;
    local_908 = local_600;
    FUN_01bed4e2(&local_338,local_5f8,0x2c0);
    if ((char)param_2[0x16f] == '\x03') {
      FUN_00f68940(param_2 + 6);
    }
    if (!(ppppiVar14 == (int ****)&DAT_00000003 && ppppiVar6 == (int ****)0x0)) {
      FUN_01bed4e2(auStack_8d8,&local_338,0x2c0);
      local_8dc = ppppiVar3;
      local_8e0 = ppppiVar2;
      local_8e8 = ppppiVar10;
      local_8f4 = ppppiVar6;
      local_8f8 = ppppiVar14;
      local_8e4 = ppppiVar12;
      local_8ec = ppppiVar7;
      local_8f0 = ppppiVar13;
      uVar11 = FUN_01220dcc(&local_8f8);
      FUN_00fe4974(&local_618,uVar11,&DAT_01c245a8);
      ppppiVar13 = local_608;
      if (local_618 != (int ****)0x2 || local_614 != (int ****)0x0) {
        uVar17 = 0;
        uVar16 = uVar17;
        if (((uint)local_618 & 1) != 0) {
          uVar16 = CONCAT44(ppppiStack_60c,local_610);
        }
        uVar18 = uVar17;
        if (((uint)local_600 & 1) != 0) {
          uVar18 = local_5f8[0];
        }
        param_3 = (int ****)&local_618;
        FUN_01220ee0(param_3,uVar11);
        ppppiVar6 = (int ****)thunk_FUN_01be5118(0x60);
        if (ppppiVar6 == (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(8,0x60);
        }
        *(undefined8 *)ppppiVar6 = uVar16;
        *(undefined8 *)(ppppiVar6 + 2) = uVar18;
        ppppiVar6[4] = (int ***)0x0;
        ppppiVar6[5] = (int ***)ppppiVar13;
        local_6c = (int ****)&DAT_00000001;
        local_74 = (int ****)&SUB_00000004;
        iVar5 = 0;
        local_70 = ppppiVar6;
        while( true ) {
          ppppiVar12 = local_6c;
          FUN_00fe4974(param_3,uVar11,&DAT_01c245a8);
          ppppiVar13 = local_608;
          if (!(local_618 != (int ****)0x2 || local_614 != (int ****)0x0)) break;
          uVar16 = uVar17;
          if (((uint)local_618 & 1) != 0) {
            uVar16 = CONCAT44(ppppiStack_60c,local_610);
          }
          uVar18 = uVar17;
          if (((uint)local_600 & 1) != 0) {
            uVar18 = local_5f8[0];
          }
          if (ppppiVar12 == local_74) {
            FUN_01220ee0(param_3,uVar11);
            FUN_0132b898(&local_74,ppppiVar12,1,8,0x18);
            ppppiVar6 = local_70;
          }
          local_6c = (int ****)((int)ppppiVar12 + 1);
          *(int *****)((int)ppppiVar6 + iVar5 + 0x28) = ppppiVar12;
          *(int *****)((int)ppppiVar6 + iVar5 + 0x2c) = ppppiVar13;
          *(undefined8 *)((int)ppppiVar6 + iVar5 + 0x18) = uVar16;
          *(undefined8 *)((int)ppppiVar6 + iVar5 + 0x20) = uVar18;
          iVar5 = iVar5 + 0x18;
        }
        FUN_01443048(uVar11,&DAT_01c245a8);
        ppppiVar10 = local_70;
        local_8fc = local_74;
        FUN_00e83cdc(&local_8f8);
        FUN_0084ec48(param_2 + 2);
        ppppiVar13 = (int ****)0x2;
        goto LAB_00f6b788;
      }
      FUN_01443048(uVar11,&DAT_01c245a8);
      FUN_00a98078(&local_618,0);
      ppppiVar12 = ppppiStack_60c;
      ppppiVar10 = local_610;
      ppppiVar13 = local_618;
      local_8fc = local_614;
      local_90c = local_604;
      local_908 = local_608;
      FUN_0132b958(0,8,8,0x18);
      FUN_00e83cdc(&local_8f8);
    }
    FUN_0084ec48(param_2 + 2);
    *(undefined1 *)local_904 = 1;
    if (ppppiVar13 != (int ****)&DAT_00000003) goto LAB_00f6b794;
    break;
  default:
  case '\0':
    iVar5 = param_2[0x170] + 8;
    *(undefined1 *)(param_2 + 1) = 0;
    *param_2 = iVar5;
LAB_00f6b3b0:
    param_2[2] = iVar5;
    *(undefined1 *)(param_2 + 0x34) = 0;
switchD_00f6b394_caseD_3:
    ppppiVar6 = (int ****)(param_2 + 2);
    FUN_00f687b8(&local_618,ppppiVar6,param_3);
    ppppiVar12 = ppppiStack_60c;
    ppppiVar10 = local_610;
    ppppiVar14 = local_614;
    ppppiVar13 = local_618;
    if (local_618 != (int ****)&DAT_00000003) {
      local_8fc = local_614;
      local_908 = local_608;
      local_90c = local_604;
      cVar1 = (char)param_2[0x34];
      bVar15 = cVar1 == '\x03';
      if (bVar15) {
        cVar1 = (char)param_2[0x33];
      }
      if (bVar15 && cVar1 == '\x03') {
        FUN_00b99500(param_2 + 4);
      }
      if (ppppiVar13 == (int ****)0x2) {
        param_2[2] = (int)ppppiVar14;
        param_2[3] = (int)ppppiVar10;
        param_2[4] = (int)ppppiVar12;
        *(undefined2 *)(param_2 + 0x16f) = 0;
        param_2[0x16e] = (int)ppppiVar6;
        goto LAB_00f6b458;
      }
LAB_00f6b788:
      local_904 = (int ****)(param_2 + 1);
      *(undefined1 *)local_904 = 1;
LAB_00f6b794:
      local_904 = (int ****)(param_2 + 1);
      FUN_00f68740(param_2);
      local_900 = ppppiVar10;
      if (ppppiVar13 == (int ****)0x2) {
        local_8f4 = (int ****)FUN_012fd02c;
        local_8f8 = (int ****)&local_74;
        local_74 = ppppiVar12;
        FUN_00664898(&local_618,&DAT_005a3da7,&local_8f8);
        param_3 = local_610;
        ppppiVar6 = local_614;
        ppppiVar14 = local_618;
        if (local_8fc != (int ****)&DAT_80000000) {
          local_900 = (int ****)thunk_FUN_01be5118(5);
          if (local_900 == (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,5);
          }
          *(undefined1 *)(local_900 + 1) = 0x53;
          *local_900 = (int ***)0x504d4554;
          FUN_0196aa8c(&local_618,ppppiVar12);
          if (local_618 == (int ****)&DAT_80000000) {
            ppppiVar13 = local_614;
          }
          else {
            local_338 = local_618;
            local_334 = local_614;
            local_330 = local_610;
            iVar5 = (int)ppppiVar12 * 0x18;
            ppppiVar12 = ppppiVar10;
            do {
              if (iVar5 == 0) {
                local_904 = local_338;
                local_618 = *(int *****)((uint)&local_338 | 4);
                local_614 = (int ****)((undefined4 *)((uint)&local_338 | 4))[1];
                FUN_0132b958(local_8fc,ppppiVar10,8,0x18);
                ppppiVar12 = (int ****)&DAT_00000005;
                local_68 = local_618;
                ppppiStack_64 = local_614;
                ppppiStack_60 = local_610;
                ppppiStack_5c = ppppiStack_60c;
                local_90c = (int ****)&SUB_00000004;
                local_908 = (int ****)0x0;
                local_8fc = (int ****)&DAT_00000005;
                goto LAB_00f6bab8;
              }
              local_8e8 = (int ****)&DAT_80000000;
              pppiVar9 = ppppiVar12[4];
              local_8ec = (int ****)0x0;
              local_8f4 = (int ****)0x0;
              local_8f8 = (int ****)0x0;
              ppppiVar13 = (int ****)FUN_007025b0(&local_8f8,&DAT_0056ef98,4);
              if ((ppppiVar13 != (int ****)0x0) ||
                 (ppppiVar13 = (int ****)FUN_014a71c8(&local_8f8,pppiVar9),
                 ppppiVar13 != (int ****)0x0)) {
LAB_00f6bbbc:
                FUN_0127464c(&local_8f8);
                break;
              }
              pppiVar9 = ppppiVar12[5];
              ppppiVar13 = (int ****)FUN_007025b0(&local_8f8,"ID",2);
              if ((ppppiVar13 != (int ****)0x0) ||
                 (ppppiVar13 = (int ****)FUN_014a71c8(&local_8f8,pppiVar9),
                 ppppiVar13 != (int ****)0x0)) goto LAB_00f6bbbc;
              uVar17 = *(undefined8 *)ppppiVar12;
              uVar16 = *(undefined8 *)(ppppiVar12 + 2);
              ppppiVar13 = (int ****)FUN_007025b0(&local_8f8,"Board",5);
              if ((((ppppiVar13 != (int ****)0x0) ||
                   (ppppiVar13 = (int ****)FUN_014a72cc((int)uVar17,&local_8f8),
                   ppppiVar13 != (int ****)0x0)) ||
                  (ppppiVar13 = (int ****)FUN_007025b0(&local_8f8,&DAT_0056d89c,4),
                  ppppiVar13 != (int ****)0x0)) ||
                 (ppppiVar13 = (int ****)FUN_014a72cc((int)uVar16,&local_8f8),
                 ppppiVar13 != (int ****)0x0)) goto LAB_00f6bbbc;
              local_618 = local_8f8;
              local_614 = local_8f4;
              local_610 = local_8f0;
              ppppiStack_60c = local_8ec;
              local_608 = local_8e8;
              local_604 = local_8e4;
              local_600 = local_8e0;
              local_5fc = local_8dc;
              FUN_0196aafc(&local_58,&local_618);
              ppppiVar13 = local_330;
              if ((char)local_58 == '\x06') {
                ppppiVar13 = local_54;
              }
              else {
                if (local_330 == local_338) {
                  FUN_01969b6c(&local_338);
                }
                ppppiVar7 = local_334 + (int)ppppiVar13 * 6;
                *ppppiVar7 = local_58;
                ppppiVar7[1] = (int ***)local_54;
                ppppiVar7[2] = pppiStack_50;
                ppppiVar7[3] = pppiStack_4c;
                ppppiVar7[4] = pppiStack_48;
                ppppiVar7[5] = pppiStack_44;
                local_330 = (int ****)((int)ppppiVar13 + 1);
                ppppiVar13 = (int ****)0x0;
              }
              ppppiVar12 = ppppiVar12 + 6;
              iVar5 = iVar5 + -0x18;
            } while (ppppiVar13 == (int ****)0x0);
            FUN_00949b70(&local_338);
          }
          FUN_0132b958(local_8fc,ppppiVar10,8,0x18);
          local_618 = ppppiVar13;
                    /* WARNING: Subroutine does not return */
          FUN_013073dc("BUG: response serialization failedAPI",0x22,&local_618,&DAT_01c16974,
                       &DAT_01cf9514);
        }
        local_8fc = (int ****)&DAT_80000000;
LAB_00f6bab8:
        uVar11 = 0;
        ppppiVar13 = (int ****)0xc9;
      }
      else {
        uVar11 = 2;
        ppppiVar14 = extraout_r12;
      }
      piVar8 = (int *)param_2[0x170];
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar8;
        bVar15 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar15);
      *piVar8 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01181f8c(param_2[0x170]);
      }
      param_1[2] = local_8fc;
      param_1[7] = local_904;
      *param_1 = uVar11;
      param_1[1] = ppppiVar13;
      param_1[3] = local_900;
      param_1[4] = ppppiVar12;
      param_1[5] = local_908;
      param_1[6] = local_90c;
      param_1[8] = local_68;
      param_1[9] = ppppiStack_64;
      param_1[10] = ppppiStack_60;
      param_1[0xb] = ppppiStack_5c;
      *(undefined1 *)(param_1 + 0xf) = 2;
      uVar4 = 1;
      param_1[0xc] = ppppiVar14;
      param_1[0xd] = ppppiVar6;
      param_1[0xe] = param_3;
      goto LAB_00f6bb60;
    }
    uVar4 = 3;
LAB_00f6b490:
    *(undefined1 *)(param_2 + 1) = uVar4;
  }
  uVar4 = 3;
  *param_1 = 3;
LAB_00f6bb60:
  *(undefined1 *)(param_2 + 0x171) = uVar4;
  return;
}

