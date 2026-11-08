// FUN_013f40c4 @ 013f40c4 size=828 calls_out=3 calls_in=2
// strings: 

ulonglong FUN_013f40c4(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint local_28;
  
  local_28 = 0;
  uVar6 = (uint)*(byte *)(param_1 + 0x25);
  if (*(byte *)(param_1 + 0x25) != 0) goto LAB_013f40e4;
  uVar6 = *(uint *)(param_1 + 8);
  uVar12 = *(uint *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 4);
  if ((uVar12 <= uVar6) && (uVar9 = *(uint *)(param_1 + 0xc), uVar9 <= uVar12)) {
    uVar2 = (uint)*(byte *)(param_1 + 0x18);
    uVar11 = (uint)*(byte *)(param_1 + 0x14 + uVar2 + -1);
    if (uVar2 < 5) {
      do {
        uVar3 = uVar12 - uVar9;
        iVar8 = iVar1 + uVar9;
        if (uVar3 < 8) {
          if (uVar12 == uVar9) goto LAB_013f436c;
          uVar10 = 0;
          while (*(byte *)(iVar8 + uVar10) != uVar11) {
            uVar10 = uVar10 + 1;
            if (uVar3 == uVar10) goto LAB_013f436c;
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
LAB_013f41cc:
            } while (uVar5 <= uVar3 - 8);
            if (uVar3 == uVar5) goto LAB_013f436c;
            iVar4 = 0;
            while (*(byte *)(iVar8 + uVar5 + iVar4) != uVar11) {
              iVar4 = iVar4 + 1;
              if ((uVar12 - uVar5) - uVar9 == iVar4) goto LAB_013f436c;
            }
            uVar10 = iVar4 + uVar5;
          }
          else {
            uVar10 = 0;
            while (*(byte *)(iVar8 + uVar10) != uVar11) {
              uVar10 = uVar10 + 1;
              if (uVar5 == uVar10) goto LAB_013f41cc;
            }
          }
        }
        uVar9 = uVar9 + uVar10 + 1;
        *(uint *)(param_1 + 0xc) = uVar9;
        if (((uVar2 <= uVar9) && (uVar9 <= uVar6)) &&
           (iVar8 = thunk_FUN_016dd50a(iVar1 + (uVar9 - uVar2),param_1 + 0x14), iVar8 == 0)) {
          uVar12 = *(uint *)(param_1 + 0x1c);
          *(uint *)(param_1 + 0x1c) = uVar9;
          goto LAB_013f4398;
        }
      } while (uVar9 <= uVar12);
    }
    else {
      do {
        uVar3 = uVar12 - uVar9;
        if (uVar3 < 8) {
          uVar5 = 0;
          if (uVar3 == 0) {
            uVar13 = 0;
          }
          else {
            do {
              if (*(byte *)(iVar1 + uVar9 + uVar5) == uVar11) {
                uVar13 = CONCAT44(uVar5,1);
                goto LAB_013f432c;
              }
              uVar5 = uVar5 + 1;
            } while (uVar3 != uVar5);
            uVar13 = (ulonglong)uVar3 << 0x20;
          }
        }
        else {
          uVar13 = FUN_00fb727c(uVar11,iVar1 + uVar9);
        }
LAB_013f432c:
        if ((uVar13 & 1) == 0) goto LAB_013f436c;
        uVar9 = uVar9 + (int)(uVar13 >> 0x20) + 1;
        *(uint *)(param_1 + 0xc) = uVar9;
        if ((uVar2 <= uVar9) && (uVar9 <= uVar6)) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar2,4,&DAT_018af1a8);
        }
      } while (uVar9 <= uVar12);
    }
  }
  goto LAB_013f4370;
LAB_013f436c:
  *(uint *)(param_1 + 0xc) = uVar12;
LAB_013f4370:
  uVar6 = (uint)*(byte *)(param_1 + 0x24);
  *(undefined1 *)(param_1 + 0x25) = 1;
  if (uVar6 == 1) {
    uVar12 = *(uint *)(param_1 + 0x1c);
    uVar9 = *(uint *)(param_1 + 0x20);
  }
  else {
    uVar12 = *(uint *)(param_1 + 0x1c);
    uVar9 = *(uint *)(param_1 + 0x20);
    if (uVar9 == uVar12) goto LAB_013f40e4;
  }
LAB_013f4398:
  uVar9 = uVar9 - uVar12;
  local_28 = iVar1 + uVar12;
  if (uVar9 == 0) {
    return (ulonglong)local_28;
  }
  uVar6 = uVar9;
  if (*(char *)(local_28 + uVar9 + -1) == '\n') {
    iVar1 = uVar9 - 1;
    uVar6 = 0;
    if (iVar1 != 0) {
      if (*(char *)(local_28 + iVar1 + -1) == '\r') {
        iVar1 = uVar9 - 2;
      }
      return CONCAT44(iVar1,local_28);
    }
  }
LAB_013f40e4:
  return CONCAT44(uVar6,local_28);
}

