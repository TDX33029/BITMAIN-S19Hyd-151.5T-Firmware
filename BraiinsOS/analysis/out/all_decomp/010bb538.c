// FUN_010bb538 @ 010bb538 size=776 calls_out=4 calls_in=1
// strings: 

undefined4 FUN_010bb538(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  
  if (*(char *)(param_1 + 0x25) != '\0') {
    return 0;
  }
  iVar7 = *(int *)(param_1 + 4);
  uVar9 = *(uint *)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 8);
  if ((uVar9 <= uVar2) && (uVar11 = *(uint *)(param_1 + 0xc), uVar11 <= uVar9)) {
    uVar3 = (uint)*(byte *)(param_1 + 0x18);
    uVar13 = (uint)*(byte *)(param_1 + 0x14 + uVar3 + -1);
    if (uVar3 < 5) {
      do {
        uVar4 = uVar9 - uVar11;
        iVar8 = iVar7 + uVar11;
        if (uVar4 < 8) {
          if (uVar9 == uVar11) goto LAB_010bb7fc;
          uVar10 = 0;
          while (*(byte *)(iVar8 + uVar10) != uVar13) {
            uVar10 = uVar10 + 1;
            if (uVar4 == uVar10) goto LAB_010bb7fc;
          }
        }
        else {
          uVar12 = (iVar8 + 3U & 0xfffffffc) - iVar8;
          if (uVar12 == 0) {
            uVar12 = 0;
            do {
              uVar6 = *(uint *)(iVar8 + uVar12) ^ uVar13 * 0x1010101;
              uVar10 = ((uint *)(iVar8 + uVar12))[1] ^ uVar13 * 0x1010101;
              if (((0x1010100 - uVar6 | uVar6) & 0x80808080 & (0x1010100 - uVar10 | uVar10)) !=
                  0x80808080) break;
              uVar12 = uVar12 + 8;
LAB_010bb640:
            } while (uVar12 <= uVar4 - 8);
            if (uVar4 == uVar12) goto LAB_010bb7fc;
            iVar5 = 0;
            while (*(byte *)(iVar8 + uVar12 + iVar5) != uVar13) {
              iVar5 = iVar5 + 1;
              if ((uVar9 - uVar12) - uVar11 == iVar5) goto LAB_010bb7fc;
            }
            uVar10 = iVar5 + uVar12;
          }
          else {
            uVar10 = 0;
            while (*(byte *)(iVar8 + uVar10) != uVar13) {
              uVar10 = uVar10 + 1;
              if (uVar12 == uVar10) goto LAB_010bb640;
            }
          }
        }
        uVar11 = uVar11 + uVar10 + 1;
        *(uint *)(param_1 + 0xc) = uVar11;
        if ((uVar3 <= uVar11) && (uVar11 <= uVar2)) {
          iVar8 = thunk_FUN_016dd50a(iVar7 + (uVar11 - uVar3),param_1 + 0x14);
          if (iVar8 == 0) {
            iVar5 = *(int *)(param_1 + 0x1c);
            *(uint *)(param_1 + 0x1c) = uVar11;
            iVar8 = (uVar11 - uVar3) - iVar5;
            goto LAB_010bb830;
          }
        }
      } while (uVar11 <= uVar9);
    }
    else {
      do {
        uVar4 = uVar9 - uVar11;
        if (uVar4 < 8) {
          uVar12 = 0;
          if (uVar4 == 0) {
            uVar14 = 0;
          }
          else {
            do {
              if (*(byte *)(iVar7 + uVar11 + uVar12) == uVar13) {
                uVar14 = CONCAT44(uVar12,1);
                goto LAB_010bb7b4;
              }
              uVar12 = uVar12 + 1;
            } while (uVar4 != uVar12);
            uVar14 = (ulonglong)uVar4 << 0x20;
          }
        }
        else {
          uVar14 = FUN_00fb727c(uVar13,iVar7 + uVar11);
        }
LAB_010bb7b4:
        if ((uVar14 & 1) == 0) goto LAB_010bb7fc;
        uVar11 = uVar11 + (int)(uVar14 >> 0x20) + 1;
        *(uint *)(param_1 + 0xc) = uVar11;
        if ((uVar3 <= uVar11) && (uVar11 <= uVar2)) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar3,4,&DAT_018af1a8);
        }
      } while (uVar11 <= uVar9);
    }
  }
LAB_010bb804:
  *(undefined1 *)(param_1 + 0x25) = 1;
  if (*(char *)(param_1 + 0x24) == '\x01') {
    iVar5 = *(int *)(param_1 + 0x1c);
    iVar8 = *(int *)(param_1 + 0x20);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x1c);
    iVar8 = *(int *)(param_1 + 0x20);
    if (iVar8 == iVar5) {
      return 0;
    }
  }
  iVar8 = iVar8 - iVar5;
LAB_010bb830:
  uVar1 = FUN_010ceb84(iVar7 + iVar5,iVar8);
  return uVar1;
LAB_010bb7fc:
  *(uint *)(param_1 + 0xc) = uVar9;
  goto LAB_010bb804;
}

