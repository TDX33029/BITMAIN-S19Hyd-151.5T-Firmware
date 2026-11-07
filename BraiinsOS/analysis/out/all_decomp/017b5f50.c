// FUN_017b5f50 @ 017b5f50 size=2412 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_017b5f50(int param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  
  uVar9 = param_2 - 6;
  iVar11 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 0xc0);
  uVar7 = iVar11 + *(int *)(param_1 + 0x1c) + 3;
  iVar6 = *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 200);
  if (param_4 == 1) {
    if (uVar7 < uVar9) {
      if (iVar2 == 5) {
        uVar8 = 0x38 - iVar3;
        uVar10 = iVar3 - 0x18;
        uVar4 = 0x18 - iVar3;
        do {
          iVar2 = (uVar7 - 3) - iVar11;
          lVar1 = (ulonglong)*(uint *)(uVar7 - 3) * 0xbb000000;
          uVar13 = *(int *)(uVar7 + 1) * -0x45000000 + *(uint *)(uVar7 - 3) * -0x30e44324 +
                   (int)((ulonglong)lVar1 >> 0x20);
          uVar13 = (uint)lVar1 >> (uVar8 & 0xff) | uVar13 << (uVar10 & 0xff) |
                   uVar13 >> (uVar4 & 0xff);
          *(uint *)(iVar6 + (uVar13 >> 8) * 4) = uVar13 & 0xff | iVar2 * 0x100;
          if (param_3 != 0) {
            lVar1 = (ulonglong)*(uint *)(uVar7 - 2) * 0xbb000000;
            uVar13 = *(int *)(uVar7 + 2) * -0x45000000 + *(uint *)(uVar7 - 2) * -0x30e44324 +
                     (int)((ulonglong)lVar1 >> 0x20);
            uVar12 = (uint)lVar1 >> (uVar8 & 0xff) | uVar13 << (uVar10 & 0xff) |
                     uVar13 >> (uVar4 & 0xff);
            uVar13 = uVar12 >> 8;
            uVar5 = *(uint *)(uVar7 - 1);
            iVar3 = *(int *)(uVar7 + 3);
            if (*(int *)(iVar6 + uVar13 * 4) == 0) {
              *(uint *)(iVar6 + uVar13 * 4) = uVar12 & 0xff | (iVar2 + 1) * 0x100;
            }
            lVar1 = (ulonglong)uVar5 * 0xbb000000;
            uVar13 = iVar3 * -0x45000000 + uVar5 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
            uVar12 = (uint)lVar1 >> (uVar8 & 0xff) | uVar13 << (uVar10 & 0xff) |
                     uVar13 >> (uVar4 & 0xff);
            uVar13 = uVar12 >> 8;
            if (*(int *)(iVar6 + uVar13 * 4) == 0) {
              *(uint *)(iVar6 + uVar13 * 4) = uVar12 & 0xff | (iVar2 + 2) * 0x100;
            }
          }
          uVar7 = uVar7 + 3;
        } while (uVar7 < uVar9);
      }
      else if (iVar2 == 6) {
        uVar8 = 0x38 - iVar3;
        uVar10 = iVar3 - 0x18;
        uVar4 = 0x18 - iVar3;
        do {
          iVar2 = (uVar7 - 3) - iVar11;
          lVar1 = (ulonglong)*(uint *)(uVar7 - 3) * 0xbf9b0000;
          uVar13 = *(int *)(uVar7 + 1) * -0x40650000 + *(uint *)(uVar7 - 3) * -0x30e44324 +
                   (int)((ulonglong)lVar1 >> 0x20);
          uVar13 = (uint)lVar1 >> (uVar8 & 0xff) | uVar13 << (uVar10 & 0xff) |
                   uVar13 >> (uVar4 & 0xff);
          *(uint *)(iVar6 + (uVar13 >> 8) * 4) = uVar13 & 0xff | iVar2 * 0x100;
          if (param_3 != 0) {
            lVar1 = (ulonglong)*(uint *)(uVar7 - 2) * 0xbf9b0000;
            uVar13 = *(int *)(uVar7 + 2) * -0x40650000 + *(uint *)(uVar7 - 2) * -0x30e44324 +
                     (int)((ulonglong)lVar1 >> 0x20);
            uVar12 = (uint)lVar1 >> (uVar8 & 0xff) | uVar13 << (uVar10 & 0xff) |
                     uVar13 >> (uVar4 & 0xff);
            uVar13 = uVar12 >> 8;
            if (*(int *)(iVar6 + uVar13 * 4) == 0) {
              *(uint *)(iVar6 + uVar13 * 4) = uVar12 & 0xff | (iVar2 + 1) * 0x100;
            }
            lVar1 = (ulonglong)*(uint *)(uVar7 - 1) * 0xbf9b0000;
            uVar13 = *(int *)(uVar7 + 3) * -0x40650000 + *(uint *)(uVar7 - 1) * -0x30e44324 +
                     (int)((ulonglong)lVar1 >> 0x20);
            uVar12 = (uint)lVar1 >> (uVar8 & 0xff) | uVar13 << (uVar10 & 0xff) |
                     uVar13 >> (uVar4 & 0xff);
            uVar13 = uVar12 >> 8;
            if (*(int *)(iVar6 + uVar13 * 4) == 0) {
              *(uint *)(iVar6 + uVar13 * 4) = uVar12 & 0xff | (iVar2 + 2) * 0x100;
            }
          }
          uVar7 = uVar7 + 3;
        } while (uVar7 < uVar9);
      }
      else if (iVar2 == 7) {
        uVar8 = 0x38 - iVar3;
        uVar10 = iVar3 - 0x18;
        uVar4 = 0x18 - iVar3;
        do {
          iVar2 = (uVar7 - 3) - iVar11;
          lVar1 = (ulonglong)*(uint *)(uVar7 - 3) * 0xbfa56300;
          uVar13 = *(int *)(uVar7 + 1) * -0x405a9d00 + *(uint *)(uVar7 - 3) * -0x30e44324 +
                   (int)((ulonglong)lVar1 >> 0x20);
          uVar13 = (uint)lVar1 >> (uVar8 & 0xff) | uVar13 << (uVar10 & 0xff) |
                   uVar13 >> (uVar4 & 0xff);
          *(uint *)(iVar6 + (uVar13 >> 8) * 4) = uVar13 & 0xff | iVar2 * 0x100;
          if (param_3 != 0) {
            lVar1 = (ulonglong)*(uint *)(uVar7 - 2) * 0xbfa56300;
            uVar13 = *(int *)(uVar7 + 2) * -0x405a9d00 + *(uint *)(uVar7 - 2) * -0x30e44324 +
                     (int)((ulonglong)lVar1 >> 0x20);
            uVar12 = (uint)lVar1 >> (uVar8 & 0xff) | uVar13 << (uVar10 & 0xff) |
                     uVar13 >> (uVar4 & 0xff);
            uVar13 = uVar12 >> 8;
            uVar5 = *(uint *)(uVar7 - 1);
            iVar3 = *(int *)(uVar7 + 3);
            if (*(int *)(iVar6 + uVar13 * 4) == 0) {
              *(uint *)(iVar6 + uVar13 * 4) = uVar12 & 0xff | (iVar2 + 1) * 0x100;
            }
            lVar1 = (ulonglong)uVar5 * 0xbfa56300;
            uVar13 = iVar3 * -0x405a9d00 + uVar5 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
            uVar12 = (uint)lVar1 >> (uVar8 & 0xff) | uVar13 << (uVar10 & 0xff) |
                     uVar13 >> (uVar4 & 0xff);
            uVar13 = uVar12 >> 8;
            if (*(int *)(iVar6 + uVar13 * 4) == 0) {
              *(uint *)(iVar6 + uVar13 * 4) = uVar12 & 0xff | (iVar2 + 2) * 0x100;
            }
          }
          uVar7 = uVar7 + 3;
        } while (uVar7 < uVar9);
      }
      else if (iVar2 == 8) {
        uVar8 = 0x38 - iVar3;
        uVar10 = iVar3 - 0x18;
        uVar4 = 0x18 - iVar3;
        do {
          iVar2 = (uVar7 - 3) - iVar11;
          lVar1 = (ulonglong)*(uint *)(uVar7 - 3) * 0xb7a56463;
          uVar13 = *(int *)(uVar7 + 1) * -0x485a9b9d + *(uint *)(uVar7 - 3) * -0x30e44324 +
                   (int)((ulonglong)lVar1 >> 0x20);
          uVar13 = (uint)lVar1 >> (uVar8 & 0xff) | uVar13 << (uVar10 & 0xff) |
                   uVar13 >> (uVar4 & 0xff);
          *(uint *)(iVar6 + (uVar13 >> 8) * 4) = uVar13 & 0xff | iVar2 * 0x100;
          if (param_3 != 0) {
            lVar1 = (ulonglong)*(uint *)(uVar7 - 2) * 0xb7a56463;
            uVar13 = *(int *)(uVar7 + 2) * -0x485a9b9d + *(uint *)(uVar7 - 2) * -0x30e44324 +
                     (int)((ulonglong)lVar1 >> 0x20);
            uVar12 = (uint)lVar1 >> (uVar8 & 0xff) | uVar13 << (uVar10 & 0xff) |
                     uVar13 >> (uVar4 & 0xff);
            uVar13 = uVar12 >> 8;
            if (*(int *)(iVar6 + uVar13 * 4) == 0) {
              *(uint *)(iVar6 + uVar13 * 4) = uVar12 & 0xff | (iVar2 + 1) * 0x100;
            }
            lVar1 = (ulonglong)*(uint *)(uVar7 - 1) * 0xb7a56463;
            uVar13 = *(int *)(uVar7 + 3) * -0x485a9b9d + *(uint *)(uVar7 - 1) * -0x30e44324 +
                     (int)((ulonglong)lVar1 >> 0x20);
            uVar12 = (uint)lVar1 >> (uVar8 & 0xff) | uVar13 << (uVar10 & 0xff) |
                     uVar13 >> (uVar4 & 0xff);
            uVar13 = uVar12 >> 8;
            if (*(int *)(iVar6 + uVar13 * 4) == 0) {
              *(uint *)(iVar6 + uVar13 * 4) = uVar12 & 0xff | (iVar2 + 2) * 0x100;
            }
          }
          uVar7 = uVar7 + 3;
        } while (uVar7 < uVar9);
      }
      else {
        uVar4 = 0x18 - iVar3;
        do {
          iVar2 = (uVar7 - 3) - iVar11;
          uVar8 = (uint)(*(int *)(uVar7 - 3) * -0x61c8864f) >> (uVar4 & 0xff);
          *(uint *)(iVar6 + (uVar8 >> 8) * 4) = uVar8 & 0xff | iVar2 * 0x100;
          if (param_3 != 0) {
            uVar10 = (uint)(*(int *)(uVar7 - 2) * -0x61c8864f) >> (uVar4 & 0xff);
            uVar8 = uVar10 >> 8;
            if (*(int *)(iVar6 + uVar8 * 4) == 0) {
              *(uint *)(iVar6 + uVar8 * 4) = uVar10 & 0xff | (iVar2 + 1) * 0x100;
            }
            uVar10 = (uint)(*(int *)(uVar7 - 1) * -0x61c8864f) >> (uVar4 & 0xff);
            uVar8 = uVar10 >> 8;
            if (*(int *)(iVar6 + uVar8 * 4) == 0) {
              *(uint *)(iVar6 + uVar8 * 4) = uVar10 & 0xff | (iVar2 + 2) * 0x100;
            }
          }
          uVar7 = uVar7 + 3;
        } while (uVar7 < uVar9);
      }
    }
  }
  else if (uVar7 < uVar9) {
    if (iVar2 == 5) {
      uVar4 = 0x40 - iVar3;
      uVar10 = iVar3 - 0x20;
      uVar8 = 0x20 - iVar3;
      do {
        uVar13 = uVar7 + 3;
        iVar2 = (uVar7 - 3) - iVar11;
        lVar1 = (ulonglong)*(uint *)(uVar7 - 3) * 0xbb000000;
        uVar12 = *(int *)(uVar7 + 1) * -0x45000000 + *(uint *)(uVar7 - 3) * -0x30e44324 +
                 (int)((ulonglong)lVar1 >> 0x20);
        *(int *)(iVar6 + ((uint)lVar1 >> (uVar4 & 0xff) | uVar12 << (uVar10 & 0xff) |
                         uVar12 >> (uVar8 & 0xff)) * 4) = iVar2;
        if (param_3 != 0) {
          lVar1 = (ulonglong)*(uint *)(uVar7 - 2) * 0xbb000000;
          uVar12 = *(int *)(uVar7 + 2) * -0x45000000 + *(uint *)(uVar7 - 2) * -0x30e44324 +
                   (int)((ulonglong)lVar1 >> 0x20);
          uVar12 = (uint)lVar1 >> (uVar4 & 0xff) | uVar12 << (uVar10 & 0xff) |
                   uVar12 >> (uVar8 & 0xff);
          if (*(int *)(iVar6 + uVar12 * 4) == 0) {
            *(int *)(iVar6 + uVar12 * 4) = iVar2 + 1;
          }
          lVar1 = (ulonglong)*(uint *)(uVar7 - 1) * 0xbb000000;
          uVar7 = *(int *)(uVar7 + 3) * -0x45000000 + *(uint *)(uVar7 - 1) * -0x30e44324 +
                  (int)((ulonglong)lVar1 >> 0x20);
          uVar7 = (uint)lVar1 >> (uVar4 & 0xff) | uVar7 << (uVar10 & 0xff) | uVar7 >> (uVar8 & 0xff)
          ;
          if (*(int *)(iVar6 + uVar7 * 4) == 0) {
            *(int *)(iVar6 + uVar7 * 4) = iVar2 + 2;
          }
        }
        uVar7 = uVar13;
      } while (uVar13 < uVar9);
    }
    else if (iVar2 == 6) {
      uVar4 = 0x40 - iVar3;
      uVar10 = iVar3 - 0x20;
      uVar8 = 0x20 - iVar3;
      do {
        iVar2 = (uVar7 - 3) - iVar11;
        lVar1 = (ulonglong)*(uint *)(uVar7 - 3) * 0xbf9b0000;
        uVar13 = *(int *)(uVar7 + 1) * -0x40650000 + *(uint *)(uVar7 - 3) * -0x30e44324 +
                 (int)((ulonglong)lVar1 >> 0x20);
        *(int *)(iVar6 + ((uint)lVar1 >> (uVar4 & 0xff) | uVar13 << (uVar10 & 0xff) |
                         uVar13 >> (uVar8 & 0xff)) * 4) = iVar2;
        if (param_3 != 0) {
          lVar1 = (ulonglong)*(uint *)(uVar7 - 2) * 0xbf9b0000;
          uVar13 = *(int *)(uVar7 + 2) * -0x40650000 + *(uint *)(uVar7 - 2) * -0x30e44324 +
                   (int)((ulonglong)lVar1 >> 0x20);
          uVar13 = (uint)lVar1 >> (uVar4 & 0xff) | uVar13 << (uVar10 & 0xff) |
                   uVar13 >> (uVar8 & 0xff);
          if (*(int *)(iVar6 + uVar13 * 4) == 0) {
            *(int *)(iVar6 + uVar13 * 4) = iVar2 + 1;
          }
          lVar1 = (ulonglong)*(uint *)(uVar7 - 1) * 0xbf9b0000;
          uVar13 = *(int *)(uVar7 + 3) * -0x40650000 + *(uint *)(uVar7 - 1) * -0x30e44324 +
                   (int)((ulonglong)lVar1 >> 0x20);
          uVar13 = (uint)lVar1 >> (uVar4 & 0xff) | uVar13 << (uVar10 & 0xff) |
                   uVar13 >> (uVar8 & 0xff);
          if (*(int *)(iVar6 + uVar13 * 4) == 0) {
            *(int *)(iVar6 + uVar13 * 4) = iVar2 + 2;
          }
        }
        uVar7 = uVar7 + 3;
      } while (uVar7 < uVar9);
    }
    else if (iVar2 == 7) {
      uVar4 = 0x40 - iVar3;
      uVar8 = iVar3 - 0x20;
      uVar10 = 0x20 - iVar3;
      do {
        uVar13 = uVar7 + 3;
        iVar2 = (uVar7 - 3) - iVar11;
        lVar1 = (ulonglong)*(uint *)(uVar7 - 3) * 0xbfa56300;
        uVar12 = *(int *)(uVar7 + 1) * -0x405a9d00 + *(uint *)(uVar7 - 3) * -0x30e44324 +
                 (int)((ulonglong)lVar1 >> 0x20);
        *(int *)(iVar6 + ((uint)lVar1 >> (uVar4 & 0xff) | uVar12 << (uVar8 & 0xff) |
                         uVar12 >> (uVar10 & 0xff)) * 4) = iVar2;
        if (param_3 != 0) {
          lVar1 = (ulonglong)*(uint *)(uVar7 - 2) * 0xbfa56300;
          uVar12 = *(int *)(uVar7 + 2) * -0x405a9d00 + *(uint *)(uVar7 - 2) * -0x30e44324 +
                   (int)((ulonglong)lVar1 >> 0x20);
          uVar12 = (uint)lVar1 >> (uVar4 & 0xff) | uVar12 << (uVar8 & 0xff) |
                   uVar12 >> (uVar10 & 0xff);
          if (*(int *)(iVar6 + uVar12 * 4) == 0) {
            *(int *)(iVar6 + uVar12 * 4) = iVar2 + 1;
          }
          lVar1 = (ulonglong)*(uint *)(uVar7 - 1) * 0xbfa56300;
          uVar7 = *(int *)(uVar7 + 3) * -0x405a9d00 + *(uint *)(uVar7 - 1) * -0x30e44324 +
                  (int)((ulonglong)lVar1 >> 0x20);
          uVar7 = (uint)lVar1 >> (uVar4 & 0xff) | uVar7 << (uVar8 & 0xff) | uVar7 >> (uVar10 & 0xff)
          ;
          if (*(int *)(iVar6 + uVar7 * 4) == 0) {
            *(int *)(iVar6 + uVar7 * 4) = iVar2 + 2;
          }
        }
        uVar7 = uVar13;
      } while (uVar13 < uVar9);
    }
    else if (iVar2 == 8) {
      uVar4 = 0x40 - iVar3;
      uVar8 = iVar3 - 0x20;
      uVar10 = 0x20 - iVar3;
      do {
        iVar2 = (uVar7 - 3) - iVar11;
        lVar1 = (ulonglong)*(uint *)(uVar7 - 3) * 0xb7a56463;
        uVar13 = *(int *)(uVar7 + 1) * -0x485a9b9d + *(uint *)(uVar7 - 3) * -0x30e44324 +
                 (int)((ulonglong)lVar1 >> 0x20);
        *(int *)(iVar6 + ((uint)lVar1 >> (uVar4 & 0xff) | uVar13 << (uVar8 & 0xff) |
                         uVar13 >> (uVar10 & 0xff)) * 4) = iVar2;
        if (param_3 != 0) {
          lVar1 = (ulonglong)*(uint *)(uVar7 - 2) * 0xb7a56463;
          uVar13 = *(int *)(uVar7 + 2) * -0x485a9b9d + *(uint *)(uVar7 - 2) * -0x30e44324 +
                   (int)((ulonglong)lVar1 >> 0x20);
          uVar13 = (uint)lVar1 >> (uVar4 & 0xff) | uVar13 << (uVar8 & 0xff) |
                   uVar13 >> (uVar10 & 0xff);
          if (*(int *)(iVar6 + uVar13 * 4) == 0) {
            *(int *)(iVar6 + uVar13 * 4) = iVar2 + 1;
          }
          lVar1 = (ulonglong)*(uint *)(uVar7 - 1) * 0xb7a56463;
          uVar13 = *(int *)(uVar7 + 3) * -0x485a9b9d + *(uint *)(uVar7 - 1) * -0x30e44324 +
                   (int)((ulonglong)lVar1 >> 0x20);
          uVar13 = (uint)lVar1 >> (uVar4 & 0xff) | uVar13 << (uVar8 & 0xff) |
                   uVar13 >> (uVar10 & 0xff);
          if (*(int *)(iVar6 + uVar13 * 4) == 0) {
            *(int *)(iVar6 + uVar13 * 4) = iVar2 + 2;
          }
        }
        uVar7 = uVar7 + 3;
      } while (uVar7 < uVar9);
    }
    else {
      uVar4 = 0x20 - iVar3;
      do {
        while( true ) {
          iVar2 = (uVar7 - 3) - iVar11;
          uVar8 = uVar7 + 3;
          *(int *)(iVar6 + ((uint)(*(int *)(uVar7 - 3) * -0x61c8864f) >> (uVar4 & 0xff)) * 4) =
               iVar2;
          if (param_3 == 0) break;
          uVar10 = (uint)(*(int *)(uVar7 - 2) * -0x61c8864f) >> (uVar4 & 0xff);
          if (*(int *)(iVar6 + uVar10 * 4) == 0) {
            *(int *)(iVar6 + uVar10 * 4) = iVar2 + 1;
          }
          uVar7 = (uint)(*(int *)(uVar7 - 1) * -0x61c8864f) >> (uVar4 & 0xff);
          if (*(int *)(iVar6 + uVar7 * 4) == 0) {
            *(int *)(iVar6 + uVar7 * 4) = iVar2 + 2;
          }
          uVar7 = uVar8;
          if (uVar9 <= uVar8) {
            return 0;
          }
        }
        uVar7 = uVar8;
      } while (uVar8 < uVar9);
    }
  }
  return 0;
}

