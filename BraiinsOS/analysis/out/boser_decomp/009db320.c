// FUN_009db320 @ 009db320 size=940 calls_out=10 calls_in=4
// strings: 

void FUN_009db320(int param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_140;
  undefined4 local_138;
  undefined1 local_124;
  undefined4 local_120;
  undefined1 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined1 local_104;
  uint local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 auStack_d0 [72];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int *local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint local_40;
  undefined4 uStack_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint uStack_2c;
  
  local_160 = FUN_009dcca4(0);
  local_ec = 100;
  local_e8 = 1;
  local_17c = 1;
  local_180 = 1;
  local_f0 = 200;
  local_15c = 0;
  local_f4 = 0;
  local_f8 = 0;
  local_fc = 0;
  local_100 = local_100 & 0xffffff00;
  local_114 = 0;
  local_118 = 0;
  local_11c = 0;
  local_120 = 0;
  local_104 = 0;
  local_108 = 0;
  local_e4 = 0;
  local_138 = 0;
  local_140 = 0;
  local_78 = (int *)0x0;
  local_110 = local_160;
  local_10c = local_160;
  iVar5 = FUN_01be5878(&local_78,0x20,0xa0);
  piVar3 = local_78;
  if ((iVar5 != 0) || (local_78 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(0x20,0xa0);
  }
  FUN_01bed4e2(local_78,&local_180,0xa0);
  do {
    iVar5 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar5 + 1;
  if (-1 < iVar5) {
    local_160 = FUN_019d194c(0);
    local_fc = 1;
    local_17c = 1;
    local_180 = 1;
    local_15c = 0;
    local_104 = 0;
    local_108 = 0;
    local_114 = 0;
    local_118 = 0;
    local_11c = 0;
    local_120 = 0;
    local_f8 = 0;
    local_100 = 0;
    local_138 = 0;
    local_140 = 0;
    local_78 = (int *)0x0;
    local_110 = local_160;
    local_10c = local_160;
    iVar5 = FUN_01be5878(&local_78,0x20,0xa0);
    piVar4 = local_78;
    if ((iVar5 != 0) || (local_78 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0xa0);
    }
    FUN_01bed4e2(local_78,&local_180,0xa0);
    do {
      iVar5 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar5 + 1;
    if (-1 < iVar5) {
      puVar6 = (undefined4 *)thunk_FUN_01be5118(0xc);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0xc);
      }
      *puVar6 = 1;
      puVar6[1] = 1;
      puVar6[2] = 0;
      FUN_01bed4e2(&local_180,param_2,0x5c);
      local_124 = 0;
      uVar7 = FUN_00aeefc8();
      uVar10 = thunk_FUN_01bee35a(uVar7,0x2c0);
      puVar9 = (uint *)((int)uVar10 + (int)((ulonglong)uVar10 >> 0x20));
      if ((char)puVar9[4] == '\0') {
        FUN_019ae6ac(&local_38);
        *puVar9 = local_38;
        puVar9[1] = local_34;
        puVar9[2] = local_30;
        puVar9[3] = uStack_2c;
        *(undefined1 *)(puVar9 + 4) = 1;
      }
      local_60 = puVar9[2];
      local_5c = puVar9[3];
      local_68 = *puVar9;
      local_64 = puVar9[1];
      *puVar9 = local_68 + 1;
      puVar9[1] = local_64 + (0xfffffffe < local_68);
      local_50 = 8;
      local_44 = 0;
      local_48 = 0;
      local_4c = 0;
      local_54 = 0;
      local_78 = &DAT_0056d238;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      local_40 = local_40 & 0xffffff00;
      local_58 = 0;
      FUN_019ac130(&local_38,1);
      puVar8 = (undefined4 *)((uint)auStack_d0 | 4);
      *puVar8 = local_78;
      puVar8[1] = uStack_74;
      puVar8[2] = uStack_70;
      puVar8[3] = uStack_6c;
      puVar8[4] = local_68;
      puVar8[5] = local_64;
      puVar8[6] = local_60;
      puVar8[7] = local_5c;
      puVar8[8] = local_58;
      puVar8[9] = local_54;
      puVar8[10] = local_50;
      puVar8[0xb] = local_4c;
      puVar8[0xc] = local_48;
      puVar8[0xd] = local_44;
      puVar8[0xe] = local_40;
      puVar8[0xf] = uStack_3c;
      *(undefined4 *)(param_1 + 0xb8) = local_88;
      *(undefined4 *)(param_1 + 0xbc) = uStack_84;
      *(undefined4 *)(param_1 + 0xc0) = uStack_80;
      *(undefined4 *)(param_1 + 0xc4) = uStack_7c;
      *(undefined4 **)(param_1 + 0xe0) = &DAT_0056d238;
      *(undefined4 *)(param_1 + 0xe4) = 0;
      *(undefined4 *)(param_1 + 0xe8) = 0;
      *(undefined4 *)(param_1 + 0xec) = 0;
      FUN_01bed4e2(param_1,&local_180,0x60);
      *(int **)(param_1 + 0x100) = piVar3;
      *(int **)(param_1 + 0x104) = piVar4;
      *(undefined4 **)(param_1 + 0x108) = puVar6;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(uint *)(param_1 + 0x68) = local_38;
      *(uint *)(param_1 + 0x6c) = local_34;
      *(uint *)(param_1 + 0x70) = local_30;
      FUN_01bed4e2(param_1 + 0x74,auStack_d0,0x44);
      *(undefined4 *)(param_1 + 0xf0) = 1000;
      *(undefined4 *)(param_1 + 200) = 0;
      *(undefined4 *)(param_1 + 0xcc) = 0;
      *(undefined4 *)(param_1 + 0xf4) = 100;
      *(int **)(param_1 + 0xf8) = piVar3;
      *(int **)(param_1 + 0xfc) = piVar4;
      *(undefined4 *)(param_1 + 0xd8) = 0;
      *(undefined4 *)(param_1 + 0xd0) = 0;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x9db6b0);
  (*pcVar1)();
}

