// FUN_01342040 @ 01342040 size=256 calls_out=1 calls_in=0
// strings: 

undefined8 FUN_01342040(undefined4 *param_1,int *param_2,int param_3)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  iVar4 = *param_2 + param_3 * -0x20;
  puVar2 = *(uint **)*param_1;
  local_24 = puVar2[1];
  local_30 = puVar2[2];
  local_28 = *puVar2;
  local_2c = puVar2[3];
  local_40 = puVar2[4];
  uStack_3c = puVar2[5];
  uStack_38 = puVar2[6];
  local_34 = puVar2[7];
  FUN_01352290(&local_40,*(undefined4 *)(*(int *)(iVar4 + -0x20) + 0xc),
               *(undefined4 *)(*(int *)(iVar4 + -0x20) + 0x10));
  FUN_01352290(&local_40,*(undefined4 *)(iVar4 + -0x1c),*(undefined4 *)(iVar4 + -0x18));
  uVar5 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 | (local_2c >> 0x10 & 0xff) << 8 |
          local_2c >> 0x18;
  lVar1 = (ulonglong)~local_28 * (ulonglong)uVar5;
  uVar6 = (uint)lVar1;
  uVar3 = local_24 << 0x18 | (local_24 >> 8 & 0xff) << 0x10 | (local_24 >> 0x10 & 0xff) << 8 |
          local_24 >> 0x18;
  uVar5 = (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 | (local_30 >> 0x10 & 0xff) << 8 |
          local_30 >> 0x18) * ~local_28 + uVar5 * ~local_24 + (int)((ulonglong)lVar1 >> 0x20);
  lVar1 = (ulonglong)local_30 * (ulonglong)uVar3;
  uVar5 = (uint)lVar1 ^
          (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
          uVar5 >> 0x18);
  uVar6 = (local_28 << 0x18 | (local_28 >> 8 & 0xff) << 0x10 | (local_28 >> 0x10 & 0xff) << 8 |
          local_28 >> 0x18) * local_30 + uVar3 * local_2c + (int)((ulonglong)lVar1 >> 0x20) ^
          (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18
          );
  uVar3 = uVar6;
  if ((local_30 & 0x20) != 0) {
    uVar3 = uVar5;
    uVar5 = uVar6;
  }
  return CONCAT44(uVar3 << (local_30 & 0x1f) | (uVar5 >> 1) >> (~local_30 & 0x1f),
                  uVar5 << (local_30 & 0x1f) | (uVar3 >> 1) >> (~local_30 & 0x1f));
}

