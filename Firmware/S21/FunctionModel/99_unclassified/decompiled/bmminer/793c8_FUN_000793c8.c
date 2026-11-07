// FUN_000793c8 @ 000793c8  size=3712  callers=4
// program: bmminer


uint FUN_000793c8(uint *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_30;
  uint *local_20;
  uint *local_1c;
  uint *local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_14 = param_2 + param_3 + 0xdeadbeef;
  local_30 = param_2;
  local_10 = local_14;
  local_c = local_14;
  if (((uint)param_1 & 3) == 0) {
    local_18 = param_1;
    for (; 0xc < local_30; local_30 = local_30 - 0xc) {
      local_14 = local_14 + local_18[2];
      uVar3 = (local_14 >> 0x1c | local_14 * 0x10) ^ (local_c + *local_18) - local_14;
      iVar1 = local_14 + local_10 + local_18[1];
      uVar4 = (uVar3 >> 0x1a | uVar3 << 6) ^ (local_10 + local_18[1]) - uVar3;
      iVar2 = uVar3 + iVar1;
      uVar3 = (uVar4 >> 0x18 | uVar4 << 8) ^ iVar1 - uVar4;
      iVar1 = uVar4 + iVar2;
      local_c = (uVar3 >> 0x10 | uVar3 << 0x10) ^ iVar2 - uVar3;
      iVar2 = uVar3 + iVar1;
      local_10 = (local_c >> 0xd | local_c << 0x13) ^ iVar1 - local_c;
      local_c = local_c + iVar2;
      local_14 = (local_10 >> 0x1c | local_10 << 4) ^ iVar2 - local_10;
      local_10 = local_10 + local_c;
      local_18 = local_18 + 3;
    }
    switch(local_30) {
    case 0:
      return local_14;
    case 1:
      local_c = local_c + (*local_18 & 0xff);
      break;
    case 2:
      local_c = local_c + (*local_18 & 0xffff);
      break;
    case 3:
      local_c = local_c + (*local_18 & 0xffffff);
      break;
    case 4:
      local_c = local_c + *local_18;
      break;
    case 5:
      local_10 = local_10 + (local_18[1] & 0xff);
      local_c = local_c + *local_18;
      break;
    case 6:
      local_10 = local_10 + (local_18[1] & 0xffff);
      local_c = local_c + *local_18;
      break;
    case 7:
      local_10 = local_10 + (local_18[1] & 0xffffff);
      local_c = local_c + *local_18;
      break;
    case 8:
      local_10 = local_10 + local_18[1];
      local_c = local_c + *local_18;
      break;
    case 9:
      local_14 = local_14 + (local_18[2] & 0xff);
      local_10 = local_10 + local_18[1];
      local_c = local_c + *local_18;
      break;
    case 10:
      local_14 = local_14 + (local_18[2] & 0xffff);
      local_10 = local_10 + local_18[1];
      local_c = local_c + *local_18;
      break;
    case 0xb:
      local_14 = local_14 + (local_18[2] & 0xffffff);
      local_10 = local_10 + local_18[1];
      local_c = local_c + *local_18;
      break;
    case 0xc:
      local_14 = local_14 + local_18[2];
      local_10 = local_10 + local_18[1];
      local_c = local_c + *local_18;
    }
  }
  else if (((uint)param_1 & 1) == 0) {
    local_1c = param_1;
    for (; 0xc < local_30; local_30 = local_30 - 0xc) {
      local_14 = local_14 + local_1c[2];
      uVar3 = (local_14 >> 0x1c | local_14 * 0x10) ^ (local_c + *local_1c) - local_14;
      iVar1 = local_14 + local_10 + local_1c[1];
      uVar4 = (uVar3 >> 0x1a | uVar3 << 6) ^ (local_10 + local_1c[1]) - uVar3;
      iVar2 = uVar3 + iVar1;
      uVar3 = (uVar4 >> 0x18 | uVar4 << 8) ^ iVar1 - uVar4;
      iVar1 = uVar4 + iVar2;
      local_c = (uVar3 >> 0x10 | uVar3 << 0x10) ^ iVar2 - uVar3;
      iVar2 = uVar3 + iVar1;
      local_10 = (local_c >> 0xd | local_c << 0x13) ^ iVar1 - local_c;
      local_c = local_c + iVar2;
      local_14 = (local_10 >> 0x1c | local_10 << 4) ^ iVar2 - local_10;
      local_10 = local_10 + local_c;
      local_1c = local_1c + 3;
    }
    switch(local_30) {
    case 0:
      return local_14;
    case 1:
      local_c = local_c + (byte)*local_1c;
      break;
    case 3:
      local_c = local_c + (uint)*(byte *)((int)local_1c + 2) * 0x10000;
    case 2:
      local_c = local_c + (ushort)*local_1c;
      break;
    case 5:
      local_10 = local_10 + (byte)local_1c[1];
    case 4:
      local_c = local_c + *local_1c;
      break;
    case 7:
      local_10 = local_10 + (uint)*(byte *)((int)local_1c + 6) * 0x10000;
    case 6:
      local_10 = local_10 + (ushort)local_1c[1];
      local_c = local_c + *local_1c;
      break;
    case 9:
      local_14 = local_14 + (byte)local_1c[2];
    case 8:
      local_10 = local_10 + local_1c[1];
      local_c = local_c + *local_1c;
      break;
    case 0xb:
      local_14 = local_14 + (uint)*(byte *)((int)local_1c + 10) * 0x10000;
    case 10:
      local_14 = local_14 + (ushort)local_1c[2];
      local_10 = local_10 + local_1c[1];
      local_c = local_c + *local_1c;
      break;
    case 0xc:
      local_14 = local_14 + local_1c[2];
      local_10 = local_10 + local_1c[1];
      local_c = local_c + *local_1c;
    }
  }
  else {
    local_20 = param_1;
    for (; 0xc < local_30; local_30 = local_30 - 0xc) {
      iVar1 = local_10 + (byte)local_20[1] + (uint)*(byte *)((int)local_20 + 5) * 0x100 +
              (uint)*(byte *)((int)local_20 + 6) * 0x10000 +
              (uint)*(byte *)((int)local_20 + 7) * 0x1000000;
      uVar3 = local_14 + (byte)local_20[2] + (uint)*(byte *)((int)local_20 + 9) * 0x100 +
              (uint)*(byte *)((int)local_20 + 10) * 0x10000 +
              (uint)*(byte *)((int)local_20 + 0xb) * 0x1000000;
      uVar4 = (uVar3 >> 0x1c | uVar3 * 0x10) ^
              (local_c + (byte)*local_20 + (uint)*(byte *)((int)local_20 + 1) * 0x100 +
               (uint)*(byte *)((int)local_20 + 2) * 0x10000 +
              (uint)*(byte *)((int)local_20 + 3) * 0x1000000) - uVar3;
      iVar2 = uVar3 + iVar1;
      uVar3 = (uVar4 >> 0x1a | uVar4 << 6) ^ iVar1 - uVar4;
      iVar1 = uVar4 + iVar2;
      uVar4 = (uVar3 >> 0x18 | uVar3 << 8) ^ iVar2 - uVar3;
      iVar2 = uVar3 + iVar1;
      local_c = (uVar4 >> 0x10 | uVar4 << 0x10) ^ iVar1 - uVar4;
      iVar1 = uVar4 + iVar2;
      local_10 = (local_c >> 0xd | local_c << 0x13) ^ iVar2 - local_c;
      local_c = local_c + iVar1;
      local_14 = (local_10 >> 0x1c | local_10 << 4) ^ iVar1 - local_10;
      local_10 = local_10 + local_c;
      local_20 = local_20 + 3;
    }
    switch(local_30) {
    case 0:
      return local_14;
    case 0xc:
      local_14 = local_14 + (uint)*(byte *)((int)local_20 + 0xb) * 0x1000000;
    case 0xb:
      local_14 = local_14 + (uint)*(byte *)((int)local_20 + 10) * 0x10000;
    case 10:
      local_14 = local_14 + (uint)*(byte *)((int)local_20 + 9) * 0x100;
    case 9:
      local_14 = local_14 + (byte)local_20[2];
    case 8:
      local_10 = local_10 + (uint)*(byte *)((int)local_20 + 7) * 0x1000000;
    case 7:
      local_10 = local_10 + (uint)*(byte *)((int)local_20 + 6) * 0x10000;
    case 6:
      local_10 = local_10 + (uint)*(byte *)((int)local_20 + 5) * 0x100;
    case 5:
      local_10 = local_10 + (byte)local_20[1];
    case 4:
      local_c = local_c + (uint)*(byte *)((int)local_20 + 3) * 0x1000000;
    case 3:
      local_c = local_c + (uint)*(byte *)((int)local_20 + 2) * 0x10000;
    case 2:
      local_c = local_c + (uint)*(byte *)((int)local_20 + 1) * 0x100;
    case 1:
      local_c = local_c + (byte)*local_20;
    }
  }
  uVar3 = (local_10 ^ local_14) - (local_10 >> 0x12 | local_10 << 0xe);
  uVar4 = (uVar3 ^ local_c) - (uVar3 >> 0x15 | uVar3 * 0x800);
  uVar5 = (uVar4 ^ local_10) - (uVar4 >> 7 | uVar4 * 0x2000000);
  uVar3 = (uVar5 ^ uVar3) - (uVar5 >> 0x10 | uVar5 * 0x10000);
  uVar4 = (uVar3 ^ uVar4) - (uVar3 >> 0x1c | uVar3 * 0x10);
  uVar4 = (uVar4 ^ uVar5) - (uVar4 >> 0x12 | uVar4 * 0x4000);
  return (uVar4 ^ uVar3) - (uVar4 >> 8 | uVar4 * 0x1000000);
}

