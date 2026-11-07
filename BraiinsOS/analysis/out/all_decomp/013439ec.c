// FUN_013439ec @ 013439ec size=340 calls_out=1 calls_in=0
// strings: 

undefined8 FUN_013439ec(undefined4 *param_1,int *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  puVar3 = *(uint **)*param_1;
  local_1c = puVar3[1];
  local_28 = puVar3[2];
  iVar7 = *param_2 + param_3 * -0x38;
  local_24 = puVar3[3];
  local_38 = puVar3[4];
  uStack_34 = puVar3[5];
  uStack_30 = puVar3[6];
  local_20 = *puVar3;
  local_2c = puVar3[7];
  FUN_01352290(&local_38,*(undefined4 *)(iVar7 + -0x34),*(undefined4 *)(iVar7 + -0x30));
  FUN_01352290(&local_38,*(undefined4 *)(iVar7 + -0x28),*(undefined4 *)(iVar7 + -0x24));
  uVar4 = local_28 ^ *(byte *)(iVar7 + -4);
  uVar5 = local_24 << 0x18 | (local_24 >> 8 & 0xff) << 0x10 | (local_24 >> 0x10 & 0xff) << 8 |
          local_24 >> 0x18;
  lVar1 = (ulonglong)uVar5 * 0xb36a80d2;
  uVar8 = (uint)lVar1;
  uVar5 = (uVar4 << 0x18 | (local_28 >> 8 & 0xff) << 0x10 | (local_28 >> 0x10 & 0xff) << 8 |
          local_28 >> 0x18) * -0x4c957f2e + uVar5 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
  uVar6 = (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18
          ) ^ local_24 * 0x2df45158 +
              uVar4 * 0x2d7f954c + (int)((ulonglong)uVar4 * 0x2df45158 >> 0x20);
  uVar8 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
          uVar5 >> 0x18) ^ (uint)((ulonglong)uVar4 * 0x2df45158);
  uVar4 = local_1c << 0x18 | (local_1c >> 8 & 0xff) << 0x10 | (local_1c >> 0x10 & 0xff) << 8 |
          local_1c >> 0x18;
  lVar1 = (ulonglong)uVar4 * (ulonglong)uVar8;
  uVar5 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18;
  lVar2 = (ulonglong)~local_20 * (ulonglong)uVar5;
  uVar9 = (uint)lVar2;
  uVar5 = (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18
          ) * ~local_20 + uVar5 * ~local_1c + (int)((ulonglong)lVar2 >> 0x20);
  uVar6 = (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18
          ) ^ uVar6 * uVar4 +
              uVar8 * (local_20 << 0x18 | (local_20 >> 8 & 0xff) << 0x10 |
                       (local_20 >> 0x10 & 0xff) << 8 | local_20 >> 0x18) +
              (int)((ulonglong)lVar1 >> 0x20);
  uVar4 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
          uVar5 >> 0x18) ^ (uint)lVar1;
  uVar5 = uVar6;
  if ((uVar8 & 0x20) != 0) {
    uVar5 = uVar4;
    uVar4 = uVar6;
  }
  return CONCAT44(uVar5 << (uVar8 & 0x1f) | (uVar4 >> 1) >> (~uVar8 & 0x1f),
                  uVar4 << (uVar8 & 0x1f) | (uVar5 >> 1) >> (~uVar8 & 0x1f));
}

