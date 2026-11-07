// FUN_015f10d0 @ 015f10d0 size=836 calls_out=3 calls_in=3
// strings: 

void FUN_015f10d0(int param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint *puVar13;
  uint *puVar14;
  undefined4 uVar15;
  uint *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint *puVar20;
  int iVar21;
  int iVar22;
  
  iVar5 = 0x80;
  if (param_5 != 0) {
    iVar5 = 0x60;
  }
  puVar1 = (undefined4 *)(param_1 + iVar5);
  puVar20 = (uint *)*puVar1;
  iVar5 = puVar1[3];
  if (iVar5 != 0) {
    uVar2 = puVar1[1];
    puVar14 = puVar20 + 1;
    uVar19 = ~*puVar20 & 0x80808080;
    puVar16 = puVar20;
    iVar21 = iVar5;
    do {
      puVar13 = puVar14;
      if (uVar19 == 0) {
        do {
          puVar14 = puVar13 + 1;
          uVar19 = *puVar13;
          puVar16 = puVar16 + -0x18;
          puVar13 = puVar14;
        } while ((uVar19 & 0x80808080) == 0x80808080);
        uVar19 = uVar19 & 0x80808080 ^ 0x80808080;
      }
      uVar3 = LZCOUNT(uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                      uVar19 >> 0x18);
      puVar13 = puVar16 + ((uVar3 >> 3) * -2 - (uVar3 >> 3)) * 2;
      uVar7 = puVar13[-2];
      uVar11 = puVar13[-1];
      uVar3 = param_3 - uVar7;
      uVar8 = param_4 - (uVar11 + (uVar7 > param_3));
      if (param_4 <= uVar11 && (uint)(uVar7 <= param_3) <= param_4 - uVar11) {
        uVar3 = 0;
        uVar8 = 0;
      }
      if (uVar8 != 0 || uVar8 < (999 < uVar3)) {
        iVar22 = ((int)puVar20 - (int)puVar13 >> 3) * -0x55555555;
        puVar9 = (uint *)((int)puVar20 + (iVar22 - 4U & uVar2));
        uVar3 = *puVar9;
        uVar7 = *(uint *)((int)puVar20 + iVar22) & 0x80808080 &
                *(uint *)((int)puVar20 + iVar22) << 1;
        uVar10 = 0x80;
        if (((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8
                           | uVar7 >> 0x18) >> 3) +
            ((uint)LZCOUNT(uVar3 & 0x80808080 & uVar3 << 1) >> 3) < 4) {
          puVar1[2] = puVar1[2] + 1;
          uVar10 = 0xff;
        }
        *(undefined1 *)((int)puVar20 + iVar22) = uVar10;
        iVar21 = iVar21 + -1;
        *(undefined1 *)(puVar9 + 1) = uVar10;
        uVar3 = puVar13[-6];
        uVar7 = puVar13[-5];
        puVar1[3] = iVar21;
        FUN_0134bd64(uVar3,uVar7);
      }
      iVar5 = iVar5 + -1;
      uVar19 = uVar19 - 1 & uVar19;
    } while (iVar5 != 0);
  }
  uVar2 = *(uint *)(param_2 + 0x1c);
  if (uVar2 == 0) {
    return;
  }
  puVar18 = *(undefined4 **)(param_2 + 0x18);
  uVar19 = 0;
  puVar17 = puVar18;
  while( true ) {
    iVar5 = FUN_015f2604(puVar1,*puVar17,puVar17[1],puVar17[1],param_3,param_4);
    uVar3 = uVar19 + 1;
    if (iVar5 == 0) break;
    puVar17 = puVar17 + 4;
    uVar19 = uVar3;
    if (uVar2 == uVar3) goto LAB_015f1294;
  }
  FUN_00f80320(*puVar17,puVar17[1]);
  if (uVar3 < uVar2) {
    uVar3 = uVar19;
    do {
      puVar17 = puVar18 + uVar3 * 4 + 4;
      iVar5 = FUN_015f2604(puVar1,*puVar17,puVar18[uVar3 * 4 + 5],param_3,param_3,param_4);
      if (iVar5 == 0) {
        FUN_00f80320(*puVar17,puVar18[uVar3 * 4 + 5]);
      }
      else {
        uVar6 = puVar18[uVar3 * 4 + 5];
        uVar12 = puVar18[uVar3 * 4 + 6];
        uVar15 = puVar18[uVar3 * 4 + 7];
        puVar4 = puVar18 + uVar19 * 4;
        uVar19 = uVar19 + 1;
        *puVar4 = *puVar17;
        puVar4[1] = uVar6;
        puVar4[2] = uVar12;
        puVar4[3] = uVar15;
      }
      uVar7 = uVar3 + 2;
      uVar3 = uVar3 + 1;
    } while (uVar7 < uVar2);
  }
  *(uint *)(param_2 + 0x1c) = uVar19;
  if (uVar19 == 0) {
    return;
  }
LAB_015f1294:
  uVar2 = *(uint *)(param_2 + 0x34);
  if (uVar2 == 0) {
    return;
  }
  puVar18 = *(undefined4 **)(param_2 + 0x30);
  uVar19 = 0;
  puVar17 = puVar18;
  do {
    iVar5 = FUN_015f2604(puVar1,*puVar17,puVar17[1],puVar17[1],param_3,param_4);
    uVar3 = uVar19 + 1;
    if (iVar5 == 0) {
      FUN_00f80320(*puVar17,puVar17[1]);
      if (uVar3 < uVar2) {
        uVar3 = uVar19;
        do {
          puVar17 = puVar18 + uVar3 * 2 + 2;
          iVar5 = FUN_015f2604(puVar1,*puVar17,puVar18[uVar3 * 2 + 3],param_3,param_3,param_4);
          if (iVar5 == 0) {
            FUN_00f80320(*puVar17,puVar18[uVar3 * 2 + 3]);
          }
          else {
            uVar6 = puVar18[uVar3 * 2 + 3];
            iVar5 = uVar19 * 2;
            puVar18[iVar5] = *puVar17;
            uVar19 = uVar19 + 1;
            (puVar18 + iVar5)[1] = uVar6;
          }
          uVar7 = uVar3 + 2;
          uVar3 = uVar3 + 1;
        } while (uVar7 < uVar2);
      }
      *(uint *)(param_2 + 0x34) = uVar19;
      return;
    }
    puVar17 = puVar17 + 2;
    uVar19 = uVar3;
  } while (uVar2 != uVar3);
  return;
}

