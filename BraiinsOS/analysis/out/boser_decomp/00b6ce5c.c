// FUN_00b6ce5c @ 00b6ce5c size=1648 calls_out=18 calls_in=2
// strings: 

void FUN_00b6ce5c(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *unaff_r8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *local_528;
  undefined4 *local_524;
  int *local_514;
  int *local_508;
  int *local_504;
  undefined4 *local_4e0;
  undefined4 *local_4dc;
  undefined4 *local_4d8;
  undefined4 *local_2c8;
  undefined4 *local_2c4;
  undefined4 *local_2c0;
  undefined4 *local_2bc;
  undefined4 *local_2b8;
  undefined4 *local_2b4;
  undefined4 *local_2b0;
  undefined1 auStack_b0 [124];
  undefined1 local_34;
  int local_30;
  int local_2c;
  int local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0xaf]) {
  case '\0':
    iVar8 = *param_2;
    param_2[4] = iVar8;
    iVar9 = param_2[3];
    unaff_r8 = (undefined4 *)param_2[2];
    iVar6 = param_2[1];
    param_2[5] = iVar6;
    param_2[6] = (int)unaff_r8;
    param_2[7] = iVar9;
    *(undefined1 *)(param_2 + 0xae) = 0;
LAB_00b6cf0c:
    uVar3 = 0;
    if (iVar6 < 0) {
LAB_00b6cf18:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar3,iVar6);
    }
    if (iVar6 == 0) {
      iVar2 = 1;
      iVar12 = 0;
    }
    else {
      uVar3 = 1;
      iVar2 = FUN_01298504(iVar6,1);
      iVar12 = iVar6;
      if (iVar2 == 0) goto LAB_00b6cf18;
    }
    FUN_01bed4e2(iVar2,iVar8,iVar6);
    local_30 = iVar12;
    local_2c = iVar2;
    local_28 = iVar6;
    FUN_01323e2c(auStack_b0,&local_30);
    local_34 = 0;
    if (iVar9 != 0) {
      puVar13 = unaff_r8 + iVar9 * 2;
      do {
        iVar9 = unaff_r8[1];
        iVar6 = 0;
        if (iVar9 < 0) {
LAB_00b6d508:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(iVar6,iVar8);
        }
        uVar3 = *unaff_r8;
        if (iVar9 == 0) {
          iVar8 = 1;
        }
        else {
          iVar6 = 1;
          iVar8 = FUN_01298504(iVar9,1);
          if (iVar8 == 0) {
            iVar8 = iVar9;
            goto LAB_00b6d508;
          }
          iVar6 = iVar9;
        }
        FUN_01bed4e2(iVar8,uVar3,iVar9);
        local_30 = iVar6;
        local_2c = iVar8;
        local_28 = iVar9;
        FUN_00b06878(auStack_b0,&local_30);
        unaff_r8 = unaff_r8 + 2;
      } while (unaff_r8 != puVar13);
    }
    FUN_01bed4e2(param_2 + 8,auStack_b0,0x80);
    FUN_019eb218(&local_2c8,param_2 + 8);
    FUN_01bed4e2(&local_4e0,&local_2c8,0x218);
    FUN_01bed4e2(param_2 + 0x28,&local_4e0,0x218);
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1d604);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1d604);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0xae]) {
    case '\0':
      iVar8 = param_2[4];
      iVar6 = param_2[5];
      unaff_r8 = (undefined4 *)param_2[6];
      iVar9 = param_2[7];
      goto LAB_00b6cf0c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1d5f4);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1d5f4);
    }
  }
  local_504 = param_2 + 0xae;
  local_508 = param_2 + 4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0xad]) {
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1e128);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1e128);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0xab]) {
    case '\0':
      goto switchD_00b6d0cc_caseD_0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d2655c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d2655c);
    }
