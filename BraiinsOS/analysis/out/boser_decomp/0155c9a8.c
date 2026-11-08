// FUN_0155c9a8 @ 0155c9a8 size=204 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_0155c9a8(uint *param_1,undefined4 param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  local_18 = *param_1;
  local_1c = param_1[3];
  local_30 = param_1[4];
  uStack_2c = param_1[5];
  uStack_28 = param_1[6];
  local_14 = param_1[1];
  local_20 = param_1[2];
  local_24 = param_1[7];
  FUN_0155ca74(param_2,&local_30);
  uVar3 = local_1c << 0x18 | (local_1c >> 8 & 0xff) << 0x10 | (local_1c >> 0x10 & 0xff) << 8 |
          local_1c >> 0x18;
  lVar1 = (ulonglong)~local_18 * (ulonglong)uVar3;
  uVar4 = (uint)lVar1;
  uVar2 = local_14 << 0x18 | (local_14 >> 8 & 0xff) << 0x10 | (local_14 >> 0x10 & 0xff) << 8 |
          local_14 >> 0x18;
  uVar3 = (local_20 << 0x18 | (local_20 >> 8 & 0xff) << 0x10 | (local_20 >> 0x10 & 0xff) << 8 |
          local_20 >> 0x18) * ~local_18 + uVar3 * ~local_14 + (int)((ulonglong)lVar1 >> 0x20);
  lVar1 = (ulonglong)local_20 * (ulonglong)uVar2;
  uVar3 = (uint)lVar1 ^
          (uVar3 * 0x1000000 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
          uVar3 >> 0x18);
  uVar4 = (local_18 << 0x18 | (local_18 >> 8 & 0xff) << 0x10 | (local_18 >> 0x10 & 0xff) << 8 |
          local_18 >> 0x18) * local_20 + uVar2 * local_1c + (int)((ulonglong)lVar1 >> 0x20) ^
          (uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18
          );
  uVar2 = uVar4;
  if ((local_20 & 0x20) != 0) {
    uVar2 = uVar3;
    uVar3 = uVar4;
  }
  return CONCAT44(uVar2 << (local_20 & 0x1f) | (uVar3 >> 1) >> (~local_20 & 0x1f),
                  uVar3 << (local_20 & 0x1f) | (uVar2 >> 1) >> (~local_20 & 0x1f));
}

