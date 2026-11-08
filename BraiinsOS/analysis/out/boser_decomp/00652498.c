// FUN_00652498 @ 00652498 size=2240 calls_out=2 calls_in=2
// strings: 

void FUN_00652498(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int local_5c;
  uint local_44 [8];
  
  FUN_00652328(local_44,param_3,param_3 + 0x10);
  iVar1 = 0;
  do {
    local_44[iVar1] = local_44[iVar1] ^ *(uint *)(param_2 + iVar1 * 4);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 8);
  iVar10 = param_2 + 0x60;
  iVar9 = param_2 + 0x40;
  iVar7 = param_2 + 0x20;
  iVar1 = 8;
  local_5c = param_2;
  while( true ) {
    local_5c = local_5c + 0x80;
    FUN_00652d58(local_44);
    uVar4 = (local_44[7] >> 10 | local_44[7] << 0x16) & 0x3f3f3f3f |
            local_44[7] >> 2 & 0xc0c0c0c0 | local_44[7] << 0x1e;
    uVar6 = uVar4 ^ local_44[7];
    uVar2 = (local_44[6] >> 10 | local_44[6] << 0x16) & 0x3f3f3f3f |
            local_44[6] >> 2 & 0xc0c0c0c0 | local_44[6] << 0x1e;
    local_44[6] = uVar2 ^ local_44[6];
    local_44[7] = local_44[6] ^
                  ((uVar6 >> 0x14 | uVar6 << 0xc) & 0xf0f0f0f |
                  (uVar6 >> 0xc | uVar6 << 0x14) & 0xf0f0f0f0) ^ uVar4;
    uVar4 = (local_44[5] >> 10 | local_44[5] << 0x16) & 0x3f3f3f3f |
            local_44[5] >> 2 & 0xc0c0c0c0 | local_44[5] << 0x1e;
    local_44[5] = uVar4 ^ local_44[5];
    local_44[6] = local_44[5] ^
                  ((local_44[6] >> 0x14 | local_44[6] << 0xc) & 0xf0f0f0f |
                  (local_44[6] >> 0xc | local_44[6] << 0x14) & 0xf0f0f0f0) ^ uVar2;
    uVar2 = (local_44[4] >> 10 | local_44[4] << 0x16) & 0x3f3f3f3f |
            local_44[4] >> 2 & 0xc0c0c0c0 | local_44[4] << 0x1e;
    local_44[4] = uVar2 ^ local_44[4];
    local_44[5] = local_44[4] ^
                  ((local_44[5] >> 0x14 | local_44[5] << 0xc) & 0xf0f0f0f |
                  (local_44[5] >> 0xc | local_44[5] << 0x14) & 0xf0f0f0f0) ^ uVar4;
    uVar8 = (local_44[2] >> 10 | local_44[2] << 0x16) & 0x3f3f3f3f |
            local_44[2] >> 2 & 0xc0c0c0c0 | local_44[2] << 0x1e;
    uVar4 = uVar8 ^ local_44[2];
    uVar5 = (local_44[1] >> 10 | local_44[1] << 0x16) & 0x3f3f3f3f |
            local_44[1] >> 2 & 0xc0c0c0c0 | local_44[1] << 0x1e;
    local_44[1] = uVar5 ^ local_44[1];
    local_44[2] = local_44[1] ^
                  ((uVar4 >> 0x14 | uVar4 << 0xc) & 0xf0f0f0f |
                  (uVar4 >> 0xc | uVar4 << 0x14) & 0xf0f0f0f0) ^ uVar8;
    uVar8 = (local_44[0] >> 10 | local_44[0] << 0x16) & 0x3f3f3f3f |
            local_44[0] >> 2 & 0xc0c0c0c0 | local_44[0] << 0x1e;
    uVar11 = uVar8 ^ local_44[0];
    local_44[0] = ((uVar11 >> 0x14 | uVar11 << 0xc) & 0xf0f0f0f |
                  (uVar11 >> 0xc | uVar11 << 0x14) & 0xf0f0f0f0) ^ uVar8 ^ uVar6;
    uVar8 = (local_44[3] >> 10 | local_44[3] << 0x16) & 0x3f3f3f3f |
            local_44[3] >> 2 & 0xc0c0c0c0 | local_44[3] << 0x1e;
    local_44[3] = uVar8 ^ local_44[3];
    local_44[4] = local_44[3] ^
                  ((local_44[4] >> 0x14 | local_44[4] << 0xc) & 0xf0f0f0f |
                  (local_44[4] >> 0xc | local_44[4] << 0x14) & 0xf0f0f0f0) ^ uVar2 ^ uVar6;
    local_44[3] = uVar4 ^ ((local_44[3] >> 0x14 | local_44[3] << 0xc) & 0xf0f0f0f |
                          (local_44[3] >> 0xc | local_44[3] << 0x14) & 0xf0f0f0f0) ^ uVar8 ^ uVar6;
    local_44[1] = uVar11 ^ ((local_44[1] >> 0x14 | local_44[1] << 0xc) & 0xf0f0f0f |
                           (local_44[1] >> 0xc | local_44[1] << 0x14) & 0xf0f0f0f0) ^ uVar5 ^ uVar6;
    iVar3 = 0;
    do {
      local_44[iVar3] = local_44[iVar3] ^ *(uint *)(iVar7 + iVar3 * 4);
      iVar3 = iVar3 + 1;
    } while (iVar3 != 8);
    if (iVar1 == 0x48) break;
    FUN_00652d58(local_44);
    uVar4 = (local_44[7] >> 0xc | local_44[7] << 0x14) & 0xf0f0f0f |
            local_44[7] >> 4 & 0xf0f0f0f0 | local_44[7] << 0x1c;
    uVar8 = uVar4 ^ local_44[7];
    uVar2 = (local_44[6] >> 0xc | local_44[6] << 0x14) & 0xf0f0f0f |
            local_44[6] >> 4 & 0xf0f0f0f0 | local_44[6] << 0x1c;
    local_44[6] = uVar2 ^ local_44[6];
    local_44[7] = local_44[6] ^ (uVar8 >> 0x10 | uVar8 << 0x10) ^ uVar4;
    uVar4 = (local_44[5] >> 0xc | local_44[5] << 0x14) & 0xf0f0f0f |
            local_44[5] >> 4 & 0xf0f0f0f0 | local_44[5] << 0x1c;
    local_44[5] = uVar4 ^ local_44[5];
    local_44[6] = local_44[5] ^ (local_44[6] >> 0x10 | local_44[6] << 0x10) ^ uVar2;
    uVar2 = (local_44[4] >> 0xc | local_44[4] << 0x14) & 0xf0f0f0f |
            local_44[4] >> 4 & 0xf0f0f0f0 | local_44[4] << 0x1c;
    local_44[4] = uVar2 ^ local_44[4];
    local_44[5] = local_44[4] ^ (local_44[5] >> 0x10 | local_44[5] << 0x10) ^ uVar4;
    uVar6 = (local_44[1] >> 0xc | local_44[1] << 0x14) & 0xf0f0f0f |
            local_44[1] >> 4 & 0xf0f0f0f0 | local_44[1] << 0x1c;
    uVar4 = (local_44[2] >> 0xc | local_44[2] << 0x14) & 0xf0f0f0f |
            local_44[2] >> 4 & 0xf0f0f0f0 | local_44[2] << 0x1c;
    local_44[1] = uVar6 ^ local_44[1];
    uVar11 = uVar4 ^ local_44[2];
    local_44[2] = local_44[1] ^ (uVar11 >> 0x10 | uVar11 << 0x10) ^ uVar4;
    uVar5 = (local_44[0] >> 0xc | local_44[0] << 0x14) & 0xf0f0f0f |
            local_44[0] >> 4 & 0xf0f0f0f0 | local_44[0] << 0x1c;
    uVar4 = uVar5 ^ local_44[0];
    local_44[0] = uVar5 ^ (uVar4 >> 0x10 | uVar4 << 0x10) ^ uVar8;
    uVar5 = (local_44[3] >> 0xc | local_44[3] << 0x14) & 0xf0f0f0f |
            local_44[3] >> 4 & 0xf0f0f0f0 | local_44[3] << 0x1c;
    local_44[3] = uVar5 ^ local_44[3];
    local_44[1] = uVar4 ^ (local_44[1] >> 0x10 | local_44[1] << 0x10) ^ uVar6 ^ uVar8;
    iVar3 = 0;
    local_44[4] = local_44[3] ^ (local_44[4] >> 0x10 | local_44[4] << 0x10) ^ uVar2 ^ uVar8;
    local_44[3] = uVar11 ^ (local_44[3] >> 0x10 | local_44[3] << 0x10) ^ uVar5 ^ uVar8;
    do {
      local_44[iVar3] = local_44[iVar3] ^ *(uint *)(iVar9 + iVar3 * 4);
      iVar3 = iVar3 + 1;
    } while (iVar3 != 8);
    FUN_00652d58(local_44);
    uVar2 = (local_44[7] >> 0xe | local_44[7] << 0x12) & 0x3030303 |
            local_44[7] >> 6 & 0xfcfcfcfc | local_44[7] << 0x1a;
    uVar6 = uVar2 ^ local_44[7];
    uVar4 = (local_44[6] >> 0xe | local_44[6] << 0x12) & 0x3030303 |
            local_44[6] >> 6 & 0xfcfcfcfc | local_44[6] << 0x1a;
    local_44[6] = uVar4 ^ local_44[6];
    local_44[7] = local_44[6] ^
                  ((uVar6 >> 0x14 | uVar6 << 0xc) & 0xf0f0f0f |
                  (uVar6 >> 0xc | uVar6 << 0x14) & 0xf0f0f0f0) ^ uVar2;
    uVar2 = (local_44[5] >> 0xe | local_44[5] << 0x12) & 0x3030303 |
            local_44[5] >> 6 & 0xfcfcfcfc | local_44[5] << 0x1a;
    local_44[5] = uVar2 ^ local_44[5];
    local_44[6] = local_44[5] ^
                  ((local_44[6] >> 0x14 | local_44[6] << 0xc) & 0xf0f0f0f |
                  (local_44[6] >> 0xc | local_44[6] << 0x14) & 0xf0f0f0f0) ^ uVar4;
    uVar8 = (local_44[4] >> 0xe | local_44[4] << 0x12) & 0x3030303 |
            local_44[4] >> 6 & 0xfcfcfcfc | local_44[4] << 0x1a;
    local_44[4] = uVar8 ^ local_44[4];
    local_44[5] = local_44[4] ^
                  ((local_44[5] >> 0x14 | local_44[5] << 0xc) & 0xf0f0f0f |
                  (local_44[5] >> 0xc | local_44[5] << 0x14) & 0xf0f0f0f0) ^ uVar2;
    uVar2 = (local_44[2] >> 0xe | local_44[2] << 0x12) & 0x3030303 |
            local_44[2] >> 6 & 0xfcfcfcfc | local_44[2] << 0x1a;
    uVar4 = uVar2 ^ local_44[2];
    uVar5 = (local_44[1] >> 0xe | local_44[1] << 0x12) & 0x3030303 |
            local_44[1] >> 6 & 0xfcfcfcfc | local_44[1] << 0x1a;
    local_44[1] = uVar5 ^ local_44[1];
    local_44[2] = local_44[1] ^
                  ((uVar4 >> 0x14 | uVar4 << 0xc) & 0xf0f0f0f |
                  (uVar4 >> 0xc | uVar4 << 0x14) & 0xf0f0f0f0) ^ uVar2;
    uVar2 = (local_44[0] >> 0xe | local_44[0] << 0x12) & 0x3030303 |
            local_44[0] >> 6 & 0xfcfcfcfc | local_44[0] << 0x1a;
    uVar11 = uVar2 ^ local_44[0];
    local_44[0] = ((uVar11 >> 0x14 | uVar11 << 0xc) & 0xf0f0f0f |
                  (uVar11 >> 0xc | uVar11 << 0x14) & 0xf0f0f0f0) ^ uVar2 ^ uVar6;
    uVar2 = (local_44[3] >> 0xe | local_44[3] << 0x12) & 0x3030303 |
            local_44[3] >> 6 & 0xfcfcfcfc | local_44[3] << 0x1a;
    local_44[3] = uVar2 ^ local_44[3];
    local_44[4] = local_44[3] ^
                  ((local_44[4] >> 0x14 | local_44[4] << 0xc) & 0xf0f0f0f |
                  (local_44[4] >> 0xc | local_44[4] << 0x14) & 0xf0f0f0f0) ^ uVar8 ^ uVar6;
    local_44[3] = uVar4 ^ ((local_44[3] >> 0x14 | local_44[3] << 0xc) & 0xf0f0f0f |
                          (local_44[3] >> 0xc | local_44[3] << 0x14) & 0xf0f0f0f0) ^ uVar2 ^ uVar6;
    local_44[1] = uVar11 ^ ((local_44[1] >> 0x14 | local_44[1] << 0xc) & 0xf0f0f0f |
                           (local_44[1] >> 0xc | local_44[1] << 0x14) & 0xf0f0f0f0) ^ uVar5 ^ uVar6;
    iVar3 = 0;
    do {
      local_44[iVar3] = local_44[iVar3] ^ *(uint *)(iVar10 + iVar3 * 4);
      iVar3 = iVar3 + 1;
    } while (iVar3 != 8);
    FUN_00652d58(local_44);
    uVar4 = local_44[7] ^ (local_44[7] >> 8 | local_44[7] << 0x18);
    uVar5 = local_44[6] ^ (local_44[6] >> 8 | local_44[6] << 0x18);
    local_44[7] = uVar5 ^ (uVar4 >> 0x10 | uVar4 << 0x10) ^ (local_44[7] >> 8 | local_44[7] << 0x18)
    ;
    uVar2 = local_44[5] ^ (local_44[5] >> 8 | local_44[5] << 0x18);
    local_44[6] = uVar2 ^ (uVar5 >> 0x10 | uVar5 << 0x10) ^ (local_44[6] >> 8 | local_44[6] << 0x18)
    ;
    uVar5 = local_44[4] ^ (local_44[4] >> 8 | local_44[4] << 0x18);
    uVar8 = local_44[1] ^ (local_44[1] >> 8 | local_44[1] << 0x18);
    local_44[5] = uVar5 ^ (uVar2 >> 0x10 | uVar2 << 0x10) ^ (local_44[5] >> 8 | local_44[5] << 0x18)
    ;
    uVar2 = local_44[2] ^ (local_44[2] >> 8 | local_44[2] << 0x18);
    uVar11 = local_44[0] ^ (local_44[0] >> 8 | local_44[0] << 0x18);
    local_44[2] = uVar8 ^ (uVar2 >> 0x10 | uVar2 << 0x10) ^ (local_44[2] >> 8 | local_44[2] << 0x18)
    ;
    local_44[0] = (uVar11 >> 0x10 | uVar11 << 0x10) ^ (local_44[0] >> 8 | local_44[0] << 0x18) ^
                  uVar4;
    uVar6 = local_44[3] ^ (local_44[3] >> 8 | local_44[3] << 0x18);
    local_44[3] = uVar2 ^ (uVar6 >> 0x10 | uVar6 << 0x10) ^ (local_44[3] >> 8 | local_44[3] << 0x18)
                  ^ uVar4;
    local_44[4] = uVar6 ^ (uVar5 >> 0x10 | uVar5 << 0x10) ^ (local_44[4] >> 8 | local_44[4] << 0x18)
                  ^ uVar4;
    local_44[1] = uVar11 ^ (uVar8 >> 0x10 | uVar8 << 0x10) ^
                  (local_44[1] >> 8 | local_44[1] << 0x18) ^ uVar4;
    iVar3 = 0;
    do {
      local_44[iVar3] = local_44[iVar3] ^ *(uint *)(local_5c + iVar3 * 4);
      iVar3 = iVar3 + 1;
    } while (iVar3 != 8);
    iVar10 = iVar10 + 0x80;
    iVar9 = iVar9 + 0x80;
    iVar7 = iVar7 + 0x80;
    iVar1 = iVar1 + 0x20;
  }
  iVar1 = 0;
  do {
    uVar2 = *(uint *)((int)local_44 + iVar1);
    uVar4 = (uVar2 ^ uVar2 >> 4) & 0xf000f00;
    *(uint *)((int)local_44 + iVar1) = uVar2 ^ uVar4 << 4 ^ uVar4;
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x20);
  FUN_00652d58(local_44);
  iVar1 = 0;
  do {
    local_44[iVar1] = local_44[iVar1] ^ *(uint *)(param_2 + 0x140 + iVar1 * 4);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 8);
  uVar2 = (local_44[1] ^ local_44[0] >> 1) & 0x55555555;
  local_44[1] = uVar2 ^ local_44[1];
  uVar4 = (local_44[3] ^ local_44[2] >> 1) & 0x55555555;
  local_44[3] = uVar4 ^ local_44[3];
  uVar5 = (local_44[3] ^ local_44[1] >> 2) & 0x33333333;
  local_44[1] = local_44[1] ^ uVar5 << 2;
  uVar5 = uVar5 ^ local_44[3];
  uVar8 = (local_44[5] ^ local_44[4] >> 1) & 0x55555555;
  local_44[5] = uVar8 ^ local_44[5];
  uVar6 = (local_44[7] ^ local_44[6] >> 1) & 0x55555555;
  local_44[7] = uVar6 ^ local_44[7];
  local_44[6] = local_44[6] ^ uVar6 << 1;
  uVar6 = (local_44[7] ^ local_44[5] >> 2) & 0x33333333;
  local_44[7] = uVar6 ^ local_44[7];
  local_44[5] = local_44[5] ^ uVar6 << 2;
  uVar6 = (local_44[7] ^ uVar5 >> 4) & 0xf0f0f0f;
  uVar11 = (local_44[5] ^ local_44[1] >> 4) & 0xf0f0f0f;
  param_1[6] = uVar11 ^ local_44[5];
  param_1[5] = uVar5 ^ uVar6 << 4;
  param_1[7] = uVar6 ^ local_44[7];
  local_44[4] = local_44[4] ^ uVar8 << 1;
  local_44[0] = local_44[0] ^ uVar2 << 1;
  local_44[2] = local_44[2] ^ uVar4 << 1;
  uVar2 = (local_44[2] ^ local_44[0] >> 2) & 0x33333333;
  uVar4 = (local_44[6] ^ local_44[4] >> 2) & 0x33333333;
  local_44[2] = uVar2 ^ local_44[2];
  local_44[6] = uVar4 ^ local_44[6];
  local_44[0] = local_44[0] ^ uVar2 << 2;
  uVar2 = (local_44[6] ^ local_44[2] >> 4) & 0xf0f0f0f;
  param_1[4] = local_44[1] ^ uVar11 << 4;
  local_44[4] = local_44[4] ^ uVar4 << 2;
  uVar4 = (local_44[4] ^ local_44[0] >> 4) & 0xf0f0f0f;
  param_1[3] = uVar2 ^ local_44[6];
  param_1[2] = uVar4 ^ local_44[4];
  param_1[1] = local_44[2] ^ uVar2 << 4;
  *param_1 = local_44[0] ^ uVar4 << 4;
  return;
}

