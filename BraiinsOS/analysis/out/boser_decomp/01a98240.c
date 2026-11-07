// FUN_01a98240 @ 01a98240 size=1852 calls_out=6 calls_in=1
// strings: 

void FUN_01a98240(char param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  byte local_2a;
  byte local_29;
  byte local_28 [3];
  byte local_25;
  
  local_2a = param_1 << 3 | 2;
  FUN_01ac6cbc(param_3,&local_2a,1);
  iVar6 = param_2[0x10];
  iVar27 = 0;
  iVar22 = 0;
  if (iVar6 != -0x80000000) {
    iVar22 = param_2[0x12] + ((LZCOUNT(param_2[0x12] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  iVar7 = param_2[0x16];
  if (iVar7 != -0x80000000) {
    iVar27 = param_2[0x18] + ((LZCOUNT(param_2[0x18] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  iVar8 = *param_2;
  iVar19 = 0;
  iVar21 = 0;
  if (iVar8 == 1) {
    uVar9 = param_2[1];
    uVar14 = LZCOUNT(uVar9 | 1) | 0x20;
    if ((int)uVar9 < 0) {
      uVar14 = LZCOUNT((int)uVar9 >> 0x1f);
    }
    iVar21 = ((uVar14 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
  }
  iVar10 = param_2[2];
  if (iVar10 == 1) {
    uVar9 = param_2[3];
    uVar14 = LZCOUNT(uVar9 | 1) | 0x20;
    if ((int)uVar9 < 0) {
      uVar14 = LZCOUNT((int)uVar9 >> 0x1f);
    }
    iVar19 = ((uVar14 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
  }
  iVar11 = param_2[4];
  iVar20 = 0;
  iVar25 = 0;
  if (iVar11 == 1) {
    uVar9 = param_2[5];
    uVar14 = LZCOUNT(uVar9 | 1) | 0x20;
    if ((int)uVar9 < 0) {
      uVar14 = LZCOUNT((int)uVar9 >> 0x1f);
    }
    iVar25 = ((uVar14 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
  }
  iVar12 = param_2[0x13];
  if (iVar12 != -0x80000000) {
    iVar20 = param_2[0x15] + ((LZCOUNT(param_2[0x15] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  iVar15 = param_2[0x19];
  iVar13 = 0;
  iVar26 = 0;
  if (iVar15 != -0x80000000) {
    iVar26 = param_2[0x1b] + ((LZCOUNT(param_2[0x1b] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  uVar9 = param_2[8];
  if (uVar9 != 2) {
    iVar28 = 0;
    iVar13 = 0;
    if ((uVar9 & 1) != 0) {
      uVar14 = param_2[9];
      uVar16 = LZCOUNT(uVar14 | 1) | 0x20;
      if ((int)uVar14 < 0) {
        uVar16 = LZCOUNT((int)uVar14 >> 0x1f);
      }
      iVar13 = ((uVar16 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
    }
    if (param_2[10] == 1) {
      uVar14 = param_2[0xb];
      uVar16 = LZCOUNT(uVar14 | 1) | 0x20;
      if ((int)uVar14 < 0) {
        uVar16 = LZCOUNT((int)uVar14 >> 0x1f);
      }
      iVar28 = ((uVar16 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
    }
    if ((char)param_2[0xf] != '\x02') {
      iVar13 = iVar13 + 2;
    }
    if (*(char *)((int)param_2 + 0x3e) != '\x02') {
      iVar13 = iVar13 + 2;
    }
    if (*(char *)((int)param_2 + 0x3d) != '\x02') {
      iVar13 = iVar13 + 2;
    }
    iVar23 = param_2[0xe];
    iVar13 = iVar13 + iVar28;
    if (*(char *)((int)param_2 + 0x3f) != '\x02') {
      iVar13 = iVar13 + 2;
    }
    iVar28 = FUN_01aa2d9c(param_2[0xd],param_2[0xd] + iVar23 * 0x60);
    uVar14 = iVar13 + iVar23 * 2 + iVar28;
    iVar13 = uVar14 + ((LZCOUNT(uVar14 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  iVar23 = param_2[6];
  iVar28 = 0;
  iVar17 = 0;
  if (iVar23 == 1) {
    uVar14 = param_2[7];
    uVar16 = LZCOUNT(uVar14 | 1) | 0x20;
    if ((int)uVar14 < 0) {
      uVar16 = LZCOUNT((int)uVar14 >> 0x1f);
    }
    iVar17 = ((uVar16 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
  }
  iVar18 = param_2[0x1c];
  if (iVar18 != -0x80000000) {
    iVar28 = param_2[0x1e] + ((LZCOUNT(param_2[0x1e] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  cVar1 = (char)param_2[0x1f];
  iVar24 = 10;
  uVar14 = iVar27 + iVar22 + iVar21 + iVar19 + iVar25 + iVar20 + iVar26 + iVar13 + iVar17 + iVar28;
  if (cVar1 != '\x02') {
    uVar14 = uVar14 + 3;
  }
  do {
    if (uVar14 >> 7 == 0) {
      local_28[0] = (byte)uVar14;
      FUN_01ac6cbc(param_3,local_28,1);
      break;
    }
    local_29 = (byte)uVar14 | 0x80;
    FUN_01ac6cbc(param_3,&local_29,1);
    iVar24 = iVar24 + -1;
    uVar14 = uVar14 >> 7;
  } while (iVar24 != 0);
  if (iVar6 != -0x80000000) {
    FUN_01a9e45c(1,param_2[0x11],param_2[0x12],param_3);
  }
  if (iVar7 != -0x80000000) {
    FUN_01a9e45c(2,param_2[0x17],param_2[0x18],param_3);
  }
  if (iVar8 != 0) {
    FUN_01a9e050(3,param_2[1],param_3);
  }
  if (iVar10 != 0) {
    FUN_01a9e050(4,param_2[3],param_3);
  }
  if (iVar11 != 0) {
    FUN_01a9e050(5,param_2[5],param_3);
  }
  if (iVar12 != -0x80000000) {
    FUN_01a9e45c(6,param_2[0x14],param_2[0x15],param_3);
  }
  if (iVar15 != -0x80000000) {
    FUN_01a9e45c(7,param_2[0x1a],param_2[0x1b],param_3);
  }
  if (uVar9 != 2) {
    local_28[1] = 0x42;
    FUN_01ac6cbc(param_3,local_28 + 1,1);
    iVar6 = 0;
    iVar22 = 0;
    if ((uVar9 & 1) != 0) {
      uVar14 = param_2[9];
      uVar16 = LZCOUNT(uVar14 | 1) | 0x20;
      if ((int)uVar14 < 0) {
        uVar16 = LZCOUNT((int)uVar14 >> 0x1f);
      }
      iVar22 = ((uVar16 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
    }
    cVar2 = *(char *)((int)param_2 + 0x3d);
    cVar3 = *(char *)((int)param_2 + 0x3e);
    cVar4 = (char)param_2[0xf];
    iVar27 = param_2[10];
    if (iVar27 == 1) {
      uVar14 = param_2[0xb];
      uVar16 = LZCOUNT(uVar14 | 1) | 0x20;
      if ((int)uVar14 < 0) {
        uVar16 = LZCOUNT((int)uVar14 >> 0x1f);
      }
      iVar6 = ((uVar16 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
    }
    cVar5 = *(char *)((int)param_2 + 0x3f);
    if (cVar4 != '\x02') {
      iVar22 = iVar22 + 2;
    }
    if (cVar3 != '\x02') {
      iVar22 = iVar22 + 2;
    }
    if (cVar2 != '\x02') {
      iVar22 = iVar22 + 2;
    }
    iVar7 = param_2[0xe];
    iVar22 = iVar22 + iVar6;
    if (cVar5 != '\x02') {
      iVar22 = iVar22 + 2;
    }
    iVar8 = param_2[0xd];
    iVar6 = FUN_01aa2d9c(iVar8,iVar8 + iVar7 * 0x60);
    iVar19 = 10;
    uVar14 = iVar22 + iVar7 * 2 + iVar6;
    do {
      if (uVar14 >> 7 == 0) {
        local_25 = (byte)uVar14;
        FUN_01ac6cbc(param_3,&local_25,1);
        break;
      }
      local_28[2] = (byte)uVar14 | 0x80;
      FUN_01ac6cbc(param_3,local_28 + 2,1);
      iVar19 = iVar19 + -1;
      uVar14 = uVar14 >> 7;
    } while (iVar19 != 0);
    if ((uVar9 & 1) != 0) {
      FUN_01a9e050(1,param_2[9],param_3);
    }
    if (cVar4 != '\x02') {
      FUN_01a9ce70(2,cVar4,param_3);
    }
    if (cVar3 != '\x02') {
      FUN_01a9ce70(3,cVar3,param_3);
    }
    if (cVar2 != '\x02') {
      FUN_01a9ce70(5,cVar2,param_3);
    }
    if (iVar27 != 0) {
      FUN_01a9e050(6,param_2[0xb],param_3);
    }
    if (cVar5 != '\x02') {
      FUN_01a9ce70(10,cVar5,param_3);
    }
    if (iVar7 != 0) {
      iVar7 = iVar7 * 0x60;
      do {
        FUN_01a990b4(iVar8,param_3);
        iVar8 = iVar8 + 0x60;
        iVar7 = iVar7 + -0x60;
      } while (iVar7 != 0);
    }
  }
  if (iVar23 != 0) {
    FUN_01a9e050(9,param_2[7],param_3);
  }
  if (iVar18 != -0x80000000) {
    FUN_01a9e45c(10,param_2[0x1d],param_2[0x1e],param_3);
  }
  if (cVar1 == '\x02') {
    return;
  }
  FUN_01a9ce70(0x11,cVar1,param_3);
  return;
}

