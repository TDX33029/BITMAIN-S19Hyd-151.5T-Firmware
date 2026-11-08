// FUN_01b89888 @ 01b89888 size=1488 calls_out=15 calls_in=1
// strings: tpBasis

uint FUN_01b89888(undefined4 *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                 undefined4 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  int local_2c;
  
  param_1[0xbb] = 1;
  FUN_01bed4e2(param_1 + 0x2f,param_2,0xb0);
  if (param_1[0x44] == 1) {
    FUN_01bbf4e4(param_1 + 0x44,param_1 + 0x30);
  }
  uVar4 = param_1[0x30];
  uVar5 = 1 << (uVar4 - 0x20 & 0xff) | 1U >> (0x20 - uVar4 & 0xff);
  uVar4 = 1 << (uVar4 & 0xff);
  if (param_4 < uVar5 || uVar5 - param_4 < (uint)(param_3 <= uVar4)) {
    bVar11 = param_3 == 0;
    if (!bVar11) {
      uVar4 = param_3;
    }
  }
  else {
    bVar11 = uVar4 == 0;
  }
  iVar6 = param_1[0x34];
  if (bVar11) {
    uVar4 = 1;
  }
  iVar7 = param_1[0x58];
  uVar5 = param_1[0x59];
  if (uVar4 < (uint)param_1[0x59]) {
    uVar5 = uVar4;
  }
  if (param_7 == 1) {
    if (param_1[0x4c] == 0) {
      iVar10 = FUN_01b87828(uVar5);
      iVar10 = iVar10 + 1;
    }
    else {
      iVar10 = 0;
    }
    if (param_1[0x4b] == 0) {
      local_2c = uVar4 + uVar5;
    }
    else {
      local_2c = 0;
    }
  }
  else {
    iVar10 = 0;
    local_2c = 0;
  }
  iVar1 = FUN_01bbf5c4(param_1[0x44],param_1[0x45],param_1[0x46],param_1[0x47],param_1[0x48],
                       param_1[0x49],uVar5);
  bVar12 = 0x5ffffffe < param_5;
  bVar11 = param_5 == 0x5fffffff;
  if (param_5 < 0x60000000) {
    bVar12 = 0x9effffff < (uint)(param_1[0x21a] - param_1[0x21b]);
    bVar11 = param_1[0x21a] - param_1[0x21b] == 0x9f000000;
  }
  if (bVar12 && !bVar11) {
    bVar11 = true;
  }
  else {
    bVar11 = param_1[0xbc] == 0;
  }
  uVar4 = FUN_01b896e8(param_1 + 0x30,param_1 + 0x44,param_1[0xb6] != 0,param_1[0x50],local_2c,
                       iVar10,param_3,param_4,param_1[0x58] != 0,param_1[0x59]);
  if (0xffffff88 < uVar4) {
    return uVar4;
  }
  puVar9 = param_1 + 0x89;
  if (param_1[0xb6] == 0) {
    param_1[0x91] = param_1[0x91] + 1;
  }
  if (((uVar4 * 3 <= (uint)(param_1[0x8e] - param_1[0x8c])) && (0x80 < (int)param_1[0x91])) ||
     (uVar8 = param_1[0x8a], uVar8 - param_1[0x89] < uVar4)) {
    if (param_1[0xb6] != 0) {
      return 0xffffffc0;
    }
    FUN_01b86b0c(puVar9,param_1[0xb3],param_1[0xb4]);
    if ((code *)param_1[0xb2] == (code *)0x0) {
      iVar2 = thunk_FUN_01be5118(uVar4);
    }
    else {
      iVar2 = (*(code *)param_1[0xb2])(param_1[0xb4],uVar4);
    }
    if (iVar2 == 0) {
      return 0xffffffc0;
    }
    uVar8 = iVar2 + uVar4;
    param_1[0x89] = iVar2;
    param_1[0x8b] = iVar2;
    param_1[0x8d] = iVar2;
    param_1[0x8f] = uVar8 & 0xffffffc0;
    param_1[0x8c] = iVar2;
    param_1[0x8e] = uVar8 & 0xffffffc0;
    param_1[0x8a] = uVar8;
    param_1[0x92] = 0;
    param_1[0x93] = 0;
    *(undefined1 *)(param_1 + 0x90) = 0;
    param_1[0x91] = 0;
    iVar2 = FUN_01b850b0(puVar9,0x11f4);
    param_1[0x218] = iVar2;
    if (iVar2 == 0) {
      return 0xffffffc0;
    }
    iVar2 = FUN_01b850b0(puVar9,0x11f4);
    param_1[0x219] = iVar2;
    if (iVar2 == 0) {
      return 0xffffffc0;
    }
    iVar2 = FUN_01b850b0(puVar9,0x22d8);
    param_1[0x252] = iVar2;
    if (iVar2 == 0) {
      return 0xffffffc0;
    }
    bVar11 = true;
  }
  param_1[0x8c] = param_1[0x8b];
  *(undefined1 *)(param_1 + 0x90) = 0;
  param_1[0x8e] = uVar8 & 0xffffffc0;
  if (1 < (uint)param_1[0x92]) {
    param_1[0x92] = 1;
  }
  param_1[0x248] = param_1[0x30];
  param_1[0x249] = param_1[0x31];
  param_1[0x24a] = param_1[0x32];
  param_1[0x24b] = param_1[0x33];
  param_1[0x24c] = param_1[0x34];
  param_1[0x24d] = param_1[0x35];
  param_1[0x24e] = param_1[0x36];
  param_1[0x250] = (uint)(param_1[0x55] == 1);
  param_1[0x96] = param_3 + 1;
  param_1[0x97] = param_4 + (0xfffffffe < param_3);
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  if (param_4 == 0xffffffff && param_3 == 0xffffffff) {
    param_1[0x37] = 0;
  }
  param_1[0x94] = uVar5;
  iVar2 = FUN_01bed93e(param_1 + 0x9c,0,0x58);
  *(undefined4 *)(iVar2 + 8) = 0xadc0b5d6;
  *(undefined4 *)(iVar2 + 0xc) = 0x60ea27ee;
  *(undefined4 *)(iVar2 + 0x10) = 0x27d4eb4f;
  *(undefined4 *)(iVar2 + 0x14) = 0xc2b2ae3d;
  *(undefined4 *)(iVar2 + 0x20) = 0x7a143579;
  *(undefined4 *)(iVar2 + 0x24) = 0x61c8864e;
  *param_1 = 1;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  FUN_01b88480(param_1[0x218]);
  uVar4 = FUN_01b86f10(param_1 + 0x21a,puVar9,param_1 + 0x30,param_1[0x50],param_6,bVar11,
                       extraout_r1);
  if (0xffffff88 < uVar4) {
    return 0xffffffc0;
  }
  uVar4 = (uint)(iVar7 != 0);
  if (iVar6 == 3) {
    uVar4 = 1;
  }
  iVar6 = FUN_01bf1250(uVar5,4 - uVar4);
  uVar3 = FUN_01b85010(puVar9,iVar6 << 3);
  param_1[0xbd] = uVar3;
  if (param_1[0x44] == 1) {
    iVar7 = 8 << (param_1[0x45] & 0xff);
    uVar3 = FUN_01b85010(puVar9,iVar7);
    param_1[0xce] = uVar3;
    FUN_01bed93e(uVar3,0,iVar7);
    uVar3 = FUN_01b85010(puVar9,iVar1 * 0xc);
    param_1[0x212] = iVar1;
    param_1[0x211] = uVar3;
    param_1[0xcd] = 0;
    param_1[0xc9] = &DAT_005b2079;
    param_1[0xca] = &DAT_005b2079;
    param_1[0xcb] = 2;
    param_1[0xcc] = 2;
    param_1[200] = "tpBasis";
    param_1[0xcf] = 0;
  }
  if (param_1[0x58] != 0) {
    iVar7 = FUN_01b896bc(uVar5);
    param_1[0x3b2] = iVar7;
    uVar3 = FUN_01b85010(puVar9,iVar7 << 4);
    param_1[0x3b1] = uVar3;
  }
  uVar3 = FUN_01b84f70(puVar9,uVar5 + 0x20,3);
  param_1[0x253] = param_7;
  param_1[0xbf] = uVar3;
  param_1[0x255] = local_2c;
  param_1[0xc5] = uVar5;
  uVar3 = FUN_01b84f70(puVar9,local_2c,3);
  param_1[0x254] = uVar3;
  param_1[0x25a] = iVar10;
  uVar3 = FUN_01b84f70(puVar9,iVar10,3);
  param_1[0x259] = uVar3;
  if (param_1[0x44] == 1) {
    iVar7 = 1 << (param_1[0x45] - param_1[0x46] & 0xff);
    uVar3 = FUN_01b84f70(puVar9,iVar7,3);
    param_1[0xd0] = uVar3;
    FUN_01bed93e(uVar3,0,iVar7);
  }
  param_1[0xc4] = iVar6;
  param_1[0x213] = 0;
  param_1[0x216] = 0;
  param_1[0x217] = 0;
  param_1[0x214] = 0;
  param_1[0x215] = 0;
  uVar3 = FUN_01b84f70(puVar9,iVar6,3);
  param_1[0xc1] = uVar3;
  uVar3 = FUN_01b84f70(puVar9,iVar6,3);
  param_1[0xc2] = uVar3;
  uVar3 = FUN_01b84f70(puVar9,iVar6,3);
  param_1[0xc3] = uVar3;
  param_1[0xbc] = 1;
  return 0;
}

