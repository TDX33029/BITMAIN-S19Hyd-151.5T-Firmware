// FUN_00a739e8 @ 00a739e8 size=2632 calls_out=27 calls_in=0
// strings: addpool | Bosminer.client_add | BUG: missing ADDPOOL parameter | BUG: invalid ADDPOOL parameter type | internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a739e8(uint *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  undefined1 uVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  bool bVar19;
  undefined4 local_1220;
  uint *local_121c;
  undefined4 *local_1218;
  uint local_1214;
  uint local_1208;
  uint local_1200;
  uint local_11fc;
  uint local_11f8;
  uint local_11f4;
  uint local_11f0;
  uint local_11ec;
  undefined4 local_11e8;
  int local_11e4;
  int local_11e0;
  int local_11dc;
  uint local_11d8;
  uint uStack_11d4;
  uint uStack_11d0;
  uint uStack_11cc;
  undefined4 uStack_11c8;
  undefined4 uStack_11c4;
  uint local_11c0;
  uint uStack_11bc;
  uint uStack_11b8;
  undefined1 auStack_11b0 [440];
  undefined1 auStack_ff8 [440];
  undefined4 local_e40;
  int local_e3c;
  int iStack_e38;
  int iStack_e34;
  uint local_e30;
  uint local_e2c;
  uint local_e28;
  uint local_e20;
  undefined4 uStack_e1c;
  undefined4 uStack_e18;
  undefined4 uStack_e14;
  undefined4 uStack_e10;
  undefined4 local_e0c;
  undefined4 uStack_e08;
  undefined4 uStack_e04;
  undefined4 uStack_e00;
  undefined4 uStack_dfc;
  uint local_df8;
  uint uStack_df4;
  uint uStack_df0;
  uint uStack_dec;
  uint uStack_de8;
  uint uStack_de4;
  uint local_de0;
  uint uStack_ddc;
  undefined4 uStack_dd8;
  undefined4 uStack_dd4;
  undefined4 uStack_dd0;
  int iStack_dcc;
  undefined1 auStack_dc8 [440];
  undefined1 auStack_c10 [440];
  undefined1 auStack_a58 [440];
  uint local_8a0;
  uint local_89c;
  uint local_898;
  uint local_894;
  uint local_890;
  uint local_88c;
  uint local_888;
  uint local_884;
  undefined4 local_880;
  undefined4 local_87c;
  undefined1 auStack_878 [440];
  undefined1 auStack_6c0 [256];
  uint local_5c0;
  uint local_5bc;
  uint local_5b8;
  uint local_5b4;
  uint local_5b0;
  uint local_5ac;
  uint local_5a8;
  uint local_5a4;
  undefined4 local_5a0;
  undefined4 local_59c;
  undefined4 local_598;
  int local_594;
  undefined1 auStack_3e0 [256];
  undefined1 auStack_2e0 [256];
  undefined1 auStack_1e0 [444];
  
  puVar4 = param_2 + 10;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x22)) {
  case 0:
    pcVar9 = (char *)param_2[2];
    uVar17 = param_2[7];
    *(undefined2 *)(param_2 + 8) = 0;
    FUN_00a5cd54(&local_5c0,uVar17,"addpool",7);
    if (local_5c0 == 2) {
      if (pcVar9 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("BUG: missing ADDPOOL parameter",0x1e,&DAT_01c0f60c);
      }
      if (*pcVar9 != '\x03') {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("BUG: invalid ADDPOOL parameter type",0x23,&DAT_01c0f61c);
      }
      uVar18 = *(undefined4 *)(pcVar9 + 8);
      uVar8 = *(undefined4 *)(pcVar9 + 0xc);
      *param_2 = uVar18;
      param_2[1] = uVar8;
      FUN_00a5db40(&local_5c0,uVar18,uVar8,0);
      if (local_594 != 2) {
        local_11d8 = local_5b0;
        uStack_11d4 = local_5ac;
        uStack_11d0 = local_5a8;
        uStack_11cc = local_5a4;
        uStack_11c8 = local_5a0;
        uStack_11c4 = local_59c;
        param_2[0x3c] = local_5c0;
        param_2[0x3d] = local_5bc;
        param_2[0x3e] = local_5b8;
        param_2[0x3f] = local_5b4;
        *(undefined1 *)(param_2 + 8) = 1;
        param_2[0x40] = local_5b0;
        param_2[0x41] = local_5ac;
        param_2[0x42] = local_5a8;
        param_2[0x43] = local_5a4;
        param_2[0x44] = local_5a0;
        param_2[0x45] = local_59c;
        param_2[9] = uVar17;
        *(undefined1 *)(param_2 + 0x3b) = 0;
        param_2[3] = local_598;
        goto switchD_00a73a20_caseD_3;
      }
      iVar5 = param_2[1];
      if (iVar5 < 0) {
        uVar17 = 0;
LAB_00a73acc:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar17,iVar5);
      }
      uVar18 = *param_2;
      if (iVar5 == 0) {
        iVar7 = 0;
        iVar12 = 1;
      }
      else {
        uVar17 = 1;
        iVar12 = FUN_01298504(iVar5,1);
        if (iVar12 == 0) goto LAB_00a73acc;
        iVar7 = iVar5;
      }
      FUN_01bed4e2(iVar12,uVar18,iVar5);
      local_11e8 = 8;
      local_11e4 = iVar7;
      local_11e0 = iVar12;
      local_11dc = iVar5;
      FUN_014a5cd0(&local_1200,&local_11e8);
    }
    else {
      puVar4 = (uint *)((uint)&local_1200 | 4);
      *puVar4 = local_5bc;
      puVar4[1] = local_5b8;
      puVar4[2] = local_5b4;
      puVar4[3] = local_5b0;
      puVar4[4] = local_5ac;
      local_1200 = local_5c0;
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c0f62c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0f62c);
  case 3:
