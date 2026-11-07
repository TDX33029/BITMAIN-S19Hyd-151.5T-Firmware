// FUN_00f6a5f0 @ 00f6a5f0 size=2260 calls_out=29 calls_in=0
// strings: Speed | BUG: response serialization failedAPI

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00f6a5f0(undefined4 *param_1,int *param_2,uint ***param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint ***pppuVar5;
  int *piVar6;
  uint ***pppuVar7;
  uint ***pppuVar8;
  uint ***pppuVar9;
  uint **ppuVar10;
  uint ***pppuVar11;
  uint **ppuVar12;
  undefined4 uVar13;
  uint ***pppuVar14;
  uint ***pppuVar15;
  bool bVar16;
  double dVar17;
  uint ***local_95c;
  uint ***local_958;
  uint ***local_954;
  uint ***local_94c;
  uint ***local_944;
  undefined2 local_940;
  undefined1 local_93e;
  uint ***local_928;
  uint ***local_924;
  uint ***local_920;
  uint ***local_91c;
  uint ***local_918;
  uint ***pppuStack_914;
  uint ***pppuStack_910;
  uint ***pppuStack_90c;
  undefined1 auStack_908 [160];
  undefined1 auStack_868 [88];
  int local_810;
  int local_80c;
  undefined1 auStack_680 [12];
  undefined4 local_674;
  undefined4 local_670;
  int local_668;
  undefined4 local_664;
  uint ***local_65c;
  undefined1 local_658;
  undefined3 uStack_657;
  uint local_654;
  uint ***local_648;
  uint ***local_644;
  uint ***local_640;
  uint ***local_63c;
  uint ***local_638;
  uint ***local_634;
  uint ***pppuStack_630;
  uint ***pppuStack_62c;
  undefined1 auStack_628 [704];
  uint ***local_368;
  uint ***local_364;
  uint ***local_360;
  uint ***local_a8;
  uint ***pppuStack_a4;
  uint ***pppuStack_a0;
  uint ***pppuStack_9c;
  uint ***pppuStack_98;
  uint ***pppuStack_94;
  uint ***local_90;
  uint ***local_8c;
  uint ***local_88;
  uint ***local_84;
  uint ***local_80;
  undefined4 local_7c;
  undefined1 local_78 [4];
  uint ***local_74;
  uint ***pppuStack_70;
  uint ***local_6c;
  uint ***local_68;
  uint ***pppuStack_64;
  uint ***pppuStack_60;
  uint ***pppuStack_5c;
  undefined2 local_54;
  undefined1 local_52;
  uint **local_50;
  uint ***local_4c;
  uint **ppuStack_48;
  uint **ppuStack_44;
  uint **ppuStack_40;
  uint **ppuStack_3c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x171]) {
  case '\0':
    iVar3 = param_2[0x170] + 8;
    *(undefined1 *)(param_2 + 1) = 0;
    *param_2 = iVar3;
LAB_00f6a68c:
    param_2[2] = iVar3;
    *(undefined1 *)(param_2 + 0x34) = 0;
switchD_00f6a670_caseD_3:
    pppuVar9 = (uint ***)(param_2 + 2);
    FUN_00f687b8(&local_648,pppuVar9,param_3);
    pppuVar11 = local_634;
    pppuVar5 = local_638;
    pppuVar14 = local_63c;
    pppuVar8 = local_640;
    pppuVar7 = local_644;
    pppuVar15 = local_648;
    if (local_648 != (uint ***)&DAT_00000003) {
      cVar1 = (char)param_2[0x34];
      bVar16 = cVar1 == '\x03';
      if (bVar16) {
        cVar1 = (char)param_2[0x33];
      }
      if (bVar16 && cVar1 == '\x03') {
        FUN_00b99500(param_2 + 4);
      }
      if (pppuVar15 == (uint ***)0x2) {
        *pppuVar9 = (uint **)pppuVar7;
        param_2[3] = (int)pppuVar8;
        param_2[4] = (int)pppuVar14;
        *(undefined2 *)(param_2 + 0x16f) = 0;
        param_2[0x16e] = (int)pppuVar9;
        goto LAB_00f6a784;
      }
      puVar4 = (undefined4 *)((uint)&local_90 | 4);
      *puVar4 = pppuVar7;
      puVar4[1] = pppuVar8;
      puVar4[2] = pppuVar14;
      local_90 = pppuVar15;
      local_7c = pppuVar11;
      pppuVar15 = local_7c;
      local_7c._1_2_ = (undefined2)((uint)pppuVar11 >> 8);
      local_940 = local_7c._1_2_;
      local_7c._3_1_ = (undefined1)((uint)pppuVar11 >> 0x18);
      local_93e = local_7c._3_1_;
      local_80 = pppuVar5;
      *(undefined1 *)(param_2 + 1) = 1;
      local_7c = pppuVar15;
LAB_00f6aad8:
      pppuVar14 = local_80;
      pppuVar8 = local_84;
      pppuVar7 = local_88;
      local_944 = local_8c;
      pppuVar15 = local_90;
      local_94c = (uint ***)(param_2 + 1);
      uVar2 = SUB41(pppuVar11,0);
      FUN_00f68740(param_2);
      local_954 = pppuVar7;
      if (pppuVar15 == (uint ***)0x2) {
        local_924 = (uint ***)FUN_012fd02c;
        local_928 = (uint ***)&local_90;
        local_90 = pppuVar8;
        FUN_00664898(&local_648,&DAT_0058d10c,&local_928);
        pppuVar9 = local_644;
        pppuVar14 = local_648;
        local_958 = local_640;
        if (local_944 == (uint ***)&DAT_80000000) {
          local_944 = (uint ***)&DAT_80000000;
        }
        else {
          local_954 = (uint ***)FUN_01298504(4,1);
          if (local_954 == (uint ***)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,4);
          }
          *local_954 = (uint **)0x534e4146;
          FUN_0196aa8c(&local_648,pppuVar8);
          if (local_648 == (uint ***)&DAT_80000000) {
            pppuVar15 = local_644;
LAB_00f6ae50:
            FUN_0132b958(local_944,pppuVar7,4,0x10);
            local_648 = pppuVar15;
                    /* WARNING: Subroutine does not return */
            FUN_013073dc("BUG: response serialization failedAPI",0x22,&local_648,&DAT_01cf9524,
                         &DAT_01cf9514);
          }
          local_368 = local_648;
          local_364 = local_644;
          local_360 = local_640;
          iVar3 = (int)pppuVar8 << 4;
          pppuVar8 = pppuVar7;
          for (; iVar3 != 0; iVar3 = iVar3 + -0x10) {
            local_918 = (uint ***)&DAT_80000000;
            local_91c = (uint ***)0x0;
            local_924 = (uint ***)0x0;
            local_928 = (uint ***)0x0;
            pppuVar15 = (uint ***)FUN_014a7b90(&local_928,"FAN",3,*pppuVar8);
            if ((((pppuVar15 != (uint ***)0x0) ||
                 (pppuVar15 = (uint ***)FUN_014a7b90(&local_928,"ID",2,pppuVar8[1]),
                 pppuVar15 != (uint ***)0x0)) ||
                (pppuVar15 = (uint ***)FUN_014a7c64(&local_928,"Speed",5,pppuVar8[2]),
                pppuVar15 != (uint ***)0x0)) ||
               (pppuVar15 = (uint ***)FUN_014a7c64(&local_928,"RPM",3,pppuVar8[3]),
               pppuVar15 != (uint ***)0x0)) {
              local_50 = (uint **)CONCAT31(local_50._1_3_,6);
              local_4c = pppuVar15;
              FUN_0126ee34(&local_928);
LAB_00f6aeb0:
              FUN_00949b70(&local_368);
              goto LAB_00f6ae50;
            }
            local_648 = local_928;
            local_644 = local_924;
            local_640 = local_920;
            local_63c = local_91c;
            local_638 = local_918;
            local_634 = pppuStack_914;
            pppuStack_630 = pppuStack_910;
            pppuStack_62c = pppuStack_90c;
            FUN_0196ac88(&local_50);
            pppuVar15 = local_360;
            if ((char)local_50 == '\x06') {
              pppuVar15 = local_4c;
              goto LAB_00f6aeb0;
            }
            if (local_360 == local_368) {
              FUN_01969b6c(&local_368);
            }
            pppuVar5 = local_364 + (int)pppuVar15 * 6;
            pppuVar8 = pppuVar8 + 4;
            *pppuVar5 = local_50;
            pppuVar5[1] = (uint **)local_4c;
            pppuVar5[2] = ppuStack_48;
            pppuVar5[3] = ppuStack_44;
            pppuVar5[4] = ppuStack_40;
            pppuVar5[5] = ppuStack_3c;
            local_360 = (uint ***)((int)pppuVar15 + 1);
          }
          local_95c = local_368;
          local_648 = *(uint ****)((uint)&local_368 | 4);
          local_644 = (uint ***)((undefined4 *)((uint)&local_368 | 4))[1];
          local_94c = (uint ***)&SUB_00000004;
          FUN_0132b958(local_944,pppuVar7,4,0x10);
          local_68 = local_648;
          pppuStack_64 = local_644;
          pppuStack_60 = local_640;
          pppuStack_5c = local_63c;
          local_944 = (uint ***)&SUB_00000004;
          param_3 = (uint ***)0x0;
        }
        uVar13 = 0;
        pppuVar15 = (uint ***)0xca;
        uVar2 = 4;
        pppuVar8 = pppuVar14;
        pppuVar14 = param_3;
      }
      else {
        local_52 = local_93e;
        local_54 = local_940;
        uVar13 = 2;
        local_94c = pppuVar8;
      }
      piVar6 = (int *)param_2[0x170];
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar6;
        bVar16 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar16);
      *piVar6 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01181f8c(param_2[0x170]);
      }
      *(undefined1 *)((int)param_1 + 0x1b) = local_52;
      param_1[7] = local_95c;
      param_1[2] = local_944;
      *(undefined2 *)((int)param_1 + 0x19) = local_54;
      param_1[3] = local_954;
      param_1[4] = local_94c;
      *(undefined1 *)(param_1 + 6) = uVar2;
      *param_1 = uVar13;
      param_1[1] = pppuVar15;
      param_1[5] = pppuVar14;
      param_1[8] = local_68;
      param_1[9] = pppuStack_64;
      param_1[10] = pppuStack_60;
      param_1[0xb] = pppuStack_5c;
      *(undefined1 *)(param_1 + 0xf) = 2;
      param_1[0xe] = local_958;
      uVar2 = 1;
      param_1[0xc] = pppuVar8;
      param_1[0xd] = pppuVar9;
      goto LAB_00f6ae38;
    }
    uVar2 = 3;
