// FUN_01b95384 @ 01b95384 size=1228 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01b95384(int param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  
  iVar12 = *(int *)(param_1 + 0xc0);
  iVar5 = *(int *)(param_1 + 0x5c);
  uVar6 = *(undefined4 *)(param_1 + 200);
  iVar7 = *(int *)(param_1 + 4);
  puVar8 = (uint *)(iVar7 + *(int *)(param_1 + 0x1c));
  if (param_4 == 1) {
    uVar13 = iVar12 - 0x18;
    iVar3 = -iVar12;
    uVar9 = iVar3 + 0x38;
    while ((uint *)((int)puVar8 + 3U) < (uint *)(param_2 + -6)) {
      switch(uVar6) {
      case 5:
        iVar10 = puVar8[1] * -0x45000000 + *puVar8 * -0x30e44324;
        lVar1 = (ulonglong)*puVar8 * 0xbb000000;
        break;
      case 6:
        lVar2 = (ulonglong)*puVar8 * 0xbf9b0000;
        lVar1 = CONCAT44(puVar8[1] * -0x40650000 + *puVar8 * -0x30e44324,(int)lVar2);
        iVar10 = (int)((ulonglong)lVar2 >> 0x20);
        break;
      case 7:
        lVar2 = (ulonglong)*puVar8 * 0xbfa56300;
        lVar1 = CONCAT44(puVar8[1] * -0x405a9d00 + *puVar8 * -0x30e44324,(int)lVar2);
        iVar10 = (int)((ulonglong)lVar2 >> 0x20);
        break;
      case 8:
        lVar2 = (ulonglong)*puVar8 * 0xb7a56463;
        lVar1 = CONCAT44(puVar8[1] * -0x485a9b9d + *puVar8 * -0x30e44324,(int)lVar2);
        iVar10 = (int)((ulonglong)lVar2 >> 0x20);
        break;
      default:
        uVar4 = *puVar8 * -0x61c8864f >> (0x18U - iVar12 & 0xff);
        goto LAB_01b954dc;
      }
      uVar4 = (int)((ulonglong)lVar1 >> 0x20) + iVar10;
      uVar4 = (uint)lVar1 >> (uVar9 & 0xff) | uVar4 << (uVar13 & 0xff) |
              uVar4 >> (iVar3 + 0x18U & 0xff);
LAB_01b954dc:
      *(uint *)(iVar5 + (uVar4 >> 8) * 4) = uVar4 & 0xff | ((int)puVar8 - iVar7) * 0x100;
      if (param_3 != 0) {
        iVar10 = 1;
        do {
          switch(uVar6) {
          case 5:
            lVar1 = (ulonglong)*(uint *)((int)puVar8 + iVar10) * 0xbb000000;
            uVar4 = *(int *)((int)puVar8 + iVar10 + 4) * -0x45000000 +
                    *(uint *)((int)puVar8 + iVar10) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
            uVar4 = (uint)lVar1 >> (uVar9 & 0xff) | uVar4 << (uVar13 & 0xff) |
                    uVar4 >> (iVar3 + 0x18U & 0xff);
            break;
          case 6:
            iVar11 = *(int *)((int)puVar8 + iVar10 + 4) * -0x40650000 +
                     *(uint *)((int)puVar8 + iVar10) * -0x30e44324;
            lVar1 = (ulonglong)*(uint *)((int)puVar8 + iVar10) * 0xbf9b0000;
            goto LAB_01b95650;
          case 7:
            iVar11 = *(int *)((int)puVar8 + iVar10 + 4) * -0x405a9d00 +
                     *(uint *)((int)puVar8 + iVar10) * -0x30e44324;
            lVar1 = (ulonglong)*(uint *)((int)puVar8 + iVar10) * 0xbfa56300;
LAB_01b95650:
            uVar4 = iVar11 + (int)((ulonglong)lVar1 >> 0x20);
            uVar4 = (uint)lVar1 >> (uVar9 & 0xff) | uVar4 << (uVar13 & 0xff) |
                    uVar4 >> (iVar3 + 0x18U & 0xff);
            break;
          case 8:
            lVar1 = (ulonglong)*(uint *)((int)puVar8 + iVar10) * 0xb7a56463;
            uVar4 = *(int *)((int)puVar8 + iVar10 + 4) * -0x485a9b9d +
                    *(uint *)((int)puVar8 + iVar10) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
            uVar4 = (uint)lVar1 >> (uVar9 & 0xff) | uVar4 << (uVar13 & 0xff) |
                    uVar4 >> (iVar3 + 0x18U & 0xff);
            break;
          default:
            uVar4 = (uint)(*(int *)((int)puVar8 + iVar10) * -0x61c8864f) >> (0x18U - iVar12 & 0xff);
          }
          if (*(int *)(iVar5 + (uVar4 >> 8) * 4) == 0) {
            *(uint *)(iVar5 + (uVar4 >> 8) * 4) =
                 uVar4 & 0xff | (((int)puVar8 - iVar7) + iVar10) * 0x100;
          }
          bVar14 = iVar10 != 2;
          iVar10 = 2;
        } while (bVar14);
      }
      puVar8 = (uint *)((int)puVar8 + 3U);
    }
  }
  else {
    uVar13 = iVar12 - 0x20;
    iVar3 = -iVar12;
    uVar9 = iVar3 + 0x40;
    while ((uint *)((int)puVar8 + 3U) < (uint *)(param_2 + -6)) {
      switch(uVar6) {
      case 5:
        iVar10 = puVar8[1] * -0x45000000 + *puVar8 * -0x30e44324;
        lVar1 = (ulonglong)*puVar8 * 0xbb000000;
        break;
      case 6:
        lVar2 = (ulonglong)*puVar8 * 0xbf9b0000;
        lVar1 = CONCAT44(puVar8[1] * -0x40650000 + *puVar8 * -0x30e44324,(int)lVar2);
        iVar10 = (int)((ulonglong)lVar2 >> 0x20);
        break;
      case 7:
        lVar2 = (ulonglong)*puVar8 * 0xbfa56300;
        lVar1 = CONCAT44(puVar8[1] * -0x405a9d00 + *puVar8 * -0x30e44324,(int)lVar2);
        iVar10 = (int)((ulonglong)lVar2 >> 0x20);
        break;
      case 8:
        lVar2 = (ulonglong)*puVar8 * 0xb7a56463;
        lVar1 = CONCAT44(puVar8[1] * -0x485a9b9d + *puVar8 * -0x30e44324,(int)lVar2);
        iVar10 = (int)((ulonglong)lVar2 >> 0x20);
        break;
      default:
        uVar4 = *puVar8 * -0x61c8864f >> (0x20U - iVar12 & 0xff);
        goto LAB_01b956c0;
      }
      uVar4 = (int)((ulonglong)lVar1 >> 0x20) + iVar10;
      uVar4 = (uint)lVar1 >> (uVar9 & 0xff) | uVar4 << (uVar13 & 0xff) |
              uVar4 >> (iVar3 + 0x20U & 0xff);
LAB_01b956c0:
      *(int *)(iVar5 + uVar4 * 4) = (int)puVar8 - iVar7;
      if (param_3 != 0) {
        iVar10 = 1;
        do {
          switch(uVar6) {
          case 5:
            lVar1 = (ulonglong)*(uint *)((int)puVar8 + iVar10) * 0xbb000000;
            uVar4 = *(int *)((int)puVar8 + iVar10 + 4) * -0x45000000 +
                    *(uint *)((int)puVar8 + iVar10) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
            uVar4 = (uint)lVar1 >> (uVar9 & 0xff) | uVar4 << (uVar13 & 0xff) |
                    uVar4 >> (iVar3 + 0x20U & 0xff);
            goto LAB_01b957a4;
          case 6:
            iVar11 = *(int *)((int)puVar8 + iVar10 + 4) * -0x40650000 +
                     *(uint *)((int)puVar8 + iVar10) * -0x30e44324;
            lVar1 = (ulonglong)*(uint *)((int)puVar8 + iVar10) * 0xbf9b0000;
            break;
          case 7:
            iVar11 = *(int *)((int)puVar8 + iVar10 + 4) * -0x405a9d00 +
                     *(uint *)((int)puVar8 + iVar10) * -0x30e44324;
            lVar1 = (ulonglong)*(uint *)((int)puVar8 + iVar10) * 0xbfa56300;
            break;
          case 8:
            iVar11 = *(int *)((int)puVar8 + iVar10 + 4) * -0x485a9b9d +
                     *(uint *)((int)puVar8 + iVar10) * -0x30e44324;
            lVar1 = (ulonglong)*(uint *)((int)puVar8 + iVar10) * 0xb7a56463;
            break;
          default:
            uVar4 = (uint)(*(int *)((int)puVar8 + iVar10) * -0x61c8864f) >> (0x20U - iVar12 & 0xff);
            goto LAB_01b957a4;
          }
          uVar4 = iVar11 + (int)((ulonglong)lVar1 >> 0x20);
          uVar4 = (uint)lVar1 >> (uVar9 & 0xff) | uVar4 << (uVar13 & 0xff) |
                  uVar4 >> (iVar3 + 0x20U & 0xff);
LAB_01b957a4:
          if (*(int *)(iVar5 + uVar4 * 4) == 0) {
            *(int *)(iVar5 + uVar4 * 4) = ((int)puVar8 - iVar7) + iVar10;
          }
          bVar14 = iVar10 != 2;
          iVar10 = 2;
        } while (bVar14);
      }
      puVar8 = (uint *)((int)puVar8 + 3U);
    }
  }
  return 0;
}

