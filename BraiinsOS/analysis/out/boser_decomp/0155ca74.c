// FUN_0155ca74 @ 0155ca74 size=952 calls_out=6 calls_in=2
// strings: 

void FUN_0155ca74(undefined4 *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  uint local_6c [3];
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint uStack_2c;
  undefined4 local_28;
  
  puVar5 = (undefined1 *)*param_1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*puVar5) {
  case 0:
    uVar6 = *(uint *)(param_2 + 0x14);
    uVar11 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
             uVar6 >> 0x18;
    uVar10 = *(uint *)(param_2 + 0x10) ^ 0xc0000001;
    lVar1 = (ulonglong)uVar11 * 0xb36a80d2;
    uVar8 = (uint)lVar1;
    uVar7 = (uint)((ulonglong)uVar10 * 0x2df45158);
    uVar11 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
             uVar10 >> 0x18) * -0x4c957f2e + uVar11 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
    uVar8 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
            uVar8 >> 0x18;
    uVar10 = uVar6 * 0x2df45158 +
             uVar10 * 0x2d7f954c + (int)((ulonglong)uVar10 * 0x2df45158 >> 0x20);
    break;
  case 1:
    uVar10 = *(uint *)(param_2 + 0x10);
    uVar7 = *(uint *)(param_2 + 0x14);
    uVar11 = uVar10 ^ (byte)puVar5[1];
    uVar8 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
            uVar7 >> 0x18;
    lVar1 = (ulonglong)uVar8 * 0xb36a80d2;
    uVar6 = (uint)lVar1;
    uVar10 = (uVar11 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
             uVar10 >> 0x18) * -0x4c957f2e + uVar8 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
    uVar8 = (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
            uVar6 >> 0x18) ^
            uVar7 * 0x2df45158 + uVar11 * 0x2d7f954c + (int)((ulonglong)uVar11 * 0x2df45158 >> 0x20)
    ;
    uVar7 = (uVar10 * 0x1000000 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
            uVar10 >> 0x18) ^ (uint)((ulonglong)uVar11 * 0x2df45158);
    goto LAB_0155ce38;
  case 2:
    puVar3 = (undefined8 *)(puVar5 + 0x10);
    if (*(int *)(puVar5 + 8) == 2) {
      uVar12 = *puVar3;
    }
    else if (*(int *)(puVar5 + 8) == 1) {
      uVar12 = FUN_01bf0cac(*(undefined4 *)puVar3,*(undefined4 *)(puVar5 + 0x14));
    }
    else {
      uVar12 = FUN_01bf0e80(*(undefined4 *)puVar3,*(undefined4 *)(puVar5 + 0x14));
    }
    uVar6 = *(uint *)(param_2 + 0x14) ^ (uint)((ulonglong)uVar12 >> 0x20);
    uVar10 = *(uint *)(param_2 + 0x10) ^ (uint)uVar12;
    uVar11 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
             uVar6 >> 0x18;
    lVar1 = (ulonglong)uVar11 * 0xb36a80d2;
    uVar8 = (uint)lVar1;
    uVar7 = (uint)((ulonglong)uVar10 * 0x2df45158);
    uVar11 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
             uVar10 >> 0x18) * -0x4c957f2e + uVar11 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
    uVar8 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
            uVar8 >> 0x18;
    uVar10 = uVar6 * 0x2df45158 +
             uVar10 * 0x2d7f954c + (int)((ulonglong)uVar10 * 0x2df45158 >> 0x20);
    break;
  case 3:
    FUN_01676264(param_2,*(undefined4 *)(puVar5 + 8),*(undefined4 *)(puVar5 + 0xc));
    return;
  case 4:
    if (*(int *)(puVar5 + 0xc) == 0) {
      return;
    }
    uVar10 = *(uint *)(puVar5 + 8);
    iVar9 = *(int *)(puVar5 + 0xc) * 0x18;
    do {
      local_6c[0] = uVar10;
      FUN_0155ca74(local_6c,param_2);
      uVar10 = uVar10 + 0x18;
      iVar9 = iVar9 + -0x18;
    } while (iVar9 != 0);
    return;
  case 5:
    local_6c[2] = *(uint *)(puVar5 + 4);
    local_60 = *(undefined4 *)(puVar5 + 8);
    uVar10 = 0;
    local_4c = *(undefined4 *)(puVar5 + 0xc);
    if (local_6c[2] == 0) {
      local_4c = 0;
    }
    uVar11 = 0;
    local_6c[0] = (uint)(local_6c[2] != 0);
    local_58 = 0;
    local_6c[1] = 0;
    local_5c = local_6c[0];
    local_54 = local_6c[2];
    local_50 = local_60;
    while( true ) {
      uVar12 = FUN_01a41998(local_6c);
      iVar9 = (int)uVar12;
      if (iVar9 == 0) break;
      puVar4 = (uint *)FUN_01671044();
      local_38 = puVar4[2];
      local_34 = puVar4[3];
      local_44 = puVar4[5];
      local_30 = *puVar4;
      uStack_2c = puVar4[1];
      local_48 = puVar4[4];
      local_40 = puVar4[6];
      local_3c = puVar4[7];
      FUN_01676264(&local_48,*(undefined4 *)(iVar9 + 4),*(undefined4 *)(iVar9 + 8));
      local_28 = (int)((ulonglong)uVar12 >> 0x20);
      FUN_0155ca74(&local_28,&local_48);
      uVar6 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 | (uStack_2c >> 0x10 & 0xff) << 8
              | uStack_2c >> 0x18;
      lVar1 = (ulonglong)local_38 * (ulonglong)uVar6;
      uVar7 = local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 | (local_34 >> 0x10 & 0xff) << 8 |
              local_34 >> 0x18;
      lVar2 = (ulonglong)~local_30 * (ulonglong)uVar7;
      uVar8 = (uint)lVar2;
      uVar7 = (local_38 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
              local_38 >> 0x18) * ~local_30 + uVar7 * ~uStack_2c + (int)((ulonglong)lVar2 >> 0x20);
      uVar7 = (uint)lVar1 ^
              (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
              uVar7 >> 0x18);
      uVar8 = (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 | (local_30 >> 0x10 & 0xff) << 8 |
              local_30 >> 0x18) * local_38 + uVar6 * local_34 + (int)((ulonglong)lVar1 >> 0x20) ^
              (uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
              uVar8 >> 0x18);
      uVar6 = uVar8;
      if ((local_38 & 0x20) != 0) {
        uVar6 = uVar7;
        uVar7 = uVar8;
      }
      uVar11 = (uVar7 << (local_38 & 0x1f) | (uVar6 >> 1) >> (~local_38 & 0x1f)) ^ uVar11;
      uVar10 = (uVar6 << (local_38 & 0x1f) | (uVar7 >> 1) >> (~local_38 & 0x1f)) ^ uVar10;
    }
    uVar10 = *(uint *)(param_2 + 0x14) ^ uVar10;
    uVar7 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
            uVar10 >> 0x18;
    uVar11 = *(uint *)(param_2 + 0x10) ^ uVar11;
    lVar1 = (ulonglong)uVar7 * 0xb36a80d2;
    uVar6 = (uint)lVar1;
    uVar7 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
            uVar11 >> 0x18) * -0x4c957f2e + uVar7 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
    *(uint *)(param_2 + 0x10) =
         (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
         uVar7 >> 0x18) ^ (uint)((ulonglong)uVar11 * 0x2df45158);
    *(uint *)(param_2 + 0x14) =
         (uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18)
         ^ uVar10 * 0x2df45158 + uVar11 * 0x2d7f954c + (int)((ulonglong)uVar11 * 0x2df45158 >> 0x20)
    ;
    return;
  }
  uVar8 = uVar8 ^ uVar10;
  uVar7 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
          uVar11 >> 0x18) ^ uVar7;
LAB_0155ce38:
  *(uint *)(param_2 + 0x10) = uVar7;
  *(uint *)(param_2 + 0x14) = uVar8;
  return;
}

