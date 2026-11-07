// FUN_01a990b4 @ 01a990b4 size=1436 calls_out=5 calls_in=3
// strings: 

void FUN_01a990b4(uint *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong local_38;
  
  uVar8 = 0x1f3a;
  for (iVar12 = 1; iVar12 != 0; iVar12 = iVar12 + -1) {
    local_38 = CONCAT71(local_38._1_7_,(char)uVar8) | 0x80;
    FUN_01ac6cbc(param_2,&local_38,1);
    uVar8 = uVar8 >> 7;
  }
  local_38 = CONCAT71(local_38._1_7_,0x3e);
  FUN_01ac6cbc(param_2,&local_38,1);
  uVar16 = param_1[0xe];
  uVar14 = param_1[0xd];
  iVar12 = FUN_01aa2834(uVar14);
  uVar8 = param_1[0xf];
  iVar18 = 0;
  iVar17 = 0;
  if (uVar8 != 0x80000000) {
    iVar17 = param_1[0x11] + ((LZCOUNT(param_1[0x11] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  uVar3 = *param_1;
  if ((uVar3 & 1) != 0) {
    uVar5 = LZCOUNT(param_1[2] | 1) | 0x20;
    if (param_1[3] != 0) {
      uVar5 = LZCOUNT(param_1[3]);
    }
    iVar18 = ((uVar5 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
  }
  uVar5 = param_1[4];
  iVar7 = 0;
  iVar9 = 0;
  if ((uVar5 & 1) != 0) {
    uVar11 = LZCOUNT(param_1[6] | 1) | 0x20;
    if (param_1[7] != 0) {
      uVar11 = LZCOUNT(param_1[7]);
    }
    iVar9 = ((uVar11 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
  }
  uVar11 = param_1[0x12];
  if (uVar11 != 0x80000000) {
    iVar7 = param_1[0x14] + ((LZCOUNT(param_1[0x14] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  uVar6 = param_1[8];
  uVar4 = param_1[0x15];
  iVar13 = 0;
  if (uVar4 != 0x80000000) {
    iVar13 = param_1[0x17] + ((LZCOUNT(param_1[0x17] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  iVar9 = iVar12 + uVar16 + iVar17 + iVar18 + iVar9;
  if ((uVar6 & 1) != 0) {
    iVar9 = iVar9 + 9;
  }
  iVar12 = 10;
  uVar1 = iVar9 + iVar7 + iVar13;
  do {
    if (uVar1 >> 7 == 0) {
      local_38 = CONCAT71(local_38._1_7_,(char)uVar1);
      FUN_01ac6cbc(param_2,&local_38,1);
      break;
    }
    local_38 = CONCAT71(local_38._1_7_,(char)uVar1) | 0x80;
    FUN_01ac6cbc(param_2,&local_38,1);
    iVar12 = iVar12 + -1;
    uVar1 = uVar1 >> 7;
  } while (iVar12 != 0);
  if (uVar16 != 0) {
    uVar1 = uVar14;
    do {
      local_38 = CONCAT71(local_38._1_7_,0x12);
      FUN_01ac6cbc(param_2,&local_38,1);
      uVar10 = *(uint *)(uVar1 + 8);
      uVar15 = uVar1 + 0x10;
      iVar12 = 10;
      uVar2 = uVar10 + ((LZCOUNT(uVar10 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 3;
      do {
        if (uVar2 >> 7 == 0) {
          local_38 = CONCAT71(local_38._1_7_,(char)uVar2);
          FUN_01ac6cbc(param_2,&local_38,1);
          break;
        }
        local_38 = CONCAT71(local_38._1_7_,(char)uVar2) | 0x80;
        FUN_01ac6cbc(param_2,&local_38,1);
        iVar12 = iVar12 + -1;
        uVar2 = uVar2 >> 7;
      } while (iVar12 != 0);
      FUN_01a9e45c(1,*(undefined4 *)(uVar1 + 4),uVar10,param_2);
      FUN_01a9ce70(2,*(undefined1 *)(uVar1 + 0xc),param_2);
      uVar1 = uVar15;
    } while (uVar15 != uVar14 + uVar16 * 0x10);
  }
  if (uVar8 != 0x80000000) {
    FUN_01a9e45c(3,param_1[0x10],param_1[0x11],param_2);
  }
  if ((uVar3 & 1) != 0) {
    uVar14 = param_1[2];
    uVar8 = param_1[3];
    local_38 = CONCAT71(local_38._1_7_,0x20);
    FUN_01ac6cbc(param_2,&local_38,1);
    iVar12 = 10;
    do {
      uVar16 = uVar14 >> 7 | uVar8 << 0x19;
      if (uVar16 == 0 && uVar8 >> 7 == 0) {
        local_38 = CONCAT71(local_38._1_7_,(char)uVar14);
        FUN_01ac6cbc(param_2,&local_38,1);
        break;
      }
      local_38 = CONCAT71(local_38._1_7_,(char)uVar14) | 0x80;
      uVar8 = uVar8 >> 7;
      FUN_01ac6cbc(param_2,&local_38,1);
      iVar12 = iVar12 + -1;
      uVar14 = uVar16;
    } while (iVar12 != 0);
  }
  if ((uVar5 & 1) != 0) {
    uVar14 = param_1[6];
    uVar8 = param_1[7];
    local_38 = CONCAT71(local_38._1_7_,0x28);
    FUN_01ac6cbc(param_2,&local_38,1);
    iVar12 = 10;
    do {
      uVar16 = uVar14 >> 7 | uVar8 << 0x19;
      if (uVar16 == 0 && uVar8 >> 7 == 0) {
        local_38 = CONCAT71(local_38._1_7_,(char)uVar14);
        FUN_01ac6cbc(param_2,&local_38,1);
        break;
      }
      local_38 = CONCAT71(local_38._1_7_,(char)uVar14) | 0x80;
      uVar8 = uVar8 >> 7;
      FUN_01ac6cbc(param_2,&local_38,1);
      iVar12 = iVar12 + -1;
      uVar14 = uVar16;
    } while (iVar12 != 0);
  }
  if ((uVar6 & 1) != 0) {
    local_38 = CONCAT71(local_38._1_7_,0x31);
    uVar19 = *(ulonglong *)(param_1 + 10);
    FUN_01ac6cbc(param_2,&local_38,1);
    local_38 = uVar19;
    FUN_01ac6cbc(param_2,&local_38,8);
  }
  if (uVar11 != 0x80000000) {
    local_38 = CONCAT71(local_38._1_7_,0x3a);
    uVar14 = param_1[0x13];
    uVar16 = param_1[0x14];
    FUN_01ac6cbc(param_2,&local_38,1);
    iVar12 = 10;
    uVar8 = uVar16;
    do {
      if (uVar8 >> 7 == 0) {
        local_38 = CONCAT71(local_38._1_7_,(char)uVar8);
        FUN_01ac6cbc(param_2,&local_38,1);
        break;
      }
      local_38 = CONCAT71(local_38._1_7_,(char)uVar8) | 0x80;
      FUN_01ac6cbc(param_2,&local_38,1);
      iVar12 = iVar12 + -1;
      uVar8 = uVar8 >> 7;
    } while (iVar12 != 0);
    if ((uint)(*param_2 - param_2[2]) < uVar16) {
      FUN_0132b898(param_2,param_2[2],uVar16,1,1);
    }
    while (uVar16 != 0) {
      FUN_01ac6cbc(param_2,uVar14,uVar16);
      uVar14 = uVar14 + uVar16;
      uVar16 = 0;
    }
  }
  if (uVar4 == 0x80000000) {
    return;
  }
  FUN_01a9e45c(8,param_1[0x16],param_1[0x17],param_2);
  return;
}

