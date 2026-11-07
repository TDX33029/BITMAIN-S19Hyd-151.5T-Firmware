// FUN_005ea43c @ 005ea43c size=2760 calls_out=1 calls_in=3
// strings: 

void FUN_005ea43c(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
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
  uVar5 = (param_3[5] ^ param_3[1] >> 1) & 0x55555555;
  local_38 = uVar5 ^ param_3[5];
  uVar3 = (local_38 ^ local_40 >> 2) & 0x33333333;
  local_38 = uVar3 ^ local_38;
  uVar8 = param_3[1] ^ uVar5 << 1;
  uVar4 = (param_3[6] ^ param_3[2] >> 1) & 0x55555555;
  uVar5 = uVar4 ^ param_3[6];
  uVar1 = (param_3[7] ^ param_3[3] >> 1) & 0x55555555;
  uVar6 = uVar1 ^ param_3[7];
  uVar7 = (uVar6 ^ uVar5 >> 2) & 0x33333333;
  uVar6 = uVar7 ^ uVar6;
  local_28 = (uVar6 ^ local_38 >> 4) & 0xf0f0f0f;
  local_38 = param_2[3] ^ local_28 << 4 ^ local_38;
  local_44 = *param_3 ^ uVar11 << 1;
  local_3c = (uVar8 ^ local_44 >> 2) & 0x33333333;
  local_44 = local_44 ^ local_3c << 2;
  uVar4 = param_3[2] ^ uVar4 << 1;
  uVar1 = param_3[3] ^ uVar1 << 1;
  uVar11 = (uVar1 ^ uVar4 >> 2) & 0x33333333;
  uVar1 = uVar11 ^ uVar1;
  uVar4 = uVar4 ^ uVar11 << 2;
  uVar11 = (uVar4 ^ local_44 >> 4) & 0xf0f0f0f;
  local_34 = uVar4 ^ param_2[4] ^ uVar11;
  local_40 = local_40 ^ uVar3 << 2;
  uVar5 = uVar5 ^ uVar7 << 2;
  local_30 = (uVar5 ^ local_40 >> 4) & 0xf0f0f0f;
  local_40 = param_2[1] ^ local_30 << 4 ^ local_40;
  local_3c = local_3c ^ uVar8;
  local_2c = (uVar1 ^ local_3c >> 4) & 0xf0f0f0f;
  local_3c = param_2[2] ^ local_2c << 4 ^ local_3c;
  local_44 = *param_2 ^ uVar11 << 4 ^ local_44;
  local_30 = uVar5 ^ param_2[5] ^ local_30;
  local_2c = uVar1 ^ param_2[6] ^ local_2c;
  local_28 = uVar6 ^ param_2[7] ^ local_28;
  iVar2 = 0;
  while( true ) {
    FUN_005e93fc(&local_44);
    uVar6 = (local_28 >> 10 | local_28 << 0x16) & 0x3f3f3f3f |
            local_28 >> 2 & 0xc0c0c0c0 | local_28 << 0x1e;
    local_28 = uVar6 ^ local_28;
    uVar1 = (local_2c >> 10 | local_2c << 0x16) & 0x3f3f3f3f |
            local_2c >> 2 & 0xc0c0c0c0 | local_2c << 0x1e;
    uVar3 = uVar1 ^ local_2c;
    uVar11 = (local_34 >> 10 | local_34 << 0x16) & 0x3f3f3f3f |
             local_34 >> 2 & 0xc0c0c0c0 | local_34 << 0x1e;
    uVar4 = uVar11 ^ local_34;
    uVar5 = (local_38 >> 10 | local_38 << 0x16) & 0x3f3f3f3f |
            local_38 >> 2 & 0xc0c0c0c0 | local_38 << 0x1e;
    local_38 = uVar5 ^ local_38;
    local_34 = ((uVar4 >> 0x14 | uVar4 << 0xc) & 0xf0f0f0f |
               (uVar4 >> 0xc | uVar4 << 0x14) & 0xf0f0f0f0) ^ *(uint *)((int)param_2 + iVar2 + 0x30)
               ^ local_38 ^ uVar11 ^ local_28;
    uVar12 = (local_3c >> 10 | local_3c << 0x16) & 0x3f3f3f3f |
             local_3c >> 2 & 0xc0c0c0c0 | local_3c << 0x1e;
    local_3c = uVar12 ^ local_3c;
    local_38 = ((local_38 >> 0x14 | local_38 << 0xc) & 0xf0f0f0f |
               (local_38 >> 0xc | local_38 << 0x14) & 0xf0f0f0f0) ^
               *(uint *)((int)param_2 + iVar2 + 0x2c) ^ local_3c ^ uVar5 ^ local_28;
    uVar5 = (local_40 >> 10 | local_40 << 0x16) & 0x3f3f3f3f |
            local_40 >> 2 & 0xc0c0c0c0 | local_40 << 0x1e;
    uVar11 = uVar5 ^ local_40;
    uVar8 = (local_44 >> 10 | local_44 << 0x16) & 0x3f3f3f3f |
            local_44 >> 2 & 0xc0c0c0c0 | local_44 << 0x1e;
    local_44 = uVar8 ^ local_44;
    local_40 = ((uVar11 >> 0x14 | uVar11 << 0xc) & 0xf0f0f0f |
               (uVar11 >> 0xc | uVar11 << 0x14) & 0xf0f0f0f0) ^
               *(uint *)((int)param_2 + iVar2 + 0x24) ^ local_44 ^ uVar5 ^ local_28;
    uVar5 = (local_30 >> 10 | local_30 << 0x16) & 0x3f3f3f3f |
            local_30 >> 2 & 0xc0c0c0c0 | local_30 << 0x1e;
    uVar7 = uVar5 ^ local_30;
    local_30 = ((uVar7 >> 0x14 | uVar7 << 0xc) & 0xf0f0f0f |
               (uVar7 >> 0xc | uVar7 << 0x14) & 0xf0f0f0f0) ^ *(uint *)((int)param_2 + iVar2 + 0x34)
               ^ uVar4 ^ uVar5;
    local_3c = ((local_3c >> 0x14 | local_3c << 0xc) & 0xf0f0f0f |
               (local_3c >> 0xc | local_3c << 0x14) & 0xf0f0f0f0) ^
               *(uint *)((int)param_2 + iVar2 + 0x28) ^ uVar11 ^ uVar12;
    local_44 = ((local_44 >> 0x14 | local_44 << 0xc) & 0xf0f0f0f |
               (local_44 >> 0xc | local_44 << 0x14) & 0xf0f0f0f0) ^
               *(uint *)((int)param_2 + iVar2 + 0x20) ^ uVar8 ^ local_28;
    local_2c = ((uVar3 >> 0x14 | uVar3 << 0xc) & 0xf0f0f0f |
               (uVar3 >> 0xc | uVar3 << 0x14) & 0xf0f0f0f0) ^ *(uint *)((int)param_2 + iVar2 + 0x38)
               ^ uVar7 ^ uVar1;
    local_28 = ((local_28 >> 0x14 | local_28 << 0xc) & 0xf0f0f0f |
               (local_28 >> 0xc | local_28 << 0x14) & 0xf0f0f0f0) ^
               *(uint *)((int)param_2 + iVar2 + 0x3c) ^ uVar3 ^ uVar6;
    if (iVar2 == 0x180) break;
    FUN_005e93fc(&local_44);
    uVar5 = (local_44 >> 0xc | local_44 << 0x14) & 0xf0f0f0f |
            local_44 >> 4 & 0xf0f0f0f0 | local_44 << 0x1c;
    uVar4 = uVar5 ^ local_44;
    uVar11 = (local_28 >> 0xc | local_28 << 0x14) & 0xf0f0f0f |
             local_28 >> 4 & 0xf0f0f0f0 | local_28 << 0x1c;
    local_28 = uVar11 ^ local_28;
    local_44 = *(uint *)((int)param_2 + iVar2 + 0x40) ^ (uVar4 >> 0x10 | uVar4 << 0x10) ^ uVar5 ^
               local_28;
    uVar1 = (local_40 >> 0xc | local_40 << 0x14) & 0xf0f0f0f |
            local_40 >> 4 & 0xf0f0f0f0 | local_40 << 0x1c;
    uVar5 = (local_3c >> 0xc | local_3c << 0x14) & 0xf0f0f0f |
            local_3c >> 4 & 0xf0f0f0f0 | local_3c << 0x1c;
    local_40 = uVar1 ^ local_40;
    uVar6 = uVar5 ^ local_3c;
    local_3c = *(uint *)((int)param_2 + iVar2 + 0x48) ^ (uVar6 >> 0x10 | uVar6 << 0x10) ^ local_40 ^
               uVar5;
    uVar3 = (local_34 >> 0xc | local_34 << 0x14) & 0xf0f0f0f |
            local_34 >> 4 & 0xf0f0f0f0 | local_34 << 0x1c;
    local_34 = uVar3 ^ local_34;
    uVar5 = (local_30 >> 0xc | local_30 << 0x14) & 0xf0f0f0f |
            local_30 >> 4 & 0xf0f0f0f0 | local_30 << 0x1c;
    uVar7 = uVar5 ^ local_30;
    local_30 = *(uint *)((int)param_2 + iVar2 + 0x54) ^ (uVar7 >> 0x10 | uVar7 << 0x10) ^ local_34 ^
               uVar5;
    local_40 = *(uint *)((int)param_2 + iVar2 + 0x44) ^ (local_40 >> 0x10 | local_40 << 0x10) ^
               uVar4 ^ uVar1 ^ local_28;
    uVar5 = (local_38 >> 0xc | local_38 << 0x14) & 0xf0f0f0f |
            local_38 >> 4 & 0xf0f0f0f0 | local_38 << 0x1c;
    uVar1 = uVar5 ^ local_38;
    local_38 = *(uint *)((int)param_2 + iVar2 + 0x4c) ^ (uVar1 >> 0x10 | uVar1 << 0x10) ^ uVar6 ^
               uVar5 ^ local_28;
    local_34 = *(uint *)((int)param_2 + iVar2 + 0x50) ^ (local_34 >> 0x10 | local_34 << 0x10) ^
               uVar1 ^ uVar3 ^ local_28;
    uVar5 = (local_2c >> 0xc | local_2c << 0x14) & 0xf0f0f0f |
            local_2c >> 4 & 0xf0f0f0f0 | local_2c << 0x1c;
    uVar6 = uVar5 ^ local_2c;
    local_2c = *(uint *)((int)param_2 + iVar2 + 0x58) ^ (uVar6 >> 0x10 | uVar6 << 0x10) ^ uVar7 ^
               uVar5;
    local_28 = *(uint *)((int)param_2 + iVar2 + 0x5c) ^ (local_28 >> 0x10 | local_28 << 0x10) ^
               uVar6 ^ uVar11;
    FUN_005e93fc(&local_44);
    uVar5 = (local_44 >> 0xe | local_44 << 0x12) & 0x3030303 |
            local_44 >> 6 & 0xfcfcfcfc | local_44 << 0x1a;
    uVar11 = uVar5 ^ local_44;
    uVar6 = (local_28 >> 0xe | local_28 << 0x12) & 0x3030303 |
            local_28 >> 6 & 0xfcfcfcfc | local_28 << 0x1a;
    local_28 = uVar6 ^ local_28;
    local_44 = ((uVar11 >> 0x14 | uVar11 << 0xc) & 0xf0f0f0f |
               (uVar11 >> 0xc | uVar11 << 0x14) & 0xf0f0f0f0) ^
               *(uint *)((int)param_2 + iVar2 + 0x60) ^ uVar5 ^ local_28;
    uVar5 = (local_3c >> 0xe | local_3c << 0x12) & 0x3030303 |
            local_3c >> 6 & 0xfcfcfcfc | local_3c << 0x1a;
    uVar1 = uVar5 ^ local_3c;
    uVar3 = (local_40 >> 0xe | local_40 << 0x12) & 0x3030303 |
            local_40 >> 6 & 0xfcfcfcfc | local_40 << 0x1a;
    local_40 = uVar3 ^ local_40;
    local_3c = ((uVar1 >> 0x14 | uVar1 << 0xc) & 0xf0f0f0f |
               (uVar1 >> 0xc | uVar1 << 0x14) & 0xf0f0f0f0) ^ *(uint *)((int)param_2 + iVar2 + 0x68)
               ^ local_40 ^ uVar5;
    uVar5 = (local_30 >> 0xe | local_30 << 0x12) & 0x3030303 |
            local_30 >> 6 & 0xfcfcfcfc | local_30 << 0x1a;
    uVar4 = uVar5 ^ local_30;
    uVar7 = (local_34 >> 0xe | local_34 << 0x12) & 0x3030303 |
            local_34 >> 6 & 0xfcfcfcfc | local_34 << 0x1a;
    local_34 = uVar7 ^ local_34;
    local_30 = ((uVar4 >> 0x14 | uVar4 << 0xc) & 0xf0f0f0f |
               (uVar4 >> 0xc | uVar4 << 0x14) & 0xf0f0f0f0) ^ *(uint *)((int)param_2 + iVar2 + 0x74)
               ^ local_34 ^ uVar5;
    local_40 = ((local_40 >> 0x14 | local_40 << 0xc) & 0xf0f0f0f |
               (local_40 >> 0xc | local_40 << 0x14) & 0xf0f0f0f0) ^
               *(uint *)((int)param_2 + iVar2 + 100) ^ uVar11 ^ uVar3 ^ local_28;
    uVar5 = (local_38 >> 0xe | local_38 << 0x12) & 0x3030303 |
            local_38 >> 6 & 0xfcfcfcfc | local_38 << 0x1a;
    uVar3 = uVar5 ^ local_38;
    local_38 = ((uVar3 >> 0x14 | uVar3 << 0xc) & 0xf0f0f0f |
               (uVar3 >> 0xc | uVar3 << 0x14) & 0xf0f0f0f0) ^ *(uint *)((int)param_2 + iVar2 + 0x6c)
               ^ uVar1 ^ uVar5 ^ local_28;
    local_34 = ((local_34 >> 0x14 | local_34 << 0xc) & 0xf0f0f0f |
               (local_34 >> 0xc | local_34 << 0x14) & 0xf0f0f0f0) ^
               *(uint *)((int)param_2 + iVar2 + 0x70) ^ uVar3 ^ uVar7 ^ local_28;
    uVar1 = (local_2c >> 0xe | local_2c << 0x12) & 0x3030303 |
            local_2c >> 6 & 0xfcfcfcfc | local_2c << 0x1a;
    uVar5 = uVar1 ^ local_2c;
    local_2c = ((uVar5 >> 0x14 | uVar5 << 0xc) & 0xf0f0f0f |
               (uVar5 >> 0xc | uVar5 << 0x14) & 0xf0f0f0f0) ^ *(uint *)((int)param_2 + iVar2 + 0x78)
               ^ uVar4 ^ uVar1;
    local_28 = ((local_28 >> 0x14 | local_28 << 0xc) & 0xf0f0f0f |
               (local_28 >> 0xc | local_28 << 0x14) & 0xf0f0f0f0) ^
               *(uint *)((int)param_2 + iVar2 + 0x7c) ^ uVar5 ^ uVar6;
    FUN_005e93fc(&local_44);
    uVar3 = local_40 ^ (local_40 >> 8 | local_40 << 0x18);
    uVar1 = local_44 ^ (local_44 >> 8 | local_44 << 0x18);
    uVar6 = local_28 ^ (local_28 >> 8 | local_28 << 0x18);
    local_44 = *(uint *)((int)param_2 + iVar2 + 0x80) ^ (uVar1 >> 0x10 | uVar1 << 0x10) ^
               (local_44 >> 8 | local_44 << 0x18) ^ uVar6;
    uVar5 = local_3c ^ (local_3c >> 8 | local_3c << 0x18);
    local_3c = *(uint *)((int)param_2 + iVar2 + 0x88) ^ (uVar5 >> 0x10 | uVar5 << 0x10) ^ uVar3 ^
               (local_3c >> 8 | local_3c << 0x18);
    local_40 = *(uint *)((int)param_2 + iVar2 + 0x84) ^ (uVar3 >> 0x10 | uVar3 << 0x10) ^ uVar1 ^
               (local_40 >> 8 | local_40 << 0x18) ^ uVar6;
    uVar1 = local_38 ^ (local_38 >> 8 | local_38 << 0x18);
    uVar3 = local_30 ^ (local_30 >> 8 | local_30 << 0x18);
    local_38 = *(uint *)((int)param_2 + iVar2 + 0x8c) ^ (uVar1 >> 0x10 | uVar1 << 0x10) ^ uVar5 ^
               (local_38 >> 8 | local_38 << 0x18) ^ uVar6;
    uVar5 = local_34 ^ (local_34 >> 8 | local_34 << 0x18);
    local_34 = *(uint *)((int)param_2 + iVar2 + 0x90) ^ (uVar5 >> 0x10 | uVar5 << 0x10) ^ uVar1 ^
               (local_34 >> 8 | local_34 << 0x18) ^ uVar6;
    uVar1 = local_2c ^ (local_2c >> 8 | local_2c << 0x18);
    local_30 = *(uint *)((int)param_2 + iVar2 + 0x94) ^ (uVar3 >> 0x10 | uVar3 << 0x10) ^ uVar5 ^
               (local_30 >> 8 | local_30 << 0x18);
    local_2c = *(uint *)((int)param_2 + iVar2 + 0x98) ^ (uVar1 >> 0x10 | uVar1 << 0x10) ^ uVar3 ^
               (local_2c >> 8 | local_2c << 0x18);
    local_28 = *(uint *)((int)param_2 + iVar2 + 0x9c) ^
               uVar1 ^ (uVar6 >> 0x10 | uVar6 << 0x10) ^ (local_28 >> 8 | local_28 << 0x18);
    iVar2 = iVar2 + 0x80;
  }
  local_28 = ((local_28 ^ local_28 >> 4) & 0xf000f00) * 0x11 ^ local_28;
  local_2c = ((local_2c ^ local_2c >> 4) & 0xf000f00) * 0x11 ^ local_2c;
  local_30 = ((local_30 ^ local_30 >> 4) & 0xf000f00) * 0x11 ^ local_30;
  local_34 = ((local_34 ^ local_34 >> 4) & 0xf000f00) * 0x11 ^ local_34;
  local_38 = ((local_38 ^ local_38 >> 4) & 0xf000f00) * 0x11 ^ local_38;
  local_3c = ((local_3c ^ local_3c >> 4) & 0xf000f00) * 0x11 ^ local_3c;
  local_40 = ((local_40 ^ local_40 >> 4) & 0xf000f00) * 0x11 ^ local_40;
  local_44 = ((local_44 ^ local_44 >> 4) & 0xf000f00) * 0x11 ^ local_44;
  FUN_005e93fc(&local_44);
  uVar5 = param_2[0x70];
  uVar10 = param_2[0x72];
  uVar6 = (local_40 ^ param_2[0x71] ^ (local_44 ^ uVar5) >> 1) & 0x55555555;
  uVar9 = uVar6 ^ local_40 ^ param_2[0x71];
  uVar12 = (local_38 ^ param_2[0x73] ^ (local_3c ^ uVar10) >> 1) & 0x55555555;
  uVar8 = uVar12 ^ local_38 ^ param_2[0x73];
  uVar1 = (uVar8 ^ uVar9 >> 2) & 0x33333333;
  uVar8 = uVar1 ^ uVar8;
  uVar9 = uVar9 ^ uVar1 << 2;
  uVar1 = (local_30 ^ param_2[0x75] ^ (local_34 ^ param_2[0x74]) >> 1) & 0x55555555;
  uVar3 = uVar1 ^ local_30 ^ param_2[0x75];
  uVar4 = (local_28 ^ param_2[0x77] ^ (local_2c ^ param_2[0x76]) >> 1) & 0x55555555;
  uVar7 = uVar4 ^ local_28 ^ param_2[0x77];
  uVar11 = local_34 ^ param_2[0x74] ^ uVar1 << 1;
  uVar1 = (uVar7 ^ uVar3 >> 2) & 0x33333333;
  uVar4 = local_2c ^ param_2[0x76] ^ uVar4 << 1;
  uVar7 = uVar1 ^ uVar7;
  uVar3 = uVar3 ^ uVar1 << 2;
  uVar1 = (uVar7 ^ uVar8 >> 4) & 0xf0f0f0f;
  param_1[7] = uVar1 ^ uVar7;
  uVar7 = (uVar3 ^ uVar9 >> 4) & 0xf0f0f0f;
  param_1[6] = uVar7 ^ uVar3;
  param_1[5] = uVar8 ^ uVar1 << 4;
  uVar6 = local_44 ^ uVar5 ^ uVar6 << 1;
  uVar1 = local_3c ^ uVar10 ^ uVar12 << 1;
  uVar5 = (uVar1 ^ uVar6 >> 2) & 0x33333333;
  uVar3 = (uVar4 ^ uVar11 >> 2) & 0x33333333;
  uVar1 = uVar5 ^ uVar1;
  uVar4 = uVar3 ^ uVar4;
  uVar6 = uVar6 ^ uVar5 << 2;
  uVar5 = (uVar4 ^ uVar1 >> 4) & 0xf0f0f0f;
  param_1[3] = uVar5 ^ uVar4;
  param_1[4] = uVar9 ^ uVar7 << 4;
  uVar11 = uVar11 ^ uVar3 << 2;
  param_1[1] = uVar1 ^ uVar5 << 4;
  uVar5 = (uVar11 ^ uVar6 >> 4) & 0xf0f0f0f;
  param_1[2] = uVar5 ^ uVar11;
  *param_1 = uVar6 ^ uVar5 << 4;
  return;
}

