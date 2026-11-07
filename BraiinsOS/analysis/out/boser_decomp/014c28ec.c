// FUN_014c28ec @ 014c28ec size=4688 calls_out=8 calls_in=1
// strings: 

void FUN_014c28ec(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined1 auStack_1180 [232];
  undefined1 auStack_1098 [232];
  undefined1 auStack_fb0 [232];
  undefined1 auStack_ec8 [232];
  undefined1 auStack_de0 [232];
  undefined1 auStack_cf8 [232];
  undefined1 auStack_c10 [232];
  undefined1 auStack_b28 [232];
  undefined1 auStack_a40 [232];
  undefined1 auStack_958 [232];
  undefined1 auStack_870 [232];
  undefined1 auStack_788 [232];
  undefined1 auStack_6a0 [232];
  undefined1 auStack_5b8 [232];
  undefined1 auStack_4d0 [232];
  undefined1 auStack_3e8 [232];
  undefined1 auStack_300 [232];
  undefined1 auStack_218 [232];
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  uint local_120;
  uint uStack_11c;
  uint uStack_118;
  uint local_114;
  uint local_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  
  FUN_01bed4e2(auStack_1180,param_2 + 0xe4,0xe4);
  FUN_01bed4e2(auStack_1098,param_2 + 0x1c8,0xe4);
  FUN_01bed4e2(auStack_fb0,param_2 + 0x2ac,0xe4);
  FUN_01bed4e2(auStack_ec8,param_2 + 0x390,0xe4);
  FUN_01bed4e2(auStack_de0,param_2 + 0x474,0xe4);
  FUN_01bed4e2(auStack_cf8,param_2 + 0x558,0xe4);
  FUN_01bed4e2(auStack_c10,param_2 + 0x63c,0xe4);
  FUN_01bed4e2(auStack_b28,param_2 + 0x720,0xe4);
  FUN_01bed4e2(auStack_a40,param_2 + 0x804,0xe4);
  FUN_01bed4e2(auStack_958,param_2 + 0x8e8,0xe4);
  FUN_01bed4e2(auStack_870,param_2 + 0x9cc,0xe4);
  FUN_01bed4e2(auStack_788,param_2 + 0xab0,0xe4);
  FUN_01bed4e2(auStack_6a0,param_2 + 0xb94,0xe4);
  FUN_01bed4e2(auStack_5b8,param_2 + 0xc78,0xe4);
  FUN_01bed4e2(auStack_4d0,param_2 + 0xd5c,0xe4);
  FUN_01bed4e2(auStack_3e8,param_2 + 0xe40,0xe4);
  FUN_01bed4e2(auStack_300,param_2 + 0xf24,0xe4);
  uVar1 = FUN_01bed4e2(auStack_218,param_2 + 0x1008,0xe4);
  uVar8 = thunk_FUN_01bee35a(uVar1,0x2c0);
  puVar3 = (uint *)((int)uVar8 + (int)((ulonglong)uVar8 >> 0x20));
  if ((char)puVar3[4] == '\0') {
    FUN_019ae6ac(&local_110);
    *puVar3 = local_110;
    puVar3[1] = uStack_10c;
    puVar3[2] = uStack_108;
    puVar3[3] = uStack_104;
    *(undefined1 *)(puVar3 + 4) = 1;
  }
  uVar4 = *puVar3;
  uVar5 = puVar3[1];
  uVar7 = puVar3[2];
  uVar6 = puVar3[3];
  *puVar3 = uVar4 + 1;
  puVar3[1] = uVar5 + (0xfffffffe < uVar4);
  iVar2 = thunk_FUN_01be5118(0x1d24);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x1d24);
  }
  FUN_01bed93e(iVar2 + 0x1d00,0xff,0x24);
  local_124 = 0;
  local_12c = 0x1f;
  local_128 = 0x1c;
  local_130 = iVar2 + 0x1d00;
  local_120 = uVar4;
  uStack_11c = uVar5;
  uStack_118 = uVar7;
  local_114 = uVar6;
  FUN_014c2324(&local_110,&local_130,3,0,param_2);
  if (2 < local_110 - 3) {
    FUN_014ca450(&local_110);
  }
  FUN_014c2324(&local_110,&local_130,3,1,param_2 + 0xe4);
  if (2 < local_110 - 3) {
    FUN_014ca450(&local_110);
  }
  FUN_014c2324(&local_110,&local_130,3,4,param_2 + 0x1c8);
  if (2 < local_110 - 3) {
    FUN_014ca450(&local_110);
  }
  FUN_014c2324(&local_110,&local_130,3,3,param_2 + 0x2ac);
  if (2 < local_110 - 3) {
    FUN_014ca450(&local_110);
  }
  FUN_014c2324(&local_110,&local_130,3,10,param_2 + 0x390);
  if (2 < local_110 - 3) {
    FUN_014ca450(&local_110);
  }
  FUN_014c2324(&local_110,&local_130,3,2,param_2 + 0x474);
  if (2 < local_110 - 3) {
    FUN_014ca450(&local_110);
  }
  FUN_014c2324(&local_110,&local_130,1,0,auStack_cf8);
  if (2 < local_110 - 3) {
    FUN_014ca450(&local_110);
  }
  FUN_014c2324(&local_110,&local_130,1,1,auStack_c10);
  if (2 < local_110 - 3) {
    FUN_014ca450(&local_110);
  }
  FUN_014c2324(&local_110,&local_130,1,4,auStack_b28);
  if (2 < local_110 - 3) {
    FUN_014ca450(&local_110);
  }
  FUN_014c2324(&local_110,&local_130,1,3,auStack_a40);
  if (2 < local_110 - 3) {
    FUN_014ca450(&local_110);
  }
  FUN_014c2324(&local_110,&local_130,1,2,auStack_958);
  if (2 < local_110 - 3) {
    FUN_014ca450(&local_110);
  }
  FUN_014c2324(&local_110,&local_130,2,0,auStack_870);
  if (2 < local_110 - 3) {
    FUN_014ca450(&local_110);
  }
  FUN_014c2324(&local_110,&local_130,2,1,auStack_788);
  if (2 < local_110 - 3) {
    FUN_014ca450(&local_110);
  }
  FUN_014c2324(&local_110,&local_130,2,3,auStack_6a0);
  if (2 < local_110 - 3) {
    FUN_014ca450(&local_110);
  }
  FUN_014c2324(&local_110,&local_130,2,8,auStack_5b8);
  if (2 < local_110 - 3) {
    FUN_014ca450(&local_110);
  }
  FUN_014c2324(&local_110,&local_130,2,9,auStack_4d0);
  if (2 < local_110 - 3) {
    FUN_014ca450(&local_110);
  }
  FUN_014c2324(&local_110,&local_130,0,10,auStack_3e8);
  if (2 < local_110 - 3) {
    FUN_014ca450(&local_110);
  }
  FUN_014c2324(&local_110,&local_130,0,8,auStack_300);
  if (2 < local_110 - 3) {
    FUN_014ca450(&local_110);
  }
  FUN_014c2324(&local_110,&local_130,0,9,auStack_218);
  if (2 < local_110 - 3) {
    FUN_014ca450(&local_110);
  }
  *param_1 = local_130;
  param_1[1] = local_12c;
  param_1[2] = local_128;
  param_1[3] = local_124;
  param_1[4] = local_120;
  param_1[5] = uStack_11c;
  param_1[6] = uStack_118;
  param_1[7] = local_114;
  return;
}