switchD_00a73a20_caseD_3:
    FUN_00a6fd0c(&local_5c0,param_2 + 9,param_3);
    uVar13 = local_5ac;
    uVar14 = local_5b0;
    uVar15 = local_5c0;
    if (local_5c0 == 3) {
      uVar3 = 3;
      *param_1 = 3;
      goto LAB_00a74384;
    }
    local_11c0 = local_5bc;
    uStack_11bc = local_5b8;
    uStack_11b8 = local_5b4;
    cVar1 = *(char *)(param_2 + 0x3b);
    bVar19 = cVar1 == '\x03';
    if (bVar19) {
      cVar1 = *(char *)(param_2 + 0x3a);
    }
    if (bVar19 && cVar1 == '\x03') {
      FUN_00b99500(param_2 + 0xb);
    }
    if (uVar15 == 2) {
      local_121c = param_2 + 4;
      *local_121c = local_11c0;
      param_2[5] = uStack_11bc;
      param_2[6] = uStack_11b8;
      *(undefined1 *)(param_2 + 8) = 0;
      local_1220 = param_2[3];
      *puVar4 = param_2[0x3c];
      param_2[0xb] = param_2[0x3d];
      param_2[0xc] = param_2[0x3e];
      param_2[0xd] = param_2[0x3f];
      param_2[0xe] = param_2[0x40];
      param_2[0xf] = param_2[0x41];
      param_2[0x10] = param_2[0x42];
      param_2[0x11] = param_2[0x43];
      param_2[0x12] = param_2[0x44];
      param_2[0x13] = param_2[0x45];
      *(undefined1 *)(param_2 + 0x17c) = 0;
      param_2[0x17a] = local_121c;
      param_2[0x17b] = local_1220;
      goto LAB_00a73cc4;
    }
    puVar4 = (uint *)((uint)&local_1200 | 4);
    *puVar4 = local_11c0;
    puVar4[1] = uStack_11bc;
    puVar4[2] = uStack_11b8;
    local_11ec = uVar13;
    local_11f0 = uVar14;
    local_1200 = uVar15;
    goto LAB_00a74248;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x17c)) {
    case 0:
      local_121c = (uint *)param_2[0x17a];
      local_1220 = param_2[0x17b];
LAB_00a73cc4:
      *(undefined1 *)((int)param_2 + 0x5f1) = 1;
      local_e20 = *puVar4;
      uStack_e1c = param_2[0xb];
      uStack_e18 = param_2[0xc];
      uStack_e14 = param_2[0xd];
      uStack_e10 = param_2[0xe];
      local_e0c = param_2[0xf];
      uStack_e08 = param_2[0x10];
      uStack_e04 = param_2[0x11];
      uStack_e00 = param_2[0x12];
      uStack_dfc = param_2[0x13];
      FUN_019cfcf0(&local_5c0);
      *(undefined1 *)((int)param_2 + 0x5f1) = 0;
      local_df8 = local_5c0;
      uStack_df4 = local_5bc;
      uStack_df0 = local_5b8;
      uStack_dec = local_5b4;
      uStack_de8 = local_5b0;
      uStack_de4 = local_5ac;
      local_de0 = local_5a8;
      uStack_ddc = local_5a4;
      uStack_dd8 = local_5a0;
      uStack_dd4 = local_59c;
      uStack_dd0 = local_598;
      iStack_dcc = local_594;
      param_2[0x1c] = 0x8000000e;
      param_2[0x1d] = local_e20;
      param_2[0x1e] = uStack_e1c;
      param_2[0x1f] = uStack_e18;
      param_2[0x20] = uStack_e14;
      param_2[0x21] = uStack_e10;
      param_2[0x22] = local_e0c;
      param_2[0x23] = uStack_e08;
      param_2[0x24] = uStack_e04;
      param_2[0x25] = uStack_e00;
      param_2[0x26] = uStack_dfc;
      param_2[0x2a] = "Bosminer.client_add";
      param_2[0x2b] = 0x13;
      param_2[0x27] = local_1220;
      param_2[0x2c] = local_5c0;
      param_2[0x2d] = local_5bc;
      param_2[0x2e] = local_5b8;
      param_2[0x2f] = local_5b4;
      param_2[0x30] = local_5b0;
      param_2[0x31] = local_5ac;
      param_2[0x32] = local_5a8;
      param_2[0x33] = local_5a4;
      param_2[0x34] = local_5a0;
      param_2[0x35] = local_59c;
      param_2[0x36] = local_598;
      param_2[0x37] = local_594;
      *(undefined1 *)(param_2 + 0x178) = 0;
      *(undefined1 *)((int)param_2 + 0xe7) = 0;
      param_2[0x38] = local_121c;
switchD_00a73b5c_caseD_0:
      FUN_01bed4e2(param_2 + 0xc6,param_2 + 0x14,0x2c8);
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c178b8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c178b8);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x178)) {
      case 0:
        goto switchD_00a73b5c_caseD_0;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1f170);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1f170);
      }
    }
    local_1218 = param_2 + 0x17c;
    puVar11 = param_2 + 0x178;
    FUN_00a55b84(&local_5c0,param_2 + 0xc6,param_3);
    uVar2 = local_5ac;
    uVar10 = local_5b0;
    uVar16 = local_5b4;
    uVar13 = local_5b8;
    uVar14 = local_5bc;
    uVar15 = local_5c0;
    if (local_5c0 == 0x1e && local_5bc == 0) {
      *(undefined1 *)puVar11 = 3;
LAB_00a73dcc:
      *(undefined1 *)local_1218 = 3;
      *param_1 = 3;
      uVar3 = 4;
      goto LAB_00a74384;
    }
    local_121c = (uint *)local_5b4;
    local_1208 = local_5b0;
    local_1214 = local_5ac;
    FUN_01bed4e2(auStack_1e0,&local_598,0x1b8);
    FUN_01bed4e2(auStack_2e0,auStack_3e0,0x100);
    FUN_00df9ef8(param_2 + 0xc6);
    if (uVar15 == 0x1d && uVar14 == 0) {
      uVar16 = 0;
      *(undefined1 *)puVar11 = 1;
      uVar10 = uVar13;
      uVar13 = 3;
    }
    else {
      local_888 = local_5a8;
      local_884 = local_5a4;
      local_880 = local_5a0;
      local_87c = local_59c;
      FUN_01bed4e2(auStack_878,auStack_1e0,0x1b8);
      FUN_01bed4e2(auStack_6c0,auStack_2e0,0x100);
      local_88c = uVar2;
      local_890 = uVar10;
      local_894 = uVar16;
      local_89c = uVar14;
      local_8a0 = uVar15;
      local_898 = uVar13;
      if (uVar15 != 0x12 || uVar14 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c1f170);
      }
      FUN_01bed4e2(auStack_dc8,auStack_1e0,0x1b8);
      *(undefined1 *)puVar11 = 1;
      if (uVar13 == 4 && uVar16 == 0) goto LAB_00a73dcc;
      FUN_01bed4e2(auStack_c10,auStack_dc8,0x1b8);
      if (uVar13 == 3 && uVar16 == 0) {
        uVar16 = 0;
        uVar13 = 3;
      }
      else {
        FUN_01bed4e2(auStack_a58,auStack_c10,0x1b8);
      }
      local_121c = (uint *)uVar2;
      local_1214 = local_5a4;
      local_1208 = local_5a8;
    }
    *(undefined1 *)((int)param_2 + 0x5f1) = 0;
    FUN_01bed4e2(auStack_11b0,auStack_a58,0x1b8);
    *(undefined1 *)(param_2 + 0x17c) = 1;
    FUN_01bed4e2(auStack_ff8,auStack_11b0,0x1b8);
    FUN_00e1d41c(puVar4);
    if (uVar13 == 3 && uVar16 == 0) {
      local_894 = local_1214;
      local_898 = local_1208;
      local_89c = (uint)local_121c;
      local_8a0 = uVar10;
      FUN_00a98078(&local_5c0,1);
      FUN_00a55a24(&local_8a0);
      local_11ec = local_5ac;
      local_11f0 = local_5b0;
      local_11f4 = local_5b4;
      local_1200 = local_5c0;
      local_11fc = local_5bc;
      local_11f8 = local_5b8;
    }
    else {
      if (uVar13 != 2 || uVar16 != 0) {
        FUN_01bed4e2(&local_5c0,auStack_ff8,0x1b8);
        *puVar4 = uVar13;
        param_2[0xb] = uVar16;
        param_2[0x10] = local_5a0;
        param_2[0x11] = local_59c;
        *(undefined1 *)((int)param_2 + 0x21) = 1;
        param_2[0xd] = local_121c;
        param_2[0xe] = local_1208;
        param_2[0xf] = local_1214;
        param_2[0xc] = uVar10;
        FUN_01bed4e2(param_2 + 0x12,&local_5c0,0x1b8);
        *(undefined2 *)(param_2 + 0x1e9) = 0;
        param_2[0x1e8] = param_2 + 4;
        goto switchD_00a73a20_caseD_5;
      }
      iVar5 = param_2[1];
      if (iVar5 < 0) {
        uVar17 = 0;
LAB_00a740a4:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar17,iVar5);
      }
      uVar18 = *param_2;
      if (iVar5 == 0) {
        iVar12 = 1;
        iVar7 = 0;
      }
      else {
        uVar17 = 1;
        iVar12 = FUN_01298504(iVar5,1);
        if (iVar12 == 0) goto LAB_00a740a4;
        iVar7 = iVar5;
      }
      FUN_01bed4e2(iVar12,uVar18,iVar5);
      if (-1 < (int)uVar10) {
        FUN_019bb7e0(uVar10,local_121c);
      }
      local_e40 = 8;
      local_e3c = iVar7;
      iStack_e38 = iVar12;
      iStack_e34 = iVar5;
      FUN_014a5cd0(&local_1200,&local_e40);
    }
