// FUN_015bb1b4 @ 015bb1b4 size=796 calls_out=3 calls_in=20
// strings: 

longlong FUN_015bb1b4(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x25);
  if (uVar1 != 0) goto LAB_015bb1d4;
  uVar1 = *(uint *)(param_1 + 8);
  uVar12 = *(uint *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 4);
  if ((uVar12 <= uVar1) && (uVar5 = *(uint *)(param_1 + 0xc), uVar5 <= uVar12)) {
    uVar3 = (uint)*(byte *)(param_1 + 0x18);
    uVar11 = (uint)*(byte *)(param_1 + 0x14 + uVar3 + -1);
    if (uVar3 < 5) {
      do {
        uVar4 = uVar12 - uVar5;
        iVar9 = iVar2 + uVar5;
        if (uVar4 < 8) {
          if (uVar12 == uVar5) goto LAB_015bb488;
          uVar10 = 0;
          while (*(byte *)(iVar9 + uVar10) != uVar11) {
            uVar10 = uVar10 + 1;
            if (uVar4 == uVar10) goto LAB_015bb488;
          }
        }
        else {
          uVar6 = (iVar9 + 3U & 0xfffffffc) - iVar9;
          if (uVar6 == 0) {
            uVar6 = 0;
            do {
              uVar8 = *(uint *)(iVar9 + uVar6) ^ uVar11 * 0x1010101;
              uVar10 = ((uint *)(iVar9 + uVar6))[1] ^ uVar11 * 0x1010101;
              if (((0x1010100 - uVar8 | uVar8) & 0x80808080 & (0x1010100 - uVar10 | uVar10)) !=
                  0x80808080) break;
              uVar6 = uVar6 + 8;
LAB_015bb2bc:
            } while (uVar6 <= uVar4 - 8);
            if (uVar4 == uVar6) goto LAB_015bb488;
            iVar7 = 0;
            while (*(byte *)(iVar9 + uVar6 + iVar7) != uVar11) {
              iVar7 = iVar7 + 1;
              if ((uVar12 - uVar6) - uVar5 == iVar7) goto LAB_015bb488;
            }
            uVar10 = iVar7 + uVar6;
          }
          else {
            uVar10 = 0;
            while (*(byte *)(iVar9 + uVar10) != uVar11) {
              uVar10 = uVar10 + 1;
              if (uVar6 == uVar10) goto LAB_015bb2bc;
            }
          }
        }
        uVar5 = uVar5 + uVar10 + 1;
        *(uint *)(param_1 + 0xc) = uVar5;
        if ((uVar3 <= uVar5) && (uVar5 <= uVar1)) {
          iVar9 = thunk_FUN_016dd50a(iVar2 + (uVar5 - uVar3),param_1 + 0x14);
          if (iVar9 == 0) {
            iVar9 = *(int *)(param_1 + 0x1c);
            *(uint *)(param_1 + 0x1c) = uVar5;
            return CONCAT44((uVar5 - uVar3) - iVar9,iVar2 + iVar9);
          }
        }
      } while (uVar5 <= uVar12);
    }
    else {
      do {
        uVar4 = uVar12 - uVar5;
        if (uVar4 < 8) {
          uVar6 = 0;
          if (uVar4 == 0) {
            uVar13 = 0;
          }
          else {
            do {
              if (*(byte *)(iVar2 + uVar5 + uVar6) == uVar11) {
                uVar13 = CONCAT44(uVar6,1);
                goto LAB_015bb448;
              }
              uVar6 = uVar6 + 1;
            } while (uVar4 != uVar6);
            uVar13 = (ulonglong)uVar4 << 0x20;
          }
        }
        else {
          uVar13 = FUN_00fb727c(uVar11,iVar2 + uVar5);
        }
LAB_015bb448:
        if ((uVar13 & 1) == 0) goto LAB_015bb488;
        uVar5 = uVar5 + (int)(uVar13 >> 0x20) + 1;
        *(uint *)(param_1 + 0xc) = uVar5;
        if ((uVar3 <= uVar5) && (uVar5 <= uVar1)) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar3,4,&DAT_018af1a8);
        }
      } while (uVar5 <= uVar12);
    }
  }
  goto LAB_015bb48c;
LAB_015bb488:
  *(uint *)(param_1 + 0xc) = uVar12;
LAB_015bb48c:
  uVar1 = (uint)*(byte *)(param_1 + 0x24);
  *(undefined1 *)(param_1 + 0x25) = 1;
  if (uVar1 == 1) {
    iVar9 = *(int *)(param_1 + 0x1c);
    iVar7 = *(int *)(param_1 + 0x20);
  }
  else {
    iVar9 = *(int *)(param_1 + 0x1c);
    iVar7 = *(int *)(param_1 + 0x20);
    if (iVar7 == iVar9) {
LAB_015bb1d4:
      return (ulonglong)uVar1 << 0x20;
    }
  }
  return CONCAT44(iVar7 - iVar9,iVar2 + iVar9);
}

