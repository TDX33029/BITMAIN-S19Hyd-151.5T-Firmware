// FUN_00ce7f8c @ 00ce7f8c size=488 calls_out=4 calls_in=1
// strings: 

void FUN_00ce7f8c(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_38;
  int local_34;
  int local_30;
  
  uVar3 = param_2[2] - 1;
  iVar2 = *param_2;
  do {
    iVar6 = iVar2;
    if (iVar6 == param_2[1]) goto LAB_00ce810c;
    iVar2 = uVar3 + 2;
    uVar4 = *(uint *)(param_2[3] + 0x4c);
    uVar3 = uVar3 + 1;
    *param_2 = iVar6 + 0x50;
    param_2[2] = iVar2;
    iVar2 = iVar6 + 0x50;
  } while (uVar4 <= uVar3);
  if (iVar6 != 0) {
    iVar2 = param_2[4];
    if (*(uint *)(iVar2 + 0x4c) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar3,*(uint *)(iVar2 + 0x4c),&DAT_01876ea4);
    }
    uVar1 = *(undefined4 *)(iVar6 + 0x44);
    iVar6 = *(int *)(iVar2 + 0x48) + uVar3 * 0x48;
    FUN_00cce358(&uStack_80,*(undefined4 *)(iVar6 + 0x3c),*(undefined4 *)(iVar6 + 0x40));
    local_88 = *(undefined8 *)(iVar6 + 0x30);
    if (*(uint *)(iVar2 + 0x4c) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar3,*(uint *)(iVar2 + 0x4c),&DAT_01876eb4);
    }
    puVar5 = (undefined4 *)(*(int *)(iVar2 + 0x48) + uVar3 * 0x48);
    local_120 = *puVar5;
    uStack_11c = puVar5[1];
    uStack_118 = puVar5[2];
    uStack_114 = puVar5[3];
    uStack_110 = puVar5[4];
    uStack_10c = puVar5[5];
    FUN_00cce358(&local_38,puVar5[0xf],puVar5[0x10]);
    uStack_a8 = puVar5[10];
    local_b8 = puVar5[6];
    uStack_b4 = puVar5[7];
    uStack_b0 = puVar5[8];
    local_44 = CONCAT31(local_44._1_3_,*(undefined1 *)(puVar5 + 0xb));
    uStack_ac = uStack_4c;
    uStack_a4 = local_44;
    local_a0 = (undefined4)local_88;
    uStack_9c = local_88._4_4_;
    uStack_98 = uStack_80;
    uStack_94 = uStack_7c;
    uStack_90 = uStack_78;
    uStack_8c = uStack_74;
    local_d0 = local_120;
    uStack_cc = uStack_11c;
    uStack_c8 = uStack_118;
    uStack_c4 = uStack_114;
    uStack_c0 = uStack_110;
    uStack_bc = uStack_10c;
    local_58 = local_b8;
    local_54 = uStack_b4;
    local_50 = uStack_b0;
    local_48 = uStack_a8;
    FUN_016dd1aa((uint)&local_120 | 4,&local_d0,0x48);
    puVar5 = (undefined4 *)(local_34 + 0x10);
    for (iVar2 = local_30; iVar2 != 0; iVar2 = iVar2 + -1) {
      if (puVar5[-4] != 0) {
        thunk_FUN_016d3fb4(puVar5[-3]);
      }
      if (puVar5[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar5);
      }
      puVar5 = puVar5 + 6;
    }
    if (local_38 != 0) {
      thunk_FUN_016d3fb4(local_34);
    }
    *param_1 = uVar1;
    FUN_016dd1aa(param_1 + 1,&local_120,0x4c);
    return;
  }
LAB_00ce810c:
  param_1[2] = 5;
  param_1[3] = 0;
  return;
}

