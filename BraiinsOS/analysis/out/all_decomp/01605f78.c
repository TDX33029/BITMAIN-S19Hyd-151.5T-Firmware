// FUN_01605f78 @ 01605f78 size=776 calls_out=3 calls_in=1
// strings: 

longlong FUN_01605f78(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x25);
  if (uVar1 != 0) goto LAB_01605f98;
  uVar1 = *(uint *)(param_1 + 8);
  uVar12 = *(uint *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 4);
  if ((uVar12 <= uVar1) && (uVar9 = *(uint *)(param_1 + 0xc), uVar9 <= uVar12)) {
    uVar3 = (uint)*(byte *)(param_1 + 0x18);
    uVar11 = (uint)*(byte *)(param_1 + 0x14 + uVar3 + -1);
    if (uVar3 < 5) {
      do {
        uVar4 = uVar12 - uVar9;
        iVar8 = iVar2 + uVar9;
        if (uVar4 < 8) {
          if (uVar12 == uVar9) goto LAB_01606238;
          uVar10 = 0;
          while (*(byte *)(iVar8 + uVar10) != uVar11) {
            uVar10 = uVar10 + 1;
            if (uVar4 == uVar10) goto LAB_01606238;
          }
        }
        else {
          uVar5 = (iVar8 + 3U & 0xfffffffc) - iVar8;
          if (uVar5 == 0) {
            uVar5 = 0;
            do {
              uVar7 = *(uint *)(iVar8 + uVar5) ^ uVar11 * 0x1010101;
              uVar10 = ((uint *)(iVar8 + uVar5))[1] ^ uVar11 * 0x1010101;
              if (((0x1010100 - uVar7 | uVar7) & 0x80808080 & (0x1010100 - uVar10 | uVar10)) !=
                  0x80808080) break;
              uVar5 = uVar5 + 8;
LAB_01606080:
            } while (uVar5 <= uVar4 - 8);
            if (uVar4 == uVar5) goto LAB_01606238;
            iVar6 = 0;
            while (*(byte *)(iVar8 + uVar5 + iVar6) != uVar11) {
              iVar6 = iVar6 + 1;
              if ((uVar12 - uVar5) - uVar9 == iVar6) goto LAB_01606238;
            }
            uVar10 = iVar6 + uVar5;
          }
          else {
            uVar10 = 0;
            while (*(byte *)(iVar8 + uVar10) != uVar11) {
              uVar10 = uVar10 + 1;
              if (uVar5 == uVar10) goto LAB_01606080;
            }
          }
        }
        uVar9 = uVar9 + uVar10 + 1;
        *(uint *)(param_1 + 0xc) = uVar9;
        if (((uVar3 <= uVar9) && (uVar9 <= uVar1)) &&
           (iVar8 = thunk_FUN_016dd50a(iVar2 + (uVar9 - uVar3),param_1 + 0x14), iVar8 == 0)) {
          iVar8 = *(int *)(param_1 + 0x1c);
          *(uint *)(param_1 + 0x1c) = uVar9;
          return CONCAT44(uVar9 - iVar8,iVar2 + iVar8);
        }
      } while (uVar9 <= uVar12);
    }
    else {
      do {
        uVar4 = uVar12 - uVar9;
        if (uVar4 < 8) {
          uVar5 = 0;
          if (uVar4 == 0) {
            uVar13 = 0;
          }
          else {
            do {
              if (*(byte *)(iVar2 + uVar9 + uVar5) == uVar11) {
                uVar13 = CONCAT44(uVar5,1);
                goto LAB_016061f8;
              }
              uVar5 = uVar5 + 1;
            } while (uVar4 != uVar5);
            uVar13 = (ulonglong)uVar4 << 0x20;
          }
        }
        else {
          uVar13 = FUN_00fb727c(uVar11,iVar2 + uVar9);
        }
LAB_016061f8:
        if ((uVar13 & 1) == 0) goto LAB_01606238;
        uVar9 = uVar9 + (int)(uVar13 >> 0x20) + 1;
        *(uint *)(param_1 + 0xc) = uVar9;
        if ((uVar3 <= uVar9) && (uVar9 <= uVar1)) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar3,4,&DAT_018af1a8);
        }
      } while (uVar9 <= uVar12);
    }
  }
  goto LAB_0160623c;
LAB_01606238:
  *(uint *)(param_1 + 0xc) = uVar12;
LAB_0160623c:
  uVar1 = (uint)*(byte *)(param_1 + 0x24);
  *(undefined1 *)(param_1 + 0x25) = 1;
  if (uVar1 == 1) {
    iVar8 = *(int *)(param_1 + 0x1c);
    iVar6 = *(int *)(param_1 + 0x20);
  }
  else {
    iVar8 = *(int *)(param_1 + 0x1c);
    iVar6 = *(int *)(param_1 + 0x20);
    if (iVar6 == iVar8) {
LAB_01605f98:
      return (ulonglong)uVar1 << 0x20;
    }
  }
  return CONCAT44(iVar6 - iVar8,iVar2 + iVar8);
}

