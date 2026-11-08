// FUN_0155ce44 @ 0155ce44 size=264 calls_out=2 calls_in=6
// strings: 

undefined8 FUN_0155ce44(uint *param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  local_24 = param_1[1];
  local_30 = param_1[2];
  local_28 = *param_1;
  local_2c = param_1[3];
  local_40 = param_1[4];
  uStack_3c = param_1[5];
  uStack_38 = param_1[6];
  local_34 = param_1[7];
  FUN_01676264(&local_40,*(undefined4 *)(*param_2 + 0xc),*(undefined4 *)(*param_2 + 0x10));
  FUN_01676264(&local_40,param_2[1] + 8,param_2[2]);
  FUN_01566424(param_2 + 3,&local_40);
  uVar3 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 | (local_2c >> 0x10 & 0xff) << 8 |
          local_2c >> 0x18;
  lVar1 = (ulonglong)~local_28 * (ulonglong)uVar3;
  uVar4 = (uint)lVar1;
  uVar2 = local_24 << 0x18 | (local_24 >> 8 & 0xff) << 0x10 | (local_24 >> 0x10 & 0xff) << 8 |
          local_24 >> 0x18;
  uVar3 = (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 | (local_30 >> 0x10 & 0xff) << 8 |
          local_30 >> 0x18) * ~local_28 + uVar3 * ~local_24 + (int)((ulonglong)lVar1 >> 0x20);
  lVar1 = (ulonglong)local_30 * (ulonglong)uVar2;
  uVar3 = (uint)lVar1 ^
          (uVar3 * 0x1000000 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
          uVar3 >> 0x18);
  uVar4 = (local_28 << 0x18 | (local_28 >> 8 & 0xff) << 0x10 | (local_28 >> 0x10 & 0xff) << 8 |
          local_28 >> 0x18) * local_30 + uVar2 * local_2c + (int)((ulonglong)lVar1 >> 0x20) ^
          (uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18
          );
  uVar2 = uVar4;
  if ((local_30 & 0x20) != 0) {
    uVar2 = uVar3;
    uVar3 = uVar4;
  }
  return CONCAT44(uVar2 << (local_30 & 0x1f) | (uVar3 >> 1) >> (~local_30 & 0x1f),
                  uVar3 << (local_30 & 0x1f) | (uVar2 >> 1) >> (~local_30 & 0x1f));
}

