// FUN_0100dde8 @ 0100dde8 size=2108 calls_out=0 calls_in=4
// strings: 

undefined8 FUN_0100dde8(uint *param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  uVar12 = param_5[2] + param_3;
  uVar13 = param_5[3] + param_4 + (uint)CARRY4(param_5[2],param_3);
  if (param_2 < 0x81) {
    uVar9 = *param_5;
    uVar6 = param_5[1];
    local_2c = param_4;
    local_28 = param_3;
  }
  else {
    local_44 = param_5[6] + param_3;
    local_40 = param_5[7] + param_4 + (uint)CARRY4(param_5[6],param_3);
    local_4c = param_5[4] + param_3;
    local_48 = param_5[5] + param_4 + (uint)CARRY4(param_5[4],param_3);
    if (0x100 < param_2) {
      local_34 = param_5[10] + param_3;
      local_30 = param_5[0xb] + param_4 + (uint)CARRY4(param_5[10],param_3);
      local_3c = param_5[8] + param_3;
      uVar9 = *param_5;
      uVar6 = param_5[1];
      local_50 = param_5[9] + param_4 + (uint)CARRY4(param_5[8],param_3);
      local_38 = param_2;
      local_2c = param_4;
      local_28 = param_3;
      do {
        uVar4 = (ulonglong)(param_1[0xb] ^ local_30) * (ulonglong)(param_1[0x16] ^ uVar9) ^
                (ulonglong)(param_1[10] ^ local_34) * (ulonglong)(param_1[0x17] ^ uVar6);
        uVar5 = (ulonglong)(param_1[10] ^ local_34) * (ulonglong)(param_1[0x16] ^ uVar9) ^
                (ulonglong)(param_1[0xb] ^ local_30) * (ulonglong)(param_1[0x17] ^ uVar6);
        local_30 = (uint)(uVar5 >> 0x20) ^ (uint)uVar4;
        local_34 = (uint)uVar5 ^ (uint)(uVar4 >> 0x20);
        uVar4 = (ulonglong)(param_1[9] ^ local_50) * (ulonglong)(param_1[0x14] ^ uVar9) ^
                (ulonglong)(param_1[8] ^ local_3c) * (ulonglong)(param_1[0x15] ^ uVar6);
        uVar5 = (ulonglong)(param_1[8] ^ local_3c) * (ulonglong)(param_1[0x14] ^ uVar9) ^
                (ulonglong)(param_1[9] ^ local_50) * (ulonglong)(param_1[0x15] ^ uVar6);
        local_50 = (uint)(uVar5 >> 0x20) ^ (uint)uVar4;
        local_3c = (uint)uVar5 ^ (uint)(uVar4 >> 0x20);
        uVar4 = (ulonglong)(param_1[7] ^ local_40) * (ulonglong)(param_1[0x12] ^ uVar9) ^
                (ulonglong)(param_1[6] ^ local_44) * (ulonglong)(param_1[0x13] ^ uVar6);
        uVar5 = (ulonglong)(param_1[6] ^ local_44) * (ulonglong)(param_1[0x12] ^ uVar9) ^
                (ulonglong)(param_1[7] ^ local_40) * (ulonglong)(param_1[0x13] ^ uVar6);
        local_40 = (uint)(uVar5 >> 0x20) ^ (uint)uVar4;
        local_44 = (uint)uVar5 ^ (uint)(uVar4 >> 0x20);
        uVar4 = (ulonglong)(param_1[5] ^ local_48) * (ulonglong)(param_1[0x10] ^ uVar9) ^
                (ulonglong)(param_1[4] ^ local_4c) * (ulonglong)(param_1[0x11] ^ uVar6);
        uVar5 = (ulonglong)(param_1[4] ^ local_4c) * (ulonglong)(param_1[0x10] ^ uVar9) ^
                (ulonglong)(param_1[5] ^ local_48) * (ulonglong)(param_1[0x11] ^ uVar6);
        local_48 = (uint)(uVar5 >> 0x20) ^ (uint)uVar4;
        local_4c = (uint)uVar5 ^ (uint)(uVar4 >> 0x20);
        uVar8 = *param_1;
        puVar1 = param_1 + 1;
        uVar4 = (ulonglong)(param_1[3] ^ uVar13) * (ulonglong)(param_1[0xe] ^ uVar9) ^
                (ulonglong)(param_1[2] ^ uVar12) * (ulonglong)(param_1[0xf] ^ uVar6);
        uVar5 = (ulonglong)(param_1[2] ^ uVar12) * (ulonglong)(param_1[0xe] ^ uVar9) ^
                (ulonglong)(param_1[3] ^ uVar13) * (ulonglong)(param_1[0xf] ^ uVar6);
        uVar13 = (uint)(uVar5 >> 0x20) ^ (uint)uVar4;
        uVar12 = (uint)uVar5 ^ (uint)(uVar4 >> 0x20);
        puVar2 = param_1 + 0xc;
        puVar3 = param_1 + 0xd;
        param_1 = param_1 + 0x18;
        uVar4 = (ulonglong)(*puVar1 ^ local_2c) * (ulonglong)(uVar9 ^ *puVar2) ^
                (ulonglong)(uVar8 ^ local_28) * (ulonglong)(uVar6 ^ *puVar3);
        uVar5 = (ulonglong)(uVar8 ^ local_28) * (ulonglong)(uVar9 ^ *puVar2) ^
                (ulonglong)(*puVar1 ^ local_2c) * (ulonglong)(uVar6 ^ *puVar3);
        local_2c = (uint)(uVar5 >> 0x20) ^ (uint)uVar4;
        local_28 = (uint)uVar5 ^ (uint)(uVar4 >> 0x20);
        param_2 = local_38 - 0x60;
        local_38 = param_2;
      } while (0x100 < param_2);
      uVar12 = local_34 ^ uVar12;
      param_3 = local_3c ^ local_28;
      uVar13 = local_30 ^ uVar13;
      param_4 = local_50 ^ local_2c;
    }
    uVar9 = *param_5;
    uVar6 = param_5[1];
    local_3c = uVar12;
    do {
      uVar4 = (ulonglong)(param_1[6] ^ local_44) * (ulonglong)(param_1[0xf] ^ uVar6) ^
              (ulonglong)(param_1[7] ^ local_40) * (ulonglong)(param_1[0xe] ^ uVar9);
      uVar5 = (ulonglong)(param_1[6] ^ local_44) * (ulonglong)(param_1[0xe] ^ uVar9) ^
              (ulonglong)(param_1[7] ^ local_40) * (ulonglong)(param_1[0xf] ^ uVar6);
      local_40 = (uint)(uVar5 >> 0x20) ^ (uint)uVar4;
      local_44 = (uint)uVar5 ^ (uint)(uVar4 >> 0x20);
      uVar4 = (ulonglong)(param_1[5] ^ local_48) * (ulonglong)(param_1[0xc] ^ uVar9) ^
              (ulonglong)(param_1[4] ^ local_4c) * (ulonglong)(param_1[0xd] ^ uVar6);
      uVar5 = (ulonglong)(param_1[4] ^ local_4c) * (ulonglong)(param_1[0xc] ^ uVar9) ^
              (ulonglong)(param_1[5] ^ local_48) * (ulonglong)(param_1[0xd] ^ uVar6);
      local_48 = (uint)(uVar5 >> 0x20) ^ (uint)uVar4;
      local_4c = (uint)uVar5 ^ (uint)(uVar4 >> 0x20);
      uVar4 = (ulonglong)(param_1[3] ^ uVar13) * (ulonglong)(param_1[10] ^ uVar9) ^
              (ulonglong)(param_1[2] ^ local_3c) * (ulonglong)(param_1[0xb] ^ uVar6);
      uVar5 = (ulonglong)(param_1[2] ^ local_3c) * (ulonglong)(param_1[10] ^ uVar9) ^
              (ulonglong)(param_1[3] ^ uVar13) * (ulonglong)(param_1[0xb] ^ uVar6);
      uVar13 = (uint)(uVar5 >> 0x20) ^ (uint)uVar4;
      local_3c = (uint)uVar5 ^ (uint)(uVar4 >> 0x20);
      uVar4 = (ulonglong)(*param_1 ^ param_3) * (ulonglong)(uVar6 ^ param_1[9]) ^
              (ulonglong)(param_1[1] ^ param_4) * (ulonglong)(uVar9 ^ param_1[8]);
      uVar5 = (ulonglong)(*param_1 ^ param_3) * (ulonglong)(uVar9 ^ param_1[8]) ^
              (ulonglong)(param_1[1] ^ param_4) * (ulonglong)(uVar6 ^ param_1[9]);
      param_4 = (uint)(uVar5 >> 0x20) ^ (uint)uVar4;
      param_3 = (uint)uVar5 ^ (uint)(uVar4 >> 0x20);
      param_2 = param_2 - 0x40;
      param_1 = param_1 + 0x10;
    } while (0x80 < param_2);
    local_28 = local_4c ^ param_3;
    local_2c = local_48 ^ param_4;
    uVar12 = local_44 ^ local_3c;
    uVar13 = local_40 ^ uVar13;
  }
  uVar11 = *(uint *)((int)param_1 + (param_2 - 8)) ^ uVar9;
  uVar10 = *(uint *)((int)param_1 + (param_2 - 4)) ^ uVar6;
  uVar8 = uVar9 ^ *(uint *)((int)param_1 + (param_2 - 0x10));
  uVar4 = (ulonglong)(param_1[3] ^ uVar13) * (ulonglong)uVar11 ^
          (ulonglong)(param_1[2] ^ uVar12) * (ulonglong)uVar10;
  uVar5 = (ulonglong)(param_1[2] ^ uVar12) * (ulonglong)uVar11 ^
          (ulonglong)(param_1[3] ^ uVar13) * (ulonglong)uVar10;
  uVar10 = (uint)(uVar5 >> 0x20) ^ (uint)uVar4;
  uVar12 = (uint)uVar5 ^ (uint)(uVar4 >> 0x20);
  uVar13 = uVar6 ^ *(uint *)((int)param_1 + (param_2 - 0xc));
  uVar4 = (ulonglong)(param_1[1] ^ local_2c) * (ulonglong)uVar8 ^
          (ulonglong)(*param_1 ^ local_28) * (ulonglong)uVar13;
  uVar5 = (ulonglong)(*param_1 ^ local_28) * (ulonglong)uVar8 ^
          (ulonglong)(param_1[1] ^ local_2c) * (ulonglong)uVar13;
  uVar13 = (uint)(uVar5 >> 0x20) ^ (uint)uVar4;
  uVar8 = (uint)uVar5 ^ (uint)(uVar4 >> 0x20);
  if (param_2 < 0x20) {
LAB_0100e150:
    return CONCAT44(uVar13 ^ uVar10,uVar8 ^ uVar12);
  }
  uVar7 = *(uint *)((int)param_1 + (param_2 - 0x14)) ^ uVar6;
  uVar11 = *(uint *)((int)param_1 + (param_2 - 0x18)) ^ uVar9;
  uVar4 = (ulonglong)(param_1[6] ^ uVar12) * (ulonglong)uVar7 ^
          (ulonglong)(param_1[7] ^ uVar10) * (ulonglong)uVar11;
  uVar5 = (ulonglong)(param_1[6] ^ uVar12) * (ulonglong)uVar11 ^
          (ulonglong)(param_1[7] ^ uVar10) * (ulonglong)uVar7;
  uVar12 = (uint)uVar5 ^ (uint)(uVar4 >> 0x20);
  uVar10 = *(uint *)((int)param_1 + (param_2 - 0x20)) ^ uVar9;
  uVar11 = *(uint *)((int)param_1 + (param_2 - 0x1c)) ^ uVar6;
  local_28 = (uint)(uVar5 >> 0x20) ^ (uint)uVar4;
  uVar4 = (ulonglong)(param_1[4] ^ uVar8) * (ulonglong)uVar11 ^
          (ulonglong)(param_1[5] ^ uVar13) * (ulonglong)uVar10;
  uVar5 = (ulonglong)(param_1[4] ^ uVar8) * (ulonglong)uVar10 ^
          (ulonglong)(param_1[5] ^ uVar13) * (ulonglong)uVar11;
  uVar13 = (uint)(uVar5 >> 0x20) ^ (uint)uVar4;
  uVar8 = (uint)uVar5 ^ (uint)(uVar4 >> 0x20);
  if (0x3f < param_2) {
    uVar10 = *(uint *)((int)param_1 + (param_2 - 0x28)) ^ uVar9;
    uVar11 = *(uint *)((int)param_1 + (param_2 - 0x24)) ^ uVar6;
    uVar4 = (ulonglong)(param_1[0xb] ^ local_28) * (ulonglong)uVar10 ^
            (ulonglong)(param_1[10] ^ uVar12) * (ulonglong)uVar11;
    uVar5 = (ulonglong)(param_1[10] ^ uVar12) * (ulonglong)uVar10 ^
            (ulonglong)(param_1[0xb] ^ local_28) * (ulonglong)uVar11;
    local_28 = (uint)(uVar5 >> 0x20) ^ (uint)uVar4;
    uVar12 = (uint)uVar5 ^ (uint)(uVar4 >> 0x20);
    uVar10 = *(uint *)((int)param_1 + (param_2 - 0x30)) ^ uVar9;
    uVar11 = *(uint *)((int)param_1 + (param_2 - 0x2c)) ^ uVar6;
    uVar4 = (ulonglong)(param_1[9] ^ uVar13) * (ulonglong)uVar10 ^
            (ulonglong)(param_1[8] ^ uVar8) * (ulonglong)uVar11;
    uVar5 = (ulonglong)(param_1[8] ^ uVar8) * (ulonglong)uVar10 ^
            (ulonglong)(param_1[9] ^ uVar13) * (ulonglong)uVar11;
    uVar13 = (uint)(uVar5 >> 0x20) ^ (uint)uVar4;
    uVar8 = (uint)uVar5 ^ (uint)(uVar4 >> 0x20);
    if (0x5f < param_2) {
      uVar10 = *(uint *)((int)param_1 + (param_2 - 0x38)) ^ uVar9;
      uVar11 = *(uint *)((int)param_1 + (param_2 - 0x34)) ^ uVar6;
      uVar4 = (ulonglong)(param_1[0xe] ^ uVar12) * (ulonglong)uVar11 ^
              (ulonglong)(param_1[0xf] ^ local_28) * (ulonglong)uVar10;
      uVar5 = (ulonglong)(param_1[0xe] ^ uVar12) * (ulonglong)uVar10 ^
              (ulonglong)(param_1[0xf] ^ local_28) * (ulonglong)uVar11;
      uVar10 = (uint)(uVar5 >> 0x20) ^ (uint)uVar4;
      uVar12 = (uint)uVar5 ^ (uint)(uVar4 >> 0x20);
      uVar9 = *(uint *)((int)param_1 + (param_2 - 0x40)) ^ uVar9;
      uVar6 = *(uint *)((int)param_1 + (param_2 - 0x3c)) ^ uVar6;
      uVar4 = (ulonglong)(param_1[0xd] ^ uVar13) * (ulonglong)uVar9 ^
              (ulonglong)(param_1[0xc] ^ uVar8) * (ulonglong)uVar6;
      uVar5 = (ulonglong)(param_1[0xc] ^ uVar8) * (ulonglong)uVar9 ^
              (ulonglong)(param_1[0xd] ^ uVar13) * (ulonglong)uVar6;
      uVar13 = (uint)(uVar5 >> 0x20) ^ (uint)uVar4;
      uVar8 = (uint)uVar5 ^ (uint)(uVar4 >> 0x20);
      goto LAB_0100e150;
    }
  }
  return CONCAT44(uVar13 ^ local_28,uVar8 ^ uVar12);
}

