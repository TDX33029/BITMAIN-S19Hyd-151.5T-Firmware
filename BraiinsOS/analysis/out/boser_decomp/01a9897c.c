// FUN_01a9897c @ 01a9897c size=1848 calls_out=8 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x01a98fe8) */
/* WARNING: Removing unreachable block (ram,0x01a99010) */

void FUN_01a9897c(char param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 *puVar19;
  int iVar20;
  int *piVar21;
  int iVar22;
  int iVar23;
  byte local_33;
  byte local_32;
  byte local_31 [3];
  byte local_2e [3];
  byte local_2b [3];
  byte local_28 [3];
  char local_25;
  
  local_33 = param_1 << 3 | 2;
  FUN_01ac6cbc(param_3,&local_33,1);
  iVar2 = *(int *)(param_2 + 0x24);
  iVar17 = 0;
  iVar22 = 0;
  if (iVar2 != -0x80000000) {
    iVar22 = *(uint *)(param_2 + 0x2c) +
             ((LZCOUNT(*(uint *)(param_2 + 0x2c) | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  iVar23 = *(int *)(param_2 + 8);
  piVar3 = *(int **)(param_2 + 4);
  iVar4 = FUN_01aa2700();
  iVar5 = *(int *)(param_2 + 0x30);
  if (iVar5 != -0x80000000) {
    iVar15 = *(int *)(param_2 + 0x38);
    iVar17 = 0;
    if (*(char *)(param_2 + 0x3c) != '\x02') {
      iVar17 = 2;
    }
    if (*(char *)(param_2 + 0x3d) != '\x02') {
      iVar17 = iVar17 + 2;
    }
    iVar6 = FUN_01aa2d9c(*(int *)(param_2 + 0x34),*(int *)(param_2 + 0x34) + iVar15 * 0x60);
    uVar7 = iVar17 + iVar15 * 2 + iVar6;
    iVar17 = uVar7 + ((LZCOUNT(uVar7 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  piVar8 = *(int **)(param_2 + 0x10);
  iVar10 = *(int *)(param_2 + 0x14);
  iVar6 = FUN_01aa2cec();
  iVar15 = *(int *)(param_2 + 0x20);
  iVar20 = *(int *)(param_2 + 0x1c);
  iVar11 = 0;
  if (iVar15 != 0) {
    puVar14 = (uint *)(iVar20 + 8);
    iVar16 = iVar15;
    do {
      iVar16 = iVar16 + -1;
      iVar11 = *puVar14 + iVar11 + ((LZCOUNT(*puVar14 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
      puVar14 = puVar14 + 3;
    } while (iVar16 != 0);
  }
  iVar16 = 10;
  uVar7 = iVar23 + iVar22 + iVar4 + iVar17 + iVar10 + iVar6 + iVar15 + iVar11;
  do {
    if (uVar7 >> 7 == 0) {
      local_31[0] = (byte)uVar7;
      FUN_01ac6cbc(param_3,local_31,1);
      break;
    }
    local_32 = (byte)uVar7 | 0x80;
    FUN_01ac6cbc(param_3,&local_32,1);
    iVar16 = iVar16 + -1;
    uVar7 = uVar7 >> 7;
  } while (iVar16 != 0);
  if (iVar2 != -0x80000000) {
    FUN_01a9e45c(1,*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c),param_3);
  }
  if (iVar23 != 0) {
    piVar21 = piVar3;
    do {
      local_31[1] = 0x12;
      FUN_01ac6cbc(param_3,local_31 + 1,1);
      iVar2 = piVar21[2];
      iVar22 = 0;
      iVar17 = 0;
      if (iVar2 != -0x80000000) {
        iVar17 = piVar21[4] + ((LZCOUNT(piVar21[4] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      if (*piVar21 == 1) {
        uVar7 = piVar21[1];
        uVar12 = LZCOUNT(uVar7 | 1) | 0x20;
        if ((int)uVar7 < 0) {
          uVar12 = LZCOUNT((int)uVar7 >> 0x1f);
        }
        iVar22 = ((uVar12 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
      }
      iVar4 = piVar21[5];
      iVar6 = 0;
      if (iVar4 != -0x80000000) {
        iVar18 = piVar21[7];
        iVar11 = piVar21[8];
        iVar16 = FUN_01aa2d9c(piVar21[6],piVar21[6] + iVar18 * 0x60);
        iVar6 = iVar18 * 2 + 2;
        if ((char)iVar11 == '\x02') {
          iVar6 = iVar18 << 1;
        }
        iVar6 = iVar6 + iVar16 + ((LZCOUNT(iVar6 + iVar16 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      piVar13 = piVar21 + 9;
      iVar11 = 10;
      uVar7 = iVar22 + iVar17 + iVar6;
      do {
        if (uVar7 >> 7 == 0) {
          local_2e[0] = (byte)uVar7;
          FUN_01ac6cbc(param_3,local_2e,1);
          break;
        }
        local_31[2] = (byte)uVar7 | 0x80;
        FUN_01ac6cbc(param_3,local_31 + 2,1);
        iVar11 = iVar11 + -1;
        uVar7 = uVar7 >> 7;
      } while (iVar11 != 0);
      if (iVar2 != -0x80000000) {
        FUN_01a9e45c(1,piVar21[3],piVar21[4],param_3);
      }
      if (*piVar21 == 1) {
        FUN_01a9e050(2,piVar21[1],param_3);
      }
      if (iVar4 != -0x80000000) {
        local_2e[1] = 0x1a;
        FUN_01ac6cbc(param_3,local_2e + 1,1);
        iVar17 = piVar21[7];
        iVar4 = piVar21[6];
        cVar9 = (char)piVar21[8];
        iVar22 = FUN_01aa2d9c(iVar4,iVar4 + iVar17 * 0x60);
        iVar2 = iVar17 * 2 + 2;
        if (cVar9 == '\x02') {
          iVar2 = iVar17 << 1;
        }
        iVar6 = 10;
        uVar7 = iVar2 + iVar22;
        do {
          if (uVar7 >> 7 == 0) {
            local_2b[0] = (byte)uVar7;
            FUN_01ac6cbc(param_3,local_2b,1);
            break;
          }
          local_2e[2] = (byte)uVar7 | 0x80;
          FUN_01ac6cbc(param_3,local_2e + 2,1);
          iVar6 = iVar6 + -1;
          uVar7 = uVar7 >> 7;
        } while (iVar6 != 0);
        if (cVar9 != '\x02') {
          FUN_01a9ce70(1,cVar9,param_3);
        }
        if (iVar17 != 0) {
          iVar17 = iVar17 * 0x60;
          do {
            FUN_01a990b4(iVar4,param_3);
            iVar4 = iVar4 + 0x60;
            iVar17 = iVar17 + -0x60;
          } while (iVar17 != 0);
        }
      }
      piVar21 = piVar13;
    } while (piVar13 != piVar3 + iVar23 * 9);
  }
  if (iVar5 != -0x80000000) {
    local_2b[1] = 0x1a;
    FUN_01ac6cbc(param_3,local_2b + 1,1);
    cVar9 = *(char *)(param_2 + 0x3c);
    cVar1 = *(char *)(param_2 + 0x3d);
    iVar22 = *(int *)(param_2 + 0x34);
    iVar2 = *(int *)(param_2 + 0x38);
    iVar17 = 0;
    if (cVar9 != '\x02') {
      iVar17 = 2;
    }
    if (cVar1 != '\x02') {
      iVar17 = iVar17 + 2;
    }
    iVar4 = FUN_01aa2d9c(iVar22,iVar22 + iVar2 * 0x60);
    iVar5 = 10;
    uVar7 = iVar17 + iVar2 * 2 + iVar4;
    do {
      if (uVar7 >> 7 == 0) {
        local_28[0] = (byte)uVar7;
        FUN_01ac6cbc(param_3,local_28,1);
        break;
      }
      local_2b[2] = (byte)uVar7 | 0x80;
      FUN_01ac6cbc(param_3,local_2b + 2,1);
      iVar5 = iVar5 + -1;
      uVar7 = uVar7 >> 7;
    } while (iVar5 != 0);
    if (cVar9 != '\x02') {
      FUN_01a9ce70(2,cVar9,param_3);
    }
    if (cVar1 != '\x02') {
      FUN_01a9ce70(3,cVar1,param_3);
    }
    if (iVar2 != 0) {
      iVar2 = iVar2 * 0x60;
      do {
        FUN_01a990b4(iVar22,param_3);
        iVar22 = iVar22 + 0x60;
        iVar2 = iVar2 + -0x60;
      } while (iVar2 != 0);
    }
  }
  if (iVar10 != 0) {
    piVar3 = piVar8;
    do {
      local_28[1] = 0x22;
      FUN_01ac6cbc(param_3,local_28 + 1,1);
      piVar21 = piVar3 + 4;
      local_25 = '\0';
      cVar9 = '\0';
      if (*piVar3 == 1) {
        uVar7 = piVar3[1];
        uVar12 = LZCOUNT(uVar7 | 1) | 0x20;
        if ((int)uVar7 < 0) {
          uVar12 = LZCOUNT((int)uVar7 >> 0x1f);
        }
        cVar9 = (char)((uVar12 ^ 0x3f) * 9 + 0x49 >> 6) + '\x01';
      }
      iVar2 = piVar3[2];
      if (iVar2 == 1) {
        uVar7 = piVar3[3];
        uVar12 = LZCOUNT(uVar7 | 1) | 0x20;
        if ((int)uVar7 < 0) {
          uVar12 = LZCOUNT((int)uVar7 >> 0x1f);
        }
        local_25 = (char)((uVar12 ^ 0x3f) * 9 + 0x49 >> 6) + '\x01';
      }
      local_25 = local_25 + cVar9;
      FUN_01ac6cbc(param_3,&local_25,1);
      if (*piVar3 == 1) {
        FUN_01a9e050(1,piVar3[1],param_3);
      }
      if (iVar2 != 0) {
        FUN_01a9e050(2,piVar3[3],param_3);
      }
      piVar3 = piVar21;
    } while (piVar21 != piVar8 + iVar10 * 4);
  }
  if (iVar15 != 0) {
    iVar15 = iVar15 * 0xc;
    puVar19 = (undefined4 *)(iVar20 + 4);
    do {
      FUN_01a9e45c(5,*puVar19,puVar19[1],param_3);
      puVar19 = puVar19 + 3;
      iVar15 = iVar15 + -0xc;
    } while (iVar15 != 0);
  }
  return;
}