switchD_00b6d0cc_caseD_3:
    local_514 = param_2 + 0xab;
    FUN_0195cfa4(&local_2c8,param_2 + 0x90,param_3);
    param_3 = local_2bc;
    puVar13 = local_2c0;
    puVar10 = local_2c4;
    puVar7 = local_2c8;
    if (local_2c8 != (undefined4 *)&DAT_80000001) {
      FUN_00b6d924(param_2 + 0x90);
      if (puVar7 == (undefined4 *)&DAT_80000000) {
        *(undefined2 *)((int)param_2 + 0x2ad) = 0;
        if (param_2[0x8c] != 2) {
          FUN_007372d8();
        }
        *(undefined1 *)((int)param_2 + 0x2af) = 0;
        if (param_2[0x88] != 2) {
          FUN_007372d8();
        }
        *(undefined1 *)(param_2 + 0xac) = 0;
        FUN_011f6f44(param_2 + 0x70);
      }
      else {
        local_528 = param_3;
        local_524 = local_2b4;
        *(undefined1 *)(param_2 + 0xac) = 0;
        local_2c8 = (undefined4 *)param_2[0x88];
        local_2c4 = (undefined4 *)param_2[0x89];
        local_2c0 = (undefined4 *)param_2[0x8a];
        local_2bc = (undefined4 *)param_2[0x8b];
        if (local_2c8 != (undefined4 *)0x2) {
          FUN_007372d8(&local_2c8);
        }
        *(undefined1 *)((int)param_2 + 0x2af) = 0;
        local_2c8 = (undefined4 *)param_2[0x8c];
        local_2c4 = (undefined4 *)param_2[0x8d];
        local_2c0 = (undefined4 *)param_2[0x8e];
        local_2bc = (undefined4 *)param_2[0x8f];
        if (local_2c8 != (undefined4 *)0x2) {
          FUN_007372d8(&local_2c8);
        }
        *(undefined4 *)((int)param_2 + 0x2ad) = 0;
        FUN_011f6f44(param_2 + 0x70);
        param_3 = local_2b0;
      }
      *(undefined1 *)local_514 = 1;
      FUN_00b6d988(param_2 + 0x58);
      unaff_r8 = local_2b8;
      goto LAB_00b6d31c;
    }
    *(undefined1 *)(param_2 + 0xad) = 3;
    *(undefined1 *)(param_2 + 0xab) = 3;
    *(undefined1 *)(param_2 + 0xae) = 3;
LAB_00b6d1fc:
    *param_1 = &DAT_80000004;
    uVar1 = 3;
    goto LAB_00b6d494;
  }
  puVar10 = (undefined4 *)param_2[0x29];
  puVar13 = (undefined4 *)param_2[0x2a];
  if (param_2[0x28] != 3) {
    param_2[0x40] = param_2[0x28];
    param_2[0x41] = (int)puVar10;
    param_2[0x42] = (int)puVar13;
    FUN_01bed4e2(param_2 + 0x43,param_2 + 0x2b,0x54);
    FUN_01bed4e2(param_2 + 0x58,param_2 + 0x40,0x60);
    *(undefined1 *)(param_2 + 0xab) = 0;
switchD_00b6d0cc_caseD_0:
    FUN_01bed4e2(param_2 + 0x70,param_2 + 0x58,0x60);
    param_2[0x88] = param_2[0x5c];
    param_2[0x89] = param_2[0x5d];
    param_2[0x8a] = param_2[0x5e];
    param_2[0x8b] = param_2[0x5f];
    *(undefined1 *)(param_2 + 0xac) = 1;
    param_2[0x74] = 2;
    param_2[0x8c] = param_2[0x60];
    param_2[0x8d] = param_2[0x61];
    param_2[0x8e] = param_2[0x62];
    param_2[0x8f] = param_2[99];
    param_2[0xa1] = (int)(param_2 + 0x8c);
    *(undefined2 *)((int)param_2 + 0x2ad) = 0;
    *(undefined1 *)((int)param_2 + 0x2af) = 1;
    param_2[0x78] = 2;
    *(undefined1 *)(param_2 + 0xaa) = 0;
    param_2[0xa0] = 0;
    *(undefined1 *)(param_2 + 0x9f) = 0;
    param_2[0x95] = 0;
    param_2[0x96] = (int)(param_2 + 0x88);
    *(undefined1 *)(param_2 + 0x94) = 0;
    param_2[0x90] = 0;
    param_2[0x91] = (int)(param_2 + 0x70);
    goto switchD_00b6d0cc_caseD_3;
  }
  puVar7 = (undefined4 *)&DAT_80000000;
  param_2[0x40] = 3;
  param_2[0x41] = (int)puVar10;
  param_2[0x42] = (int)puVar13;
