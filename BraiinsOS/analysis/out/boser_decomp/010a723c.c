// FUN_010a723c @ 010a723c size=1808 calls_out=17 calls_in=1
// strings: 

void FUN_010a723c(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 ***pppuVar2;
  undefined1 uVar3;
  undefined4 ***unaff_r5;
  undefined4 ***pppuVar4;
  undefined4 ***pppuVar5;
  undefined1 *puVar6;
  undefined4 *unaff_r7;
  undefined4 *puVar7;
  undefined4 ***pppuVar8;
  undefined4 ***pppuVar9;
  undefined4 ***pppuVar10;
  undefined4 ***pppuVar11;
  undefined4 uVar12;
  undefined4 ***local_4c0;
  undefined4 *local_4b8;
  undefined4 ***local_4b0;
  undefined4 *local_4ac;
  undefined4 *local_4a8;
  undefined4 *local_4a0;
  undefined4 *local_49c;
  undefined4 ***local_498;
  undefined4 ***local_494;
  undefined4 ***local_490;
  undefined4 local_478;
  undefined4 ***pppuStack_474;
  undefined4 uStack_470;
  undefined4 ***local_468;
  undefined4 ***local_464;
  undefined4 ***local_460;
  undefined4 ***local_458;
  undefined4 ***local_454;
  undefined4 ***local_450;
  undefined4 ***local_240;
  undefined4 ***local_23c;
  undefined4 ***local_238;
  undefined4 *local_234;
  undefined4 ***local_230;
  undefined4 ***local_22c;
  undefined4 ***local_228;
  
  pppuVar10 = (undefined4 ***)(param_2 + 0x36);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xbe)) {
  case 0:
    *(undefined1 *)((int)param_2 + 0x2f9) = 0;
    uVar1 = param_2[4];
    uVar12 = param_2[5];
    param_2[6] = *param_2;
    param_2[7] = param_2[1];
    param_2[8] = param_2[2];
    *(undefined1 *)(param_2 + 0xbd) = 0;
    param_2[9] = uVar1;
    param_2[10] = uVar12;
LAB_010a72e8:
    param_2[0xb] = param_2[6];
    param_2[0xc] = param_2[7];
    param_2[0xd] = param_2[8];
    *(undefined1 *)(param_2 + 0xbc) = 0;
    param_2[0xe] = uVar1;
    param_2[0xf] = uVar12;
LAB_010a7314:
    param_2[0x10] = param_2[0xb];
    param_2[0x11] = param_2[0xc];
    param_2[0x12] = param_2[0xd];
    *(undefined1 *)(param_2 + 0xbb) = 0;
    param_2[0x13] = uVar1;
    param_2[0x14] = uVar12;
LAB_010a7344:
    unaff_r7 = param_2 + 0x10;
    local_478 = *unaff_r7;
    unaff_r5 = (undefined4 ***)param_2[0x11];
    uStack_470 = param_2[0x12];
    pppuStack_474 = unaff_r5;
    FUN_00b8d954(param_2 + 0x15,&local_478,uVar1,uVar12);
    FUN_019eb218(&local_240,param_2 + 0x15);
    FUN_01bed4e2(&local_458,&local_240,0x218);
    FUN_01bed4e2(param_2 + 0x35,&local_458,0x218);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1e2c0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1e2c0);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xbd)) {
    case 0:
      uVar1 = param_2[9];
      uVar12 = param_2[10];
      goto LAB_010a72e8;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1d614);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1d614);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xbc)) {
    case 0:
      uVar1 = param_2[0xe];
      uVar12 = param_2[0xf];
      goto LAB_010a7314;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1d604);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1d604);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xbb)) {
    case 0:
      uVar1 = param_2[0x13];
      uVar12 = param_2[0x14];
      goto LAB_010a7344;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1d5f4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1d5f4);
    }
  }
  local_49c = param_2 + 0xbc;
  local_4a8 = param_2 + 0xb;
  local_4ac = param_2 + 0x10;
  local_4b0 = (undefined4 ***)(param_2 + 0xbb);
  local_4a0 = param_2 + 0xbd;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xba)) {
  case 0:
    pppuVar4 = (undefined4 ***)*pppuVar10;
    pppuVar9 = (undefined4 ***)param_2[0x37];
    if (param_2[0x35] != 3) {
      param_2[0x4d] = param_2[0x35];
      param_2[0x4e] = pppuVar4;
      param_2[0x4f] = pppuVar9;
      FUN_01bed4e2(param_2 + 0x50,param_2 + 0x38,0x54);
      FUN_01bed4e2(param_2 + 0x65,param_2 + 0x4d,0x60);
      *(undefined1 *)(param_2 + 0xb8) = 0;
switchD_010a7404_caseD_0:
      FUN_01bed4e2(param_2 + 0x7d,param_2 + 0x65,0x60);
      param_2[0x95] = param_2[0x69];
      param_2[0x96] = param_2[0x6a];
      param_2[0x97] = param_2[0x6b];
      param_2[0x98] = param_2[0x6c];
      *(undefined1 *)(param_2 + 0xb9) = 1;
      param_2[0x81] = 2;
      param_2[0x99] = param_2[0x6d];
      param_2[0x9a] = param_2[0x6e];
      param_2[0x9b] = param_2[0x6f];
      param_2[0x9c] = param_2[0x70];
      *(undefined2 *)((int)param_2 + 0x2e1) = 0;
      *(undefined1 *)((int)param_2 + 0x2e3) = 1;
      param_2[0x85] = 2;
      *(undefined1 *)(param_2 + 0xb7) = 0;
      param_2[0xad] = 0;
      param_2[0xae] = param_2 + 0x99;
      *(undefined1 *)(param_2 + 0xac) = 0;
      param_2[0xa2] = 0;
      param_2[0xa3] = param_2 + 0x95;
      *(undefined1 *)(param_2 + 0xa1) = 0;
      param_2[0x9d] = 0;
      param_2[0x9e] = param_2 + 0x7d;
      goto switchD_010a7404_caseD_3;
    }
    param_2[0x4e] = pppuVar4;
    param_2[0x4f] = pppuVar9;
    pppuVar8 = (undefined4 ***)&DAT_80000000;
    param_2[0x4d] = 3;
LAB_010a76a0:
    *(undefined1 *)(param_2 + 0xba) = 1;
    FUN_010a7e9c(param_2 + 0x35);
    if (pppuVar8 == (undefined4 ***)&DAT_80000000) {
      FUN_010a7c94(param_2 + 0x15);
      unaff_r5 = (undefined4 ***)&DAT_80000000;
      pppuVar5 = pppuVar9;
      local_494 = pppuVar4;
      pppuVar11 = pppuVar10;
LAB_010a77ec:
      *(undefined1 *)local_4b0 = 1;
      pppuVar2 = local_4b0;
      pppuVar4 = pppuVar9;
    }
    else {
      local_468 = pppuVar8;
      local_464 = pppuVar4;
      local_460 = pppuVar9;
      FUN_010a7c94(param_2 + 0x15);
      pppuVar5 = local_464;
      local_494 = local_468;
      if (unaff_r7 == (undefined4 *)0x0) {
        FUN_019bb7e0(unaff_r5,local_4c0);
        unaff_r5 = (undefined4 ***)0x80000003;
        pppuVar11 = pppuVar9;
        goto LAB_010a77ec;
      }
      local_454 = local_4c0;
      local_458 = unaff_r5;
      local_450 = pppuVar10;
      FUN_012fbd94(&local_240,local_4c0,pppuVar10);
      pppuVar2 = local_238;
      pppuVar11 = local_23c;
      pppuVar5 = local_450;
      local_494 = local_454;
      if (local_240 == (undefined4 ***)0x0) {
        pppuVar5 = local_454;
        local_494 = local_458;
LAB_010a77d0:
        FUN_019bb7e0(pppuVar8,pppuVar4);
        unaff_r5 = (undefined4 ***)0x80000002;
        pppuVar9 = pppuVar4;
        pppuVar11 = pppuVar10;
        goto LAB_010a77ec;
      }
      pppuVar10 = local_23c;
      if (unaff_r5 == (undefined4 ***)&DAT_80000000) goto LAB_010a77d0;
      FUN_019bb7e0(pppuVar8,pppuVar4);
      *(undefined1 *)local_4b0 = 1;
      if (unaff_r5 == (undefined4 ***)&DAT_80000004) goto LAB_010a7584;
    }
    FUN_010a7c40(local_4ac);
    local_490 = pppuVar5;
    if (unaff_r5 == (undefined4 ***)0x80000003) {
      FUN_012fbd94(&local_240,pppuVar5,pppuVar11);
      if (local_240 != (undefined4 ***)0x0) {
        local_490 = pppuVar11;
        if (local_494 != (undefined4 ***)&DAT_80000000) {
          unaff_r5 = local_494;
          local_494 = pppuVar5;
          pppuVar2 = local_238;
          pppuVar11 = local_23c;
          goto LAB_010a7858;
        }
        local_494 = pppuVar5;
        pppuVar11 = local_23c;
      }
      unaff_r5 = (undefined4 ***)0x80000003;
      *(undefined1 *)local_49c = 1;
      pppuVar2 = pppuVar4;
    }
    else {
LAB_010a7858:
      *(undefined1 *)local_49c = 1;
      if (unaff_r5 == (undefined4 ***)&DAT_80000004) goto LAB_010a786c;
    }
    FUN_010a7c1c(local_4a8);
    if (unaff_r5 == (undefined4 ***)0x80000003) {
      puVar6 = &DAT_80000016;
      local_498 = local_494;
      local_494 = local_490;
      local_490 = pppuVar11;
    }
    else {
      puVar6 = (undefined1 *)0x80000001;
      local_498 = unaff_r5;
    }
    uVar3 = 1;
    *(undefined1 *)local_4a0 = 1;
    FUN_010a7bf8(param_2 + 6);
    *param_1 = puVar6;
    param_1[1] = local_498;
    param_1[2] = local_494;
    param_1[3] = local_490;
    param_1[4] = pppuVar11;
    param_1[5] = pppuVar2;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1e128);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1e128);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xb8)) {
    case 0:
      goto switchD_010a7404_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d2655c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d2655c);
    }
