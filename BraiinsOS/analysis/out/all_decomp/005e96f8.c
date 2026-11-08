// FUN_005e96f8 @ 005e96f8 size=3392 calls_out=2 calls_in=1
// strings: 

void FUN_005e96f8(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  uVar11 = (param_3[4] ^ *param_3 >> 1) & 0x55555555;
  local_40 = uVar11 ^ param_3[4];
  uVar4 = (param_3[5] ^ param_3[1] >> 1) & 0x55555555;
  local_38 = uVar4 ^ param_3[5];
  uVar2 = (local_38 ^ local_40 >> 2) & 0x33333333;
  local_38 = uVar2 ^ local_38;
  uVar7 = param_3[1] ^ uVar4 << 1;
  uVar3 = (param_3[6] ^ param_3[2] >> 1) & 0x55555555;
  uVar5 = uVar3 ^ param_3[6];
  uVar1 = (param_3[7] ^ param_3[3] >> 1) & 0x55555555;
  uVar4 = uVar1 ^ param_3[7];
  uVar6 = (uVar4 ^ uVar5 >> 2) & 0x33333333;
  uVar4 = uVar6 ^ uVar4;
  local_28 = (uVar4 ^ local_38 >> 4) & 0xf0f0f0f;
  local_38 = param_2[0x73] ^ local_28 << 4 ^ local_38;
  local_44 = *param_3 ^ uVar11 << 1;
  local_3c = (uVar7 ^ local_44 >> 2) & 0x33333333;
  local_44 = local_44 ^ local_3c << 2;
  uVar3 = param_3[2] ^ uVar3 << 1;
  uVar1 = param_3[3] ^ uVar1 << 1;
  uVar11 = (uVar1 ^ uVar3 >> 2) & 0x33333333;
  uVar1 = uVar11 ^ uVar1;
  uVar3 = uVar3 ^ uVar11 << 2;
  uVar11 = (uVar3 ^ local_44 >> 4) & 0xf0f0f0f;
  local_34 = uVar3 ^ param_2[0x74] ^ uVar11;
  local_40 = local_40 ^ uVar2 << 2;
  uVar5 = uVar5 ^ uVar6 << 2;
  local_30 = (uVar5 ^ local_40 >> 4) & 0xf0f0f0f;
  local_40 = param_2[0x71] ^ local_30 << 4 ^ local_40;
  local_3c = local_3c ^ uVar7;
  local_2c = (uVar1 ^ local_3c >> 4) & 0xf0f0f0f;
  local_3c = param_2[0x72] ^ local_2c << 4 ^ local_3c;
  local_44 = param_2[0x70] ^ uVar11 << 4 ^ local_44;
  local_30 = uVar5 ^ param_2[0x75] ^ local_30;
  local_2c = uVar1 ^ param_2[0x76] ^ local_2c;
  local_28 = uVar4 ^ param_2[0x77] ^ local_28;
  FUN_005e90bc(&local_44);
  local_28 = ((local_28 ^ local_28 >> 4) & 0xf000f00) * 0x11 ^ local_28;
  local_58 = ((local_2c ^ local_2c >> 4) & 0xf000f00) * 0x11 ^ local_2c;
  local_30 = ((local_30 ^ local_30 >> 4) & 0xf000f00) * 0x11 ^ local_30;
  local_34 = ((local_34 ^ local_34 >> 4) & 0xf000f00) * 0x11 ^ local_34;
  local_54 = ((local_38 ^ local_38 >> 4) & 0xf000f00) * 0x11 ^ local_38;
  local_50 = ((local_3c ^ local_3c >> 4) & 0xf000f00) * 0x11 ^ local_3c;
  local_4c = ((local_40 ^ local_40 >> 4) & 0xf000f00) * 0x11 ^ local_40;
  local_5c = ((local_44 ^ local_44 >> 4) & 0xf000f00) * 0x11 ^ local_44;
  local_48 = 0;
  while( true ) {
    local_28 = local_28 ^ param_2[local_48 + 0x6f];
    local_34 = local_34 ^ param_2[local_48 + 0x6c];
    uVar5 = ((local_28 >> 10 | local_28 << 0x16) & 0x3f3f3f3f |
            local_28 >> 2 & 0xc0c0c0c0 | local_28 << 0x1e) ^ local_28;
    uVar3 = ((local_34 >> 10 | local_34 << 0x16) & 0x3f3f3f3f |
            local_34 >> 2 & 0xc0c0c0c0 | local_34 << 0x1e) ^ local_34;
    local_30 = local_30 ^ param_2[local_48 + 0x6d];
    uVar4 = uVar3 ^ local_30;
    uVar2 = uVar5 ^ uVar4;
    local_58 = local_58 ^ param_2[local_48 + 0x6e];
    local_2c = ((local_58 >> 10 | local_58 << 0x16) & 0x3f3f3f3f |
               local_58 >> 2 & 0xc0c0c0c0 | local_58 << 0x1e) ^ local_58;
    uVar1 = local_2c ^ local_28;
    local_28 = uVar1 ^ ((uVar2 >> 0x14 | uVar2 << 0xc) & 0xf0f0f0f |
                       (uVar2 >> 0xc | uVar2 << 0x14) & 0xf0f0f0f0) ^ uVar2;
    local_5c = local_5c ^ param_2[local_48 + 0x68];
    uVar11 = ((local_5c >> 10 | local_5c << 0x16) & 0x3f3f3f3f |
             local_5c >> 2 & 0xc0c0c0c0 | local_5c << 0x1e) ^ local_5c;
    local_30 = ((local_30 >> 10 | local_30 << 0x16) & 0x3f3f3f3f |
               local_30 >> 2 & 0xc0c0c0c0 | local_30 << 0x1e) ^ local_30;
    local_58 = local_30 ^ local_58;
    uVar2 = local_58 ^ uVar11;
    local_44 = uVar2 ^ ((uVar2 >> 0x14 | uVar2 << 0xc) & 0xf0f0f0f |
                       (uVar2 >> 0xc | uVar2 << 0x14) & 0xf0f0f0f0) ^ uVar5 ^ local_5c;
    local_54 = local_54 ^ param_2[local_48 + 0x6b];
    uVar7 = ((local_54 >> 10 | local_54 << 0x16) & 0x3f3f3f3f |
            local_54 >> 2 & 0xc0c0c0c0 | local_54 << 0x1e) ^ local_54;
    local_34 = uVar7 ^ local_34 ^ uVar5;
    local_2c = local_34 ^ local_2c;
    local_2c = local_58 ^
               ((local_2c >> 0x14 | local_2c << 0xc) & 0xf0f0f0f |
               (local_2c >> 0xc | local_2c << 0x14) & 0xf0f0f0f0) ^ local_2c;
    local_50 = local_50 ^ param_2[local_48 + 0x6a];
    uVar6 = ((local_50 >> 10 | local_50 << 0x16) & 0x3f3f3f3f |
            local_50 >> 2 & 0xc0c0c0c0 | local_50 << 0x1e) ^ local_50;
    uVar2 = uVar6 ^ local_54 ^ uVar5;
    local_30 = uVar1 ^ local_30 ^ uVar2;
    local_30 = uVar4 ^ ((local_30 >> 0x14 | local_30 << 0xc) & 0xf0f0f0f |
                       (local_30 >> 0xc | local_30 << 0x14) & 0xf0f0f0f0) ^ local_30;
    local_4c = local_4c ^ param_2[local_48 + 0x69];
    local_40 = uVar11 ^ local_4c ^ uVar5;
    local_38 = local_58 ^ uVar7 ^ local_40;
    local_38 = uVar2 ^ ((local_38 >> 0x14 | local_38 << 0xc) & 0xf0f0f0f |
                       (local_38 >> 0xc | local_38 << 0x14) & 0xf0f0f0f0) ^ local_38;
    local_3c = uVar1 ^ uVar6 ^ uVar5 ^ local_5c;
    local_4c = ((local_4c >> 10 | local_4c << 0x16) & 0x3f3f3f3f |
               local_4c >> 2 & 0xc0c0c0c0 | local_4c << 0x1e) ^ local_4c;
    local_50 = local_4c ^ local_50;
    local_3c = local_50 ^
               ((local_3c >> 0x14 | local_3c << 0xc) & 0xf0f0f0f |
               (local_3c >> 0xc | local_3c << 0x14) & 0xf0f0f0f0) ^ local_3c;
    local_4c = uVar1 ^ local_58 ^ local_4c;
    local_40 = local_4c ^
               ((local_4c >> 0x14 | local_4c << 0xc) & 0xf0f0f0f |
               (local_4c >> 0xc | local_4c << 0x14) & 0xf0f0f0f0) ^ local_40;
    uVar3 = uVar1 ^ local_58 ^ local_50 ^ uVar3;
    local_34 = uVar3 ^ ((uVar3 >> 0x14 | uVar3 << 0xc) & 0xf0f0f0f |
                       (uVar3 >> 0xc | uVar3 << 0x14) & 0xf0f0f0f0) ^ local_34;
    FUN_005e90bc(&local_44);
    if (local_48 == -0x60) {
      uVar8 = *param_2;
      uVar6 = param_2[2];
      uVar4 = (local_40 ^ param_2[1] ^ (local_44 ^ uVar8) >> 1) & 0x55555555;
      uVar10 = uVar4 ^ local_40 ^ param_2[1];
      uVar9 = (local_38 ^ param_2[3] ^ (local_3c ^ uVar6) >> 1) & 0x55555555;
      uVar7 = uVar9 ^ local_38 ^ param_2[3];
      uVar1 = (uVar7 ^ uVar10 >> 2) & 0x33333333;
      uVar7 = uVar1 ^ uVar7;
      uVar10 = uVar10 ^ uVar1 << 2;
      uVar1 = (local_30 ^ param_2[5] ^ (local_34 ^ param_2[4]) >> 1) & 0x55555555;
      uVar2 = uVar1 ^ local_30 ^ param_2[5];
      uVar3 = (local_28 ^ param_2[7] ^ (local_2c ^ param_2[6]) >> 1) & 0x55555555;
      uVar11 = uVar3 ^ local_28 ^ param_2[7];
      uVar5 = local_34 ^ param_2[4] ^ uVar1 << 1;
      uVar1 = (uVar11 ^ uVar2 >> 2) & 0x33333333;
      uVar3 = local_2c ^ param_2[6] ^ uVar3 << 1;
      uVar11 = uVar1 ^ uVar11;
      uVar2 = uVar2 ^ uVar1 << 2;
      uVar1 = (uVar11 ^ uVar7 >> 4) & 0xf0f0f0f;
      param_1[7] = uVar1 ^ uVar11;
      uVar11 = (uVar2 ^ uVar10 >> 4) & 0xf0f0f0f;
      param_1[6] = uVar11 ^ uVar2;
      param_1[5] = uVar7 ^ uVar1 << 4;
      uVar1 = local_44 ^ uVar8 ^ uVar4 << 1;
      uVar2 = local_3c ^ uVar6 ^ uVar9 << 1;
      uVar4 = (uVar2 ^ uVar1 >> 2) & 0x33333333;
      uVar6 = (uVar3 ^ uVar5 >> 2) & 0x33333333;
      uVar2 = uVar4 ^ uVar2;
      uVar3 = uVar6 ^ uVar3;
      uVar1 = uVar1 ^ uVar4 << 2;
      uVar4 = (uVar3 ^ uVar2 >> 4) & 0xf0f0f0f;
      param_1[3] = uVar4 ^ uVar3;
      param_1[4] = uVar10 ^ uVar11 << 4;
      uVar5 = uVar5 ^ uVar6 << 2;
      param_1[1] = uVar2 ^ uVar4 << 4;
      uVar4 = (uVar5 ^ uVar1 >> 4) & 0xf0f0f0f;
      param_1[2] = uVar4 ^ uVar5;
      *param_1 = uVar1 ^ uVar4 << 4;
      return;
    }
    local_2c = local_2c ^ param_2[local_48 + 0x66];
    local_28 = local_28 ^ param_2[local_48 + 0x67];
    uVar1 = local_2c ^ (local_2c >> 8 | local_2c << 0x18);
    uVar10 = local_28 ^ uVar1;
    uVar3 = local_28 ^ (local_28 >> 8 | local_28 << 0x18);
    local_30 = local_30 ^ param_2[local_48 + 0x65];
    local_34 = local_34 ^ param_2[local_48 + 100];
    uVar12 = local_30 ^ (local_30 >> 8 | local_30 << 0x18);
    uVar4 = local_34 ^ (local_34 >> 8 | local_34 << 0x18);
    local_30 = local_30 ^ uVar4;
    local_28 = uVar3 ^ local_30;
    uVar5 = local_2c ^ uVar12;
    uVar11 = local_44 ^ param_2[local_48 + 0x60];
    local_28 = uVar10 ^ (local_28 >> 0x10 | local_28 << 0x10) ^ local_28;
    uVar7 = uVar11 ^ (uVar11 >> 8 | uVar11 << 0x18);
    uVar2 = uVar5 ^ uVar7;
    local_38 = local_38 ^ param_2[local_48 + 99];
    local_44 = uVar2 ^ (uVar2 >> 0x10 | uVar2 << 0x10) ^ uVar3 ^ uVar11;
    uVar9 = local_38 ^ (local_38 >> 8 | local_38 << 0x18);
    uVar6 = local_34 ^ uVar9 ^ uVar3;
    uVar1 = uVar6 ^ uVar1;
    local_2c = uVar5 ^ (uVar1 >> 0x10 | uVar1 << 0x10) ^ uVar1;
    local_3c = local_3c ^ param_2[local_48 + 0x62];
    uVar8 = local_3c ^ (local_3c >> 8 | local_3c << 0x18);
    uVar1 = local_38 ^ uVar8 ^ uVar3;
    uVar2 = uVar10 ^ uVar12 ^ uVar1;
    local_30 = local_30 ^ (uVar2 >> 0x10 | uVar2 << 0x10) ^ uVar2;
    local_40 = local_40 ^ param_2[local_48 + 0x61];
    uVar2 = local_40 ^ (local_40 >> 8 | local_40 << 0x18);
    local_40 = local_40 ^ uVar7 ^ uVar3;
    local_3c = local_3c ^ uVar2;
    local_38 = uVar5 ^ uVar9 ^ local_40;
    local_34 = uVar4 ^ local_3c ^ uVar10 ^ uVar5;
    local_38 = uVar1 ^ (local_38 >> 0x10 | local_38 << 0x10) ^ local_38;
    uVar4 = uVar10 ^ uVar8 ^ uVar3 ^ uVar11;
    local_34 = uVar6 ^ (local_34 >> 0x10 | local_34 << 0x10) ^ local_34;
    local_3c = local_3c ^ (uVar4 >> 0x10 | uVar4 << 0x10) ^ uVar4;
    uVar2 = uVar10 ^ uVar5 ^ uVar2;
    local_40 = uVar2 ^ (uVar2 >> 0x10 | uVar2 << 0x10) ^ local_40;
    FUN_005e90bc(&local_44);
    local_28 = local_28 ^ param_2[local_48 + 0x5f];
    uVar9 = ((local_28 >> 0xe | local_28 << 0x12) & 0x3030303 |
            local_28 >> 6 & 0xfcfcfcfc | local_28 << 0x1a) ^ local_28;
    local_34 = local_34 ^ param_2[local_48 + 0x5c];
    uVar4 = ((local_34 >> 0xe | local_34 << 0x12) & 0x3030303 |
            local_34 >> 6 & 0xfcfcfcfc | local_34 << 0x1a) ^ local_34;
    local_30 = local_30 ^ param_2[local_48 + 0x5d];
    uVar1 = uVar4 ^ local_30;
    uVar3 = uVar9 ^ uVar1;
    local_2c = local_2c ^ param_2[local_48 + 0x5e];
    uVar6 = ((local_2c >> 0xe | local_2c << 0x12) & 0x3030303 |
            local_2c >> 6 & 0xfcfcfcfc | local_2c << 0x1a) ^ local_2c;
    uVar2 = uVar6 ^ local_28;
    local_28 = uVar2 ^ ((uVar3 >> 0x14 | uVar3 << 0xc) & 0xf0f0f0f |
                       (uVar3 >> 0xc | uVar3 << 0x14) & 0xf0f0f0f0) ^ uVar3;
    uVar8 = local_44 ^ param_2[local_48 + 0x58];
    uVar5 = ((uVar8 >> 0xe | uVar8 << 0x12) & 0x3030303 | uVar8 >> 6 & 0xfcfcfcfc | uVar8 << 0x1a) ^
            uVar8;
    local_30 = ((local_30 >> 0xe | local_30 << 0x12) & 0x3030303 |
               local_30 >> 6 & 0xfcfcfcfc | local_30 << 0x1a) ^ local_30;
    uVar7 = local_30 ^ local_2c;
    uVar3 = uVar7 ^ uVar5;
    local_44 = uVar3 ^ ((uVar3 >> 0x14 | uVar3 << 0xc) & 0xf0f0f0f |
                       (uVar3 >> 0xc | uVar3 << 0x14) & 0xf0f0f0f0) ^ uVar9 ^ uVar8;
    local_38 = local_38 ^ param_2[local_48 + 0x5b];
    uVar11 = ((local_38 >> 0xe | local_38 << 0x12) & 0x3030303 |
             local_38 >> 6 & 0xfcfcfcfc | local_38 << 0x1a) ^ local_38;
    local_34 = uVar11 ^ local_34 ^ uVar9;
    uVar6 = local_34 ^ uVar6;
    local_2c = uVar7 ^ ((uVar6 >> 0x14 | uVar6 << 0xc) & 0xf0f0f0f |
                       (uVar6 >> 0xc | uVar6 << 0x14) & 0xf0f0f0f0) ^ uVar6;
    local_3c = local_3c ^ param_2[local_48 + 0x5a];
    uVar6 = ((local_3c >> 0xe | local_3c << 0x12) & 0x3030303 |
            local_3c >> 6 & 0xfcfcfcfc | local_3c << 0x1a) ^ local_3c;
    uVar3 = uVar6 ^ local_38 ^ uVar9;
    local_30 = uVar2 ^ local_30 ^ uVar3;
    local_30 = uVar1 ^ ((local_30 >> 0x14 | local_30 << 0xc) & 0xf0f0f0f |
                       (local_30 >> 0xc | local_30 << 0x14) & 0xf0f0f0f0) ^ local_30;
    local_40 = local_40 ^ param_2[local_48 + 0x59];
    uVar5 = uVar5 ^ local_40 ^ uVar9;
    local_38 = uVar7 ^ uVar11 ^ uVar5;
    local_38 = uVar3 ^ ((local_38 >> 0x14 | local_38 << 0xc) & 0xf0f0f0f |
                       (local_38 >> 0xc | local_38 << 0x14) & 0xf0f0f0f0) ^ local_38;
    uVar1 = uVar2 ^ uVar6 ^ uVar9 ^ uVar8;
    local_40 = ((local_40 >> 0xe | local_40 << 0x12) & 0x3030303 |
               local_40 >> 6 & 0xfcfcfcfc | local_40 << 0x1a) ^ local_40;
    uVar3 = local_40 ^ local_3c;
    local_3c = uVar3 ^ ((uVar1 >> 0x14 | uVar1 << 0xc) & 0xf0f0f0f |
                       (uVar1 >> 0xc | uVar1 << 0x14) & 0xf0f0f0f0) ^ uVar1;
    local_40 = uVar2 ^ uVar7 ^ local_40;
    local_40 = local_40 ^
               ((local_40 >> 0x14 | local_40 << 0xc) & 0xf0f0f0f |
               (local_40 >> 0xc | local_40 << 0x14) & 0xf0f0f0f0) ^ uVar5;
    uVar4 = uVar2 ^ uVar7 ^ uVar3 ^ uVar4;
    local_34 = uVar4 ^ ((uVar4 >> 0x14 | uVar4 << 0xc) & 0xf0f0f0f |
                       (uVar4 >> 0xc | uVar4 << 0x14) & 0xf0f0f0f0) ^ local_34;
    FUN_005e90bc(&local_44);
    if (local_48 + 0x58U < local_48 + 0x50U) break;
    local_28 = local_28 ^ param_2[local_48 + 0x57];
    local_2c = local_2c ^ param_2[local_48 + 0x56];
    uVar5 = ((local_28 >> 0xc | local_28 << 0x14) & 0xf0f0f0f |
            local_28 >> 4 & 0xf0f0f0f0 | local_28 << 0x1c) ^ local_28;
    uVar4 = ((local_2c >> 0xc | local_2c << 0x14) & 0xf0f0f0f |
            local_2c >> 4 & 0xf0f0f0f0 | local_2c << 0x1c) ^ local_2c;
    uVar9 = uVar4 ^ local_28;
    local_34 = local_34 ^ param_2[local_48 + 0x54];
    uVar2 = ((local_34 >> 0xc | local_34 << 0x14) & 0xf0f0f0f |
            local_34 >> 4 & 0xf0f0f0f0 | local_34 << 0x1c) ^ local_34;
    local_30 = local_30 ^ param_2[local_48 + 0x55];
    uVar1 = uVar2 ^ local_30;
    local_28 = uVar5 ^ uVar1;
    local_28 = uVar9 ^ (local_28 >> 0x10 | local_28 << 0x10) ^ local_28;
    uVar11 = local_44 ^ param_2[local_48 + 0x50];
    uVar8 = ((uVar11 >> 0xc | uVar11 << 0x14) & 0xf0f0f0f |
            uVar11 >> 4 & 0xf0f0f0f0 | uVar11 << 0x1c) ^ uVar11;
    local_30 = ((local_30 >> 0xc | local_30 << 0x14) & 0xf0f0f0f |
               local_30 >> 4 & 0xf0f0f0f0 | local_30 << 0x1c) ^ local_30;
    uVar7 = local_30 ^ local_2c;
    uVar3 = uVar7 ^ uVar8;
    local_38 = local_38 ^ param_2[local_48 + 0x53];
    local_44 = uVar3 ^ (uVar3 >> 0x10 | uVar3 << 0x10) ^ uVar5 ^ uVar11;
    uVar3 = ((local_38 >> 0xc | local_38 << 0x14) & 0xf0f0f0f |
            local_38 >> 4 & 0xf0f0f0f0 | local_38 << 0x1c) ^ local_38;
    local_34 = uVar3 ^ local_34 ^ uVar5;
    uVar4 = local_34 ^ uVar4;
    local_2c = uVar7 ^ (uVar4 >> 0x10 | uVar4 << 0x10) ^ uVar4;
    local_3c = local_3c ^ param_2[local_48 + 0x52];
    uVar6 = ((local_3c >> 0xc | local_3c << 0x14) & 0xf0f0f0f |
            local_3c >> 4 & 0xf0f0f0f0 | local_3c << 0x1c) ^ local_3c;
    uVar4 = uVar6 ^ local_38 ^ uVar5;
    local_30 = uVar9 ^ local_30 ^ uVar4;
    local_30 = uVar1 ^ (local_30 >> 0x10 | local_30 << 0x10) ^ local_30;
    local_40 = local_40 ^ param_2[local_48 + 0x51];
    uVar1 = uVar8 ^ local_40 ^ uVar5;
    local_38 = uVar7 ^ uVar3 ^ uVar1;
    local_38 = uVar4 ^ (local_38 >> 0x10 | local_38 << 0x10) ^ local_38;
    uVar4 = uVar9 ^ uVar6 ^ uVar5 ^ uVar11;
    local_40 = ((local_40 >> 0xc | local_40 << 0x14) & 0xf0f0f0f |
               local_40 >> 4 & 0xf0f0f0f0 | local_40 << 0x1c) ^ local_40;
    uVar3 = local_40 ^ local_3c;
    local_3c = uVar3 ^ (uVar4 >> 0x10 | uVar4 << 0x10) ^ uVar4;
    local_40 = uVar9 ^ uVar7 ^ local_40;
    local_40 = local_40 ^ (local_40 >> 0x10 | local_40 << 0x10) ^ uVar1;
    uVar2 = uVar9 ^ uVar7 ^ uVar3 ^ uVar2;
    local_34 = uVar2 ^ (uVar2 >> 0x10 | uVar2 << 0x10) ^ local_34;
    FUN_005e90bc(&local_44);
    local_5c = local_44;
    local_4c = local_40;
    local_58 = local_2c;
    local_50 = local_3c;
    local_48 = local_48 + -0x20;
    local_54 = local_38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa36c(local_48 + 0x50U,local_48 + 0x58U,0x78,&DAT_01856988);
}

