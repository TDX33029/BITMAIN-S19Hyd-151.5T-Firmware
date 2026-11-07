// FUN_017e5d20 @ 017e5d20 size=1108 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_017e5d20(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar10;
  uint *puVar9;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint *puVar21;
  bool bVar22;
  
  iVar5 = *(int *)(param_1 + 4);
  puVar6 = *(uint **)(param_1 + 0x5c);
  iVar1 = *(int *)(param_1 + 100);
  uVar7 = param_2 - iVar5;
  uVar8 = *(uint *)(param_1 + 0x1c);
  uVar20 = 1 << (*(uint *)(param_1 + 0xbc) & 0xff);
  if (uVar20 < uVar7 - uVar8) {
    uVar20 = uVar7 - uVar20;
  }
  else {
    uVar20 = uVar8;
  }
  uVar16 = (1 << (*(uint *)(param_1 + 0xc4) & 0xff)) - 3;
  iVar2 = *(int *)(param_1 + 0xc0);
  uVar18 = iVar2 - 2;
  if (0xfe < uVar16) {
    uVar16 = 0xff;
  }
  uVar17 = 3 << (uVar18 & 0xff);
  puVar3 = (uint *)((int)puVar6 + (4 << (uVar18 & 0xff)));
  if (uVar17 < uVar7) {
    uVar17 = uVar7 - uVar17;
  }
  else {
    uVar17 = uVar8;
  }
  if (uVar8 < uVar7) {
LAB_017e5e10:
    do {
      iVar11 = iVar5 + uVar8;
      switch(*(undefined4 *)(param_1 + 200)) {
      case 5:
        uVar15 = *(uint *)(iVar5 + uVar8);
        uVar13 = 0xbb000000;
        iVar14 = *(int *)(iVar11 + 4);
        iVar11 = uVar15 * -0x30e44324;
        break;
      case 6:
        uVar15 = *(uint *)(iVar5 + uVar8);
        iVar14 = *(int *)(iVar11 + 4);
        uVar13 = 0xbf9b0000;
        iVar11 = uVar15 * -0x30e44324;
        break;
      case 7:
        uVar15 = *(uint *)(iVar5 + uVar8);
        iVar14 = *(int *)(iVar11 + 4);
        uVar13 = 0xbfa56300;
        iVar11 = uVar15 * -0x30e44324;
        break;
      case 8:
        uVar15 = *(uint *)(iVar5 + uVar8);
        iVar14 = *(int *)(iVar11 + 4);
        uVar13 = 0xb7a56463;
        iVar11 = uVar15 * -0x30e44324;
        break;
      default:
        uVar13 = (uint)(*(int *)(iVar5 + uVar8) * -0x61c8864f) >> (0x20 - uVar18 & 0xff);
        goto LAB_017e5e68;
      }
      uVar12 = uVar13 * iVar14 + iVar11 + (int)((ulonglong)uVar13 * (ulonglong)uVar15 >> 0x20);
      uVar13 = (uint)((ulonglong)uVar13 * (ulonglong)uVar15) >> (0x40 - uVar18 & 0xff) |
               uVar12 << (iVar2 - 0x22U & 0xff) | uVar12 >> (0x20 - uVar18 & 0xff);
LAB_017e5e68:
      if (uVar17 <= uVar8) {
        puVar3[uVar8 - uVar17] = puVar6[uVar13];
        puVar6[uVar13] = uVar8;
        uVar8 = uVar8 + 1;
        if (uVar7 == uVar8) break;
        goto LAB_017e5e10;
      }
      puVar6[uVar13] = uVar8;
      uVar8 = uVar8 + 1;
    } while (uVar7 != uVar8);
  }
  iVar11 = 0;
  puVar9 = puVar6;
  do {
    puVar10 = puVar9 + 1;
    uVar8 = *puVar9;
    if (uVar8 < uVar17) {
      uVar13 = 0;
    }
    else {
      uVar15 = 0;
      iVar14 = 0;
      do {
        iVar19 = iVar14 + 1;
        if (uVar8 < uVar20) {
          uVar15 = uVar15 + 1;
        }
        bVar22 = iVar14 != 2;
        uVar8 = puVar3[uVar8 - uVar17];
        iVar14 = iVar19;
      } while (uVar17 <= uVar8 && bVar22);
      uVar13 = 0;
      if (iVar19 == 3) {
        puVar21 = (uint *)(iVar1 + iVar11 * 4);
        uVar12 = uVar13;
        do {
          if ((uVar8 < uVar20) && ((uVar8 == 0 || (uVar15 = uVar15 + 1, 3 < uVar15)))) {
            uVar13 = 0;
            if (uVar12 == 0) goto LAB_017e5ee8;
            break;
          }
          iVar11 = iVar11 + 1;
          uVar12 = uVar12 + 1;
          *puVar21 = uVar8;
          if (uVar8 < uVar17) break;
          puVar21 = puVar21 + 1;
          uVar8 = puVar3[uVar8 - uVar17];
        } while (uVar12 < uVar16);
        uVar13 = iVar11 * 0x100 + uVar12 * -0xff;
      }
    }
LAB_017e5ee8:
    *puVar9 = uVar13;
    puVar9 = puVar10;
  } while (puVar3 != puVar10);
  if (1 << (uVar18 & 0xff) != 0) {
    puVar4 = (undefined4 *)((int)puVar6 + (0x10 << (uVar18 & 0xff)) + -0x10);
    do {
      puVar3 = puVar3 + -1;
      uVar20 = *puVar3;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = uVar20;
      puVar4 = puVar4 + -4;
    } while (puVar3 != puVar6);
  }
  uVar20 = *(uint *)(param_1 + 0x1c);
  if (uVar20 < uVar7) {
    do {
      iVar1 = iVar5 + uVar20;
      switch(*(undefined4 *)(param_1 + 200)) {
      case 5:
        uVar8 = *(uint *)(iVar5 + uVar20);
        iVar11 = *(int *)(iVar1 + 4);
        iVar1 = uVar8 * -0x30e44324;
        uVar16 = 0xbb000000;
        break;
      case 6:
        uVar8 = *(uint *)(iVar5 + uVar20);
        iVar11 = *(int *)(iVar1 + 4);
        iVar1 = uVar8 * -0x30e44324;
        uVar16 = 0xbf9b0000;
        break;
      case 7:
        uVar8 = *(uint *)(iVar5 + uVar20);
        iVar11 = *(int *)(iVar1 + 4);
        iVar1 = uVar8 * -0x30e44324;
        uVar16 = 0xbfa56300;
        break;
      case 8:
        uVar8 = *(uint *)(iVar5 + uVar20);
        iVar11 = *(int *)(iVar1 + 4);
        iVar1 = uVar8 * -0x30e44324;
        uVar16 = 0xb7a56463;
        break;
      default:
        uVar8 = (uint)(*(int *)(iVar5 + uVar20) * -0x61c8864f) >> (0x20 - uVar18 & 0xff);
        goto LAB_017e6024;
      }
      uVar17 = uVar16 * iVar11 + iVar1 + (int)((ulonglong)uVar16 * (ulonglong)uVar8 >> 0x20);
      uVar8 = (uint)((ulonglong)uVar16 * (ulonglong)uVar8) >> (0x40 - uVar18 & 0xff) |
              uVar17 << (iVar2 - 0x22U & 0xff) | uVar17 >> (0x20 - uVar18 & 0xff);
LAB_017e6024:
      iVar1 = uVar8 * 4;
      puVar6[iVar1 + 0x40000002] = puVar6[iVar1 + 0x40000001];
      puVar6[iVar1 + 0x40000001] = puVar6[iVar1 + 0x40000000];
      puVar6[iVar1 + 0x40000000] = uVar20;
      uVar20 = uVar20 + 1;
    } while (uVar7 != uVar20);
  }
  *(uint *)(param_1 + 0x1c) = uVar7;
  return 0;
}

