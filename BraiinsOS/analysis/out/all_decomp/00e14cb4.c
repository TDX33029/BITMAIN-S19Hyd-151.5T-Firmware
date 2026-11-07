// FUN_00e14cb4 @ 00e14cb4 size=4724 calls_out=30 calls_in=0
// strings: Bosminer.client_replace | Bosminer.client_replace | SetGloba | SetGloba | lDefaultError | BeginRequestCompleteRequest

/* WARNING: Removing unreachable block (ram,0x00e16d9c) */

uint FUN_00e14cb4(int param_1,int *param_2)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  char *pcVar21;
  int *****pppppiVar22;
  int iVar23;
  int *piVar24;
  int ****ppppiVar25;
  int iVar26;
  int iVar27;
  undefined *puVar28;
  bool bVar29;
  undefined8 uVar30;
  undefined1 *local_1cd4;
  int local_1cd0;
  undefined4 local_1cb8;
  undefined4 local_1cb4;
  int local_1ca0;
  int local_1c9c;
  undefined4 uStack_1c98;
  undefined4 uStack_1c94;
  int ****local_1c90;
  int local_1c8c;
  undefined1 auStack_1c00 [2280];
  undefined1 auStack_1318 [2188];
  undefined4 local_a8c;
  undefined4 local_a88;
  undefined4 uStack_a84;
  undefined4 uStack_a80;
  undefined4 uStack_a7c;
  undefined4 uStack_a78;
  undefined4 uStack_a74;
  undefined4 local_a70;
  undefined4 uStack_a6c;
  undefined4 uStack_a68;
  undefined4 uStack_a64;
  undefined4 uStack_a60;
  undefined4 uStack_a5c;
  undefined4 local_a58;
  undefined4 uStack_a54;
  undefined4 uStack_a50;
  undefined4 uStack_a4c;
  undefined4 local_a48;
  undefined4 uStack_a44;
  undefined4 uStack_a40;
  undefined4 uStack_a3c;
  undefined1 auStack_a38 [168];
  undefined1 auStack_990 [72];
  undefined4 local_948;
  undefined4 uStack_944;
  undefined4 uStack_940;
  undefined4 uStack_93c;
  undefined4 uStack_938;
  undefined4 uStack_934;
  undefined4 local_930;
  undefined4 uStack_92c;
  undefined4 uStack_928;
  undefined4 uStack_924;
  undefined4 uStack_920;
  undefined4 uStack_91c;
  undefined4 local_918;
  undefined4 uStack_914;
  undefined4 uStack_910;
  undefined4 uStack_90c;
  undefined4 uStack_908;
  undefined4 uStack_904;
  undefined4 local_900;
  undefined4 uStack_8fc;
  undefined4 uStack_8f8;
  undefined4 uStack_8f4;
  undefined4 uStack_8f0;
  undefined4 uStack_8ec;
  int ***local_8e8;
  undefined4 local_8e4;
  undefined4 *local_8e0;
  int ****local_604;
  undefined4 local_600;
  int *local_5f0;
  int *****local_5ec;
  undefined *local_5e8;
  undefined4 local_5e4;
  undefined4 local_5e0;
  int **local_308;
  int *****local_304;
  int *local_300;
  
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("internal error: entered unreachable code: unexpected stage",0x75,&DAT_018ace94);
  }
  uVar30 = thunk_FUN_016de0ee(0,0x40);
  iVar23 = (int)uVar30 + (int)((ulonglong)uVar30 >> 0x20);
  uVar16 = *(undefined4 *)(param_1 + 8);
  uVar19 = *(undefined4 *)(param_1 + 0xc);
  if (*(char *)(iVar23 + 0x38) == '\x01') {
LAB_00e14d2c:
    local_1cb4 = *(undefined4 *)(iVar23 + 0x18);
    local_1cb8 = *(undefined4 *)(iVar23 + 0x1c);
    *(undefined4 *)(iVar23 + 0x18) = uVar16;
    *(undefined4 *)(iVar23 + 0x1c) = uVar19;
  }
  else {
    local_1cb4 = 0;
    local_1cb8 = 0;
    if (*(char *)(iVar23 + 0x38) != '\x02') {
      FUN_015e8e6c(iVar23,FUN_01655ec4);
      *(undefined1 *)(iVar23 + 0x38) = 1;
      goto LAB_00e14d2c;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x990)) {
  case 0:
    FUN_016dd1aa(&local_1ca0,param_1 + 0x18,0xa0);
    FUN_016dd1aa(auStack_1c00,param_1 + 0xb8,0x48);
    FUN_016dd1aa(auStack_1318,&local_1ca0,0x888);
    FUN_016dd1aa(param_1 + 0x100,auStack_1318,0x888);
    *(undefined1 *)(param_1 + 0x988) = 0;
switchD_00e14de0_caseD_0:
    uVar16 = *(undefined4 *)(param_1 + 0x150);
    uVar19 = *(undefined4 *)(param_1 + 0x154);
    local_a88 = *(undefined4 *)(param_1 + 0x158);
    uStack_a84 = *(undefined4 *)(param_1 + 0x15c);
    uStack_a80 = *(undefined4 *)(param_1 + 0x160);
    uStack_a7c = *(undefined4 *)(param_1 + 0x164);
    uStack_a78 = *(undefined4 *)(param_1 + 0x168);
    uStack_a74 = *(undefined4 *)(param_1 + 0x16c);
    local_a70 = *(undefined4 *)(param_1 + 0x170);
    uStack_a6c = *(undefined4 *)(param_1 + 0x174);
    uStack_a68 = *(undefined4 *)(param_1 + 0x178);
    uStack_a64 = *(undefined4 *)(param_1 + 0x17c);
    uStack_a60 = *(undefined4 *)(param_1 + 0x180);
    uStack_a5c = *(undefined4 *)(param_1 + 0x184);
    uVar3 = *(undefined4 *)(param_1 + 0x198);
    uVar17 = *(undefined4 *)(param_1 + 0x19c);
    *(undefined1 *)(param_1 + 0x98d) = 1;
    FUN_016dd1aa(param_1 + 0x1e8,param_1 + 0x1a0,0x48);
    *(undefined2 *)(param_1 + 0x98a) = 0x101;
    *(undefined1 *)(param_1 + 0x98c) = 1;
    *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_1 + 0x188);
    *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_1 + 0x18c);
    *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_1 + 400);
    *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_1 + 0x194);
    puVar8 = (undefined4 *)(param_1 + 0x240);
    *puVar8 = *(undefined4 *)(param_1 + 0x100);
    *(undefined4 *)(param_1 + 0x244) = *(undefined4 *)(param_1 + 0x104);
    *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_1 + 0x108);
    *(undefined4 *)(param_1 + 0x24c) = *(undefined4 *)(param_1 + 0x10c);
    *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_1 + 0x110);
    *(undefined4 *)(param_1 + 0x254) = *(undefined4 *)(param_1 + 0x114);
    *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_1 + 0x118);
    *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_1 + 0x11c);
    *(undefined1 *)(param_1 + 0x989) = 1;
    *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_1 + 0x120);
    *(undefined4 *)(param_1 + 0x264) = *(undefined4 *)(param_1 + 0x124);
    *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_1 + 0x128);
    *(undefined4 *)(param_1 + 0x26c) = *(undefined4 *)(param_1 + 300);
    *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_1 + 0x130);
    *(undefined4 *)(param_1 + 0x274) = *(undefined4 *)(param_1 + 0x134);
    *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(param_1 + 0x138);
    *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(param_1 + 0x13c);
    *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_1 + 0x140);
    *(undefined4 *)(param_1 + 0x284) = *(undefined4 *)(param_1 + 0x144);
    *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_1 + 0x148);
    *(undefined4 *)(param_1 + 0x28c) = *(undefined4 *)(param_1 + 0x14c);
    iVar4 = *(int *)(param_1 + 0x260);
    if (-1 < iVar4) {
      iVar4 = 0xf;
    }
    local_8e4 = *(undefined4 *)(&DAT_00358494 + iVar4 * 4);
    iVar26 = *(int *)(param_1 + 600);
    local_8e8 = (int ***)(&PTR_DAT_01879b1c)[iVar4];
    local_604 = &local_8e8;
    local_a8c = uVar17;
    if (iVar26 != 0) {
      iVar4 = *(int *)(iVar26 + 0x1c);
      if (*(int *)(iVar26 + 0x20) != 0) {
        iVar27 = *(int *)(iVar26 + 0x20) << 3;
        ppppiVar25 = (int ****)0x0;
        do {
          puVar5 = (undefined4 *)(iVar4 + (int)ppppiVar25 * 8);
          if ((puVar5[1] == 9) && (iVar6 = thunk_FUN_016dd50a(*puVar5,&DAT_004124bb,9), iVar6 == 0))
          {
            local_1c9c = *(int *)(iVar26 + 0x20);
            uStack_1c98 = *(undefined4 *)(iVar26 + 0x24);
            uStack_1c94 = *(undefined4 *)(iVar26 + 0x28);
            local_308 = &local_5f0;
            local_304 = (int *****)&DAT_00000001;
            local_5ec = &local_604;
            local_5f0 = &local_1ca0;
            local_5e8 = &DAT_0187ac20;
            local_1ca0 = iVar4;
            local_1c90 = ppppiVar25;
            local_300 = (int *)(iVar26 + 0x1c);
            FUN_01694880(puVar8,&local_308);
            break;
          }
          ppppiVar25 = (int ****)((int)ppppiVar25 + 1);
          iVar27 = iVar27 + -8;
        } while (iVar27 != 0);
      }
    }
    *(undefined2 *)(param_1 + 0x98c) = 0;
    *(undefined1 *)(param_1 + 0x989) = 0;
    FUN_016dd1aa(auStack_990,param_1 + 0x1e8,0x48);
    local_948 = local_a88;
    uStack_944 = uStack_a84;
    uStack_940 = uStack_a80;
    uStack_93c = uStack_a7c;
    uStack_938 = uStack_a78;
    uStack_934 = uStack_a74;
    local_930 = local_a70;
    uStack_92c = uStack_a6c;
    uStack_928 = uStack_a68;
    uStack_924 = uStack_a64;
    uStack_920 = uStack_a60;
    uStack_91c = uStack_a5c;
    local_918 = *(undefined4 *)(param_1 + 0x260);
    uStack_914 = *(undefined4 *)(param_1 + 0x264);
    uStack_910 = *(undefined4 *)(param_1 + 0x268);
    uStack_90c = *(undefined4 *)(param_1 + 0x26c);
    uStack_908 = *(undefined4 *)(param_1 + 0x270);
    uStack_904 = *(undefined4 *)(param_1 + 0x274);
    local_900 = *(undefined4 *)(param_1 + 0x278);
    uStack_8fc = *(undefined4 *)(param_1 + 0x27c);
    uStack_8f8 = *(undefined4 *)(param_1 + 0x280);
    uStack_8f4 = *(undefined4 *)(param_1 + 0x284);
    uStack_8f0 = *(undefined4 *)(param_1 + 0x288);
    uStack_8ec = *(undefined4 *)(param_1 + 0x28c);
    *(undefined2 *)(param_1 + 0x98a) = 0;
    local_a58 = *puVar8;
    uStack_a54 = *(undefined4 *)(param_1 + 0x244);
    uStack_a50 = *(undefined4 *)(param_1 + 0x248);
    uStack_a4c = *(undefined4 *)(param_1 + 0x24c);
    local_a48 = *(undefined4 *)(param_1 + 0x250);
    uStack_a44 = *(undefined4 *)(param_1 + 0x254);
    uStack_a40 = *(undefined4 *)(param_1 + 600);
    uStack_a3c = *(undefined4 *)(param_1 + 0x25c);
    FUN_016dd1aa(auStack_a38,auStack_990,0xa8);
    FUN_016dd1aa(param_1 + 0x290,&local_a58,200);
    *(undefined1 *)(param_1 + 0x364) = 0;
    *(undefined4 *)(param_1 + 0x358) = uVar16;
    *(undefined4 *)(param_1 + 0x35c) = uVar19;
    *(undefined4 *)(param_1 + 0x980) = uVar3;
    *(undefined4 *)(param_1 + 0x360) = uVar17;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01878bf8);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01878bf8,param_1 + 0x18);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x988)) {
    case 0:
      goto switchD_00e14de0_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01879144);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01879144);
    case 3:
    }
  }
  local_1cd0 = param_1 + 0x100;
  local_1cd4 = (undefined1 *)(param_1 + 0x988);
  iVar4 = param_1 + 0x290;
  if (*(uint *)(param_1 + 0x298) != 2) {
    iVar26 = *(int *)(param_1 + 0x29c);
    if ((*(uint *)(param_1 + 0x298) & 1) != 0) {
      iVar26 = iVar26 + (*(int *)(*(int *)(param_1 + 0x2a0) + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(*(int *)(param_1 + 0x2a0) + 0x30))(iVar26,iVar4);
  }
  uVar20 = 0;
  if (*(char *)(*(int *)(param_1 + 0x980) + 0x14) == '\0') {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x364)) {
    case 0:
      *(undefined2 *)(param_1 + 0x365) = 0x100;
      *(undefined1 *)(param_1 + 0x367) = 1;
      if (2 < DAT_018d9130) goto LAB_00e153f8;
      uVar20 = (uint)DAT_018daa18;
      if (1 < uVar20 - 1) {
        if (uVar20 == 0) goto LAB_00e153f8;
        uVar20 = FUN_0169ac90(&DAT_018daa10);
        uVar20 = uVar20 & 0xff;
        if (uVar20 == 0) goto LAB_00e153f8;
      }
      if (uVar20 != 2) {
        DataMemoryBarrier(0xb);
        puVar28 = &DAT_018ae394;
        pcVar21 = s_SetGloba_00414c05;
        if ((DAT_018dd984 == 2) &&
           (pcVar21 = DAT_018daa74, puVar28 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar21 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        iVar23 = (**(code **)(puVar28 + 0x14))(pcVar21);
        if (iVar23 == 0) goto LAB_00e153f8;
      }
      local_8e0 = (undefined4 *)(DAT_018daa10 + 0x1c);
      if (*(int ******)(DAT_018daa10 + 0x20) == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0187aac0);
      }
      local_304 = &local_604;
      local_5e8 = *(undefined **)(DAT_018daa10 + 0x24);
      local_5e4 = *(undefined4 *)(DAT_018daa10 + 0x28);
      local_308 = &local_5f0;
      local_8e8 = &local_308;
      local_604 = (int ****)0x359116;
      puVar28 = &DAT_018ae394;
      local_5e0 = 0;
      local_1c9c = 0;
      local_1c90 = &local_8e8;
      local_8e4 = 1;
      local_300 = (int *)&DAT_018abb78;
      local_600 = 0x19;
      local_1ca0 = 1;
      DataMemoryBarrier(0xb);
      pcVar21 = s_SetGloba_00414c05;
      if ((DAT_018dd984 == 2) && (pcVar21 = DAT_018daa74, puVar28 = DAT_018daa78, DAT_018daa70 != 0)
         ) {
        pcVar21 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      local_1c8c = DAT_018daa10;
      local_5f0 = (int *)*local_8e0;
      local_5ec = *(int ******)(DAT_018daa10 + 0x20);
      iVar23 = (**(code **)(puVar28 + 0x28))(pcVar21,&local_1ca0);
      if (iVar23 != 0) {
        (**(code **)(puVar28 + 0x2c))(pcVar21,&local_1ca0);
      }
LAB_00e153f8:
      *(undefined2 *)(param_1 + 0x366) = 0;
      iVar23 = 0xf;
      if (*(int *)(param_1 + 0x328) < 0) {
        iVar23 = *(int *)(param_1 + 0x328);
      }
                    /* WARNING: Could not recover jumptable at 0x00e15444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar20 = (*(code *)(&DAT_00e15448 + *(int *)(&DAT_00e15448 + iVar23 * 4)))();
      return uVar20;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187aad0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187aad0);
    case 3:
                    /* WARNING: Could not recover jumptable at 0x00e15d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar20 = (*(code *)(&DAT_00e15d88 + *(int *)(&DAT_00e15d88 + *(int *)(param_1 + 0x368) * 4)))
                         ();
      return uVar20;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x97c)) {
    case 0:
      piVar24 = *(int **)(param_1 + 0x978);
      *(undefined1 *)(param_1 + 0x97d) = 1;
      FUN_016dd1aa(param_1 + 0x650,param_1 + 0x368,0x2e8);
      *(int **)(param_1 + 0x938) = piVar24;
      *(undefined1 *)(param_1 + 0x974) = 0;
LAB_00e16870:
      uVar20 = 1;
      *(int **)(param_1 + 0x940) = piVar24;
      *(undefined4 *)(param_1 + 0x944) = 1;
      *(int **)(param_1 + 0x93c) = piVar24;
      *(undefined1 *)(param_1 + 0x950) = 0;
LAB_00e16890:
      *(int **)(param_1 + 0x948) = piVar24;
      *(uint *)(param_1 + 0x94c) = uVar20;
LAB_00e16898:
      iVar26 = *piVar24;
      if (uVar20 <= *(uint *)(iVar26 + 0x94)) {
        *(uint *)(param_1 + 0x968) = uVar20;
        *(uint *)(param_1 + 0x96c) = uVar20;
        *(undefined1 *)(param_1 + 0x970) = 0;
        *(undefined4 *)(param_1 + 0x960) = 0;
        *(undefined4 *)(param_1 + 0x964) = 0;
        *(int *)(param_1 + 0x954) = iVar26 + 0x80;
        *(undefined4 *)(param_1 + 0x958) = 0;
        goto switchD_00e1536c_caseD_4;
      }
      *(undefined1 *)(param_1 + 0x950) = 1;
LAB_00e16968:
      *(undefined1 *)(param_1 + 0x97d) = 0;
      piVar24 = *(int **)(param_1 + 0x650);
      pppppiVar22 = *(int ******)(param_1 + 0x654);
      *(undefined1 *)(param_1 + 0x974) = 1;
      FUN_016dd1aa(&local_308,param_1 + 0x658,0x2e0);
      *(undefined1 *)(param_1 + 0x97c) = 1;
      if (piVar24 != (int *)&DAT_0000001f || pppppiVar22 != (int *****)0x0) {
LAB_00e16ed0:
        FUN_016dd1aa(&local_5e8,&local_308,0x2e0);
        local_5f0 = piVar24;
        local_5ec = pppppiVar22;
        FUN_00e94328(param_1 + 0x368);
        if (((uint)local_5f0 & 0x1f) == 0x1d) {
          if (local_5e8 != (undefined *)0x0) {
            thunk_FUN_016d3fb4(local_5e4);
          }
        }
        else if (local_5f0 != (int *)&DAT_0000001e) {
          FUN_00e7b8f4(&local_5f0);
        }
        if (DAT_018d9130 < 3) {
          uVar20 = (uint)DAT_018daa24;
          if (uVar20 - 1 < 2) {
LAB_00e16f84:
            if (uVar20 != 2) {
              DataMemoryBarrier(0xb);
              puVar28 = &DAT_018ae394;
              pcVar21 = s_SetGloba_00414c05;
              if ((DAT_018dd984 == 2) &&
                 (pcVar21 = DAT_018daa74, puVar28 = DAT_018daa78, DAT_018daa70 != 0)) {
                pcVar21 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
              }
              iVar26 = (**(code **)(puVar28 + 0x14))(pcVar21,DAT_018daa1c);
              if (iVar26 == 0) goto LAB_00e17098;
            }
            if (*(int *)(DAT_018daa1c + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0187aaf0);
            }
            local_5ec = &local_604;
            uStack_1c98 = *(undefined4 *)(DAT_018daa1c + 0x24);
            uStack_1c94 = *(undefined4 *)(DAT_018daa1c + 0x28);
            local_5f0 = &local_1ca0;
            local_1c90 = (int ****)0x0;
            local_304 = (int *****)&DAT_00000001;
            local_5e8 = &DAT_018abb78;
            local_604 = (int ****)0x359131;
            local_600 = 0x1d;
            local_1ca0 = *(int *)(DAT_018daa1c + 0x1c);
            local_1c9c = *(int *)(DAT_018daa1c + 0x20);
            local_308 = &local_5f0;
            local_300 = (int *)(DAT_018daa1c + 0x1c);
            FUN_0169bb88(DAT_018daa1c,&local_308);
          }
          else if (uVar20 != 0) {
            uVar20 = FUN_0169ac90(&DAT_018daa1c);
            uVar20 = uVar20 & 0xff;
            if (uVar20 != 0) goto LAB_00e16f84;
          }
        }
LAB_00e17098:
        iVar26 = *(int *)(param_1 + 0x360);
        *(undefined1 *)(param_1 + 0x365) = 0;
        piVar24 = (int *)(iVar26 + 0x98);
        DataMemoryBarrier(0xb);
        do {
          iVar27 = *piVar24;
          bVar29 = (bool)hasExclusiveAccess(piVar24);
        } while (!bVar29);
        *piVar24 = iVar27 + -1;
        DataMemoryBarrier(0xb);
        if (iVar27 == 1) {
          FUN_005c9e50(iVar26 + 0x20);
          puVar7 = (uint *)(iVar26 + 0x48);
          DataMemoryBarrier(0xb);
          do {
            uVar20 = *puVar7;
            bVar29 = (bool)hasExclusiveAccess(puVar7);
          } while (!bVar29);
          *puVar7 = uVar20 | 2;
          DataMemoryBarrier(0xb);
          if (uVar20 == 0) {
            iVar27 = *(int *)(iVar26 + 0x40);
            *(undefined4 *)(iVar26 + 0x40) = 0;
            DataMemoryBarrier(0xb);
            do {
              bVar29 = (bool)hasExclusiveAccess(puVar7);
            } while (!bVar29);
            *puVar7 = 0;
            if (iVar27 != 0) {
              (**(code **)(iVar27 + 4))(*(undefined4 *)(iVar26 + 0x44));
            }
          }
        }
        piVar24 = *(int **)(param_1 + 0x360);
        DataMemoryBarrier(0xb);
        do {
          iVar26 = *piVar24;
          bVar29 = (bool)hasExclusiveAccess(piVar24);
        } while (!bVar29);
        *piVar24 = iVar26 + -1;
        if (iVar26 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00e45658(*(undefined4 *)(param_1 + 0x360));
        }
        uVar20 = 0;
        *(undefined1 *)(param_1 + 0x364) = 1;
        uVar11 = *(uint *)(param_1 + 0x298);
        goto joined_r0x00e1717c;
      }
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187ab10);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187ab10);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x974)) {
      case 0:
        piVar24 = *(int **)(param_1 + 0x938);
        goto LAB_00e16870;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0187ab20);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0187ab20);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x950)) {
      case 0:
        piVar24 = *(int **)(param_1 + 0x940);
        uVar20 = *(uint *)(param_1 + 0x944);
        goto LAB_00e16890;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0187ab00);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0187ab00);
      case 3:
        piVar24 = *(int **)(param_1 + 0x948);
        uVar20 = *(uint *)(param_1 + 0x94c);
        goto LAB_00e16898;
      }
switchD_00e1536c_caseD_4:
      bVar2 = FUN_0163c8bc(param_1 + 0x954,param_2);
      if (bVar2 != 2) {
        FUN_0163c790(param_1 + 0x954);
        if (*(int *)(param_1 + 0x958) != 0) {
          (**(code **)(*(int *)(param_1 + 0x958) + 0xc))(*(undefined4 *)(param_1 + 0x95c));
        }
        *(undefined1 *)(param_1 + 0x950) = 1;
        if ((bVar2 & 1) != 0) goto LAB_00e16968;
        *(undefined1 *)(param_1 + 0x974) = 1;
        *(undefined1 *)(param_1 + 0x97d) = 0;
        piVar24 = *(int **)(param_1 + 0x93c);
        FUN_016dd1aa(&local_1ca0,param_1 + 0x650,0x2e8);
        iVar26 = *piVar24;
        puVar7 = (uint *)(iVar26 + 0x24);
        piVar24 = (int *)(iVar26 + 0x20);
        do {
          uVar20 = *puVar7;
          bVar29 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar29);
        *puVar7 = uVar20 + 1;
        DataMemoryBarrier(0xb);
        iVar27 = *piVar24;
        DataMemoryBarrier(0xb);
        uVar11 = uVar20 & 0xfffffff0;
        if (uVar11 != *(uint *)(iVar27 + 0x2e80)) {
          bVar29 = (uVar20 & 0xf) < uVar11 - *(uint *)(iVar27 + 0x2e80) >> 4;
          iVar6 = iVar27;
          do {
            DataMemoryBarrier(0xb);
            iVar27 = *(int *)(iVar6 + 0x2e84);
            if (*(int *)(iVar6 + 0x2e84) == 0) {
              iVar18 = *(int *)(iVar6 + 0x2e80);
              iVar27 = thunk_FUN_016d4a50(0x2e90);
              if (iVar27 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600874(8,0x2e90);
              }
              piVar9 = (int *)(iVar27 + 0x2e80);
              piVar13 = (int *)(iVar6 + 0x2e84);
              *piVar9 = iVar18 + 0x10;
              *(undefined4 *)(iVar27 + 0x2e84) = 0;
              *(undefined4 *)(iVar27 + 0x2e88) = 0;
              *(undefined4 *)(iVar27 + 0x2e8c) = 0;
              iVar18 = *piVar13;
              if (iVar18 == 0) {
                DataMemoryBarrier(0xb);
                do {
                  bVar1 = (bool)hasExclusiveAccess(piVar13);
                  if (bVar1) {
                    *piVar13 = iVar27;
                    DataMemoryBarrier(0xb);
                    goto LAB_00e16d40;
                  }
                  iVar18 = *piVar13;
                } while (iVar18 == 0);
              }
              ClearExclusiveLocal();
              DataMemoryBarrier(0xb);
              piVar13 = (int *)(iVar18 + 0x2e84);
              *piVar9 = *(int *)(iVar18 + 0x2e80) + 0x10;
              iVar14 = *piVar13;
              if (iVar14 == 0) {
                DataMemoryBarrier(0xb);
                do {
                  bVar1 = (bool)hasExclusiveAccess(piVar13);
                  if (bVar1) {
                    *piVar13 = iVar27;
                    bVar1 = true;
                    goto LAB_00e16cdc;
                  }
                  iVar14 = *piVar13;
                } while (iVar14 == 0);
              }
LAB_00e16cd4:
              do {
                bVar1 = false;
                ClearExclusiveLocal();
LAB_00e16cdc:
                while( true ) {
                  DataMemoryBarrier(0xb);
                  if (bVar1) {
                    iVar27 = iVar18;
                    goto LAB_00e16d40;
                  }
                  HintYield();
                  piVar13 = (int *)(iVar14 + 0x2e84);
                  *piVar9 = *(int *)(iVar14 + 0x2e80) + 0x10;
                  iVar14 = *piVar13;
                  if (iVar14 != 0) break;
                  DataMemoryBarrier(0xb);
                  while (bVar1 = (bool)hasExclusiveAccess(piVar13), !bVar1) {
                    iVar14 = *piVar13;
                    if (iVar14 != 0) goto LAB_00e16cd4;
                  }
                  *piVar13 = iVar27;
                  bVar1 = true;
                }
              } while( true );
            }
LAB_00e16d40:
            DataMemoryBarrier(0xb);
            if ((bool)(bVar29 & (~*(uint *)(iVar6 + 0x2e88) & 0xffff) == 0)) {
              if (*piVar24 == iVar6) {
                DataMemoryBarrier(0xb);
LAB_00e16d70:
                bVar29 = (bool)hasExclusiveAccess(piVar24);
                if (!bVar29) goto code_r0x00e16d7c;
                *piVar24 = iVar27;
                puVar10 = (uint *)(iVar6 + 0x2e88);
                DataMemoryBarrier(0xb);
                do {
                  uVar12 = *puVar7;
                  bVar29 = (bool)hasExclusiveAccess(puVar7);
                } while (!bVar29);
                *puVar7 = uVar12;
                *(uint *)(iVar6 + 0x2e8c) = uVar12;
                DataMemoryBarrier(0xb);
                do {
                  bVar29 = (bool)hasExclusiveAccess(puVar10);
                } while (!bVar29);
                *puVar10 = *puVar10 | 0x10000;
                bVar29 = true;
                goto LAB_00e16be4;
              }
LAB_00e16d88:
              ClearExclusiveLocal();
              bVar29 = false;
            }
            else {
              bVar29 = false;
            }
LAB_00e16be4:
            HintYield();
            iVar6 = iVar27;
          } while (*(uint *)(iVar27 + 0x2e80) != uVar11);
        }
        FUN_016dd52c((short)((ushort)uVar20 & 0xf) * 0x2e8 + iVar27,&local_1ca0,0x2e8);
        puVar7 = (uint *)(iVar27 + 0x2e88);
        DataMemoryBarrier(0xb);
        do {
          bVar29 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar29);
        *puVar7 = *puVar7 | 1 << (uVar20 & 0xf);
        puVar7 = (uint *)(iVar26 + 0x48);
        DataMemoryBarrier(0xb);
        do {
          uVar20 = *puVar7;
          bVar29 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar29);
        *puVar7 = uVar20 | 2;
        DataMemoryBarrier(0xb);
        if (uVar20 == 0) {
          iVar27 = *(int *)(iVar26 + 0x40);
          *(undefined4 *)(iVar26 + 0x40) = 0;
          DataMemoryBarrier(0xb);
          do {
            bVar29 = (bool)hasExclusiveAccess(puVar7);
          } while (!bVar29);
          *puVar7 = 0;
          if (iVar27 != 0) {
            (**(code **)(iVar27 + 4))(*(undefined4 *)(iVar26 + 0x44));
          }
        }
        pppppiVar22 = (int *****)0x0;
        piVar24 = (int *)&DAT_0000001e;
        *(undefined2 *)(param_1 + 0x97c) = 1;
        goto LAB_00e16ed0;
      }
      *(undefined1 *)(param_1 + 0x950) = 4;
      *(undefined1 *)(param_1 + 0x974) = 3;
      *(undefined1 *)(param_1 + 0x97c) = 3;
    }
    *(undefined1 *)(param_1 + 0x364) = 4;
    iVar26 = *(int *)(param_1 + 0x980);
    param_2 = (int *)*param_2;
    piVar24 = (int *)(iVar26 + 0x10);
    do {
      iVar27 = *piVar24;
      if (iVar27 != 0) {
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
        if (iVar27 != 2) goto LAB_00e169e8;
        iVar27 = param_2[1];
        puVar8 = (undefined4 *)(*param_2 + 8);
        goto LAB_00e16af0;
      }
      bVar29 = (bool)hasExclusiveAccess(piVar24);
    } while (!bVar29);
    *piVar24 = 1;
    DataMemoryBarrier(0xb);
LAB_00e169e8:
    if (iVar27 == 0) {
      if (*(undefined4 **)(iVar26 + 8) == (undefined4 *)0x0) {
        iVar27 = param_2[1];
LAB_00e16a5c:
        uVar30 = (**(code **)*param_2)(iVar27);
        if (*(int *)(iVar26 + 8) != 0) {
          (**(code **)(*(int *)(iVar26 + 8) + 0xc))(*(undefined4 *)(iVar26 + 0xc));
        }
        *(undefined8 *)(iVar26 + 8) = uVar30;
        iVar27 = *piVar24;
      }
      else {
        iVar27 = param_2[1];
        if (*(int *)(iVar26 + 0xc) != iVar27 ||
            *(undefined4 **)(iVar26 + 8) != (undefined4 *)*param_2) goto LAB_00e16a5c;
        iVar27 = *piVar24;
      }
      if (iVar27 == 1) {
        DataMemoryBarrier(0xb);
        do {
          bVar29 = (bool)hasExclusiveAccess(piVar24);
          if (bVar29) {
            *piVar24 = 0;
            DataMemoryBarrier(0xb);
            goto LAB_00e16afc;
          }
        } while (*piVar24 == 1);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      iVar6 = *(int *)(iVar26 + 8);
      iVar27 = *(int *)(iVar26 + 0xc);
      *(undefined4 *)(iVar26 + 8) = 0;
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01882284);
      }
      DataMemoryBarrier(0xb);
      do {
        bVar29 = (bool)hasExclusiveAccess(piVar24);
      } while (!bVar29);
      *piVar24 = 0;
      puVar8 = (undefined4 *)(iVar6 + 4);
      DataMemoryBarrier(0xb);
LAB_00e16af0:
      (*(code *)*puVar8)(iVar27);
    }
LAB_00e16afc:
    uVar20 = (uint)(*(char *)(*(int *)(param_1 + 0x980) + 0x14) == '\0');
    uVar11 = *(uint *)(param_1 + 0x298);
  }
  else {
    uVar11 = *(uint *)(param_1 + 0x298);
  }
joined_r0x00e1717c:
  if (uVar11 != 2) {
    iVar26 = *(int *)(param_1 + 0x29c);
    if ((uVar11 & 1) != 0) {
      iVar26 = iVar26 + (*(int *)(*(int *)(param_1 + 0x2a0) + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(*(int *)(param_1 + 0x2a0) + 0x34))(iVar26,iVar4);
  }
  if (uVar20 == 0) {
    FUN_005e5304(iVar4);
    FUN_005c3320(iVar4);
    *(undefined1 *)(param_1 + 0x989) = 0;
    *(undefined1 *)(param_1 + 0x23c) = 0;
    *(undefined2 *)(param_1 + 0x98a) = 0;
    FUN_005c3a18(param_1 + 0x230);
    uVar15 = 1;
    *(undefined1 *)(param_1 + 0x98c) = 0;
    *(undefined1 *)(param_1 + 0x988) = 1;
    *(undefined1 *)(param_1 + 0x98d) = 0;
    FUN_00ddffe0(local_1cd0);
  }
  else {
    uVar15 = 3;
    *local_1cd4 = 3;
  }
  *(undefined1 *)(param_1 + 0x990) = uVar15;
  if (*(char *)(iVar23 + 0x38) != '\x01') {
    if (*(char *)(iVar23 + 0x38) == '\x02') goto joined_r0x00e17238;
    FUN_015e8e6c(iVar23,FUN_01655ec4);
    *(undefined1 *)(iVar23 + 0x38) = 1;
  }
  *(undefined4 *)(iVar23 + 0x18) = local_1cb4;
  *(undefined4 *)(iVar23 + 0x1c) = local_1cb8;
joined_r0x00e17238:
  if (uVar20 == 0) {
    local_1ca0 = 2;
    FUN_00e17c48(param_1,&local_1ca0);
    return 0;
  }
  return uVar20;
code_r0x00e16d7c:
  if (*piVar24 != iVar6) goto LAB_00e16d88;
  goto LAB_00e16d70;
}