LAB_00a74238:
    *(undefined1 *)((int)param_2 + 0x21) = 0;
    FUN_0084ec48(param_2 + 4);
LAB_00a74248:
    if (*(char *)(param_2 + 8) != '\0') {
      FUN_00b9c308(param_2 + 0x3c);
    }
    *(undefined1 *)(param_2 + 8) = 0;
    break;
  case 5:
switchD_00a73a20_caseD_5:
    FUN_00a70fd4(&local_5c0,param_2 + 0x80,param_3);
    if (local_5c0 == 3) {
      *param_1 = 3;
      uVar3 = 5;
      goto LAB_00a74384;
    }
    local_e30 = local_5bc;
    local_e2c = local_5b8;
    local_e28 = local_5b4;
    if (*(char *)(param_2 + 0x1e9) == '\x03') {
      FUN_00a7389c(param_2 + 0x80);
    }
    if (local_5c0 != 2) {
      puVar6 = (uint *)((uint)&local_1200 | 4);
      *puVar6 = local_e30;
      puVar6[1] = local_e2c;
      puVar6[2] = local_e28;
      local_11ec = local_5ac;
      local_11f0 = local_5b0;
      local_1200 = local_5c0;
      FUN_0094a4d0(puVar4);
      goto LAB_00a74238;
    }
    uVar15 = 0xffffffff;
    if ((uint)param_2[3] < local_e28) {
      iVar7 = local_e2c + param_2[3] * 0x28;
      iVar5 = *(int *)(iVar7 + 0x24);
      if (iVar5 != 0) {
        iVar5 = iVar5 * 0x1d8;
        uVar17 = param_2[0x71];
        iVar12 = param_2[0x72];
        puVar11 = (undefined4 *)(*(int *)(iVar7 + 0x20) + 0x19c);
        uVar14 = 0;
        do {
          if ((puVar11[1] == iVar12) &&
             (iVar7 = thunk_FUN_01bed842(*puVar11,uVar17,iVar12), iVar7 == 0)) {
            uVar15 = uVar14;
            break;
          }
          puVar11 = puVar11 + 0x76;
          uVar14 = uVar14 + 1;
          iVar5 = iVar5 + -0x1d8;
        } while (iVar5 != 0);
      }
    }
    *(undefined1 *)((int)param_2 + 0x21) = 0;
    local_11fc = param_2[0x73];
    local_11f8 = param_2[0x74];
    local_11f4 = param_2[0x75];
    local_1200 = 2;
    if (local_11fc == 0x80000000) {
      local_11f8 = 1;
      local_11fc = 0;
      local_11f4 = 0;
    }
    local_11f0 = uVar15;
    FUN_00a573e8(&local_e30);
    FUN_019bb7e0(param_2[0x70],param_2[0x71]);
    if (param_2[0x76] != -0x80000000) {
      FUN_019bb7e0(param_2[0x76],param_2[0x77]);
    }
    if (param_2[0x79] != -0x80000000) {
      FUN_019bb7e0(param_2[0x79],param_2[0x7a]);
    }
    if (param_2[0x7c] != -0x80000000) {
      FUN_019bb7e0(param_2[0x7c],param_2[0x7d]);
    }
    FUN_00b9c078(param_2 + 0x12);
    *(undefined1 *)((int)param_2 + 0x21) = 0;
    FUN_0084ec48(param_2 + 4);
    *(undefined1 *)(param_2 + 8) = 0;
  }
  uVar3 = 1;
  *param_1 = local_1200;
  param_1[1] = local_11fc;
  param_1[2] = local_11f8;
  param_1[3] = local_11f4;
  param_1[4] = local_11f0;
  param_1[5] = local_11ec;
LAB_00a74384:
  *(undefined1 *)((int)param_2 + 0x22) = uVar3;
  return;
}

