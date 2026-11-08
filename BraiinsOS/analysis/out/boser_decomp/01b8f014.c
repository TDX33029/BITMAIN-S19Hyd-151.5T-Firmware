// FUN_01b8f014 @ 01b8f014 size=908 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01b8f014(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  
  iVar17 = *(int *)(param_1 + 0xc0);
  iVar10 = *(int *)(param_1 + 0xbc);
  iVar4 = *(int *)(param_1 + 0x5c);
  uVar5 = *(undefined4 *)(param_1 + 200);
  iVar6 = *(int *)(param_1 + 100);
  iVar7 = *(int *)(param_1 + 4);
  iVar8 = iVar7 + *(int *)(param_1 + 0x1c);
  if (param_4 == 1) {
    iVar1 = -iVar10;
    uVar2 = iVar1 + 0x38;
    uVar13 = iVar10 - 0x18;
    for (; iVar8 + 2U <= param_2 - 8U; iVar8 = iVar8 + 3) {
      iVar18 = 0;
      uVar3 = (iVar8 - iVar7) * 0x100;
      do {
        uVar11 = *(uint *)(iVar8 + iVar18);
        iVar14 = *(int *)(iVar8 + iVar18 + 4);
        uVar9 = (uint)((ulonglong)uVar11 * 0xb7a56463);
        uVar12 = iVar14 * -0x485a9b9d + uVar11 * -0x30e44324 +
                 (int)((ulonglong)uVar11 * 0xb7a56463 >> 0x20);
        switch(uVar5) {
        case 5:
          uVar16 = 0xbb000000;
          goto LAB_01b8f228;
        case 6:
          uVar16 = 0xbf9b0000;
LAB_01b8f228:
          uVar15 = uVar16 * iVar14 + uVar11 * -0x30e44324 +
                   (int)((ulonglong)uVar16 * (ulonglong)uVar11 >> 0x20);
          uVar11 = (uint)((ulonglong)uVar16 * (ulonglong)uVar11) >> (uVar2 & 0xff) |
                   uVar15 << (uVar13 & 0xff) | uVar15 >> (iVar1 + 0x18U & 0xff);
          break;
        case 7:
          uVar16 = iVar14 * -0x405a9d00 + uVar11 * -0x30e44324 +
                   (int)((ulonglong)uVar11 * 0xbfa56300 >> 0x20);
          uVar11 = (uint)((ulonglong)uVar11 * 0xbfa56300) >> (uVar2 & 0xff) |
                   uVar16 << (uVar13 & 0xff) | uVar16 >> (iVar1 + 0x18U & 0xff);
          break;
        case 8:
          uVar11 = uVar9 >> (uVar2 & 0xff) | uVar12 << (uVar13 & 0xff) |
                   uVar12 >> (iVar1 + 0x18U & 0xff);
          break;
        default:
          uVar11 = (uint)(*(int *)(iVar8 + iVar18) * -0x61c8864f) >> (0x18U - iVar10 & 0xff);
        }
        uVar9 = uVar9 >> (-iVar17 + 0x38U & 0xff) | uVar12 << (iVar17 - 0x18U & 0xff) |
                uVar12 >> (-iVar17 + 0x18U & 0xff);
        if (iVar18 == 0) {
          *(uint *)(iVar6 + (uVar11 >> 8) * 4) = uVar11 & 0xff | (iVar8 - iVar7) * 0x100;
LAB_01b8f2a8:
          *(uint *)(iVar4 + (uVar9 >> 8) * 4) = uVar9 & 0xff | uVar3;
        }
        else if (*(int *)(iVar4 + (uVar9 >> 8) * 4) == 0) goto LAB_01b8f2a8;
        if (param_3 == 0) break;
        iVar18 = iVar18 + 1;
        uVar3 = uVar3 + 0x100;
      } while (iVar18 != 3);
    }
  }
  else {
    iVar1 = -iVar10;
    uVar2 = iVar1 + 0x40;
    uVar13 = iVar10 - 0x20;
    for (; iVar8 + 2U <= param_2 - 8U; iVar8 = iVar8 + 3) {
      iVar18 = 0;
      do {
        uVar9 = *(uint *)(iVar8 + iVar18);
        iVar14 = *(int *)(iVar8 + iVar18 + 4);
        uVar3 = (uint)((ulonglong)uVar9 * 0xb7a56463);
        uVar11 = iVar14 * -0x485a9b9d + uVar9 * -0x30e44324 +
                 (int)((ulonglong)uVar9 * 0xb7a56463 >> 0x20);
        switch(uVar5) {
        case 5:
          uVar12 = 0xbb000000;
          goto LAB_01b8f328;
        case 6:
          uVar12 = 0xbf9b0000;
LAB_01b8f328:
          uVar16 = uVar12 * iVar14 + uVar9 * -0x30e44324 +
                   (int)((ulonglong)uVar12 * (ulonglong)uVar9 >> 0x20);
          uVar9 = (uint)((ulonglong)uVar12 * (ulonglong)uVar9) >> (uVar2 & 0xff) |
                  uVar16 << (uVar13 & 0xff) | uVar16 >> (iVar1 + 0x20U & 0xff);
          break;
        case 7:
          uVar12 = iVar14 * -0x405a9d00 + uVar9 * -0x30e44324 +
                   (int)((ulonglong)uVar9 * 0xbfa56300 >> 0x20);
          uVar9 = (uint)((ulonglong)uVar9 * 0xbfa56300) >> (uVar2 & 0xff) |
                  uVar12 << (uVar13 & 0xff) | uVar12 >> (iVar1 + 0x20U & 0xff);
          break;
        case 8:
          uVar9 = uVar3 >> (uVar2 & 0xff) | uVar11 << (uVar13 & 0xff) |
                  uVar11 >> (iVar1 + 0x20U & 0xff);
          break;
        default:
          uVar9 = (uint)(*(int *)(iVar8 + iVar18) * -0x61c8864f) >> (0x20U - iVar10 & 0xff);
        }
        uVar3 = uVar3 >> (-iVar17 + 0x40U & 0xff) | uVar11 << (iVar17 - 0x20U & 0xff) |
                uVar11 >> (-iVar17 + 0x20U & 0xff);
        if (iVar18 == 0) {
          *(int *)(iVar6 + uVar9 * 4) = iVar8 - iVar7;
LAB_01b8f398:
          *(int *)(iVar4 + uVar3 * 4) = (iVar8 - iVar7) + iVar18;
        }
        else if (*(int *)(iVar4 + uVar3 * 4) == 0) goto LAB_01b8f398;
      } while ((param_3 != 0) && (iVar18 = iVar18 + 1, iVar18 != 3));
    }
  }
  return 0;
}

