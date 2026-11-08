// FUN_01676610 @ 01676610 size=240 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01676610(uint *param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  iVar5 = param_2[1];
  iVar4 = param_2[2];
  local_30 = *param_1;
  local_2c = param_1[1];
  local_38 = param_1[2];
  local_40 = param_1[6];
  local_3c = param_1[7];
  local_34 = param_1[3];
  local_48 = param_1[4];
  uStack_44 = param_1[5];
  FUN_01676264(&local_48,*(undefined4 *)(*param_2 + 4),*(undefined4 *)(*param_2 + 8));
  FUN_01676264(&local_48,iVar5,iVar4);
  uVar3 = local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 | (local_34 >> 0x10 & 0xff) << 8 |
          local_34 >> 0x18;
  lVar1 = (ulonglong)~local_30 * (ulonglong)uVar3;
  uVar6 = (uint)lVar1;
  uVar2 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 | (local_2c >> 0x10 & 0xff) << 8 |
          local_2c >> 0x18;
  uVar3 = (local_38 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
          local_38 >> 0x18) * ~local_30 + uVar3 * ~local_2c + (int)((ulonglong)lVar1 >> 0x20);
  lVar1 = (ulonglong)local_38 * (ulonglong)uVar2;
  uVar3 = (uint)lVar1 ^
          (uVar3 * 0x1000000 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
          uVar3 >> 0x18);
  uVar6 = (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 | (local_30 >> 0x10 & 0xff) << 8 |
          local_30 >> 0x18) * local_38 + uVar2 * local_34 + (int)((ulonglong)lVar1 >> 0x20) ^
          (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18
          );
  uVar2 = uVar6;
  if ((local_38 & 0x20) != 0) {
    uVar2 = uVar3;
    uVar3 = uVar6;
  }
  return CONCAT44(uVar2 << (local_38 & 0x1f) | (uVar3 >> 1) >> (~local_38 & 0x1f),
                  uVar3 << (local_38 & 0x1f) | (uVar2 >> 1) >> (~local_38 & 0x1f));
}

