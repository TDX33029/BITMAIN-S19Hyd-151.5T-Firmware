// FUN_015bd3e0 @ 015bd3e0 size=116 calls_out=2 calls_in=0
// strings: 

void FUN_015bd3e0(int param_1)

{
  undefined1 auStack_e0 [128];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  local_60 = 0x6a09e667;
  uStack_5c = 0xbb67ae85;
  uStack_58 = 0x3c6ef372;
  uStack_54 = 0xa54ff53a;
  uStack_50 = 0x510e527f;
  local_4c = 0x9b05688c;
  uStack_48 = 0x1f83d9ab;
  uStack_44 = 0x5be0cd19;
  uStack_40 = 0;
  uStack_3c = 0;
  local_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  FUN_016dd606(auStack_e0,0,0x80);
  FUN_016dd1aa(param_1,auStack_e0,0xc0);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 **)(param_1 + 200) = &DAT_018ab800;
  return;
}

