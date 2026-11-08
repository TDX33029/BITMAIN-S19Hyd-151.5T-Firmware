// FUN_00f01a58 @ 00f01a58 size=668 calls_out=5 calls_in=0
// strings: 

void FUN_00f01a58(char param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  byte local_43;
  byte local_42;
  byte local_41;
  
  local_43 = param_1 << 3 | 2;
  FUN_01284394(param_3,&local_43,1);
  uVar1 = param_2[0x16];
  iVar3 = 0;
  iVar14 = 0;
  if (uVar1 == 1) {
    iVar14 = ((LZCOUNT(param_2[0x17] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  uVar2 = *param_2;
  uVar10 = param_2[4];
  uVar15 = param_2[0xc];
  uVar5 = param_2[0x10];
  uVar12 = param_2[8];
  dVar16 = *(double *)(param_2 + 0xe);
  uVar6 = param_2[0x11];
  dVar17 = *(double *)(param_2 + 10);
  dVar18 = *(double *)(param_2 + 6);
  if ((uVar5 ^ 4) != 0 || uVar6 != 0) {
    if ((uVar5 & 3) == 2) {
      iVar3 = 4;
    }
    else {
      iVar3 = 2;
      if (uVar5 != 3) {
        iVar3 = 0;
        if (param_2[0x14] == 1) {
          uVar4 = param_2[0x15];
          uVar7 = LZCOUNT(uVar4 | 1) | 0x20;
          if ((int)uVar4 < 0) {
            uVar7 = LZCOUNT((int)uVar4 >> 0x1f);
          }
          iVar3 = ((uVar7 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
        }
        iVar8 = 4;
        if ((uVar5 & 1) != 0) {
          iVar8 = 0xd;
        }
        iVar3 = iVar3 + iVar8;
      }
    }
  }
  iVar8 = 0;
  if ((uVar2 & 1) != 0) {
    iVar8 = 9;
  }
  iVar11 = 2;
  iVar9 = 2;
  iVar13 = 10;
  if (dVar18 != 0.0) {
    iVar11 = 0xb;
  }
  if ((uVar10 & 1) != 0) {
    iVar8 = iVar8 + iVar11;
  }
  iVar11 = 2;
  if (dVar17 != 0.0) {
    iVar11 = 0xb;
  }
  if ((uVar12 & 1) != 0) {
    iVar8 = iVar8 + iVar11;
  }
  if (dVar16 != 0.0) {
    iVar9 = 0xb;
  }
  if ((uVar15 & 1) != 0) {
    iVar8 = iVar8 + iVar9;
  }
  uVar4 = iVar8 + iVar14 + iVar3;
  do {
    if (uVar4 >> 7 == 0) {
      local_41 = (byte)uVar4;
      FUN_01284394(param_3,&local_41,1);
      break;
    }
    local_42 = (byte)uVar4 | 0x80;
    FUN_01284394(param_3,&local_42,1);
    iVar13 = iVar13 + -1;
    uVar4 = uVar4 >> 7;
  } while (iVar13 != 0);
  if ((uVar2 & 1) != 0) {
    FUN_01016b28((int)*(undefined8 *)(param_2 + 2),1,param_3);
  }
  if ((uVar10 & 1) != 0) {
    FUN_00efe06c(SUB84(dVar18,0),2,param_3);
  }
  if ((uVar12 & 1) != 0) {
    FUN_00efe06c(SUB84(dVar17,0),3,param_3);
  }
  if ((uVar15 & 1) != 0) {
    FUN_00efe06c(SUB84(dVar16,0),4,param_3);
  }
  if (uVar1 != 0) {
    FUN_00efc9fc(5,param_2[0x17],param_3);
  }
  if ((uVar5 ^ 4) == 0 && uVar6 == 0) {
    return;
  }
  FUN_00f01e44(6,param_2 + 0x10,param_3);
  return;
}

