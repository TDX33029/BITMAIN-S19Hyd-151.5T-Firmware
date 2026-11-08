// FUN_01686cd0 @ 01686cd0 size=1504 calls_out=10 calls_in=1
// strings: 

void FUN_01686cd0(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  int in_r12;
  int unaff_lr;
  bool bVar14;
  undefined4 *local_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  char *local_1d4;
  int local_1d0;
  char *local_1cc;
  undefined4 uStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 local_1a4;
  char *local_19c;
  int local_198;
  char *local_194;
  undefined4 local_190;
  undefined *local_18c;
  undefined4 local_188;
  int *local_184;
  char **local_180;
  char *local_120;
  int local_11c [5];
  undefined4 *local_108;
  undefined4 *local_104;
  undefined4 *local_100;
  char *local_fc;
  undefined4 *local_f8;
  char *local_f4;
  undefined4 *local_f0;
  undefined4 *local_98;
  undefined4 *puStack_94;
  undefined4 *puStack_90;
  char *local_8c;
  int iStack_88;
  char *local_84;
  undefined4 local_80;
  int local_7c;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint local_5c;
  
  if ((param_2[3] == 0) || (*(char *)param_2[2] != '[')) {
    param_1[3] = 4;
    *(undefined1 *)((int)param_1 + 0xb) = 0;
    *(undefined2 *)((int)param_1 + 9) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    *param_1 = 2;
    param_1[1] = 1;
    return;
  }
  pcVar9 = (char *)param_2[2] + 1;
  iVar11 = param_2[3] + -1;
  param_2[2] = (int)pcVar9;
  param_2[3] = iVar11;
  if ((iVar11 == 0) || (*pcVar9 != ']')) {
    param_2[2] = (int)pcVar9;
    param_2[3] = iVar11;
    local_194 = (char *)0x0;
    local_198 = 8;
    local_19c = (char *)0x0;
    FUN_01686a48(&local_108,param_2);
    if (local_108 == (undefined4 *)&DAT_00000004) {
      if (local_104 != (undefined4 *)&DAT_00000001) {
        iVar5 = 8;
        pcVar9 = (char *)0x0;
        puVar4 = local_100;
        pcVar2 = (char *)local_f0;
        pcVar8 = local_f4;
        puVar10 = local_104;
        pcVar3 = local_fc;
        pcVar13 = (char *)local_f8;
LAB_01687268:
        FUN_0168f180(iVar5,pcVar9);
        if (local_19c != (char *)0x0) {
          thunk_FUN_016d3fb4(local_198);
        }
        goto LAB_01687284;
      }
      param_2[2] = (int)pcVar9;
      param_2[3] = iVar11;
      if (local_100 != (undefined4 *)0x0) {
        thunk_FUN_016d3fb4(local_fc);
      }
      pcVar9 = local_f4;
      if (local_f4 != (char *)0x0) {
        if ((code *)*local_f0 != (code *)0x0) {
          (*(code *)*local_f0)(local_f4);
        }
        if (local_f0[1] != 0) {
          thunk_FUN_016d3fb4(pcVar9);
        }
      }
      pcVar9 = (char *)0x0;
      iVar5 = 8;
      pcVar2 = (char *)0x0;
    }
    else {
      iVar11 = 0x70;
      FUN_016dd1aa(&local_190,&local_108,0x70);
      FUN_0166e448(&local_19c);
      iVar5 = local_198;
      FUN_016dd1aa(local_198,&local_108,0x70);
      local_194 = (char *)0x1;
      while( true ) {
        pcVar9 = local_194;
        pcVar2 = local_19c;
        pcVar3 = (char *)param_2[2];
        iVar6 = param_2[3];
        if ((iVar6 == 0) || (*pcVar3 != ',')) break;
        param_2[2] = (int)(pcVar3 + 1);
        param_2[3] = iVar6 + -1;
        local_11c[0] = CONCAT31(local_11c[0]._1_3_,0x2c);
        local_120 = (char *)0x3;
        FUN_01686a48(&local_108,param_2);
        pcVar2 = local_19c;
        if (local_108 == (undefined4 *)&DAT_00000004) {
          if (local_104 != (undefined4 *)&DAT_00000001) {
            puVar4 = local_100;
            pcVar2 = (char *)local_f0;
            pcVar8 = local_f4;
            puVar10 = local_104;
            pcVar3 = local_fc;
            pcVar13 = (char *)local_f8;
            goto LAB_01687268;
          }
          param_2[2] = (int)pcVar3;
          param_2[3] = iVar6;
          FUN_016692ac(&local_100);
          goto LAB_01686f3c;
        }
        FUN_016dd1aa(&local_98,&local_108,0x70);
        if (pcVar9 == local_19c) {
          FUN_0166e448(&local_19c);
          iVar5 = local_198;
        }
        FUN_016dd52c(iVar5 + iVar11,&local_108,0x70);
        local_194 = pcVar9 + 1;
        iVar11 = iVar11 + 0x70;
      }
      local_11c[3] = 0;
      local_11c[2] = 0;
      local_11c[0] = 0;
      local_120 = (char *)0x1;
      param_2[2] = (int)pcVar3;
      param_2[3] = iVar6;
      local_11c[1] = 4;
      FUN_016692ac(local_11c);
    }
LAB_01686f3c:
    pcVar12 = (char *)param_2[2];
    local_80 = 0x80000000;
    uVar7 = 0;
    local_68 = 0x80000003;
    local_74 = 0x80000003;
    local_5c = local_5c & 0xffffff00;
    local_98 = (undefined4 *)0x0;
    local_8c = pcVar2;
    iStack_88 = iVar5;
    local_84 = pcVar9;
    if (pcVar9 != (char *)0x0) {
      iVar11 = param_2[3];
      if ((iVar11 == 0) || (*pcVar12 != ',')) {
        param_2[2] = (int)pcVar12;
        local_100 = (undefined4 *)&DAT_00000004;
        param_2[3] = iVar11;
        local_f8 = (undefined4 *)0x0;
        local_fc = (char *)0x0;
        local_104 = (undefined4 *)0x0;
        local_108 = (undefined4 *)&DAT_00000001;
        FUN_016692ac(&local_104);
        pcVar12 = (char *)param_2[2];
      }
      else {
        pcVar12 = pcVar12 + 1;
        param_2[2] = (int)pcVar12;
        uVar7 = 1;
        param_2[3] = iVar11 + -1;
      }
      local_5c = CONCAT31(local_5c._1_3_,uVar7);
    }
    iVar11 = *param_2;
    FUN_0166ecb0(&local_108,param_2);
    pcVar8 = (char *)local_f8;
    pcVar13 = local_fc;
    pcVar3 = (char *)local_100;
    puVar4 = local_104;
    puVar10 = local_108;
    if (local_108 != (undefined4 *)0x3) {
      FUN_01683af0(&local_98);
      pcVar2 = local_f4;
LAB_01687284:
      if (puVar10 == (undefined4 *)&DAT_00000001) {
        puVar10 = (undefined4 *)&SUB_00000002;
      }
      param_1[5] = pcVar8;
      param_1[6] = pcVar2;
      *param_1 = 2;
      param_1[1] = puVar10;
      param_1[2] = puVar4;
      param_1[3] = pcVar3;
      param_1[4] = pcVar13;
      return;
    }
    pcVar9 = (char *)param_2[2];
    in_r12 = (int)pcVar12 - iVar11;
    unaff_lr = (int)pcVar9 - *param_2;
    uStack_1c8 = 0x80000002;
    if (in_r12 == unaff_lr) {
      uStack_1c8 = 0x80000000;
    }
    iVar11 = param_2[3];
    local_1cc = local_84;
    local_80 = uStack_1c8;
    local_7c = in_r12;
    local_78 = unaff_lr;
  }
  else {
    param_2[2] = (int)pcVar9;
    iVar5 = 8;
    param_2[3] = iVar11;
    uStack_1c8 = 0x80000000;
    uVar7 = 0;
    pcVar2 = (char *)0x0;
    local_1cc = (char *)0x0;
  }
  local_1d8 = 0;
  local_1e0 = (undefined4 *)0x0;
  local_1a4 = CONCAT31(local_1a4._1_3_,uVar7);
  local_1b0 = 0x80000003;
  local_1bc = 0x80000003;
  local_1d4 = pcVar2;
  local_1d0 = iVar5;
  iStack_1c4 = in_r12;
  iStack_1c0 = unaff_lr;
  if ((iVar11 == 0) || (*pcVar9 != ']')) {
    local_f8 = (undefined4 *)0x0;
    local_fc = (char *)0x0;
    local_104 = (undefined4 *)0x0;
    local_108 = (undefined4 *)0x2;
    local_180 = &local_120;
    local_188 = 5;
    local_100 = (undefined4 *)0x4;
    local_18c = &DAT_0041465b;
    local_190 = 3;
    local_19c = pcVar9;
    local_198 = iVar11;
    local_184 = param_2;
    local_120 = pcVar9;
    local_11c[0] = iVar11;
    FUN_00953084(&local_98,&local_108,&local_190);
    local_108 = local_98;
    local_104 = puStack_94;
    local_100 = puStack_90;
    local_fc = local_8c;
    local_f8 = (undefined4 *)iStack_88;
    local_f4 = local_84;
    if (local_98 != (undefined4 *)0x3) {
      local_180 = &local_19c;
      local_18c = (undefined *)0x5d;
      local_190 = 0;
      local_184 = param_2;
      FUN_00953084(&local_98,&local_108,&local_190);
      pcVar2 = local_84;
      iVar11 = iStack_88;
      pcVar9 = local_8c;
      puVar1 = puStack_90;
      puVar4 = puStack_94;
      puVar10 = local_98;
      local_108 = local_98;
      local_104 = puStack_94;
      local_100 = puStack_90;
      local_fc = local_8c;
      local_f8 = (undefined4 *)iStack_88;
      local_f4 = local_84;
      bVar14 = local_98 != (undefined4 *)0x3;
      local_98 = local_1e0;
      puStack_94 = (undefined4 *)uStack_1dc;
      puStack_90 = (undefined4 *)local_1d8;
      local_8c = local_1d4;
      iStack_88 = local_1d0;
      local_84 = local_1cc;
      local_80 = uStack_1c8;
      local_7c = iStack_1c4;
      local_78 = iStack_1c0;
      local_74 = local_1bc;
      local_70 = local_1b8;
      uStack_6c = uStack_1b4;
      local_68 = local_1b0;
      uStack_64 = uStack_1ac;
      uStack_60 = uStack_1a8;
      local_5c = local_1a4;
      if (bVar14) {
        param_1[1] = puVar10;
        param_1[2] = puVar4;
        param_1[3] = puVar1;
        param_1[4] = pcVar9;
        param_1[5] = iVar11;
        param_1[6] = pcVar2;
        *param_1 = 2;
        FUN_01683af0(&local_1e0);
        return;
      }
      goto LAB_016871c8;
    }
  }
  else {
    param_2[2] = (int)(pcVar9 + 1);
    param_2[3] = iVar11 + -1;
  }
  local_98 = local_1e0;
  puStack_94 = (undefined4 *)uStack_1dc;
  puStack_90 = (undefined4 *)local_1d8;
  local_8c = local_1d4;
  iStack_88 = local_1d0;
  local_84 = local_1cc;
  local_80 = uStack_1c8;
  local_7c = iStack_1c4;
  local_78 = iStack_1c0;
  local_74 = local_1bc;
  local_70 = local_1b8;
  uStack_6c = uStack_1b4;
  local_68 = local_1b0;
  uStack_64 = uStack_1ac;
  uStack_60 = uStack_1a8;
  local_5c = local_1a4;
LAB_016871c8:
  *param_1 = local_98;
  param_1[1] = puStack_94;
  param_1[2] = puStack_90;
  param_1[3] = local_8c;
  param_1[4] = iStack_88;
  param_1[5] = local_84;
  param_1[6] = local_80;
  param_1[7] = local_7c;
  param_1[8] = local_78;
  param_1[9] = local_74;
  param_1[10] = local_70;
  param_1[0xb] = uStack_6c;
  param_1[0xc] = local_68;
  param_1[0xd] = uStack_64;
  param_1[0xe] = uStack_60;
  param_1[0xf] = local_5c;
  return;
}

