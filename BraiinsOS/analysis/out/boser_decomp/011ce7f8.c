// FUN_011ce7f8 @ 011ce7f8 size=1064 calls_out=9 calls_in=1
// strings: EncryptionType | EncryptionType | EncryptionType

void FUN_011ce7f8(undefined4 *param_1,int **param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int **ppiVar11;
  int **ppiVar12;
  undefined4 local_158;
  int **local_154;
  int **local_150;
  undefined4 local_14c;
  undefined1 auStack_148 [16];
  undefined1 *local_138;
  int *local_118;
  char *local_114;
  int ***local_110;
  code *local_10c;
  int **local_100;
  int **local_fc;
  int **local_f8;
  undefined4 local_f4;
  int **ppiStack_f0;
  int **ppiStack_ec;
  int **local_e8;
  int **local_e4;
  int **ppiStack_e0;
  int **ppiStack_dc;
  int **local_d8;
  int **ppiStack_d4;
  int **ppiStack_d0;
  int **ppiStack_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  int **local_c0;
  int ***local_bc;
  int **ppiStack_b8;
  int **local_b4;
  int **ppiStack_b0;
  int **ppiStack_ac;
  int **ppiStack_a8;
  int **local_a0;
  int **local_9c;
  int **ppiStack_98;
  int **ppiStack_94;
  undefined1 auStack_90 [16];
  int **local_80;
  int **local_7c;
  int **local_78;
  int **local_74;
  int **local_70;
  int **local_6c;
  int **local_68;
  int **ppiStack_64;
  int **local_60;
  int **ppiStack_5c;
  int **ppiStack_58;
  int **ppiStack_54;
  int **local_50;
  int **local_4c;
  int ***local_48;
  undefined2 *local_44;
  int *local_40;
  int ****local_3c;
  int local_30;
  char *local_2c;
  undefined4 local_28;
  
  iVar7 = 0;
  iVar3 = param_2[4][4];
  if (iVar3 != 0) {
    iVar5 = param_2[4][3];
    iVar3 = iVar3 * 0x48;
    do {
      if ((*(int *)(iVar5 + 0xc) == 10) &&
         (iVar1 = thunk_FUN_01bed842(*(int *)(iVar5 + 8) + 8,param_3,10), iVar1 == 0)) {
        iVar7 = iVar5;
        break;
      }
      iVar5 = iVar5 + 0x48;
      iVar3 = iVar3 + -0x48;
    } while (iVar3 != 0);
  }
  if (iVar7 != 0) {
    iVar7 = iVar7 + 0x10;
  }
  FUN_00ad9f18(&local_150,iVar7);
  if (local_138 == &DAT_80000008) {
    local_158 = 0;
    local_154 = (int **)0x0;
LAB_011ce898:
    local_70 = (int **)&DAT_80000000;
  }
  else {
    local_154 = local_150;
    local_a0 = local_150;
    local_bc = &local_a0;
    local_9c = (int **)local_14c;
    local_c0 = param_2;
    FUN_00ab0d6c(&local_100,auStack_148,&local_c0);
    if (local_100 != (int **)0x0) {
      puVar2 = (undefined4 *)((uint)&local_100 | 4);
      uVar4 = *puVar2;
      uVar6 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      uVar10 = puVar2[4];
      param_1[0xd] = local_c8;
      param_1[0xe] = local_c4;
      *param_1 = uVar4;
      param_1[1] = uVar6;
      param_1[2] = uVar8;
      param_1[3] = uVar9;
      param_1[4] = uVar10;
      param_1[5] = local_e8;
      param_1[6] = local_e4;
      param_1[7] = ppiStack_e0;
      param_1[8] = ppiStack_dc;
      param_1[9] = local_d8;
      param_1[10] = ppiStack_d4;
      param_1[0xb] = ppiStack_d0;
      param_1[0xc] = ppiStack_cc;
      return;
    }
    puVar2 = (undefined4 *)((uint)&local_118 | 4);
    *puVar2 = local_f8;
    puVar2[1] = local_f4;
    puVar2[2] = ppiStack_f0;
    puVar2[3] = ppiStack_ec;
    local_80 = local_e4;
    local_7c = ppiStack_e0;
    local_78 = ppiStack_dc;
    local_74 = local_d8;
    local_6c = ppiStack_d0;
    local_68 = ppiStack_cc;
    local_a0 = (int **)*puVar2;
    local_9c = (int **)puVar2[1];
    ppiStack_98 = (int **)puVar2[2];
    ppiStack_94 = (int **)puVar2[3];
    local_c0 = local_e4;
    local_bc = (int ***)ppiStack_e0;
    ppiStack_b8 = ppiStack_dc;
    local_b4 = local_d8;
    ppiStack_b0 = ppiStack_d4;
    ppiStack_ac = ppiStack_d0;
    ppiStack_a8 = ppiStack_cc;
    if (local_e8 == (int **)0x80000007) {
      local_158 = local_14c;
      goto LAB_011ce898;
    }
    local_70 = local_e8;
    local_6c = local_e4;
    local_68 = ppiStack_e0;
    ppiStack_64 = ppiStack_dc;
    local_60 = local_d8;
    ppiStack_5c = ppiStack_d4;
    ppiStack_58 = ppiStack_d0;
    ppiStack_54 = ppiStack_cc;
    local_80 = local_a0;
    local_7c = local_9c;
    local_78 = ppiStack_98;
    local_74 = ppiStack_94;
    if ((int)local_e8 < 0) {
      if (((uint)local_e8 ^ 0x80000000) == 2) {
        ppiVar11 = ppiStack_98;
        ppiVar12 = local_9c;
      }
      else {
        if (((uint)local_e8 ^ 0x80000000) != 5) goto LAB_011ceacc;
        ppiVar11 = local_9c;
        ppiVar12 = local_a0 + 2;
      }
      iVar3 = 0;
      local_50 = ppiVar12;
      local_4c = ppiVar11;
      do {
        if ((*(int ***)((int)&DAT_01c107d8 + iVar3) == ppiVar11) &&
           (iVar7 = thunk_FUN_01bed842(*(undefined4 *)((int)&DAT_01c107d4 + iVar3),ppiVar12,ppiVar11
                                      ), iVar7 == 0)) {
          FUN_00db19c4(&local_80);
          *(undefined1 *)(param_1 + 3) = (&DAT_01c107dc)[iVar3];
          *param_1 = 2;
          param_1[1] = local_150;
          param_1[2] = local_14c;
          return;
        }
        iVar3 = iVar3 + 0xc;
      } while (iVar3 != 0x54);
      local_48 = &local_50;
      local_44 = &DAT_0132b6a0;
      local_3c = &local_48;
      local_110 = (int ***)&DAT_0000000e;
      local_118 = (int *)&DAT_80000000;
      local_f8 = &local_40;
      local_100 = &local_118;
      local_40 = (int *)&DAT_0058702e;
      local_114 = "EncryptionType";
      local_f4 = (int **)&LAB_012fff30;
      local_fc = (int **)&LAB_012b97d8;
      FUN_00664898(&local_30,&DAT_00592d44,&local_100);
      if (local_118 != (int *)&DAT_80000000) {
        FUN_019bb7e0(local_118,local_114);
      }
      FUN_01bed4e2((uint)auStack_90 | 3,&local_30,0xc);
      FUN_00db19c4(&local_80);
      local_158 = local_14c;
      goto LAB_011ce948;
    }
LAB_011ceacc:
    local_158 = local_14c;
  }
  local_110 = &local_100;
  local_100 = local_80;
  local_fc = local_7c;
  local_f8 = local_78;
  local_f4 = local_74;
  ppiStack_f0 = local_70;
  ppiStack_ec = local_6c;
  local_e8 = local_68;
  local_e4 = ppiStack_64;
  ppiStack_e0 = local_60;
  ppiStack_dc = ppiStack_5c;
  local_d8 = ppiStack_58;
  ppiStack_d4 = ppiStack_54;
  local_28 = 0xe;
  local_30 = -0x80000000;
  local_118 = &local_30;
  local_2c = "EncryptionType";
  local_10c = FUN_00700f8c;
  local_114 = &LAB_012b97d8;
  FUN_00664898(&local_40,&DAT_0059054b,&local_118);
  if (local_30 != -0x80000000) {
    FUN_019bb7e0(local_30,local_2c);
  }
  FUN_01bed4e2((uint)auStack_90 | 3,&local_40,0xc);
  FUN_00ba8128(&local_100);
LAB_011ce948:
  FUN_01bed4e2((int)&local_f4 + 1,auStack_90,0xf);
  local_fc = (int **)0x0;
  local_100 = (int **)0x0;
  FUN_00ddb4b4(param_1,&local_100,local_154,local_158);
  return;
}

