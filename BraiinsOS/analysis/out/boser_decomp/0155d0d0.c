// FUN_0155d0d0 @ 0155d0d0 size=236 calls_out=2 calls_in=3
// strings: 

undefined8 FUN_0155d0d0(uint *param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  local_20 = *param_1;
  local_1c = param_1[1];
  local_28 = param_1[2];
  local_24 = param_1[3];
  local_38 = param_1[4];
  uStack_34 = param_1[5];
  uStack_30 = param_1[6];
  local_2c = param_1[7];
  FUN_01676264(&local_38,*(undefined4 *)(*param_2 + 0xc),*(undefined4 *)(*param_2 + 0x10));
  FUN_01566424(param_2 + 1,&local_38);
  uVar3 = local_24 << 0x18 | (local_24 >> 8 & 0xff) << 0x10 | (local_24 >> 0x10 & 0xff) << 8 |
          local_24 >> 0x18;
  lVar1 = (ulonglong)~local_20 * (ulonglong)uVar3;
  uVar4 = (uint)lVar1;
  uVar2 = local_1c << 0x18 | (local_1c >> 8 & 0xff) << 0x10 | (local_1c >> 0x10 & 0xff) << 8 |
          local_1c >> 0x18;
  uVar3 = (local_28 << 0x18 | (local_28 >> 8 & 0xff) << 0x10 | (local_28 >> 0x10 & 0xff) << 8 |
          local_28 >> 0x18) * ~local_20 + uVar3 * ~local_1c + (int)((ulonglong)lVar1 >> 0x20);
  lVar1 = (ulonglong)local_28 * (ulonglong)uVar2;
  uVar3 = (uint)lVar1 ^
          (uVar3 * 0x1000000 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
          uVar3 >> 0x18);
  uVar4 = (local_20 << 0x18 | (local_20 >> 8 & 0xff) << 0x10 | (local_20 >> 0x10 & 0xff) << 8 |
          local_20 >> 0x18) * local_28 + uVar2 * local_24 + (int)((ulonglong)lVar1 >> 0x20) ^
          (uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18
          );
  uVar2 = uVar4;
  if ((local_28 & 0x20) != 0) {
    uVar2 = uVar3;
    uVar3 = uVar4;
  }
  return CONCAT44(uVar2 << (local_28 & 0x1f) | (uVar3 >> 1) >> (~local_28 & 0x1f),
                  uVar3 << (local_28 & 0x1f) | (uVar2 >> 1) >> (~local_28 & 0x1f));
}

