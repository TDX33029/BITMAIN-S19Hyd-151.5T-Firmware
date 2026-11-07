// FUN_016767c0 @ 016767c0 size=300 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_016767c0(uint *param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  local_28 = *param_1;
  local_24 = param_1[1];
  uVar5 = param_1[3];
  uVar3 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
  lVar1 = (ulonglong)uVar3 * 0xb36a80d2;
  uVar4 = (uint)lVar1;
  local_34 = param_1[7];
  uVar2 = param_1[2] ^ *(uint *)(param_2 + 0xc);
  uVar3 = (uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18
          ) * -0x4c957f2e + uVar3 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  local_3c = param_1[5];
  local_40 = param_1[4];
  local_38 = param_1[6];
  local_2c = (uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
             uVar4 >> 0x18) ^
             uVar5 * 0x2df45158 + uVar2 * 0x2d7f954c + (int)((ulonglong)uVar2 * 0x2df45158 >> 0x20);
  local_30 = (uVar3 * 0x1000000 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
             uVar3 >> 0x18) ^ (uint)((ulonglong)uVar2 * 0x2df45158);
  FUN_01676264(&local_40,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  uVar2 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 | (local_2c >> 0x10 & 0xff) << 8 |
          local_2c >> 0x18;
  lVar1 = (ulonglong)~local_28 * (ulonglong)uVar2;
  uVar4 = (uint)lVar1;
  uVar3 = local_24 << 0x18 | (local_24 >> 8 & 0xff) << 0x10 | (local_24 >> 0x10 & 0xff) << 8 |
          local_24 >> 0x18;
  uVar2 = (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 | (local_30 >> 0x10 & 0xff) << 8 |
          local_30 >> 0x18) * ~local_28 + uVar2 * ~local_24 + (int)((ulonglong)lVar1 >> 0x20);
  lVar1 = (ulonglong)local_30 * (ulonglong)uVar3;
  uVar2 = (uint)lVar1 ^
          (uVar2 * 0x1000000 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
          uVar2 >> 0x18);
  uVar4 = (local_28 << 0x18 | (local_28 >> 8 & 0xff) << 0x10 | (local_28 >> 0x10 & 0xff) << 8 |
          local_28 >> 0x18) * local_30 + uVar3 * local_2c + (int)((ulonglong)lVar1 >> 0x20) ^
          (uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18
          );
  uVar3 = uVar4;
  if ((local_30 & 0x20) != 0) {
    uVar3 = uVar2;
    uVar2 = uVar4;
  }
  return CONCAT44(uVar3 << (local_30 & 0x1f) | (uVar2 >> 1) >> (~local_30 & 0x1f),
                  uVar2 << (local_30 & 0x1f) | (uVar3 >> 1) >> (~local_30 & 0x1f));
}

