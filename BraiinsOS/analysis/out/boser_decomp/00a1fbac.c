// FUN_00a1fbac @ 00a1fbac size=1224 calls_out=9 calls_in=1
// strings: Invalid number

/* WARNING: Type propagation algorithm not settling */

void FUN_00a1fbac(undefined4 *param_1,int ****param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int **ppiVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int **ppiVar6;
  int iVar7;
  undefined4 uVar8;
  int **ppiVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_148;
  int ****local_144;
  int ****local_140;
  undefined4 local_13c;
  undefined1 auStack_138 [16];
  undefined1 *local_128;
  undefined4 *****local_108;
  int ****local_104;
  int *****local_100;
  code *local_fc;
  char *****local_f0;
  char *****local_ec;
  char *****local_e8;
  char *****local_e4;
  char *****pppppcStack_e0;
  char *****local_dc;
  char *****local_d8;
  char *****local_d4;
  char *****pppppcStack_d0;
  char *****pppppcStack_cc;
  char *****local_c8;
  char *****pppppcStack_c4;
  char *****pppppcStack_c0;
  char *****pppppcStack_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  char *****local_b0;
  int *****local_ac;
  char *****pppppcStack_a8;
  char *****local_a4;
  char *****pppppcStack_a0;
  char *****pppppcStack_9c;
  char *****pppppcStack_98;
  char *****local_90;
  char *****local_8c;
  char *****pppppcStack_88;
  char *****pppppcStack_84;
  int ****local_80;
  char *pcStack_7c;
  undefined4 uStack_78;
  char *****local_70;
  char *****pppppcStack_6c;
  char *****local_68;
  char *****local_64;
  char *****local_60;
  char *****local_5c;
  char *****local_58;
  char *****pppppcStack_54;
  char *****local_50;
  char *****pppppcStack_4c;
  char *****pppppcStack_48;
  char *****pppppcStack_44;
  int ****local_40;
  char *local_3c;
  undefined4 uStack_38;
  int ****local_30;
  char *local_2c;
  undefined4 local_28;
  
  ppiVar9 = (int **)0x0;
  ppiVar3 = param_2[4][4];
  if (ppiVar3 != (int **)0x0) {
    ppiVar6 = param_2[4][3];
    iVar7 = (int)ppiVar3 * 0x48;
    do {
      if ((ppiVar6[3] == (int *)0x6) &&
         (iVar1 = thunk_FUN_01bed842(ppiVar6[2] + 2,param_3,6), iVar1 == 0)) {
        ppiVar9 = ppiVar6;
        break;
      }
      ppiVar6 = ppiVar6 + 0x12;
      iVar7 = iVar7 + -0x48;
    } while (iVar7 != 0);
  }
  if (ppiVar9 != (int **)0x0) {
    ppiVar9 = ppiVar9 + 4;
  }
  FUN_00ad9f18(&local_140,ppiVar9);
  if (local_128 == &DAT_80000008) {
    local_148 = 0;
    local_144 = (int ****)0x0;
LAB_00a1fc4c:
    local_60 = (char *****)&DAT_80000000;
  }
  else {
    local_144 = local_140;
    local_ac = (int *****)&local_90;
    local_90 = (char *****)local_140;
    local_8c = (char *****)local_13c;
    local_b0 = (char *****)param_2;
    FUN_00ab0d6c(&local_f0,auStack_138,&local_b0);
    if (local_f0 != (char *****)0x0) {
      puVar2 = (undefined4 *)((uint)&local_f0 | 4);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      uVar8 = puVar2[2];
      uVar10 = puVar2[3];
      uVar11 = puVar2[4];
      param_1[0xd] = local_b8;
      param_1[0xe] = local_b4;
      *param_1 = uVar4;
      param_1[1] = uVar5;
      param_1[2] = uVar8;
      param_1[3] = uVar10;
      param_1[4] = uVar11;
      param_1[5] = local_d8;
      param_1[6] = local_d4;
      param_1[7] = pppppcStack_d0;
      param_1[8] = pppppcStack_cc;
      param_1[9] = local_c8;
      param_1[10] = pppppcStack_c4;
      param_1[0xb] = pppppcStack_c0;
      param_1[0xc] = pppppcStack_bc;
      return;
    }
    local_148 = local_13c;
    puVar2 = (undefined4 *)((uint)&local_108 | 4);
    *puVar2 = local_e8;
    puVar2[1] = local_e4;
    puVar2[2] = pppppcStack_e0;
    puVar2[3] = local_dc;
    local_70 = local_d4;
    pppppcStack_6c = pppppcStack_d0;
    local_68 = pppppcStack_cc;
    local_64 = local_c8;
    local_5c = pppppcStack_c0;
    local_58 = pppppcStack_bc;
    local_90 = (char *****)*puVar2;
    local_8c = (char *****)puVar2[1];
    pppppcStack_88 = (char *****)puVar2[2];
    pppppcStack_84 = (char *****)puVar2[3];
    local_b0 = local_d4;
    local_ac = (int *****)pppppcStack_d0;
    pppppcStack_a8 = pppppcStack_cc;
    local_a4 = local_c8;
    pppppcStack_a0 = pppppcStack_c4;
    pppppcStack_9c = pppppcStack_c0;
    pppppcStack_98 = pppppcStack_bc;
    if (local_d8 == (char *****)0x80000007) goto LAB_00a1fc4c;
    local_60 = local_d8;
    local_5c = local_d4;
    local_58 = pppppcStack_d0;
    pppppcStack_54 = pppppcStack_cc;
    local_50 = local_c8;
    pppppcStack_4c = pppppcStack_c4;
    pppppcStack_48 = pppppcStack_c0;
    pppppcStack_44 = pppppcStack_bc;
    local_70 = local_90;
    pppppcStack_6c = local_8c;
    local_68 = pppppcStack_88;
    local_64 = pppppcStack_84;
    if (local_d8 == (char *****)&DAT_80000001) {
      if (local_90 == (char *****)0x0) {
        if ((int)pppppcStack_84 < 0) goto LAB_00a1fed8;
LAB_00a1ff70:
        if ((int)pppppcStack_84 - (uint)(pppppcStack_88 < &DAT_80000000) == -1) {
          param_1[3] = pppppcStack_88;
          *param_1 = 2;
          param_1[1] = local_140;
          param_1[2] = local_13c;
          return;
        }
        local_f0 = (char *****)&DAT_0056e9bc;
        local_e8 = (char *****)&DAT_0056e3b4;
        local_e4 = (char *****)FUN_012fce60;
        local_ec = (char *****)FUN_012fce60;
        FUN_00664898(&local_108,&DAT_00586c43,&local_f0);
        local_e8 = (char *****)&local_40;
        local_40 = (int ****)local_108;
        local_3c = (char *)local_104;
        uStack_38 = local_100;
        local_100 = (int *****)0x3;
        local_104 = (int ****)0x3eece8;
        local_108 = (undefined4 *****)0x80000000;
        local_e4 = (char *****)&LAB_00632348;
        local_ec = (char *****)&LAB_012b97d8;
        local_f0 = (char *****)&local_108;
        FUN_00664898(&local_30,&DAT_00592d44,&local_f0);
        if (local_108 != (undefined4 *****)0x80000000) {
          FUN_019bb7e0(local_108,local_104);
        }
        local_80 = local_30;
        pcStack_7c = local_2c;
        uStack_78 = local_28;
        FUN_019bb7e0(local_40,local_3c);
      }
      else {
        if (local_90 == (char *****)&DAT_00000001) goto LAB_00a1ff70;
LAB_00a1fed8:
        local_104 = (int ****)0x3eece8;
        local_108 = (undefined4 *****)0x80000000;
        local_e8 = (char *****)&local_40;
        local_40 = (int ****)0x3dbec9;
        local_3c = (char *)0xe;
        local_100 = (int *****)0x3;
        local_e4 = (char *****)&DAT_0132b6a0;
        local_ec = (char *****)&LAB_012b97d8;
        local_f0 = (char *****)&local_108;
        FUN_00664898(&local_30,&DAT_00592d44,&local_f0);
        if (local_108 != (undefined4 *****)0x80000000) {
          FUN_019bb7e0(local_108,local_104);
        }
        local_80 = local_30;
        pcStack_7c = local_2c;
        uStack_78 = local_28;
      }
      FUN_006ccfc0(&local_70);
      goto LAB_00a1fcf0;
    }
  }
  local_100 = (int *****)&local_f0;
  local_f0 = local_70;
  local_ec = pppppcStack_6c;
  local_e8 = local_68;
  local_e4 = local_64;
  pppppcStack_e0 = local_60;
  local_dc = local_5c;
  local_d8 = local_58;
  local_d4 = pppppcStack_54;
  pppppcStack_d0 = local_50;
  pppppcStack_cc = pppppcStack_4c;
  local_c8 = pppppcStack_48;
  pppppcStack_c4 = pppppcStack_44;
  local_28 = 3;
  local_30 = (int ****)0x80000000;
  local_108 = &local_30;
  local_2c = "Int";
  local_fc = FUN_00700f8c;
  local_104 = (int ****)&LAB_012b97d8;
  FUN_00664898(&local_40,&DAT_0059054b,&local_108);
  if (local_30 != (int ****)0x80000000) {
    FUN_019bb7e0(local_30,local_2c);
  }
  local_80 = local_40;
  pcStack_7c = local_3c;
  uStack_78 = uStack_38;
  FUN_00fe40e4(&local_f0);
LAB_00a1fcf0:
  local_60 = (char *****)local_80;
  local_5c = (char *****)pcStack_7c;
  local_58 = (char *****)uStack_78;
  local_68 = (char *****)0x0;
  local_70 = (char *****)0x0;
  local_104 = local_144;
  local_108 = (undefined4 *****)0x1;
  local_100 = (int *****)local_148;
  FUN_006bd784(&local_f0,&local_60,&local_108);
  if (local_f0 != (char *****)0x0) {
    FUN_006c1148((uint)&local_f0 | 4);
  }
  *param_1 = local_70;
  param_1[1] = pppppcStack_6c;
  param_1[2] = local_68;
  param_1[3] = local_64;
  param_1[4] = pppppcStack_e0;
  param_1[5] = local_dc;
  param_1[6] = local_d8;
  param_1[7] = local_d4;
  param_1[8] = pppppcStack_d0;
  param_1[9] = pppppcStack_cc;
  param_1[10] = local_c8;
  param_1[0xb] = pppppcStack_c4;
  param_1[0xc] = pppppcStack_c0;
  param_1[0xd] = pppppcStack_bc;
  param_1[0xe] = local_b8;
  return;
}

