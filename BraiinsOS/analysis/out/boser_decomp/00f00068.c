// FUN_00f00068 @ 00f00068 size=1044 calls_out=6 calls_in=3
// strings: 

void FUN_00f00068(uint *param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined1 local_2a;
  byte local_29;
  byte local_28 [3];
  byte local_25;
  
  local_2a = 10;
  FUN_01284394(param_2,&local_2a,1);
  uVar2 = param_1[10];
  iVar12 = 0;
  iVar7 = 0;
  if (uVar2 != 0x80000000) {
    iVar7 = param_1[0xc] + ((LZCOUNT(param_1[0xc] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  uVar5 = param_1[6];
  if (uVar5 != 0) {
    iVar12 = uVar5 + ((LZCOUNT(uVar5 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  uVar6 = *param_1;
  iVar10 = 0;
  if (uVar6 != 2) {
    if ((uVar6 & 1) == 0) {
      if (param_1[1] == 0) {
        iVar10 = 2;
      }
      else {
        iVar10 = ((LZCOUNT(param_1[1] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 3;
      }
    }
    else {
      iVar10 = 2;
      if (*(double *)(param_1 + 2) != 0.0) {
        iVar10 = 0xb;
      }
    }
  }
  uVar14 = param_1[9];
  uVar11 = param_1[8];
  iVar3 = FUN_011df750(uVar11,uVar14 * 0x34 + uVar11);
  iVar13 = 10;
  uVar4 = iVar12 + iVar7 + iVar10 + uVar14 + iVar3;
  do {
    if (uVar4 >> 7 == 0) {
      local_28[0] = (byte)uVar4;
      FUN_01284394(param_2,local_28,1);
      break;
    }
    local_29 = (byte)uVar4 | 0x80;
    FUN_01284394(param_2,&local_29,1);
    iVar13 = iVar13 + -1;
    uVar4 = uVar4 >> 7;
  } while (iVar13 != 0);
  if (uVar2 != 0x80000000) {
    FUN_01016f10(1,param_1[0xb],param_1[0xc],param_2);
  }
  if (uVar5 != 0) {
    FUN_01016f10(2,param_1[5],uVar5,param_2);
  }
  if (uVar6 != 2) {
    if ((uVar6 & 1) == 0) {
      FUN_00f00504(3,param_1[1],param_2);
    }
    else {
      FUN_00f0047c((int)*(undefined8 *)(param_1 + 2),4,param_2);
    }
  }
  if (uVar14 != 0) {
    uVar2 = uVar11;
    do {
      local_28[1] = 0x2a;
      FUN_01284394(param_2,local_28 + 1,1);
      iVar12 = *(int *)(uVar2 + 0x18);
      iVar7 = 0;
      iVar10 = 0;
      if (iVar12 != -0x80000000) {
        iVar10 = *(uint *)(uVar2 + 0x20) +
                 ((LZCOUNT(*(uint *)(uVar2 + 0x20) | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      uVar5 = *(uint *)(uVar2 + 8);
      if (uVar5 != 0) {
        iVar7 = uVar5 + ((LZCOUNT(uVar5 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      uVar6 = *(uint *)(uVar2 + 0x14);
      iVar3 = 0;
      iVar13 = 0;
      if (uVar6 != 0) {
        iVar13 = uVar6 + ((LZCOUNT(uVar6 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      iVar8 = *(int *)(uVar2 + 0x24);
      if (iVar8 != -0x80000000) {
        iVar3 = *(uint *)(uVar2 + 0x2c) +
                ((LZCOUNT(*(uint *)(uVar2 + 0x2c) | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      cVar1 = *(char *)(uVar2 + 0x30);
      uVar9 = uVar2 + 0x34;
      uVar4 = iVar7 + iVar10 + iVar13 + iVar3;
      if (cVar1 != '\x02') {
        uVar4 = uVar4 + 2;
      }
      iVar7 = 10;
      do {
        if (uVar4 >> 7 == 0) {
          local_25 = (byte)uVar4;
          FUN_01284394(param_2,&local_25,1);
          break;
        }
        local_28[2] = (byte)uVar4 | 0x80;
        FUN_01284394(param_2,local_28 + 2,1);
        iVar7 = iVar7 + -1;
        uVar4 = uVar4 >> 7;
      } while (iVar7 != 0);
      if (iVar12 != -0x80000000) {
        FUN_01016f10(1,*(undefined4 *)(uVar2 + 0x1c),*(undefined4 *)(uVar2 + 0x20),param_2);
      }
      if (uVar5 != 0) {
        FUN_01016f10(2,*(undefined4 *)(uVar2 + 4),*(undefined4 *)(uVar2 + 8),param_2);
      }
      if (uVar6 != 0) {
        FUN_01016f10(3,*(undefined4 *)(uVar2 + 0x10),*(undefined4 *)(uVar2 + 0x14),param_2);
      }
      if (iVar8 != -0x80000000) {
        FUN_01016f10(4,*(undefined4 *)(uVar2 + 0x28),*(undefined4 *)(uVar2 + 0x2c),param_2);
      }
      if (cVar1 != '\x02') {
        FUN_00efe13c(5,*(undefined1 *)(uVar2 + 0x30),param_2);
      }
      uVar2 = uVar9;
    } while (uVar9 != uVar14 * 0x34 + uVar11);
  }
  return;
}

