// FUN_01676128 @ 01676128 size=316 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_01676128(uint *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint uStack_24;
  uint local_20;
  uint local_1c;
  
  local_20 = *param_1;
  local_1c = param_1[1];
  local_28 = param_1[2];
  uStack_24 = param_1[3];
  local_38 = param_1[4];
  uStack_34 = param_1[5];
  local_30 = param_1[6];
  local_2c = param_1[7];
  FUN_01676264(&local_38,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  FUN_01676264(&local_38,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
  uVar3 = local_28 ^ *(byte *)(param_2 + 0x34);
  uVar4 = uStack_24 << 0x18 | (uStack_24 >> 8 & 0xff) << 0x10 | (uStack_24 >> 0x10 & 0xff) << 8 |
          uStack_24 >> 0x18;
  lVar1 = (ulonglong)uVar4 * 0xb36a80d2;
  uVar6 = (uint)lVar1;
  uVar4 = (uVar3 << 0x18 | (local_28 >> 8 & 0xff) << 0x10 | (local_28 >> 0x10 & 0xff) << 8 |
          local_28 >> 0x18) * -0x4c957f2e + uVar4 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar5 = (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18
          ) ^ uStack_24 * 0x2df45158 +
              uVar3 * 0x2d7f954c + (int)((ulonglong)uVar3 * 0x2df45158 >> 0x20);
  uVar6 = (uVar4 * 0x1000000 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
          uVar4 >> 0x18) ^ (uint)((ulonglong)uVar3 * 0x2df45158);
  uVar3 = local_1c << 0x18 | (local_1c >> 8 & 0xff) << 0x10 | (local_1c >> 0x10 & 0xff) << 8 |
          local_1c >> 0x18;
  lVar1 = (ulonglong)uVar3 * (ulonglong)uVar6;
  uVar4 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
  lVar2 = (ulonglong)~local_20 * (ulonglong)uVar4;
  uVar7 = (uint)lVar2;
  uVar4 = (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18
          ) * ~local_20 + uVar4 * ~local_1c + (int)((ulonglong)lVar2 >> 0x20);
  uVar5 = (uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18
          ) ^ uVar5 * uVar3 +
              uVar6 * (local_20 << 0x18 | (local_20 >> 8 & 0xff) << 0x10 |
                       (local_20 >> 0x10 & 0xff) << 8 | local_20 >> 0x18) +
              (int)((ulonglong)lVar1 >> 0x20);
  uVar3 = (uVar4 * 0x1000000 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
          uVar4 >> 0x18) ^ (uint)lVar1;
  uVar4 = uVar5;
  if ((uVar6 & 0x20) != 0) {
    uVar4 = uVar3;
    uVar3 = uVar5;
  }
  return CONCAT44(uVar4 << (uVar6 & 0x1f) | (uVar3 >> 1) >> (~uVar6 & 0x1f),
                  uVar3 << (uVar6 & 0x1f) | (uVar4 >> 1) >> (~uVar6 & 0x1f));
}

