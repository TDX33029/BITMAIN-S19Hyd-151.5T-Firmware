// FUN_008ef93c @ 008ef93c size=1500 calls_out=18 calls_in=1
// strings: Bosminer.client_move_to | internal error: entered unreachable code

void FUN_008ef93c(int *param_1,int *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_1074;
  int local_1070;
  int *local_106c;
  int *local_1068;
  int local_1048;
  int iStack_1044;
  int iStack_1040;
  int iStack_103c;
  int local_1038;
  int local_1034;
  int local_1030;
  int iStack_102c;
  int iStack_1028;
  int iStack_1024;
  undefined1 auStack_1020 [448];
  int local_e60;
  int iStack_e5c;
  int iStack_e58;
  int iStack_e54;
  int iStack_e50;
  int iStack_e4c;
  int local_e48;
  int iStack_e44;
  int iStack_e40;
  int iStack_e3c;
  int iStack_e38;
  int iStack_e34;
  undefined1 auStack_e30 [448];
  int local_c70;
  int iStack_c6c;
  int iStack_c68;
  int iStack_c64;
  undefined1 auStack_c60 [448];
  int local_aa0;
  int iStack_a9c;
  int iStack_a98;
  int iStack_a94;
  undefined1 auStack_a90 [448];
  int local_8d0;
  int iStack_8cc;
  int iStack_8c8;
  int iStack_8c4;
  int local_8c0;
  int local_8bc;
  int local_8b8;
  int local_8b4;
  int local_8b0;
  int iStack_8ac;
  int iStack_8a8;
  int iStack_8a4;
  int local_5e0;
  int local_5dc;
  int local_5d8;
  int iStack_5d4;
  int iStack_5d0;
  int iStack_5cc;
  int local_5c8;
  int iStack_5c4;
  int iStack_5c0;
  int iStack_5bc;
  int iStack_5b8;
  int iStack_5b4;
  undefined1 auStack_300 [8];
  undefined1 auStack_2f8 [704];
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x615)) {
  case 0:
    iVar9 = param_2[0x184];
    *(undefined1 *)(param_2 + 0x185) = 0;
    param_2[0x17e] = param_2[0x181];
    param_2[0x17f] = param_2[0x182];
    param_2[0x180] = param_2[0x183];
    uVar6 = param_2[0x17c];
    uVar5 = param_2[0x17d];
    if (uVar6 == uVar5) {
LAB_008efdb4:
      FUN_00b1e1fc(&local_5e0,*(undefined4 *)(param_2[0x180] + 4),
                   *(undefined4 *)(param_2[0x180] + 8));
      FUN_019f8c54(param_2[0x17e],param_2[0x17f]);
      *param_1 = local_5e0;
      param_1[1] = local_5dc;
      param_1[2] = local_5d8;
      uVar1 = 1;
      goto LAB_008efdf8;
    }
    uVar2 = FUN_00b1d60c(param_2[0x180],uVar6,&DAT_01c0c128);
    piVar7 = (int *)param_2[0x180];
    *(undefined1 *)(param_2 + 0x185) = 1;
    uVar3 = piVar7[2];
    *(undefined1 *)(param_2 + 0x185) = 0;
    if (uVar5 < uVar3) {
      FUN_00b1d558(piVar7,uVar5,uVar2,&DAT_01c0c138);
    }
    else {
      iVar4 = piVar7[2];
      if (iVar4 == *piVar7) {
        FUN_007b4428(piVar7);
      }
      *(undefined4 *)(piVar7[1] + iVar4 * 4) = uVar2;
      piVar7[2] = iVar4 + 1;
    }
    iVar4 = *(int *)(iVar9 + 0x14);
    iVar9 = iVar9 + 0x18;
    *param_2 = iVar9;
    param_2[1] = iVar4;
    param_2[2] = uVar6;
    param_2[3] = uVar5;
    *(undefined1 *)(param_2 + 0xb) = 0;
LAB_008efad4:
    param_2[6] = uVar5;
    *(undefined1 *)(param_2 + 0x3c) = 0;
    param_2[0xc] = iVar9;
    param_2[4] = iVar4;
    param_2[5] = uVar6;
switchD_008efa14_caseD_3:
    piVar7 = param_2 + 0xc;
    FUN_00df988c(&local_1048,piVar7,param_3);
    uVar1 = 3;
    if (local_1048 != -0x7ffffffa) {
      param_2[7] = local_1048;
      param_2[8] = iStack_1044;
      param_2[9] = iStack_1040;
      param_2[10] = iStack_103c;
      if ((char)param_2[0x3c] == '\x03') {
        FUN_00df984c(param_2 + 0xd);
      }
      if ((undefined1 *)param_2[7] == &DAT_80000005) {
        *piVar7 = param_2[8];
        param_2[0xd] = param_2[9];
        param_2[0xe] = param_2[10];
        *(undefined1 *)(param_2 + 0x17a) = 0;
        local_1070 = param_2[4];
        local_1074 = param_2[5];
        param_2[0x177] = local_1070;
        iVar4 = param_2[6];
        param_2[0x176] = (int)piVar7;
        param_2[0x179] = iVar4;
        param_2[0x178] = local_1074;
        goto LAB_008efb94;
      }
LAB_008efd94:
      FUN_008ee56c(param_2 + 7);
      goto LAB_008efd9c;
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c0c148);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0c148);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0xb]) {
    case '\0':
      iVar9 = *param_2;
      uVar5 = param_2[3];
      iVar4 = param_2[1];
      uVar6 = param_2[2];
      goto LAB_008efad4;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0c250);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c0c250);
    case '\x03':
      goto switchD_008efa14_caseD_3;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x17a]) {
    case '\0':
      piVar7 = (int *)param_2[0x176];
      iVar4 = param_2[0x179];
      local_1070 = param_2[0x177];
      local_1074 = param_2[0x178];
LAB_008efb94:
      FUN_019cfcf0(&local_5e0);
      local_e60 = local_5e0;
      iStack_e5c = local_5dc;
      iStack_e58 = local_5d8;
      iStack_e54 = iStack_5d4;
      iStack_e50 = iStack_5d0;
      iStack_e4c = iStack_5cc;
      local_e48 = local_5c8;
      iStack_e44 = iStack_5c4;
      iStack_e40 = iStack_5c0;
      iStack_e3c = iStack_5bc;
      iStack_e38 = iStack_5b8;
      iStack_e34 = iStack_5b4;
      param_2[0x18] = -0x7fffffef;
      param_2[0x19] = local_1070;
      param_2[0x26] = (int)"Bosminer.client_move_to";
      param_2[0x1a] = local_1074;
      param_2[0x27] = 0x17;
      param_2[0x1b] = iVar4;
      param_2[0x28] = local_5e0;
      param_2[0x29] = local_5dc;
      param_2[0x2a] = local_5d8;
      param_2[0x2b] = iStack_5d4;
      param_2[0x2c] = iStack_5d0;
      param_2[0x2d] = iStack_5cc;
      param_2[0x2e] = local_5c8;
      param_2[0x2f] = iStack_5c4;
      param_2[0x30] = iStack_5c0;
      param_2[0x31] = iStack_5bc;
      param_2[0x32] = iStack_5b8;
      param_2[0x33] = iStack_5b4;
      *(undefined1 *)(param_2 + 0x174) = 0;
      *(undefined1 *)((int)param_2 + 0xd7) = 0;
      param_2[0x34] = (int)piVar7;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0f020);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c0f020);
    case '\x03':
    }
    local_1068 = param_2 + 0x17a;
    local_106c = param_2 + 0x10;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x174]) {
    case '\0':
      FUN_01bed4e2(param_2 + 0xc2,local_106c,0x2c8);
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1f170);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1f170);
    }
    FUN_008ed090(&local_5e0,param_2 + 0xc2,param_3);
    iVar9 = local_5dc;
    iVar4 = local_5e0;
    if (local_5e0 != 0x1e || local_5dc != 0) {
      local_38 = local_5d8;
      iStack_34 = iStack_5d4;
      iStack_30 = iStack_5d0;
      iStack_2c = iStack_5cc;
      FUN_01bed4e2(auStack_300,&local_5c8,0x2c8);
      FUN_00b9a8cc(param_2 + 0xc2);
      if (iVar4 == 0x1d && iVar9 == 0) {
        local_c70 = local_38;
        iStack_c6c = iStack_34;
        iStack_c68 = iStack_30;
        iStack_c64 = iStack_2c;
        *(undefined1 *)(param_2 + 0x174) = 1;
        local_aa0 = local_38;
        iStack_a9c = iStack_34;
        iStack_a98 = iStack_30;
        iStack_a94 = iStack_2c;
LAB_008efd20:
        iVar10 = 3;
        local_8d0 = local_aa0;
        iStack_8cc = iStack_a9c;
        iStack_8c8 = iStack_a98;
        iStack_8c4 = iStack_a94;
        iVar8 = 0;
      }
      else {
        FUN_01bed4e2(&iStack_8a8,auStack_300,0x2c8);
        iVar8 = iStack_34;
        iVar10 = local_38;
        local_8b8 = local_38;
        local_8b4 = iStack_34;
        local_8b0 = iStack_30;
        iStack_8ac = iStack_2c;
        local_8bc = iVar9;
        local_8c0 = iVar4;
        if (iVar4 != 0x15 || iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c1f170);
        }
        local_c70 = iStack_30;
        iStack_c6c = iStack_2c;
        iStack_c68 = iStack_8a8;
        iStack_c64 = iStack_8a4;
        FUN_01bed4e2(auStack_e30,auStack_2f8,0x1c0);
        *(undefined1 *)(param_2 + 0x174) = 1;
        if (iVar10 == 4 && iVar8 == 0) goto LAB_008efc90;
        local_aa0 = local_c70;
        iStack_a9c = iStack_c6c;
        iStack_a98 = iStack_c68;
        iStack_a94 = iStack_c64;
        FUN_01bed4e2(auStack_c60,auStack_e30,0x1c0);
        if (iVar10 == 3 && iVar8 == 0) goto LAB_008efd20;
        local_8d0 = local_aa0;
        iStack_8cc = iStack_a9c;
        iStack_8c8 = iStack_a98;
        iStack_8c4 = iStack_a94;
        FUN_01bed4e2(auStack_a90,auStack_c60,0x1c0);
      }
      *(undefined1 *)local_1068 = 1;
      local_1030 = local_8d0;
      iStack_102c = iStack_8cc;
      iStack_1028 = iStack_8c8;
      iStack_1024 = iStack_8c4;
      local_1038 = iVar10;
      local_1034 = iVar8;
      FUN_01bed4e2(auStack_1020,auStack_a90,0x1c0);
      FUN_008ee550(&local_1038);
      FUN_0084ec48(param_2 + 0xc);
      if ((undefined1 *)param_2[7] != &DAT_80000005) goto LAB_008efd94;
LAB_008efd9c:
      *(undefined1 *)(param_2 + 0xb) = 1;
      FUN_008f05e0(param_2);
      *(undefined1 *)(param_2 + 0x185) = 0;
      goto LAB_008efdb4;
    }
    *(undefined1 *)(param_2 + 0x174) = 3;
LAB_008efc90:
    *(undefined1 *)local_1068 = 3;
    uVar1 = 4;
  }
  *(undefined1 *)(param_2 + 0xb) = uVar1;
  *param_1 = -0x80000000;
  uVar1 = 3;
LAB_008efdf8:
  *(undefined1 *)((int)param_2 + 0x615) = uVar1;
  return;
}

