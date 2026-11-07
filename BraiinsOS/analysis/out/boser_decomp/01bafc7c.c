// FUN_01bafc7c @ 01bafc7c size=968 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_01bafc7c(int param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint local_38;
  
  iVar19 = *(int *)(param_1 + 4);
  uVar6 = param_2 - iVar19;
  puVar7 = *(uint **)(param_1 + 0x5c);
  uVar2 = *(uint *)(param_1 + 0x1c);
  iVar8 = *(int *)(param_1 + 100);
  uVar5 = 1 << (*(uint *)(param_1 + 0xbc) & 0xff);
  if (uVar6 - uVar2 <= uVar5) {
    local_38 = uVar2;
  }
  if (uVar5 < uVar6 - uVar2) {
    local_38 = uVar6 - (1 << (*(uint *)(param_1 + 0xbc) & 0xff));
  }
  iVar4 = *(int *)(param_1 + 0xc0);
  uVar9 = (1 << (*(uint *)(param_1 + 0xc4) & 0xff)) - 3;
  uVar5 = iVar4 - 2;
  if (0xfe < uVar9) {
    uVar9 = 0xff;
  }
  iVar18 = 4 << (uVar5 & 0xff);
  if ((uint)(3 << (uVar5 & 0xff)) < uVar6) {
    uVar21 = uVar6 - (3 << (uVar5 & 0xff));
  }
  else {
    uVar21 = uVar2;
  }
  for (; uVar2 < uVar6; uVar2 = uVar2 + 1) {
    iVar15 = iVar19 + uVar2;
    switch(*(undefined4 *)(param_1 + 200)) {
    case 5:
      uVar11 = *(uint *)(iVar19 + uVar2);
      uVar20 = 0xbb000000;
      iVar16 = *(int *)(iVar15 + 4);
      iVar15 = uVar11 * -0x30e44324;
      break;
    case 6:
      uVar11 = *(uint *)(iVar19 + uVar2);
      iVar16 = *(int *)(iVar15 + 4);
      uVar20 = 0xbf9b0000;
      iVar15 = uVar11 * -0x30e44324;
      break;
    case 7:
      uVar11 = *(uint *)(iVar19 + uVar2);
      iVar16 = *(int *)(iVar15 + 4);
      uVar20 = 0xbfa56300;
      iVar15 = uVar11 * -0x30e44324;
      break;
    case 8:
      uVar11 = *(uint *)(iVar19 + uVar2);
      iVar16 = *(int *)(iVar15 + 4);
      uVar20 = 0xb7a56463;
      iVar15 = uVar11 * -0x30e44324;
      break;
    default:
      uVar11 = (uint)(*(int *)(iVar19 + uVar2) * -0x61c8864f) >> (0x20 - uVar5 & 0xff);
      goto LAB_01bafd84;
    }
    uVar3 = uVar20 * iVar16 + iVar15 + (int)((ulonglong)uVar20 * (ulonglong)uVar11 >> 0x20);
    uVar11 = (uint)((ulonglong)uVar20 * (ulonglong)uVar11) >> (0x40 - uVar5 & 0xff) |
             uVar3 << (iVar4 - 0x22U & 0xff) | uVar3 >> (0x20 - uVar5 & 0xff);
LAB_01bafd84:
    if (uVar21 <= uVar2) {
      *(uint *)((int)puVar7 + uVar2 * 4 + uVar21 * -4 + iVar18) = puVar7[uVar11];
    }
    puVar7[uVar11] = uVar2;
  }
  iVar15 = 0;
  puVar12 = (uint *)((4 << (uVar5 & 0xff)) + (int)puVar7);
  puVar13 = puVar7;
  do {
    uVar11 = 0;
    puVar14 = puVar13 + 1;
    iVar16 = 0;
    for (uVar2 = *puVar13; iVar16 != 3 && uVar21 <= uVar2;
        uVar2 = *(uint *)((int)puVar7 + (uVar2 - uVar21) * 4 + iVar18)) {
      iVar16 = iVar16 + 1;
      if (uVar2 < local_38) {
        uVar11 = uVar11 + 1;
      }
    }
    uVar3 = 0;
    uVar20 = uVar3;
    if (iVar16 == 3) {
      puVar17 = (uint *)(iVar8 + iVar15 * 4);
      while ((uVar3 != uVar9 &&
             ((local_38 <= uVar2 || ((uVar2 != 0 && (uVar11 = uVar11 + 1, uVar11 < 4))))))) {
        iVar15 = iVar15 + 1;
        uVar3 = uVar3 + 1;
        *puVar17 = uVar2;
        if (uVar2 < uVar21) goto LAB_01baff58;
        puVar17 = puVar17 + 1;
        uVar2 = *(uint *)((int)puVar7 + (uVar2 - uVar21) * 4 + iVar18);
      }
      uVar20 = 0;
      if (uVar3 != 0) {
LAB_01baff58:
        uVar20 = iVar15 * 0x100 + uVar3 * -0xff;
      }
    }
    *puVar13 = uVar20;
    puVar13 = puVar14;
  } while (puVar12 != puVar14);
  puVar10 = (undefined4 *)((int)puVar7 + (0x10 << (uVar5 & 0xff)));
  while (puVar12 != puVar7) {
    puVar12 = puVar12 + -1;
    uVar2 = *puVar12;
    puVar10[-4] = 0;
    puVar10[-3] = 0;
    puVar10[-2] = 0;
    puVar10[-1] = uVar2;
    puVar10 = puVar10 + -4;
  }
  uVar2 = *(uint *)(param_1 + 0x1c);
  do {
    if (uVar6 <= uVar2) {
      *(uint *)(param_1 + 0x1c) = uVar6;
      return 0;
    }
    iVar8 = iVar19 + uVar2;
    switch(*(undefined4 *)(param_1 + 200)) {
    case 5:
      iVar8 = *(int *)(iVar8 + 4) * -0x45000000 + *(uint *)(iVar19 + uVar2) * -0x30e44324;
      lVar1 = (ulonglong)*(uint *)(iVar19 + uVar2) * 0xbb000000;
      goto LAB_01bafff4;
    case 6:
      uVar9 = *(uint *)(iVar19 + uVar2);
      iVar18 = *(int *)(iVar8 + 4);
      uVar21 = 0xbf9b0000;
      iVar8 = uVar9 * -0x30e44324;
      break;
    case 7:
      uVar9 = *(uint *)(iVar19 + uVar2);
      iVar18 = *(int *)(iVar8 + 4);
      uVar21 = 0xbfa56300;
      iVar8 = uVar9 * -0x30e44324;
      break;
    case 8:
      uVar9 = *(uint *)(iVar19 + uVar2);
      iVar18 = *(int *)(iVar8 + 4);
      uVar21 = 0xb7a56463;
      iVar8 = uVar9 * -0x30e44324;
      break;
    default:
      uVar9 = (uint)(*(int *)(iVar19 + uVar2) * -0x61c8864f) >> (0x20 - uVar5 & 0xff);
      goto LAB_01baffb4;
    }
    iVar8 = uVar21 * iVar18 + iVar8;
    lVar1 = (ulonglong)uVar21 * (ulonglong)uVar9;
LAB_01bafff4:
    uVar9 = iVar8 + (int)((ulonglong)lVar1 >> 0x20);
    uVar9 = (uint)lVar1 >> (0x40 - uVar5 & 0xff) | uVar9 << (iVar4 - 0x22U & 0xff) |
            uVar9 >> (0x20 - uVar5 & 0xff);
LAB_01baffb4:
    iVar8 = uVar9 * 4;
    puVar7[iVar8 + 0x40000002] = puVar7[iVar8 + 0x40000001];
    puVar7[iVar8 + 0x40000001] = puVar7[iVar8 + 0x40000000];
    puVar7[iVar8 + 0x40000000] = uVar2;
    uVar2 = uVar2 + 1;
  } while( true );
}

