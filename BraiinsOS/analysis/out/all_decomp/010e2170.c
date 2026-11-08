// FUN_010e2170 @ 010e2170 size=9320 calls_out=5 calls_in=1
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_010e2170(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  char cVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  char cVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  char cVar32;
  int iVar33;
  byte bVar34;
  byte bVar35;
  char cVar36;
  undefined4 *puVar37;
  int iVar38;
  int iVar39;
  undefined4 uVar40;
  uint uVar41;
  uint uVar42;
  int iVar43;
  uint *puVar44;
  int iVar45;
  char cVar46;
  int iVar47;
  int iVar48;
  undefined4 local_2c;
  uint local_28;
  
  iVar2 = param_2[1];
  if (param_2[2] == iVar2) {
    FUN_00f5f538(param_2,1);
    iVar2 = param_2[1];
    iVar23 = param_2[2];
    *(undefined1 *)(*param_2 + iVar2) = 10;
    if (iVar23 == iVar2) goto LAB_010e4550;
  }
  else {
    *(undefined1 *)(*param_2 + iVar2) = 10;
  }
  iVar17 = param_1[0x1c];
  iVar2 = iVar2 + 1;
  iVar24 = 0;
  iVar23 = 0;
  param_2[1] = iVar2;
  if (iVar17 != -0x80000000) {
    iVar23 = param_1[0x1e] + ((LZCOUNT(param_1[0x1e] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  iVar3 = param_1[0x1f];
  if (iVar3 != -0x80000000) {
    iVar24 = param_1[0x21] + ((LZCOUNT(param_1[0x21] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  iVar4 = param_1[0x22];
  iVar28 = 0;
  iVar5 = 0;
  if (iVar4 != -0x80000000) {
    iVar5 = param_1[0x24] + ((LZCOUNT(param_1[0x24] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  iVar6 = param_1[0x25];
  if (iVar6 != -0x80000000) {
    iVar28 = param_1[0x27] + ((LZCOUNT(param_1[0x27] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  iVar7 = param_1[0x28];
  iVar38 = 0;
  iVar8 = 0;
  if (iVar7 != -0x80000000) {
    iVar8 = param_1[0x2a] + ((LZCOUNT(param_1[0x2a] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  iVar9 = param_1[0x2b];
  if (iVar9 != -0x80000000) {
    iVar38 = param_1[0x2d] + ((LZCOUNT(param_1[0x2d] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  iVar43 = param_1[0x1b];
  piVar10 = (int *)param_1[0x1a];
  iVar11 = FUN_010e4fdc(piVar10,piVar10 + iVar43 * 0x1d);
  iVar39 = 0;
  iVar12 = param_1[0x2e];
  iVar13 = 0;
  if (iVar12 != -0x80000000) {
    iVar13 = param_1[0x30] + ((LZCOUNT(param_1[0x30] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  if (param_1[8] != 2) {
    iVar18 = 0;
    iVar25 = 0;
    if ((param_1[8] & 1U) != 0) {
      iVar25 = ((LZCOUNT(param_1[9] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    if (param_1[10] == 1) {
      iVar18 = ((LZCOUNT(param_1[0xb] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    iVar14 = 0;
    iVar29 = 0;
    if (param_1[0xc] == 1) {
      iVar29 = ((LZCOUNT(param_1[0xd] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    if (param_1[0xe] == 1) {
      iVar14 = ((LZCOUNT(param_1[0xf] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 2;
    }
    uVar42 = (uint)*(byte *)(param_1 + 0x12);
    iVar39 = 0;
    if (param_1[0x10] == 1) {
      iVar39 = ((LZCOUNT(param_1[0x11] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 2;
    }
    if (uVar42 != 2) {
      uVar42 = 4;
    }
    iVar39 = iVar25 + uVar42 + iVar18 + iVar29 + iVar14 + iVar39;
  }
  iVar25 = 0;
  iVar18 = 0;
  if (*param_1 == 1) {
    iVar18 = ((LZCOUNT(param_1[1] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  if (param_1[0x13] != 2) {
    iVar14 = 2;
    if ((param_1[0x13] & 1U) != 0) {
      iVar14 = ((LZCOUNT(param_1[0x14] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 3;
    }
    iVar25 = 0;
    iVar29 = 0;
    if (param_1[0x15] == 1) {
      iVar29 = ((LZCOUNT(param_1[0x16] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    if (param_1[0x17] == 1) {
      iVar25 = ((LZCOUNT(param_1[0x18] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    iVar25 = iVar29 + iVar14 + iVar25;
  }
  iVar29 = 0;
  iVar14 = 0;
  if (param_1[0x31] != -0x80000000) {
    iVar14 = param_1[0x33] + ((LZCOUNT(param_1[0x33] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  if (param_1[0x34] != -0x80000000) {
    iVar29 = param_1[0x36] + ((LZCOUNT(param_1[0x36] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  iVar19 = 0;
  iVar26 = 0;
  if (param_1[0x37] != -0x80000000) {
    iVar26 = param_1[0x39] + ((LZCOUNT(param_1[0x39] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  if (param_1[0x3a] != -0x80000000) {
    iVar19 = param_1[0x3c] + ((LZCOUNT(param_1[0x3c] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  iVar45 = 0;
  iVar47 = 0;
  if (param_1[0x3d] != -0x80000000) {
    iVar47 = param_1[0x3f] + ((LZCOUNT(param_1[0x3f] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 2;
  }
  if (param_1[0x40] != -0x80000000) {
    iVar45 = param_1[0x42] + ((LZCOUNT(param_1[0x42] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 2;
  }
  iVar15 = 0;
  iVar33 = 0;
  if (param_1[0x43] != -0x80000000) {
    iVar33 = param_1[0x45] + ((LZCOUNT(param_1[0x45] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 2;
  }
  if (param_1[2] == 1) {
    iVar15 = ((LZCOUNT(param_1[3] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 2;
  }
  iVar48 = 0;
  iVar30 = 0;
  if (param_1[4] == 1) {
    iVar30 = ((LZCOUNT(param_1[5] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 2;
  }
  if (param_1[6] == 1) {
    iVar48 = ((LZCOUNT(param_1[7] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 2;
  }
  uVar42 = iVar24 + iVar23 + iVar5 + iVar28 + iVar8 + iVar38 + iVar43 + iVar11 + iVar13 + iVar39 +
           iVar18 + iVar25 + iVar14 + iVar29 + iVar26 + iVar19 + iVar47 + iVar45 + iVar33 + iVar15 +
           iVar30 + iVar48;
  if ((char)param_1[0x46] != '\x02') {
    uVar42 = uVar42 + 3;
  }
  uVar31 = uVar42;
  if (uVar42 < 0x80) {
LAB_010e2914:
    bVar34 = (byte)uVar31;
    bVar35 = bVar34;
    if (param_2[2] == iVar2) goto LAB_010e2924;
LAB_010e29ac:
    *(byte *)(*param_2 + iVar2) = bVar35;
  }
  else {
    bVar35 = (byte)uVar42 | 0x80;
    if (param_2[2] == iVar2) {
      FUN_00f5f538(param_2,1);
      iVar2 = param_2[1];
      iVar23 = param_2[2];
      *(byte *)(*param_2 + iVar2) = bVar35;
      if (iVar23 == iVar2) goto LAB_010e3f38;
    }
    else {
      *(byte *)(*param_2 + iVar2) = bVar35;
    }
    iVar2 = iVar2 + 1;
    uVar31 = uVar42 >> 7;
    param_2[1] = iVar2;
    if (uVar42 < 0x4000) goto LAB_010e2914;
    bVar35 = (byte)uVar31 | 0x80;
    if (param_2[2] == iVar2) {
      FUN_00f5f538(param_2,1);
      iVar2 = param_2[1];
      iVar23 = param_2[2];
      *(byte *)(*param_2 + iVar2) = bVar35;
      if (iVar23 == iVar2) goto LAB_010e3f38;
    }
    else {
      *(byte *)(*param_2 + iVar2) = bVar35;
    }
    iVar2 = iVar2 + 1;
    uVar31 = uVar42 >> 0xe;
    param_2[1] = iVar2;
    if (uVar42 < 0x200000) goto LAB_010e2914;
    bVar35 = (byte)uVar31 | 0x80;
    if (param_2[2] == iVar2) {
      FUN_00f5f538(param_2,1);
      iVar2 = param_2[1];
      iVar23 = param_2[2];
      *(byte *)(*param_2 + iVar2) = bVar35;
      if (iVar23 == iVar2) goto LAB_010e3f38;
    }
    else {
      *(byte *)(*param_2 + iVar2) = bVar35;
    }
    iVar2 = iVar2 + 1;
    uVar31 = uVar42 >> 0x15;
    param_2[1] = iVar2;
    if (uVar42 < 0x10000000) goto LAB_010e2914;
    bVar35 = (byte)uVar31 | 0x80;
    if (param_2[2] == iVar2) {
      FUN_00f5f538(param_2,1);
      iVar2 = param_2[1];
      iVar23 = param_2[2];
      *(byte *)(*param_2 + iVar2) = bVar35;
      if (iVar23 == iVar2) goto LAB_010e3f38;
    }
    else {
      *(byte *)(*param_2 + iVar2) = bVar35;
    }
    iVar2 = iVar2 + 1;
    bVar34 = (byte)(uVar42 >> 0x18);
    bVar35 = bVar34 >> 4;
    bVar34 = bVar34 >> 4;
    param_2[1] = iVar2;
    if (param_2[2] != iVar2) goto LAB_010e29ac;
LAB_010e2924:
    FUN_00f5f538(param_2,1);
    iVar2 = param_2[1];
    iVar23 = param_2[2];
    *(byte *)(*param_2 + iVar2) = bVar34;
    if (iVar23 == iVar2) goto LAB_010e4358;
  }
  param_2[1] = iVar2 + 1;
  if (iVar17 != -0x80000000) {
    FUN_010e6550(1,param_1[0x1d],param_1[0x1e],param_2);
  }
  if (iVar3 != -0x80000000) {
    FUN_010e6550(2,param_1[0x20],param_1[0x21],param_2);
  }
  if (iVar4 != -0x80000000) {
    FUN_010e6550(3,param_1[0x23],param_1[0x24],param_2);
  }
  if (iVar6 != -0x80000000) {
    FUN_010e6550(4,param_1[0x26],param_1[0x27],param_2);
  }
  if (iVar7 != -0x80000000) {
    FUN_010e6550(5,param_1[0x29],param_1[0x2a],param_2);
  }
  if (iVar9 != -0x80000000) {
    FUN_010e6550(6,param_1[0x2c],param_1[0x2d],param_2);
  }
  if (iVar43 != 0) {
    piVar16 = piVar10 + iVar43 * 0x1d;
    do {
      iVar2 = param_2[1];
      if (param_2[2] == iVar2) {
        FUN_00f5f538(param_2,1);
        iVar2 = param_2[1];
        iVar23 = param_2[2];
        *(undefined1 *)(*param_2 + iVar2) = 0x3a;
        if (iVar23 == iVar2) goto LAB_010e38d0;
      }
      else {
        *(undefined1 *)(*param_2 + iVar2) = 0x3a;
      }
      iVar17 = *piVar10;
      iVar2 = iVar2 + 1;
      iVar24 = 0;
      iVar23 = 0;
      param_2[1] = iVar2;
      if (iVar17 == 1) {
        iVar23 = ((LZCOUNT(piVar10[1] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      iVar17 = piVar10[4];
      iVar3 = piVar10[0xb];
      if (iVar3 != -0x80000000) {
        iVar24 = piVar10[0xd] + ((LZCOUNT(piVar10[0xd] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      iVar5 = piVar10[0xe];
      iVar28 = 0;
      iVar4 = 0;
      if (iVar5 != -0x80000000) {
        iVar4 = piVar10[0x10] + ((LZCOUNT(piVar10[0x10] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      iVar6 = piVar10[7];
      puVar44 = (uint *)piVar10[6];
      if (iVar6 != 0) {
        puVar20 = puVar44;
        iVar7 = iVar6;
        do {
          iVar7 = iVar7 + -1;
          iVar28 = iVar28 + ((LZCOUNT(*puVar20 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
          puVar20 = puVar20 + 1;
        } while (iVar7 != 0);
      }
      iVar7 = piVar10[0x11];
      iVar38 = 0;
      iVar8 = 0;
      if (iVar7 != -0x80000000) {
        iVar8 = piVar10[0x13] + ((LZCOUNT(piVar10[0x13] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      iVar9 = piVar10[10];
      iVar11 = piVar10[0x14];
      if (iVar11 != -0x80000000) {
        iVar38 = piVar10[0x16] + ((LZCOUNT(piVar10[0x16] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      iVar13 = piVar10[0x17];
      iVar39 = 0;
      iVar12 = 0;
      if (iVar13 != -0x80000000) {
        iVar12 = piVar10[0x19] + ((LZCOUNT(piVar10[0x19] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      iVar43 = piVar10[0x1a];
      if (iVar43 != -0x80000000) {
        iVar39 = piVar10[0x1c];
        if (iVar39 == 0) {
          iVar18 = 0;
        }
        else {
          iVar18 = 0;
          iVar25 = iVar39;
          puVar20 = (uint *)(piVar10[0x1b] + 0x14);
          do {
            iVar25 = iVar25 + -1;
            uVar42 = puVar20[-3] + *puVar20 + ((LZCOUNT(puVar20[-3] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) +
                     ((LZCOUNT(*puVar20 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 2;
            iVar18 = uVar42 + iVar18 + ((LZCOUNT(uVar42 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
            puVar20 = puVar20 + 6;
          } while (iVar25 != 0);
        }
        iVar39 = iVar18 + iVar39 + ((LZCOUNT(iVar18 + iVar39 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      uVar42 = iVar24 + iVar23 + iVar4 + iVar6 + iVar28 + iVar8 + (iVar9 + iVar17) * 5 + iVar38 +
               iVar12 + iVar39;
      if (uVar42 < 0x80) {
        uVar31 = uVar42;
        if (param_2[2] != iVar2) goto LAB_010e2e1c;
        goto LAB_010e2d40;
      }
      bVar35 = (byte)uVar42 | 0x80;
      if (param_2[2] == iVar2) {
        FUN_00f5f538(param_2,1);
        iVar2 = param_2[1];
        iVar23 = param_2[2];
        *(byte *)(*param_2 + iVar2) = bVar35;
        if (iVar23 == iVar2) goto LAB_010e38d0;
      }
      else {
        *(byte *)(*param_2 + iVar2) = bVar35;
      }
      iVar2 = iVar2 + 1;
      uVar31 = uVar42 >> 7;
      param_2[1] = iVar2;
      if (uVar42 < 0x4000) {
LAB_010e2e0c:
        if (param_2[2] == iVar2) goto LAB_010e2d40;
LAB_010e2e1c:
        *(char *)(*param_2 + iVar2) = (char)uVar31;
      }
      else {
        bVar35 = (byte)uVar31 | 0x80;
        if (param_2[2] == iVar2) {
          FUN_00f5f538(param_2,1);
          iVar2 = param_2[1];
          iVar23 = param_2[2];
          *(byte *)(*param_2 + iVar2) = bVar35;
          if (iVar23 == iVar2) goto LAB_010e38d0;
        }
        else {
          *(byte *)(*param_2 + iVar2) = bVar35;
        }
        iVar2 = iVar2 + 1;
        uVar31 = uVar42 >> 0xe;
        param_2[1] = iVar2;
        if (uVar42 < 0x200000) goto LAB_010e2e0c;
        bVar35 = (byte)uVar31 | 0x80;
        if (param_2[2] == iVar2) {
          FUN_00f5f538(param_2,1);
          iVar2 = param_2[1];
          iVar23 = param_2[2];
          *(byte *)(*param_2 + iVar2) = bVar35;
          if (iVar23 == iVar2) goto LAB_010e38d0;
        }
        else {
          *(byte *)(*param_2 + iVar2) = bVar35;
        }
        iVar2 = iVar2 + 1;
        uVar31 = uVar42 >> 0x15;
        param_2[1] = iVar2;
        if (uVar42 < 0x10000000) {
          if (param_2[2] == iVar2) goto LAB_010e2d40;
          goto LAB_010e2e1c;
        }
        bVar35 = (byte)uVar31 | 0x80;
        if (param_2[2] == iVar2) {
          FUN_00f5f538(param_2,1);
          iVar2 = param_2[1];
          iVar23 = param_2[2];
          *(byte *)(*param_2 + iVar2) = bVar35;
          if (iVar23 == iVar2) goto LAB_010e38d0;
        }
        else {
          *(byte *)(*param_2 + iVar2) = bVar35;
        }
        iVar2 = iVar2 + 1;
        uVar31 = uVar42 >> 0x1c;
        param_2[1] = iVar2;
        if (param_2[2] != iVar2) goto LAB_010e2e1c;
LAB_010e2d40:
        FUN_00f5f538(param_2,1);
        iVar2 = param_2[1];
        iVar23 = param_2[2];
        *(char *)(*param_2 + iVar2) = (char)uVar31;
        if (iVar23 == iVar2) goto LAB_010e38d0;
      }
      iVar23 = *piVar10;
      iVar2 = iVar2 + 1;
      param_2[1] = iVar2;
      if (iVar23 == 1) {
        iVar23 = piVar10[1];
        if (param_2[2] == iVar2) {
          FUN_00f5f538(param_2,1);
          iVar2 = param_2[1];
          iVar24 = param_2[2];
          *(undefined1 *)(*param_2 + iVar2) = 8;
          if (iVar24 == iVar2) goto LAB_010e38d0;
        }
        else {
          *(undefined1 *)(*param_2 + iVar2) = 8;
        }
        param_2[1] = iVar2 + 1;
        FUN_010e4ad0(iVar23,0,param_2);
      }
      if (iVar17 != 0) {
        puVar37 = (undefined4 *)piVar10[3];
        iVar17 = iVar17 << 2;
        iVar2 = param_2[1];
        do {
          if (param_2[2] == iVar2) {
            FUN_00f5f538(param_2,1);
            iVar2 = param_2[1];
            iVar23 = param_2[2];
            *(undefined1 *)(*param_2 + iVar2) = 0x1d;
            if (iVar23 == iVar2) goto LAB_010e38d0;
          }
          else {
            *(undefined1 *)(*param_2 + iVar2) = 0x1d;
          }
          iVar2 = iVar2 + 1;
          param_2[1] = iVar2;
          uVar40 = *puVar37;
          if ((uint)(param_2[2] - iVar2) < 4) {
            FUN_00f5f538(param_2,4);
            iVar2 = param_2[1];
            iVar23 = param_2[2];
            *(undefined4 *)(*param_2 + iVar2) = uVar40;
            local_28 = iVar23 - iVar2;
            if (local_28 < 4) goto LAB_010e3af8;
          }
          else {
            *(undefined4 *)(*param_2 + iVar2) = uVar40;
          }
          iVar2 = iVar2 + 4;
          puVar37 = puVar37 + 1;
          iVar17 = iVar17 + -4;
          param_2[1] = iVar2;
        } while (iVar17 != 0);
      }
      if (iVar3 != -0x80000000) {
        FUN_010e6550(4,piVar10[0xc],piVar10[0xd],param_2);
      }
      if (iVar5 != -0x80000000) {
        FUN_010e6550(5,piVar10[0xf],piVar10[0x10],param_2);
      }
      if (iVar6 != 0) {
        iVar6 = iVar6 << 2;
        do {
          iVar2 = param_2[1];
          if (param_2[2] == iVar2) {
            FUN_00f5f538(param_2,1);
            iVar2 = param_2[1];
            iVar23 = param_2[2];
            *(undefined1 *)(*param_2 + iVar2) = 0x30;
            if (iVar23 == iVar2) goto LAB_010e38d0;
          }
          else {
            *(undefined1 *)(*param_2 + iVar2) = 0x30;
          }
          uVar42 = *puVar44;
          param_2[1] = iVar2 + 1;
          puVar44 = puVar44 + 1;
          FUN_010e4ad0(uVar42,0,param_2);
          iVar6 = iVar6 + -4;
        } while (iVar6 != 0);
      }
      if (iVar7 != -0x80000000) {
        FUN_010e6550(7,piVar10[0x12],piVar10[0x13],param_2);
      }
      if (iVar9 != 0) {
        iVar9 = iVar9 << 2;
        puVar37 = (undefined4 *)piVar10[9];
        iVar2 = param_2[1];
        do {
          if (param_2[2] == iVar2) {
            FUN_00f5f538(param_2,1);
            iVar2 = param_2[1];
            iVar23 = param_2[2];
            *(undefined1 *)(*param_2 + iVar2) = 0x45;
            if (iVar23 == iVar2) goto LAB_010e38d0;
          }
          else {
            *(undefined1 *)(*param_2 + iVar2) = 0x45;
          }
          iVar2 = iVar2 + 1;
          param_2[1] = iVar2;
          uVar40 = *puVar37;
          if ((uint)(param_2[2] - iVar2) < 4) {
            FUN_00f5f538(param_2,4);
            iVar2 = param_2[1];
            iVar23 = param_2[2];
            *(undefined4 *)(*param_2 + iVar2) = uVar40;
            local_28 = iVar23 - iVar2;
            if (local_28 < 4) {
LAB_010e3af8:
              local_2c = 4;
                    /* WARNING: Subroutine does not return */
              FUN_00f600c0(&local_2c);
            }
          }
          else {
            *(undefined4 *)(*param_2 + iVar2) = uVar40;
          }
          iVar2 = iVar2 + 4;
          puVar37 = puVar37 + 1;
          iVar9 = iVar9 + -4;
          param_2[1] = iVar2;
        } while (iVar9 != 0);
      }
      if (iVar11 != -0x80000000) {
        FUN_010e6550(9,piVar10[0x15],piVar10[0x16],param_2);
      }
      if (iVar13 != -0x80000000) {
        FUN_010e6550(10,piVar10[0x18],piVar10[0x19],param_2);
      }
      if (iVar43 != -0x80000000) {
        iVar2 = param_2[1];
        iVar23 = piVar10[0x1b];
        uVar42 = piVar10[0x1c];
        if (param_2[2] == iVar2) {
          FUN_00f5f538(param_2,1);
          iVar2 = param_2[1];
          iVar17 = param_2[2];
          *(undefined1 *)(*param_2 + iVar2) = 0x5a;
          if (iVar17 == iVar2) goto LAB_010e38d0;
          iVar2 = iVar2 + 1;
          param_2[1] = iVar2;
          if (uVar42 != 0) goto LAB_010e31bc;
LAB_010e3294:
          uVar31 = uVar42;
          if (0x7f < uVar42) goto LAB_010e32a4;
LAB_010e3238:
          bVar35 = (byte)uVar31;
          if (param_2[2] != iVar2) goto LAB_010e33fc;
          goto LAB_010e3244;
        }
        *(undefined1 *)(*param_2 + iVar2) = 0x5a;
        iVar2 = iVar2 + 1;
        param_2[1] = iVar2;
        if (uVar42 == 0) goto LAB_010e3294;
LAB_010e31bc:
        iVar17 = 0;
        puVar44 = (uint *)(iVar23 + 0x14);
        uVar31 = uVar42;
        do {
          uVar31 = uVar31 - 1;
          uVar41 = puVar44[-3] + *puVar44 + ((LZCOUNT(puVar44[-3] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) +
                   ((LZCOUNT(*puVar44 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 2;
          iVar17 = uVar41 + iVar17 + ((LZCOUNT(uVar41 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
          puVar44 = puVar44 + 6;
        } while (uVar31 != 0);
        uVar31 = iVar17 + uVar42;
        if (uVar31 < 0x80) goto LAB_010e3238;
LAB_010e32a4:
        bVar35 = (byte)uVar31 | 0x80;
        if (param_2[2] == iVar2) {
          FUN_00f5f538(param_2,1);
          iVar2 = param_2[1];
          iVar17 = param_2[2];
          *(byte *)(*param_2 + iVar2) = bVar35;
          if (iVar17 == iVar2) goto LAB_010e38d0;
        }
        else {
          *(byte *)(*param_2 + iVar2) = bVar35;
        }
        iVar2 = iVar2 + 1;
        bVar35 = (byte)(uVar31 >> 7);
        param_2[1] = iVar2;
        if (uVar31 < 0x4000) {
LAB_010e33ec:
          if (param_2[2] == iVar2) goto LAB_010e3244;
LAB_010e33fc:
          *(byte *)(*param_2 + iVar2) = bVar35;
          param_2[1] = iVar2 + 1;
        }
        else {
          if (param_2[2] == iVar2) {
            FUN_00f5f538(param_2,1);
            iVar2 = param_2[1];
            iVar17 = param_2[2];
            *(byte *)(*param_2 + iVar2) = bVar35 | 0x80;
            if (iVar17 == iVar2) goto LAB_010e38d0;
          }
          else {
            *(byte *)(*param_2 + iVar2) = bVar35 | 0x80;
          }
          iVar2 = iVar2 + 1;
          bVar35 = (byte)(uVar31 >> 0xe);
          param_2[1] = iVar2;
          if (uVar31 < 0x200000) goto LAB_010e33ec;
          if (param_2[2] == iVar2) {
            FUN_00f5f538(param_2,1);
            iVar2 = param_2[1];
            iVar17 = param_2[2];
            *(byte *)(*param_2 + iVar2) = bVar35 | 0x80;
            if (iVar17 == iVar2) goto LAB_010e38d0;
          }
          else {
            *(byte *)(*param_2 + iVar2) = bVar35 | 0x80;
          }
          iVar2 = iVar2 + 1;
          param_2[1] = iVar2;
          bVar35 = (byte)(uVar31 >> 0x15);
          if (uVar31 < 0x10000000) {
            if (param_2[2] == iVar2) goto LAB_010e3244;
            goto LAB_010e33fc;
          }
          if (param_2[2] == iVar2) {
            FUN_00f5f538(param_2,1);
            iVar2 = param_2[1];
            iVar17 = param_2[2];
            *(byte *)(*param_2 + iVar2) = bVar35 | 0x80;
            if (iVar17 == iVar2) goto LAB_010e38d0;
          }
          else {
            *(byte *)(*param_2 + iVar2) = bVar35 | 0x80;
          }
          iVar2 = iVar2 + 1;
          bVar35 = (byte)(uVar31 >> 0x1c);
          param_2[1] = iVar2;
          if (param_2[2] != iVar2) goto LAB_010e33fc;
LAB_010e3244:
          FUN_00f5f538(param_2,1);
          iVar2 = param_2[1];
          iVar17 = param_2[2];
          *(byte *)(*param_2 + iVar2) = bVar35;
          if (iVar17 == iVar2) {
LAB_010e38d0:
            local_28 = 0;
            local_2c = 1;
                    /* WARNING: Subroutine does not return */
            FUN_00f600c0(&local_2c);
          }
          param_2[1] = iVar2 + 1;
        }
        if (uVar42 != 0) {
          iVar2 = uVar42 * 0x18;
          puVar37 = (undefined4 *)(iVar23 + 0x10);
          do {
            iVar23 = param_2[1];
            if (param_2[2] == iVar23) {
              FUN_00f5f538(param_2,1);
              iVar23 = param_2[1];
              iVar17 = param_2[2];
              *(undefined1 *)(*param_2 + iVar23) = 10;
              if (iVar17 == iVar23) goto LAB_010e38d0;
            }
            else {
              *(undefined1 *)(*param_2 + iVar23) = 10;
            }
            uVar31 = puVar37[-2];
            iVar23 = iVar23 + 1;
            uVar41 = puVar37[1];
            param_2[1] = iVar23;
            uVar42 = uVar31 + uVar41 + ((LZCOUNT(uVar31 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) +
                     ((LZCOUNT(uVar41 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 2;
            if (uVar42 < 0x80) {
              uVar21 = uVar42;
              if (param_2[2] != iVar23) goto LAB_010e3424;
              goto LAB_010e35c0;
            }
            bVar35 = (byte)uVar42 | 0x80;
            if (param_2[2] == iVar23) {
              FUN_00f5f538(param_2,1);
              iVar23 = param_2[1];
              iVar17 = param_2[2];
              *(byte *)(*param_2 + iVar23) = bVar35;
              if (iVar17 == iVar23) goto LAB_010e38d0;
            }
            else {
              *(byte *)(*param_2 + iVar23) = bVar35;
            }
            iVar23 = iVar23 + 1;
            uVar21 = uVar42 >> 7;
            param_2[1] = iVar23;
            if (uVar42 < 0x4000) {
LAB_010e35b0:
              if (param_2[2] == iVar23) goto LAB_010e35c0;
LAB_010e3424:
              *(char *)(*param_2 + iVar23) = (char)uVar21;
            }
            else {
              bVar35 = (byte)uVar21 | 0x80;
              if (param_2[2] == iVar23) {
                FUN_00f5f538(param_2,1);
                iVar23 = param_2[1];
                iVar17 = param_2[2];
                *(byte *)(*param_2 + iVar23) = bVar35;
                if (iVar17 == iVar23) goto LAB_010e38d0;
              }
              else {
                *(byte *)(*param_2 + iVar23) = bVar35;
              }
              iVar23 = iVar23 + 1;
              uVar21 = uVar42 >> 0xe;
              param_2[1] = iVar23;
              if (uVar42 < 0x200000) goto LAB_010e35b0;
              bVar35 = (byte)uVar21 | 0x80;
              if (param_2[2] == iVar23) {
                FUN_00f5f538(param_2,1);
                iVar23 = param_2[1];
                iVar17 = param_2[2];
                *(byte *)(*param_2 + iVar23) = bVar35;
                if (iVar17 == iVar23) goto LAB_010e38d0;
              }
              else {
                *(byte *)(*param_2 + iVar23) = bVar35;
              }
              iVar23 = iVar23 + 1;
              uVar21 = uVar42 >> 0x15;
              param_2[1] = iVar23;
              if (uVar42 < 0x10000000) {
                if (param_2[2] == iVar23) goto LAB_010e35c0;
                goto LAB_010e3424;
              }
              bVar35 = (byte)uVar21 | 0x80;
              if (param_2[2] == iVar23) {
                FUN_00f5f538(param_2,1);
                iVar23 = param_2[1];
                iVar17 = param_2[2];
                *(byte *)(*param_2 + iVar23) = bVar35;
                if (iVar17 == iVar23) goto LAB_010e38d0;
              }
              else {
                *(byte *)(*param_2 + iVar23) = bVar35;
              }
              iVar23 = iVar23 + 1;
              uVar21 = uVar42 >> 0x1c;
              param_2[1] = iVar23;
              if (param_2[2] != iVar23) goto LAB_010e3424;
LAB_010e35c0:
              FUN_00f5f538(param_2,1);
              iVar23 = param_2[1];
              iVar17 = param_2[2];
              *(char *)(*param_2 + iVar23) = (char)uVar21;
              if (iVar17 == iVar23) goto LAB_010e38d0;
            }
            uVar40 = puVar37[-3];
            param_2[1] = iVar23 + 1;
            FUN_010e6550(1,uVar40,uVar31,param_2);
            FUN_010e6550(2,*puVar37,uVar41,param_2);
            iVar2 = iVar2 + -0x18;
            puVar37 = puVar37 + 6;
          } while (iVar2 != 0);
        }
      }
      piVar10 = piVar10 + 0x1d;
    } while (piVar10 != piVar16);
    iVar12 = param_1[0x2e];
  }
  if (iVar12 != -0x80000000) {
    FUN_010e6550(8,param_1[0x2f],param_1[0x30],param_2);
  }
  uVar42 = param_1[8];
  if (uVar42 == 2) {
LAB_010e3d94:
    iVar2 = *param_1;
  }
  else {
    iVar2 = param_2[1];
    iVar23 = param_2[2];
    if (iVar23 == iVar2) {
      FUN_00f5f538(param_2,1);
      iVar2 = param_2[1];
      iVar23 = param_2[2];
      *(undefined1 *)(*param_2 + iVar2) = 0x4a;
      if (iVar23 == iVar2) goto LAB_010e4550;
    }
    else {
      *(undefined1 *)(*param_2 + iVar2) = 0x4a;
    }
    iVar17 = iVar2 + 1;
    cVar46 = '\0';
    cVar27 = '\0';
    param_2[1] = iVar17;
    if ((uVar42 & 1) != 0) {
      cVar27 = (char)((LZCOUNT(param_1[9] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + '\x01';
    }
    iVar24 = param_1[10];
    if (iVar24 == 1) {
      cVar46 = (char)((LZCOUNT(param_1[0xb] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + '\x01';
    }
    iVar3 = param_1[0xc];
    cVar36 = '\0';
    cVar22 = '\0';
    if (iVar3 == 1) {
      cVar22 = (char)((LZCOUNT(param_1[0xd] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + '\x01';
    }
    iVar4 = param_1[0xe];
    if (iVar4 == 1) {
      cVar36 = (char)((LZCOUNT(param_1[0xf] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + '\x02';
    }
    cVar1 = (char)param_1[0x12];
    cVar32 = '\0';
    iVar5 = param_1[0x10];
    if (iVar5 == 1) {
      cVar32 = (char)((LZCOUNT(param_1[0x11] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + '\x02';
    }
    if (cVar1 != '\x02') {
      cVar27 = cVar27 + '\x02';
    }
    cVar32 = cVar27 + cVar46 + cVar22 + cVar36 + cVar32;
    if (iVar23 == iVar17) {
      FUN_00f5f538(param_2,1);
      iVar2 = param_2[1];
      iVar23 = param_2[2];
      *(char *)(*param_2 + iVar2) = cVar32;
      if (iVar23 == iVar2) {
        local_2c = 1;
        local_28 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_00f600c0(&local_2c);
      }
      iVar2 = iVar2 + 1;
      param_2[1] = iVar2;
    }
    else {
      *(char *)(*param_2 + iVar17) = cVar32;
      iVar2 = iVar2 + 2;
      param_2[1] = iVar2;
    }
    if (cVar1 != '\x02') {
      if (iVar23 == iVar2) {
        FUN_00f5f538(param_2,1);
        iVar2 = param_2[1];
        iVar23 = param_2[2];
        *(undefined1 *)(*param_2 + iVar2) = 8;
        if (iVar23 == iVar2) goto LAB_010e4550;
      }
      else {
        *(undefined1 *)(*param_2 + iVar2) = 8;
      }
      param_2[1] = iVar2 + 1;
      FUN_010e4ad0(cVar1,0,param_2);
    }
    if ((uVar42 & 1) != 0) {
      iVar2 = param_2[1];
      iVar23 = param_1[9];
      if (param_2[2] == iVar2) {
        FUN_00f5f538(param_2,1);
        iVar2 = param_2[1];
        iVar17 = param_2[2];
        *(undefined1 *)(*param_2 + iVar2) = 0x10;
        if (iVar17 == iVar2) goto LAB_010e4550;
      }
      else {
        *(undefined1 *)(*param_2 + iVar2) = 0x10;
      }
      param_2[1] = iVar2 + 1;
      FUN_010e4ad0(iVar23,0,param_2);
    }
    if (iVar24 != 0) {
      iVar2 = param_2[1];
      iVar23 = param_1[0xb];
      if (param_2[2] == iVar2) {
        FUN_00f5f538(param_2,1);
        iVar2 = param_2[1];
        iVar17 = param_2[2];
        *(undefined1 *)(*param_2 + iVar2) = 0x18;
        if (iVar17 == iVar2) goto LAB_010e4550;
      }
      else {
        *(undefined1 *)(*param_2 + iVar2) = 0x18;
      }
      param_2[1] = iVar2 + 1;
      FUN_010e4ad0(iVar23,0,param_2);
    }
    if (iVar3 != 0) {
      iVar2 = param_2[1];
      iVar23 = param_1[0xd];
      if (param_2[2] == iVar2) {
        FUN_00f5f538(param_2,1);
        iVar2 = param_2[1];
        iVar17 = param_2[2];
        *(undefined1 *)(*param_2 + iVar2) = 0x20;
        if (iVar17 == iVar2) goto LAB_010e4550;
      }
      else {
        *(undefined1 *)(*param_2 + iVar2) = 0x20;
      }
      param_2[1] = iVar2 + 1;
      FUN_010e4ad0(iVar23,0,param_2);
    }
    if (iVar4 != 0) {
      iVar2 = param_2[1];
      iVar23 = param_2[2];
      iVar17 = param_1[0xf];
      if (iVar23 == iVar2) {
        FUN_00f5f538(param_2,1);
        iVar2 = param_2[1];
        iVar23 = param_2[2];
        *(undefined1 *)(*param_2 + iVar2) = 0x98;
        if (iVar23 == iVar2) goto LAB_010e4550;
        iVar2 = iVar2 + 1;
        param_2[1] = iVar2;
        if (iVar23 == iVar2) goto LAB_010e3c74;
LAB_010e3d64:
        *(undefined1 *)(*param_2 + iVar2) = 1;
      }
      else {
        *(undefined1 *)(*param_2 + iVar2) = 0x98;
        iVar2 = iVar2 + 1;
        param_2[1] = iVar2;
        if (iVar23 != iVar2) goto LAB_010e3d64;
LAB_010e3c74:
        FUN_00f5f538(param_2,1);
        iVar2 = param_2[1];
        iVar23 = param_2[2];
        *(undefined1 *)(*param_2 + iVar2) = 1;
        if (iVar23 == iVar2) goto LAB_010e4550;
      }
      param_2[1] = iVar2 + 1;
      FUN_010e4ad0(iVar17,0,param_2);
    }
    if (iVar5 == 0) goto LAB_010e3d94;
    iVar2 = param_2[1];
    iVar23 = param_2[2];
    iVar17 = param_1[0x11];
    if (iVar23 == iVar2) {
      FUN_00f5f538(param_2,1);
      iVar2 = param_2[1];
      iVar23 = param_2[2];
      *(undefined1 *)(*param_2 + iVar2) = 0xa0;
      if (iVar23 == iVar2) goto LAB_010e4550;
      iVar2 = iVar2 + 1;
      param_2[1] = iVar2;
      if (iVar23 == iVar2) goto LAB_010e3d20;
LAB_010e4034:
      *(undefined1 *)(*param_2 + iVar2) = 1;
    }
    else {
      *(undefined1 *)(*param_2 + iVar2) = 0xa0;
      iVar2 = iVar2 + 1;
      param_2[1] = iVar2;
      if (iVar23 != iVar2) goto LAB_010e4034;
LAB_010e3d20:
      FUN_00f5f538(param_2,1);
      iVar2 = param_2[1];
      iVar23 = param_2[2];
      *(undefined1 *)(*param_2 + iVar2) = 1;
      if (iVar23 == iVar2) goto LAB_010e4550;
    }
    param_2[1] = iVar2 + 1;
    FUN_010e4ad0(iVar17,0,param_2);
    iVar2 = *param_1;
  }
  if (iVar2 == 1) {
    iVar2 = param_2[1];
    iVar23 = param_1[1];
    if (param_2[2] == iVar2) {
      FUN_00f5f538(param_2,1);
      iVar2 = param_2[1];
      iVar17 = param_2[2];
      *(undefined1 *)(*param_2 + iVar2) = 0x50;
      if (iVar17 == iVar2) goto LAB_010e4550;
    }
    else {
      *(undefined1 *)(*param_2 + iVar2) = 0x50;
    }
    param_2[1] = iVar2 + 1;
    FUN_010e4ad0(iVar23,0,param_2);
  }
  uVar42 = param_1[0x13];
  if (uVar42 == 2) {
LAB_010e410c:
    if (param_1[0x31] == -0x80000000) goto LAB_010e4118;
LAB_010e43e4:
    FUN_010e6550(0xc,param_1[0x32],param_1[0x33],param_2);
    if (param_1[0x34] != -0x80000000) goto LAB_010e4408;
LAB_010e4124:
    if (param_1[0x37] == -0x80000000) goto LAB_010e4130;
LAB_010e442c:
    FUN_010e6550(0xe,param_1[0x38],param_1[0x39],param_2);
    if (param_1[0x3a] != -0x80000000) goto LAB_010e4450;
LAB_010e413c:
    if (param_1[0x3d] == -0x80000000) goto LAB_010e4148;
LAB_010e4474:
    FUN_010e6550(0x10,param_1[0x3e],param_1[0x3f],param_2);
    if (param_1[0x40] != -0x80000000) goto LAB_010e4498;
LAB_010e4154:
    if (param_1[0x43] == -0x80000000) goto LAB_010e4160;
LAB_010e44b8:
    FUN_010e6550(0x12,param_1[0x44],param_1[0x45],param_2);
    if (param_1[2] != 1) goto LAB_010e44d8;
LAB_010e416c:
    iVar2 = param_2[1];
    iVar23 = param_2[2];
    iVar17 = param_1[3];
    if (iVar23 == iVar2) {
      FUN_00f5f538(param_2,1);
      iVar2 = param_2[1];
      iVar23 = param_2[2];
      *(undefined1 *)(*param_2 + iVar2) = 0xa8;
      if (iVar23 == iVar2) goto LAB_010e4550;
      iVar2 = iVar2 + 1;
      param_2[1] = iVar2;
      if (iVar23 == iVar2) goto LAB_010e41b4;
LAB_010e41f8:
      *(undefined1 *)(*param_2 + iVar2) = 1;
    }
    else {
      *(undefined1 *)(*param_2 + iVar2) = 0xa8;
      iVar2 = iVar2 + 1;
      param_2[1] = iVar2;
      if (iVar23 != iVar2) goto LAB_010e41f8;
LAB_010e41b4:
      FUN_00f5f538(param_2,1);
      iVar2 = param_2[1];
      iVar23 = param_2[2];
      *(undefined1 *)(*param_2 + iVar2) = 1;
      if (iVar23 == iVar2) goto LAB_010e4550;
    }
    param_2[1] = iVar2 + 1;
    FUN_010e4ad0(iVar17,0,param_2);
    if (param_1[4] != 1) goto LAB_010e4228;
LAB_010e44e4:
    iVar2 = param_2[1];
    iVar23 = param_2[2];
    iVar17 = param_1[5];
    if (iVar23 == iVar2) {
      FUN_00f5f538(param_2,1);
      iVar2 = param_2[1];
      iVar23 = param_2[2];
      *(undefined1 *)(*param_2 + iVar2) = 0xb0;
      if (iVar23 == iVar2) goto LAB_010e4550;
      iVar2 = iVar2 + 1;
      param_2[1] = iVar2;
      if (iVar23 == iVar2) goto LAB_010e452c;
LAB_010e4580:
      *(undefined1 *)(*param_2 + iVar2) = 1;
    }
    else {
      *(undefined1 *)(*param_2 + iVar2) = 0xb0;
      iVar2 = iVar2 + 1;
      param_2[1] = iVar2;
      if (iVar23 != iVar2) goto LAB_010e4580;
LAB_010e452c:
      FUN_00f5f538(param_2,1);
      iVar2 = param_2[1];
      iVar23 = param_2[2];
      *(undefined1 *)(*param_2 + iVar2) = 1;
      if (iVar23 == iVar2) goto LAB_010e4550;
    }
    param_2[1] = iVar2 + 1;
    FUN_010e4ad0(iVar17,0,param_2);
    if (param_1[6] != 1) goto LAB_010e45b0;
LAB_010e4234:
    iVar2 = param_2[1];
    iVar23 = param_2[2];
    iVar17 = param_1[7];
    if (iVar23 == iVar2) {
      FUN_00f5f538(param_2,1);
      iVar2 = param_2[1];
      iVar23 = param_2[2];
      *(undefined1 *)(*param_2 + iVar2) = 0xb8;
      if (iVar23 == iVar2) goto LAB_010e4550;
      iVar2 = iVar2 + 1;
      param_2[1] = iVar2;
      if (iVar23 == iVar2) goto LAB_010e427c;
LAB_010e42c0:
      *(undefined1 *)(*param_2 + iVar2) = 1;
    }
    else {
      *(undefined1 *)(*param_2 + iVar2) = 0xb8;
      iVar2 = iVar2 + 1;
      param_2[1] = iVar2;
      if (iVar23 != iVar2) goto LAB_010e42c0;
LAB_010e427c:
      FUN_00f5f538(param_2,1);
      iVar2 = param_2[1];
      iVar23 = param_2[2];
      *(undefined1 *)(*param_2 + iVar2) = 1;
      if (iVar23 == iVar2) {
LAB_010e4550:
        local_28 = 0;
        local_2c = 1;
                    /* WARNING: Subroutine does not return */
        FUN_00f600c0(&local_2c);
      }
    }
    param_2[1] = iVar2 + 1;
    FUN_010e4ad0(iVar17,0,param_2);
    cVar27 = (char)param_1[0x46];
  }
  else {
    iVar23 = param_2[1];
    iVar2 = param_2[2];
    if (iVar2 == iVar23) {
      FUN_00f5f538(param_2,1);
      iVar23 = param_2[1];
      iVar2 = param_2[2];
      *(undefined1 *)(*param_2 + iVar23) = 0x5a;
      if (iVar2 == iVar23) goto LAB_010e4550;
    }
    else {
      *(undefined1 *)(*param_2 + iVar23) = 0x5a;
    }
    iVar17 = iVar23 + 1;
    cVar27 = '\0';
    cVar46 = '\0';
    param_2[1] = iVar17;
    if ((uVar42 & 1) == 0) {
      iVar24 = param_1[0x15];
      if (iVar24 == 1) goto LAB_010e3f58;
LAB_010e3e98:
      iVar3 = param_1[0x17];
      if (iVar3 == 1) goto LAB_010e3ea8;
LAB_010e3f88:
      cVar27 = cVar27 + cVar46;
      if (iVar2 == iVar17) goto LAB_010e3f98;
LAB_010e3edc:
      *(char *)(*param_2 + iVar17) = cVar27;
      iVar23 = iVar23 + 2;
      param_2[1] = iVar23;
    }
    else {
      cVar46 = (char)((LZCOUNT(param_1[0x14] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + '\x01';
      iVar24 = param_1[0x15];
      if (iVar24 != 1) goto LAB_010e3e98;
LAB_010e3f58:
      cVar27 = (char)((LZCOUNT(param_1[0x16] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + '\x01';
      iVar3 = param_1[0x17];
      if (iVar3 != 1) goto LAB_010e3f88;
LAB_010e3ea8:
      cVar27 = cVar27 + cVar46 +
               (char)((LZCOUNT(param_1[0x18] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + '\x01';
      if (iVar2 != iVar17) goto LAB_010e3edc;
LAB_010e3f98:
      FUN_00f5f538(param_2,1);
      iVar23 = param_2[1];
      iVar2 = param_2[2];
      *(char *)(*param_2 + iVar23) = cVar27;
      if (iVar2 == iVar23) goto LAB_010e4004;
      iVar23 = iVar23 + 1;
      param_2[1] = iVar23;
    }
    if ((uVar42 & 1) != 0) {
      iVar17 = param_1[0x14];
      if (iVar2 == iVar23) {
        FUN_00f5f538(param_2,1);
        iVar23 = param_2[1];
        iVar2 = param_2[2];
        *(undefined1 *)(*param_2 + iVar23) = 8;
        if (iVar2 == iVar23) {
LAB_010e4004:
          local_2c = 1;
          local_28 = 0;
                    /* WARNING: Subroutine does not return */
          FUN_00f600c0(&local_2c);
        }
      }
      else {
        *(undefined1 *)(*param_2 + iVar23) = 8;
      }
      param_2[1] = iVar23 + 1;
      FUN_010e4ad0(iVar17,0,param_2);
    }
    if (iVar24 != 0) {
      iVar2 = param_2[1];
      iVar23 = param_1[0x16];
      if (param_2[2] == iVar2) {
        FUN_00f5f538(param_2,1);
        iVar2 = param_2[1];
        iVar17 = param_2[2];
        *(undefined1 *)(*param_2 + iVar2) = 0x10;
        if (iVar17 == iVar2) {
LAB_010e3f38:
          local_2c = 1;
          local_28 = 0;
                    /* WARNING: Subroutine does not return */
          FUN_00f600c0(&local_2c);
        }
      }
      else {
        *(undefined1 *)(*param_2 + iVar2) = 0x10;
      }
      param_2[1] = iVar2 + 1;
      FUN_010e4ad0(iVar23,0,param_2);
    }
    if (iVar3 == 0) goto LAB_010e410c;
    iVar2 = param_2[1];
    iVar23 = param_1[0x18];
    if (param_2[2] == iVar2) {
      FUN_00f5f538(param_2,1);
      iVar2 = param_2[1];
      iVar17 = param_2[2];
      *(undefined1 *)(*param_2 + iVar2) = 0x18;
      if (iVar17 == iVar2) goto LAB_010e4550;
    }
    else {
      *(undefined1 *)(*param_2 + iVar2) = 0x18;
    }
    param_2[1] = iVar2 + 1;
    FUN_010e4ad0(iVar23,0,param_2);
    if (param_1[0x31] != -0x80000000) goto LAB_010e43e4;
LAB_010e4118:
    if (param_1[0x34] == -0x80000000) goto LAB_010e4124;
LAB_010e4408:
    FUN_010e6550(0xd,param_1[0x35],param_1[0x36],param_2);
    if (param_1[0x37] != -0x80000000) goto LAB_010e442c;
LAB_010e4130:
    if (param_1[0x3a] == -0x80000000) goto LAB_010e413c;
LAB_010e4450:
    FUN_010e6550(0xf,param_1[0x3b],param_1[0x3c],param_2);
    if (param_1[0x3d] != -0x80000000) goto LAB_010e4474;
LAB_010e4148:
    if (param_1[0x40] == -0x80000000) goto LAB_010e4154;
LAB_010e4498:
    FUN_010e6550(0x11,param_1[0x41],param_1[0x42],param_2);
    if (param_1[0x43] != -0x80000000) goto LAB_010e44b8;
LAB_010e4160:
    if (param_1[2] == 1) goto LAB_010e416c;
LAB_010e44d8:
    if (param_1[4] == 1) goto LAB_010e44e4;
LAB_010e4228:
    if (param_1[6] == 1) goto LAB_010e4234;
LAB_010e45b0:
    cVar27 = (char)param_1[0x46];
  }
  if (cVar27 == '\x02') {
    return;
  }
  iVar2 = param_2[1];
  iVar23 = param_2[2];
  if (iVar23 == iVar2) {
    FUN_00f5f538(param_2,1);
    iVar2 = param_2[1];
    iVar23 = param_2[2];
    *(undefined1 *)(*param_2 + iVar2) = 0xc0;
    if (iVar23 == iVar2) goto LAB_010e4358;
    iVar2 = iVar2 + 1;
    param_2[1] = iVar2;
    if (iVar23 != iVar2) goto LAB_010e4388;
  }
  else {
    *(undefined1 *)(*param_2 + iVar2) = 0xc0;
    iVar2 = iVar2 + 1;
    param_2[1] = iVar2;
    if (iVar23 != iVar2) {
LAB_010e4388:
      *(undefined1 *)(*param_2 + iVar2) = 1;
      goto LAB_010e4394;
    }
  }
  FUN_00f5f538(param_2,1);
  iVar2 = param_2[1];
  iVar23 = param_2[2];
  *(undefined1 *)(*param_2 + iVar2) = 1;
  if (iVar23 == iVar2) {
LAB_010e4358:
    local_2c = 1;
    local_28 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00f600c0(&local_2c);
  }
LAB_010e4394:
  param_2[1] = iVar2 + 1;
  FUN_010e4ad0(cVar27,0,param_2);
  return;
}

