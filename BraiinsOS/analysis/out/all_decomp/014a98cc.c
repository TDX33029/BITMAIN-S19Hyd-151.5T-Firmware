// FUN_014a98cc @ 014a98cc size=528 calls_out=5 calls_in=0
// strings: 

void FUN_014a98cc(uint *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_328 [128];
  undefined1 auStack_2a8 [128];
  undefined1 auStack_228 [128];
  uint local_1a8;
  uint uStack_1a4;
  uint local_1a0;
  uint uStack_19c;
  uint local_198;
  uint uStack_194;
  uint local_190;
  uint uStack_18c;
  uint uStack_188;
  uint uStack_184;
  undefined1 auStack_128 [10];
  undefined1 local_11e;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint uStack_9c;
  uint local_98;
  uint uStack_94;
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  
  FUN_016cce5c(&local_a8,*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
  if (local_a8 == 1) {
    puVar3 = (uint *)((uint)auStack_128 | 4);
    *puVar3 = local_a0;
    puVar3[1] = uStack_9c;
    puVar3[2] = local_98;
    puVar3[3] = uStack_94;
    puVar3[4] = local_90;
    puVar3[5] = uStack_8c;
    puVar3[6] = uStack_88;
    puVar3[7] = uStack_84;
    local_1a0 = *puVar3;
    uStack_19c = puVar3[1];
    local_198 = puVar3[2];
    uStack_194 = puVar3[3];
    local_190 = puVar3[4];
    uStack_18c = puVar3[5];
    uStack_188 = puVar3[6];
    uStack_184 = puVar3[7];
    local_1a8 = 1;
    FUN_0152f154(&local_a8);
    puVar3 = (uint *)((uint)auStack_228 | 4);
    *puVar3 = local_a8;
    puVar3[1] = local_a4;
    puVar3[2] = local_a0;
    puVar3[3] = uStack_9c;
    puVar3[4] = local_98;
    puVar3[5] = uStack_94;
    puVar3[6] = local_90;
    puVar3[7] = uStack_8c;
    puVar2 = (uint *)((uint)auStack_2a8 | 4);
    uVar4 = puVar3[1];
    uVar5 = puVar3[2];
    uVar6 = puVar3[3];
    *puVar2 = *puVar3;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    uVar4 = puVar3[5];
    uVar5 = puVar3[6];
    uVar6 = puVar3[7];
    puVar1 = (uint *)((uint)auStack_328 | 4);
    puVar2[4] = puVar3[4];
    puVar2[5] = uVar4;
    puVar2[6] = uVar5;
    puVar2[7] = uVar6;
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    *puVar1 = *puVar2;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    uVar4 = puVar2[5];
    uVar5 = puVar2[6];
    uVar6 = puVar2[7];
    puVar1[4] = puVar2[4];
    puVar1[5] = uVar4;
    puVar1[6] = uVar5;
    puVar1[7] = uVar6;
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    *param_1 = *puVar1;
    param_1[1] = uVar4;
    param_1[2] = uVar5;
    param_1[3] = uVar6;
    uVar4 = puVar1[5];
    uVar5 = puVar1[6];
    uVar6 = puVar1[7];
    param_1[4] = puVar1[4];
    param_1[5] = uVar4;
    param_1[6] = uVar5;
    param_1[7] = uVar6;
    return;
  }
  FUN_016dd1aa(auStack_128,(uint)&local_a8 | 4,0x7c);
  FUN_016dd1aa((uint)&local_1a8 | 4,auStack_128,0x7c);
  FUN_016dd1aa(auStack_228,(uint)&local_1a8 | 4,0x7c);
  FUN_016dd1aa(auStack_2a8,auStack_228,0x7c);
  FUN_016dd1aa(auStack_328,auStack_2a8,0x7c);
  FUN_016dd1aa(&local_a8,auStack_328,0x7c);
  local_11e = 2;
  FUN_0152863c(&local_1a8,&local_a8,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
               param_4,param_5,auStack_128);
  if (local_1a8 == 0x80000029) {
    *param_1 = 0x80000029;
  }
  else {
    *param_1 = local_1a8;
    param_1[1] = uStack_1a4;
    param_1[2] = local_1a0;
    param_1[3] = uStack_19c;
    param_1[4] = local_198;
    param_1[5] = uStack_194;
    param_1[6] = local_190;
    param_1[7] = uStack_18c;
  }
  if ((local_a8 & 0x7fffffff) == 0) {
    return;
  }
  thunk_FUN_016d3fb4(local_a4);
  return;
}