switchD_010a7404_caseD_3:
    local_4b8 = param_2 + 0xb8;
    puVar7 = param_2 + 0x9d;
    FUN_0195cfa4(&local_240,puVar7,param_3);
    unaff_r7 = local_234;
    pppuVar9 = local_238;
    pppuVar4 = local_23c;
    pppuVar8 = local_240;
    if (local_240 != (undefined4 ***)&DAT_80000001) {
      local_4c0 = local_22c;
      FUN_010a7fac(puVar7);
      if (pppuVar8 == (undefined4 ***)&DAT_80000000) {
        *(undefined2 *)((int)param_2 + 0x2e1) = 0;
        if (param_2[0x99] != 2) {
          FUN_007372d8();
        }
        *(undefined1 *)((int)param_2 + 0x2e3) = 0;
        if (param_2[0x95] != 2) {
          FUN_007372d8();
        }
        *(undefined1 *)(param_2 + 0xb9) = 0;
        FUN_010a7ed4(param_2 + 0x7d);
        unaff_r5 = (undefined4 ***)0x0;
        unaff_r7 = puVar7;
        pppuVar10 = &local_240;
      }
      else {
        *(undefined1 *)(param_2 + 0xb9) = 0;
        local_240 = (undefined4 ***)param_2[0x95];
        local_23c = (undefined4 ***)param_2[0x96];
        local_238 = (undefined4 ***)param_2[0x97];
        local_234 = (undefined4 *)param_2[0x98];
        if (local_240 != (undefined4 ***)0x2) {
          FUN_007372d8(&local_240);
        }
        *(undefined1 *)((int)param_2 + 0x2e3) = 0;
        local_240 = (undefined4 ***)param_2[0x99];
        local_23c = (undefined4 ***)param_2[0x9a];
        local_238 = (undefined4 ***)param_2[0x9b];
        local_234 = (undefined4 *)param_2[0x9c];
        if (local_240 != (undefined4 ***)0x2) {
          FUN_007372d8(&local_240);
        }
        *(undefined4 *)((int)param_2 + 0x2e1) = 0;
        FUN_010a7ed4(param_2 + 0x7d);
        unaff_r5 = local_230;
        pppuVar10 = local_228;
      }
      *(undefined1 *)local_4b8 = 1;
      FUN_010a8010(param_2 + 0x65);
      goto LAB_010a76a0;
    }
    *(undefined1 *)(param_2 + 0xba) = 3;
    *(undefined1 *)(param_2 + 0xb8) = 3;
    *(undefined1 *)(param_2 + 0xbb) = 3;
LAB_010a7584:
    *(undefined1 *)local_49c = 3;
LAB_010a786c:
    uVar3 = 3;
    *(undefined1 *)local_4a0 = 3;
    *param_1 = 0x80000017;
  }
  *(undefined1 *)(param_2 + 0xbe) = uVar3;
  return;
}

