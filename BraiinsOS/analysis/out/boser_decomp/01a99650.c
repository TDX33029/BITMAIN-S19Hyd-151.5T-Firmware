// FUN_01a99650 @ 01a99650 size=2812 calls_out=15 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x01a9a080) */
/* WARNING: Removing unreachable block (ram,0x01a9a0a8) */

void FUN_01a99650(char param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int *piVar19;
  int *piVar20;
  int iVar21;
  char cVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  uint *puVar29;
  int iVar30;
  int iVar31;
  int *piVar32;
  int *piVar33;
  undefined4 *puVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  byte local_25;
  
  local_25 = param_1 << 3 | 2;
  FUN_01ac6cbc(param_3,&local_25,1);
  iVar4 = *(int *)(param_2 + 0x60);
  iVar36 = 0;
  iVar5 = 0;
  if (iVar4 != -0x80000000) {
    iVar5 = *(uint *)(param_2 + 0x68) +
            ((LZCOUNT(*(uint *)(param_2 + 0x68) | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  iVar6 = *(int *)(param_2 + 8);
  iVar38 = *(int *)(param_2 + 4);
  iVar7 = FUN_01aa2f40(iVar38,iVar38 + iVar6 * 0x80);
  iVar8 = *(int *)(param_2 + 0x20);
  iVar35 = *(int *)(param_2 + 0x1c);
  iVar9 = FUN_01a9203c(iVar35,iVar35 + iVar8 * 0x7c);
  iVar10 = *(int *)(param_2 + 0x2c);
  iVar37 = *(int *)(param_2 + 0x28);
  iVar11 = FUN_01aa29bc(iVar37,iVar37 + iVar10 * 0x40);
  piVar12 = *(int **)(param_2 + 0x34);
  iVar23 = *(int *)(param_2 + 0x38);
  iVar13 = FUN_01aa289c();
  iVar14 = *(int *)(param_2 + 0x10);
  iVar24 = *(int *)(param_2 + 0x14);
  iVar15 = FUN_01aa2f40(iVar14,iVar14 + iVar24 * 0x80);
  iVar16 = *(int *)(param_2 + 0x6c);
  if (iVar16 != -0x80000000) {
    iVar36 = 0;
    if (*(char *)(param_2 + 0x78) != '\x02') {
      iVar36 = 2;
    }
    if (*(char *)(param_2 + 0x79) != '\x02') {
      iVar36 = iVar36 + 2;
    }
    iVar30 = *(int *)(param_2 + 0x74);
    if (*(char *)(param_2 + 0x7a) != '\x02') {
      iVar36 = iVar36 + 2;
    }
    if (*(char *)(param_2 + 0x7b) != '\x02') {
      iVar36 = iVar36 + 2;
    }
    iVar17 = FUN_01aa2d9c(*(int *)(param_2 + 0x70),*(int *)(param_2 + 0x70) + iVar30 * 0x60);
    uVar18 = iVar36 + iVar30 * 2 + iVar17;
    iVar36 = uVar18 + ((LZCOUNT(uVar18 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  piVar19 = *(int **)(param_2 + 0x40);
  iVar25 = *(int *)(param_2 + 0x44);
  iVar17 = FUN_01aa32d8();
  piVar20 = *(int **)(param_2 + 0x4c);
  iVar26 = *(int *)(param_2 + 0x50);
  iVar21 = FUN_01aa2cec();
  iVar30 = *(int *)(param_2 + 0x5c);
  iVar27 = 0;
  iVar39 = *(int *)(param_2 + 0x58);
  if (iVar30 != 0) {
    puVar29 = (uint *)(iVar39 + 8);
    iVar31 = iVar30;
    do {
      iVar31 = iVar31 + -1;
      iVar27 = *puVar29 + iVar27 + ((LZCOUNT(*puVar29 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
      puVar29 = puVar29 + 3;
    } while (iVar31 != 0);
  }
  iVar31 = 10;
  uVar18 = iVar6 + iVar5 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 + iVar23 + iVar13 + iVar24 +
           iVar15 + iVar36 + iVar25 + iVar17 + iVar26 + iVar21 + iVar30 + iVar27;
  do {
    local_25 = (byte)uVar18;
    if (uVar18 >> 7 == 0) {
      FUN_01ac6cbc(param_3,&local_25,1);
      break;
    }
    local_25 = local_25 | 0x80;
    FUN_01ac6cbc(param_3,&local_25,1);
    iVar31 = iVar31 + -1;
    uVar18 = uVar18 >> 7;
  } while (iVar31 != 0);
  if (iVar4 != -0x80000000) {
    FUN_01a9e45c(1,*(undefined4 *)(param_2 + 100),*(undefined4 *)(param_2 + 0x68),param_3);
  }
  if (iVar6 != 0) {
    iVar6 = iVar6 << 7;
    do {
      FUN_01a98240(2,iVar38,param_3);
      iVar38 = iVar38 + 0x80;
      iVar6 = iVar6 + -0x80;
    } while (iVar6 != 0);
  }
  if (iVar8 != 0) {
    iVar8 = iVar8 * 0x7c;
    do {
      FUN_01a99650(3,iVar35,param_3);
      iVar35 = iVar35 + 0x7c;
      iVar8 = iVar8 + -0x7c;
    } while (iVar8 != 0);
  }
  if (iVar10 != 0) {
    iVar10 = iVar10 << 6;
    do {
      FUN_01a9897c(4,iVar37,param_3);
      iVar37 = iVar37 + 0x40;
      iVar10 = iVar10 + -0x40;
    } while (iVar10 != 0);
  }
  if (iVar23 != 0) {
    piVar32 = piVar12;
    do {
      local_25 = 0x2a;
      FUN_01ac6cbc(param_3,&local_25,1);
      piVar33 = piVar32 + 7;
      iVar4 = 0;
      iVar5 = 0;
      if (*piVar32 == 1) {
        uVar18 = piVar32[1];
        uVar28 = LZCOUNT(uVar18 | 1) | 0x20;
        if ((int)uVar18 < 0) {
          uVar28 = LZCOUNT((int)uVar18 >> 0x1f);
        }
        iVar5 = ((uVar28 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
      }
      iVar36 = piVar32[2];
      if (iVar36 == 1) {
        uVar18 = piVar32[3];
        uVar28 = LZCOUNT(uVar18 | 1) | 0x20;
        if ((int)uVar18 < 0) {
          uVar28 = LZCOUNT((int)uVar18 >> 0x1f);
        }
        iVar4 = ((uVar28 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
      }
      iVar8 = piVar32[4];
      iVar6 = 0;
      if (iVar8 != -0x80000000) {
        iVar10 = piVar32[6];
        iVar6 = FUN_01aa2d9c(piVar32[5],piVar32[5] + iVar10 * 0x60);
        uVar18 = iVar6 + iVar10 * 2;
        iVar6 = uVar18 + ((LZCOUNT(uVar18 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      iVar10 = 10;
      uVar18 = iVar4 + iVar5 + iVar6;
      do {
        local_25 = (byte)uVar18;
        if (uVar18 >> 7 == 0) {
          FUN_01ac6cbc(param_3,&local_25,1);
          break;
        }
        local_25 = local_25 | 0x80;
        FUN_01ac6cbc(param_3,&local_25,1);
        iVar10 = iVar10 + -1;
        uVar18 = uVar18 >> 7;
      } while (iVar10 != 0);
      if (*piVar32 == 1) {
        FUN_01a9e050(1,piVar32[1],param_3);
      }
      if (iVar36 != 0) {
        FUN_01a9e050(2,piVar32[3],param_3);
      }
      if (iVar8 != -0x80000000) {
        local_25 = 0x1a;
        iVar6 = piVar32[5];
        iVar4 = piVar32[6];
        FUN_01ac6cbc(param_3,&local_25,1);
        iVar5 = FUN_01aa2d9c(iVar6,iVar6 + iVar4 * 0x60);
        iVar36 = 10;
        uVar18 = iVar5 + iVar4 * 2;
        do {
          local_25 = (byte)uVar18;
          if (uVar18 >> 7 == 0) {
            FUN_01ac6cbc(param_3,&local_25,1);
            break;
          }
          local_25 = local_25 | 0x80;
          FUN_01ac6cbc(param_3,&local_25,1);
          iVar36 = iVar36 + -1;
          uVar18 = uVar18 >> 7;
        } while (iVar36 != 0);
        if (iVar4 != 0) {
          iVar4 = iVar4 * 0x60;
          do {
            FUN_01a990b4(iVar6,param_3);
            iVar6 = iVar6 + 0x60;
            iVar4 = iVar4 + -0x60;
          } while (iVar4 != 0);
        }
      }
      piVar32 = piVar33;
    } while (piVar33 != piVar12 + iVar23 * 7);
  }
  if (iVar24 != 0) {
    iVar24 = iVar24 << 7;
    do {
      FUN_01a98240(6,iVar14,param_3);
      iVar14 = iVar14 + 0x80;
      iVar24 = iVar24 + -0x80;
    } while (iVar24 != 0);
  }
  if (iVar16 != -0x80000000) {
    local_25 = 0x3a;
    FUN_01ac6cbc(param_3,&local_25,1);
    cVar3 = *(char *)(param_2 + 0x78);
    cVar22 = *(char *)(param_2 + 0x79);
    cVar1 = *(char *)(param_2 + 0x7b);
    iVar4 = *(int *)(param_2 + 0x74);
    cVar2 = *(char *)(param_2 + 0x7a);
    iVar36 = *(int *)(param_2 + 0x70);
    iVar5 = 0;
    if (cVar3 != '\x02') {
      iVar5 = 2;
    }
    if (cVar22 != '\x02') {
      iVar5 = iVar5 + 2;
    }
    if (cVar2 != '\x02') {
      iVar5 = iVar5 + 2;
    }
    if (cVar1 != '\x02') {
      iVar5 = iVar5 + 2;
    }
    iVar6 = FUN_01aa2d9c(iVar36,iVar36 + iVar4 * 0x60);
    iVar8 = 10;
    uVar18 = iVar5 + iVar4 * 2 + iVar6;
    do {
      local_25 = (byte)uVar18;
      if (uVar18 >> 7 == 0) {
        FUN_01ac6cbc(param_3,&local_25,1);
        break;
      }
      local_25 = local_25 | 0x80;
      FUN_01ac6cbc(param_3,&local_25,1);
      iVar8 = iVar8 + -1;
      uVar18 = uVar18 >> 7;
    } while (iVar8 != 0);
    if (cVar3 != '\x02') {
      FUN_01a9ce70(1,cVar3,param_3);
    }
    if (cVar22 != '\x02') {
      FUN_01a9ce70(2,cVar22,param_3);
    }
    if (cVar2 != '\x02') {
      FUN_01a9ce70(3,cVar2,param_3);
    }
    if (cVar1 != '\x02') {
      FUN_01a9ce70(7,cVar1,param_3);
    }
    if (iVar4 != 0) {
      iVar4 = iVar4 * 0x60;
      do {
        FUN_01a990b4(iVar36,param_3);
        iVar36 = iVar36 + 0x60;
        iVar4 = iVar4 + -0x60;
      } while (iVar4 != 0);
    }
  }
  if (iVar25 != 0) {
    piVar12 = piVar19;
    do {
      local_25 = 0x42;
      FUN_01ac6cbc(param_3,&local_25,1);
      piVar32 = piVar12 + 6;
      iVar4 = 0;
      iVar5 = 0;
      if (*piVar12 != -0x80000000) {
        iVar5 = piVar12[2] + ((LZCOUNT(piVar12[2] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      iVar36 = piVar12[3];
      if (iVar36 != -0x80000000) {
        iVar6 = piVar12[5];
        iVar4 = FUN_01aa2d9c(piVar12[4],piVar12[4] + iVar6 * 0x60);
        uVar18 = iVar4 + iVar6 * 2;
        iVar4 = uVar18 + ((LZCOUNT(uVar18 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      iVar6 = 10;
      uVar18 = iVar4 + iVar5;
      do {
        local_25 = (byte)uVar18;
        if (uVar18 >> 7 == 0) {
          FUN_01ac6cbc(param_3,&local_25,1);
          break;
        }
        local_25 = local_25 | 0x80;
        FUN_01ac6cbc(param_3,&local_25,1);
        iVar6 = iVar6 + -1;
        uVar18 = uVar18 >> 7;
      } while (iVar6 != 0);
      if (*piVar12 != -0x80000000) {
        FUN_01a9e45c(1,piVar12[1],piVar12[2],param_3);
      }
      if (iVar36 != -0x80000000) {
        local_25 = 0x12;
        iVar36 = piVar12[4];
        iVar4 = piVar12[5];
        FUN_01ac6cbc(param_3,&local_25,1);
        iVar5 = FUN_01aa2d9c(iVar36,iVar36 + iVar4 * 0x60);
        iVar6 = 10;
        uVar18 = iVar5 + iVar4 * 2;
        do {
          local_25 = (byte)uVar18;
          if (uVar18 >> 7 == 0) {
            FUN_01ac6cbc(param_3,&local_25,1);
            break;
          }
          local_25 = local_25 | 0x80;
          FUN_01ac6cbc(param_3,&local_25,1);
          iVar6 = iVar6 + -1;
          uVar18 = uVar18 >> 7;
        } while (iVar6 != 0);
        if (iVar4 != 0) {
          iVar4 = iVar4 * 0x60;
          do {
            FUN_01a990b4(iVar36,param_3);
            iVar36 = iVar36 + 0x60;
            iVar4 = iVar4 + -0x60;
          } while (iVar4 != 0);
        }
      }
      piVar12 = piVar32;
    } while (piVar32 != piVar19 + iVar25 * 6);
  }
  if (iVar26 != 0) {
    piVar12 = piVar20;
    do {
      local_25 = 0x4a;
      FUN_01ac6cbc(param_3,&local_25,1);
      piVar19 = piVar12 + 4;
      cVar3 = '\0';
      cVar22 = '\0';
      if (*piVar12 == 1) {
        uVar18 = piVar12[1];
        uVar28 = LZCOUNT(uVar18 | 1) | 0x20;
        if ((int)uVar18 < 0) {
          uVar28 = LZCOUNT((int)uVar18 >> 0x1f);
        }
        cVar22 = (char)((uVar28 ^ 0x3f) * 9 + 0x49 >> 6) + '\x01';
      }
      iVar4 = piVar12[2];
      if (iVar4 == 1) {
        uVar18 = piVar12[3];
        uVar28 = LZCOUNT(uVar18 | 1) | 0x20;
        if ((int)uVar18 < 0) {
          uVar28 = LZCOUNT((int)uVar18 >> 0x1f);
        }
        cVar3 = (char)((uVar28 ^ 0x3f) * 9 + 0x49 >> 6) + '\x01';
      }
      local_25 = cVar3 + cVar22;
      FUN_01ac6cbc(param_3,&local_25,1);
      if (*piVar12 == 1) {
        FUN_01a9e050(1,piVar12[1],param_3);
      }
      if (iVar4 != 0) {
        FUN_01a9e050(2,piVar12[3],param_3);
      }
      piVar12 = piVar19;
    } while (piVar19 != piVar20 + iVar26 * 4);
  }
  if (iVar30 != 0) {
    iVar30 = iVar30 * 0xc;
    puVar34 = (undefined4 *)(iVar39 + 4);
    do {
      FUN_01a9e45c(10,*puVar34,puVar34[1],param_3);
      puVar34 = puVar34 + 3;
      iVar30 = iVar30 + -0xc;
    } while (iVar30 != 0);
  }
  return;
}

