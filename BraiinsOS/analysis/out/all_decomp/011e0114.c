// FUN_011e0114 @ 011e0114 size=452 calls_out=1 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_011e0114(uint *param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  local_30 = *param_1;
  local_2c = param_1[1];
  local_38 = param_1[2];
  local_34 = param_1[3];
  local_48 = param_1[4];
  local_44 = param_1[5];
  local_40 = param_1[6];
  local_3c = param_1[7];
  FUN_011df94c(&local_48,*(undefined4 *)(*param_2 + 0xc),*(undefined4 *)(*param_2 + 0x10));
  uVar4 = local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 | (local_34 >> 0x10 & 0xff) << 8 |
          local_34 >> 0x18;
  lVar2 = (ulonglong)uVar4 * 0xb36a80d2;
  uVar5 = (uint)lVar2;
  uVar6 = local_38 ^ 0xff;
  iVar7 = param_2[1];
  uVar4 = (uVar6 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
          local_38 >> 0x18) * -0x4c957f2e + uVar4 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
  local_38 = (uVar4 * 0x1000000 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
             uVar4 >> 0x18) ^ (uint)((ulonglong)uVar6 * 0x2df45158);
  local_34 = (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
             uVar5 >> 0x18) ^
             local_34 * 0x2df45158 +
             uVar6 * 0x2d7f954c + (int)((ulonglong)uVar6 * 0x2df45158 >> 0x20);
  while (iVar7 != 0) {
    piVar1 = (int *)(iVar7 + 8);
    iVar7 = *(int *)(iVar7 + 0xc);
    FUN_011df94c(&local_48,*(undefined4 *)(*piVar1 + 0xc),*(undefined4 *)(*piVar1 + 0x10));
    uVar4 = local_38 ^ 0xff;
    uVar5 = local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 | (local_34 >> 0x10 & 0xff) << 8 |
            local_34 >> 0x18;
    lVar2 = (ulonglong)uVar5 * 0xb36a80d2;
    uVar6 = (uint)lVar2;
    uVar5 = (uVar4 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
            local_38 >> 0x18) * -0x4c957f2e + uVar5 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
    local_34 = (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
               uVar6 >> 0x18) ^
               local_34 * 0x2df45158 +
               uVar4 * 0x2d7f954c + (int)((ulonglong)uVar4 * 0x2df45158 >> 0x20);
    local_38 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
               uVar5 >> 0x18) ^ (uint)((ulonglong)uVar4 * 0x2df45158);
  }
  uVar4 = local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 | (local_34 >> 0x10 & 0xff) << 8 |
          local_34 >> 0x18;
  uVar5 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 | (local_2c >> 0x10 & 0xff) << 8 |
          local_2c >> 0x18;
  lVar2 = (ulonglong)~local_30 * (ulonglong)uVar4;
  uVar6 = (uint)lVar2;
  lVar3 = (ulonglong)local_38 * (ulonglong)uVar5;
  uVar4 = (local_38 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
          local_38 >> 0x18) * ~local_30 + uVar4 * ~local_2c + (int)((ulonglong)lVar2 >> 0x20);
  uVar4 = (uint)lVar3 ^
          (uVar4 * 0x1000000 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
          uVar4 >> 0x18);
  uVar6 = (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 | (local_30 >> 0x10 & 0xff) << 8 |
          local_30 >> 0x18) * local_38 + uVar5 * local_34 + (int)((ulonglong)lVar3 >> 0x20) ^
          (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18
          );
  uVar5 = uVar6;
  if ((local_38 & 0x20) != 0) {
    uVar5 = uVar4;
    uVar4 = uVar6;
  }
  return CONCAT44(uVar5 << (local_38 & 0x1f) | (uVar4 >> 1) >> (~local_38 & 0x1f),
                  uVar4 << (local_38 & 0x1f) | (uVar5 >> 1) >> (~local_38 & 0x1f));
}

