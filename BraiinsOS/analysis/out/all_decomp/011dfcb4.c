// FUN_011dfcb4 @ 011dfcb4 size=1096 calls_out=6 calls_in=3
// strings: 

void FUN_011dfcb4(undefined4 *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte *pbVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  uint uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint uStack_2c;
  undefined4 local_28;
  
  pbVar3 = (byte *)*param_1;
  local_60 = (&switchD_011dfce0::switchdataD_011dfce4)[*pbVar3];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*pbVar3) {
  case 0:
    uVar9 = *(uint *)(param_2 + 0x14);
    uVar5 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
            uVar9 >> 0x18;
    uVar7 = *(uint *)(param_2 + 0x10) ^ 0xc0000001;
    break;
  case 1:
    uVar9 = *(uint *)(param_2 + 0x10);
    uVar5 = *(uint *)(param_2 + 0x14);
    uVar10 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
             uVar5 >> 0x18;
    uVar7 = uVar9 ^ pbVar3[1];
    lVar1 = (ulonglong)uVar10 * 0xb36a80d2;
    uVar6 = (uint)lVar1;
    uVar9 = (uVar7 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
            uVar9 >> 0x18) * -0x4c957f2e + uVar10 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
    *(uint *)(param_2 + 0x10) =
         (uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
         uVar9 >> 0x18) ^ (uint)((ulonglong)uVar7 * 0x2df45158);
    *(uint *)(param_2 + 0x14) =
         (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18)
         ^ uVar5 * 0x2df45158 + uVar7 * 0x2d7f954c + (int)((ulonglong)uVar7 * 0x2df45158 >> 0x20);
    return;
  case 2:
    if (*(int *)(pbVar3 + 8) == 0) {
      uVar11 = FUN_01845f30(*(undefined4 *)(pbVar3 + 0x10),*(undefined4 *)(pbVar3 + 0x14));
    }
    else if (*(int *)(pbVar3 + 8) == 1) {
      uVar11 = FUN_01845d5c(*(undefined4 *)(pbVar3 + 0x10),*(undefined4 *)(pbVar3 + 0x14));
    }
    else {
      uVar11 = *(undefined8 *)(pbVar3 + 0x10);
    }
    uVar9 = *(uint *)(param_2 + 0x14) ^ (uint)((ulonglong)uVar11 >> 0x20);
    uVar7 = *(uint *)(param_2 + 0x10) ^ (uint)uVar11;
    uVar5 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
            uVar9 >> 0x18;
    lVar1 = (ulonglong)uVar5 * 0xb36a80d2;
    uVar6 = (uint)lVar1;
    uVar10 = (uint)((ulonglong)uVar7 * 0x2df45158);
    uVar5 = (uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
            uVar7 >> 0x18) * -0x4c957f2e + uVar5 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
    uVar6 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
            uVar6 >> 0x18;
    uVar7 = uVar9 * 0x2df45158 + uVar7 * 0x2d7f954c + (int)((ulonglong)uVar7 * 0x2df45158 >> 0x20);
    goto LAB_011e00fc;
  case 3:
    FUN_011df94c(param_2,*(undefined4 *)(pbVar3 + 8),*(undefined4 *)(pbVar3 + 0xc));
    uVar9 = *(uint *)(param_2 + 0x14);
    uVar5 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
            uVar9 >> 0x18;
    uVar7 = *(uint *)(param_2 + 0x10) ^ 0xff;
    break;
  case 4:
    if (*(int *)(pbVar3 + 0xc) != 0) {
      uVar7 = *(uint *)(pbVar3 + 8);
      iVar8 = *(int *)(pbVar3 + 0xc) * 0x18;
      do {
        local_6c = uVar7;
        FUN_011dfcb4(&local_6c,param_2);
        uVar7 = uVar7 + 0x18;
        iVar8 = iVar8 + -0x18;
      } while (iVar8 != 0);
    }
    return;
  case 5:
    local_64 = *(int *)(pbVar3 + 4);
    uVar7 = 0;
    if (local_64 == 0) {
      uStack_4c = 0;
    }
    else {
      local_60 = *(uint *)(pbVar3 + 8);
      uStack_4c = *(undefined4 *)(pbVar3 + 0xc);
    }
    local_6c = (uint)(local_64 != 0);
    uVar9 = 0;
    local_58 = 0;
    local_68 = 0;
    local_5c = local_6c;
    local_54 = local_64;
    uStack_50 = local_60;
    uVar11 = FUN_00f45584(&local_6c);
    while (iVar8 = (int)uVar11, iVar8 != 0) {
      puVar4 = (uint *)FUN_011e4df8();
      local_38 = puVar4[2];
      local_34 = puVar4[3];
      local_30 = *puVar4;
      uStack_2c = puVar4[1];
      local_48 = puVar4[4];
      local_44 = puVar4[5];
      local_40 = puVar4[6];
      local_3c = puVar4[7];
      FUN_011df94c(&local_48,*(undefined4 *)(iVar8 + 4),*(undefined4 *)(iVar8 + 8));
      uVar5 = local_38 ^ 0xff;
      uVar6 = local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 | (local_34 >> 0x10 & 0xff) << 8 |
              local_34 >> 0x18;
      lVar1 = (ulonglong)uVar6 * 0xb36a80d2;
      uVar10 = (uint)lVar1;
      uVar6 = (uVar5 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
              local_38 >> 0x18) * -0x4c957f2e +
              uVar6 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
      local_34 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
                 uVar10 >> 0x18) ^
                 local_34 * 0x2df45158 +
                 uVar5 * 0x2d7f954c + (int)((ulonglong)uVar5 * 0x2df45158 >> 0x20);
      local_38 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                 uVar6 >> 0x18) ^ (uint)((ulonglong)uVar5 * 0x2df45158);
      local_28 = (int)((ulonglong)uVar11 >> 0x20);
      FUN_011dfcb4(&local_28,&local_48);
      uVar6 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 | (uStack_2c >> 0x10 & 0xff) << 8
              | uStack_2c >> 0x18;
      lVar1 = (ulonglong)local_38 * (ulonglong)uVar6;
      uVar5 = local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 | (local_34 >> 0x10 & 0xff) << 8 |
              local_34 >> 0x18;
      lVar2 = (ulonglong)~local_30 * (ulonglong)uVar5;
      uVar10 = (uint)lVar2;
      uVar5 = (local_38 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
              local_38 >> 0x18) * ~local_30 + uVar5 * ~uStack_2c + (int)((ulonglong)lVar2 >> 0x20);
      uVar5 = (uint)lVar1 ^
              (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
              uVar5 >> 0x18);
      uVar10 = (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 | (local_30 >> 0x10 & 0xff) << 8 |
               local_30 >> 0x18) * local_38 + uVar6 * local_34 + (int)((ulonglong)lVar1 >> 0x20) ^
               (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
               uVar10 >> 0x18);
      uVar6 = uVar10;
      if ((local_38 & 0x20) != 0) {
        uVar6 = uVar5;
        uVar5 = uVar10;
      }
      uVar7 = (uVar5 << (local_38 & 0x1f) | (uVar6 >> 1) >> (~local_38 & 0x1f)) ^ uVar7;
      uVar9 = (uVar6 << (local_38 & 0x1f) | (uVar5 >> 1) >> (~local_38 & 0x1f)) ^ uVar9;
      uVar11 = FUN_00f45584(&local_6c);
    }
    uVar9 = *(uint *)(param_2 + 0x14) ^ uVar9;
    uVar5 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
            uVar9 >> 0x18;
    uVar7 = *(uint *)(param_2 + 0x10) ^ uVar7;
    lVar1 = (ulonglong)uVar5 * 0xb36a80d2;
    uVar6 = (uint)lVar1;
    uVar5 = (uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
            uVar7 >> 0x18) * -0x4c957f2e + uVar5 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
    *(uint *)(param_2 + 0x10) =
         (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
         uVar5 >> 0x18) ^ (uint)((ulonglong)uVar7 * 0x2df45158);
    *(uint *)(param_2 + 0x14) =
         (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18)
         ^ uVar9 * 0x2df45158 + uVar7 * 0x2d7f954c + (int)((ulonglong)uVar7 * 0x2df45158 >> 0x20);
    return;
  }
  uVar6 = (uint)((ulonglong)uVar5 * 0xb36a80d2);
  uVar10 = (uint)((ulonglong)uVar7 * 0x2df45158);
  uVar5 = (uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18
          ) * -0x4c957f2e + uVar5 * -0x5851f42e + (int)((ulonglong)uVar5 * 0xb36a80d2 >> 0x20);
  uVar6 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18;
  uVar7 = uVar9 * 0x2df45158 + uVar7 * 0x2d7f954c + (int)((ulonglong)uVar7 * 0x2df45158 >> 0x20);
LAB_011e00fc:
  *(uint *)(param_2 + 0x10) =
       (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) ^
       uVar10;
  *(uint *)(param_2 + 0x14) = uVar6 ^ uVar7;
  return;
}

