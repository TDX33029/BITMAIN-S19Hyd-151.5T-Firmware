// FUN_015be5d4 @ 015be5d4 size=336 calls_out=1 calls_in=1
// strings: 

void FUN_015be5d4(int param_1,undefined4 param_2)

{
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  byte local_44;
  byte local_43;
  byte local_42;
  byte local_41;
  byte local_40;
  byte local_3f;
  byte local_3e;
  byte local_3d;
  byte local_3c;
  byte local_3b;
  byte local_3a;
  byte local_39;
  byte local_38;
  byte local_37;
  byte local_36;
  byte local_35;
  
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  local_64 = 0;
  local_68 = 0;
  FUN_005ea43c(&local_44,param_2,&local_68);
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  *(uint *)(param_1 + 0x1e8) =
       ((uint)local_40 << 0x18 | (uint)local_3f << 0x10 | (uint)local_3e << 8 | (uint)local_3d) << 1
       | (uint)(local_3c >> 7);
  *(uint *)(param_1 + 0x1e4) =
       ((uint)local_3c << 0x18 | (uint)local_3b << 0x10 | (uint)local_3a << 8 | (uint)local_39) << 1
       | (uint)(local_38 >> 7);
  *(uint *)(param_1 + 0x1e0) =
       ((uint)local_38 << 0x18 | (uint)local_37 << 0x10 | (uint)local_35 | (uint)local_36 << 8) << 1
       | (uint)(local_44 >> 7);
  *(uint *)(param_1 + 0x1ec) =
       (((uint)local_43 << 0x10 | (uint)local_42 << 8 | (uint)local_41 | (uint)local_44 << 0x18) <<
        1 | (uint)(local_40 >> 7)) ^
       ((local_44 & 0x80) << 0x18 | (uint)(local_44 >> 7) << 0x1e | (uint)(local_44 >> 7) << 0x19);
  FUN_016dd1aa(param_1,param_2,0x1e0);
  return;
}