LAB_00b6d31c:
  *(undefined1 *)(param_2 + 0xad) = 1;
  FUN_00b6d8ec(param_2 + 0x28);
  if (puVar7 == (undefined4 *)&DAT_80000000) {
    FUN_00b6d6e4(param_2 + 8);
    unaff_r8 = (undefined4 *)&DAT_80000000;
    puVar7 = puVar10;
    puVar5 = param_3;
LAB_00b6d404:
    *(undefined1 *)local_504 = 1;
    puVar4 = puVar7;
    puVar11 = puVar10;
  }
  else {
    FUN_00b6d6e4(param_2 + 8);
    if (local_528 == (undefined4 *)0x0) {
      FUN_019bb7e0(unaff_r8,local_524);
      unaff_r8 = (undefined4 *)0x80000003;
      puVar5 = puVar13;
      puVar13 = puVar10;
      goto LAB_00b6d404;
    }
    local_4dc = local_524;
    local_4e0 = unaff_r8;
    local_4d8 = param_3;
    FUN_012fbd94(&local_2c8,local_524,param_3);
    puVar11 = local_2c0;
    puVar5 = local_2c4;
    puVar13 = local_4d8;
    puVar4 = local_4dc;
    if (local_2c8 == (undefined4 *)0x0) {
      puVar4 = local_4e0;
      puVar13 = local_4dc;
LAB_00b6d3f4:
      FUN_019bb7e0(puVar7,puVar10);
      unaff_r8 = (undefined4 *)0x80000002;
      puVar7 = puVar4;
      puVar5 = param_3;
      goto LAB_00b6d404;
    }
    param_3 = local_2c4;
    if (unaff_r8 == (undefined4 *)&DAT_80000000) goto LAB_00b6d3f4;
    FUN_019bb7e0(puVar7,puVar10);
    *(undefined1 *)local_504 = 1;
    if (unaff_r8 == (undefined4 *)&DAT_80000004) goto LAB_00b6d1fc;
  }
  FUN_00b6cd04(local_508);
  puVar10 = puVar4;
  puVar7 = puVar5;
  if (unaff_r8 == (undefined4 *)0x80000003) {
    FUN_012fbd94(&local_2c8,puVar13,puVar5);
    if (local_2c8 != (undefined4 *)0x0) {
      puVar7 = local_2c4;
      if (puVar4 != (undefined4 *)&DAT_80000000) {
        puVar10 = puVar13;
        puVar13 = puVar5;
        unaff_r8 = puVar4;
        puVar11 = local_2c0;
        goto LAB_00b6d47c;
      }
      puVar4 = puVar13;
      puVar13 = puVar5;
    }
    puVar10 = puVar4;
    unaff_r8 = (undefined4 *)0x80000003;
  }
LAB_00b6d47c:
  param_1[1] = puVar10;
  param_1[2] = puVar13;
  *param_1 = unaff_r8;
  param_1[3] = puVar7;
  param_1[4] = puVar11;
  uVar1 = 1;
LAB_00b6d494:
  *(undefined1 *)(param_2 + 0xaf) = uVar1;
  return;
}

