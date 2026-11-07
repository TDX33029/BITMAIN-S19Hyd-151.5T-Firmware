// FUN_0002cce4 @ 0002cce4  size=200  callers=1
// program: bmminer


void FUN_0002cce4(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uStack00000030;
  uint auStack_b4 [5];
  uint auStack_a0 [32];
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_10 = param_1;
  local_c = param_2;
  local_8 = param_3;
  uStack_4 = param_4;
  memset(auStack_b4 + 2,0,0x8c);
  iVar4 = 2;
  auStack_b4[0] =
       local_10 << 0x18 | (local_10 >> 8 & 0xff) << 0x10 | (local_10 >> 0x10 & 0xff) << 8 |
       local_10 >> 0x18;
  auStack_b4[1] = local_c;
  puVar1 = &local_10;
  do {
    auStack_b4[iVar4] =
         (uint)*(byte *)((int)puVar1 + 9) << 0x10 | (uint)(byte)puVar1[2] << 0x18 |
         (uint)*(byte *)((int)puVar1 + 0xb) | (uint)*(byte *)((int)puVar1 + 10) << 8;
    iVar4 = iVar4 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar4 != 5);
  puVar1 = auStack_a0;
  puVar2 = &local_10;
  do {
    puVar3 = puVar2 + 1;
    *puVar1 = (uint)*(byte *)((int)puVar2 + 0x15) << 0x10 | (uint)(byte)puVar2[5] << 0x18 |
              (uint)*(byte *)((int)puVar2 + 0x17) | (uint)*(byte *)((int)puVar2 + 0x16) << 8;
    puVar1 = puVar1 + 1;
    puVar2 = puVar3;
  } while (puVar3 != &uStack00000030);
  FUN_0006c6ac(auStack_b4,0x54);
  return;
}