LAB_00f6a7c8:
    *(undefined1 *)(param_2 + 1) = uVar2;
    break;
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
      iVar3 = *param_2;
      goto LAB_00f6a68c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c199cc);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c199cc);
    case '\x03':
      goto switchD_00f6a670_caseD_3;
    case '\x04':
    }
LAB_00f6a784:
    local_94c = (uint ***)(param_2 + 1);
    local_958 = (uint ***)&local_648;
    FUN_00f68990(local_958,param_2 + 6,param_3);
    param_3 = local_644;
    pppuVar15 = local_648;
    if (local_648 == (uint ***)&SUB_00000004 && local_644 == (uint ***)0x0) {
      uVar2 = 4;
      goto LAB_00f6a7c8;
    }
    local_a8 = local_640;
    pppuStack_a4 = local_63c;
    pppuStack_a0 = local_638;
    pppuStack_9c = local_634;
    pppuStack_98 = pppuStack_630;
    pppuStack_94 = pppuStack_62c;
    FUN_01bed4e2(&local_368,auStack_628,0x2c0);
    if ((char)param_2[0x16f] == '\x03') {
      FUN_00f68940(param_2 + 6);
    }
    if (pppuVar15 == (uint ***)&DAT_00000003 && param_3 == (uint ***)0x0) {
      local_90 = local_a8;
      local_8c = pppuStack_a4;
      local_88 = pppuStack_a0;
      local_84 = pppuStack_9c;
      local_80 = pppuStack_98;
      local_7c = pppuStack_94;
      pppuVar9 = pppuStack_9c;
    }
    else {
      FUN_01bed4e2(auStack_908,&local_368,0x2c0);
      local_920 = local_a8;
      local_91c = pppuStack_a4;
      local_918 = pppuStack_a0;
      pppuStack_914 = pppuStack_9c;
      pppuStack_910 = pppuStack_98;
      pppuStack_90c = pppuStack_94;
      local_924 = param_3;
      local_928 = pppuVar15;
      if (local_65c == (uint ***)&DAT_80000000) {
        FUN_00a98078(&local_90,2);
        FUN_00e84018(&local_928);
        if (local_668 != -0x80000000) {
          FUN_0132b958(local_668,local_664,8,0x30);
        }
        FUN_00855fc4(auStack_868);
        if (local_810 != 2 || local_80c != 0) {
          FUN_00b9a764(&local_810);
        }
        FUN_00856028(auStack_680);
      }
      else {
        uVar13 = 0;
        local_640 = local_65c;
        local_638 = (uint ***)0x0;
        local_648 = (uint ***)CONCAT31(uStack_657,local_658);
        local_63c = local_648 + local_654 * 8;
        pppuVar15 = pppuStack_94;
        if (0xfffffff8 < local_654 * 0x20) {
LAB_00f6a93c:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar13,pppuVar15);
        }
        pppuVar7 = (uint ***)0x0;
        local_644 = local_648;
        if (local_654 == 0) {
          param_3 = (uint ***)&SUB_00000004;
          pppuVar15 = (uint ***)0x0;
        }
        else {
          pppuVar15 = (uint ***)((local_654 & 0x7ffffff) << 4);
          uVar13 = 4;
          param_3 = (uint ***)FUN_01298504(pppuVar15,4);
          if (param_3 == (uint ***)0x0) goto LAB_00f6a93c;
          pppuVar15 = (uint ***)(local_654 & 0x7ffffff);
        }
        pppuVar9 = local_63c;
        pppuStack_70 = local_640;
        local_6c = local_63c;
        local_74 = local_644;
        if (local_644 != local_63c) {
          pppuVar7 = (uint ***)0x0;
          pppuVar8 = local_644;
          do {
            ppuVar12 = *pppuVar8;
            ppuVar10 = pppuVar8[7];
            dVar17 = *(double *)(pppuVar8 + 2);
            FUN_019bb7e0(pppuVar8[4],pppuVar8[5]);
            pppuVar14 = param_3 + (int)pppuVar7 * 4;
            *pppuVar14 = (uint **)pppuVar7;
            pppuVar8 = pppuVar8 + 8;
            pppuVar14[1] = (uint **)pppuVar7;
            pppuVar7 = (uint ***)((int)pppuVar7 + 1);
            pppuVar14[3] = ppuVar10;
            ppuVar10 = (uint **)0x0;
            if (((uint)ppuVar12 & 1) != 0) {
              ppuVar10 = (uint **)((uint)(0.0 < dVar17 * 100.0) * (int)(longlong)(dVar17 * 100.0));
            }
            pppuVar14[2] = ppuVar10;
          } while (pppuVar8 != pppuVar9);
          local_74 = pppuVar8;
        }
        FUN_00db1b0c(local_78);
        local_90 = (uint ***)0x2;
        local_8c = pppuVar15;
        local_88 = param_3;
        local_84 = pppuVar7;
        FUN_00e84018(&local_928);
        if (local_668 != -0x80000000) {
          FUN_0132b958(local_668,local_664,8,0x30);
        }
        FUN_00855fc4(auStack_868);
        if (local_810 != 2 || local_80c != 0) {
          FUN_00b9a764(&local_810);
        }
        FUN_00856028(auStack_680);
      }
      pppuVar9 = (uint ***)&local_928;
      FUN_019bb7e0(local_674,local_670);
    }
    FUN_0084ec48(param_2 + 2);
    local_93e = local_7c._3_1_;
    pppuVar11 = (uint ***)((uint)local_7c & 0xff);
    local_940 = local_7c._1_2_;
    *(undefined1 *)local_94c = 1;
    if (local_90 != (uint ***)&DAT_00000003) goto LAB_00f6aad8;
  }
  uVar2 = 3;
  *param_1 = 3;
LAB_00f6ae38:
  *(undefined1 *)(param_2 + 0x171) = uVar2;
  return;
}

