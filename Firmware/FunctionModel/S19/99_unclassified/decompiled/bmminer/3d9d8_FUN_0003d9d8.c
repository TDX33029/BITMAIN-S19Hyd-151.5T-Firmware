// FUN_0003d9d8 @ 0003d9d8  size=316  callers=1
// program: bmminer


undefined4 FUN_0003d9d8(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uStack_13c;
  uint local_138 [3];
  undefined1 auStack_12c [16];
  uint local_11c;
  uint local_118 [8];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 auStack_d0 [12];
  undefined1 auStack_c4 [180];
  
  memset(local_138,0,0x20);
  memset(local_118,0,0x20);
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    local_f0 = *(undefined4 *)(param_1 + 0x14);
    uStack_ec = *(undefined4 *)(param_1 + 0x18);
    uStack_e8 = *(undefined4 *)(param_1 + 0x1c);
    uStack_e4 = *(undefined4 *)(param_1 + 0x20);
    local_e0 = *(undefined4 *)(param_1 + 0x24);
    uStack_dc = *(undefined4 *)(param_1 + 0x28);
    uStack_d8 = *(undefined4 *)(param_1 + 0x2c);
    uStack_d4 = *(undefined4 *)(param_1 + 0x30);
    FUN_000357f0(&local_f0,0x20);
    local_138[0] = *(uint *)(param_1 + 8);
    local_f8 = 0x50;
    local_f4 = 0;
    local_138[1] = *(undefined4 *)(param_1 + 0xc);
    local_138[2] = *(undefined4 *)(param_1 + 0x10);
    FUN_000357f0(local_138,0xc,local_138[2],auStack_12c);
    FUN_00035c38(auStack_d0,local_138,0xc);
    local_138[0] = param_2 << 0x18 | (param_2 >> 8 & 0xff) << 0x10 | (param_2 >> 0x10 & 0xff) << 8 |
                   param_2 >> 0x18;
    FUN_000357f0(local_138,4);
    FUN_00035c38(auStack_c4,local_138,4);
    FUN_000252b8(&local_f8,local_138);
    memset(&local_f8,0,0xe8);
    FUN_0002546c(local_138,0x20,local_118);
    puVar3 = &local_11c;
    puVar2 = &uStack_13c;
    do {
      puVar3 = puVar3 + 1;
      uVar4 = *puVar3;
      puVar2 = puVar2 + 1;
      *puVar2 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
                uVar4 >> 0x18;
    } while (puVar3 != local_118 + 7);
    uVar1 = 0;
    if (local_11c != 0) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

