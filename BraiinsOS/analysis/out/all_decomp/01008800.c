// FUN_01008800 @ 01008800 size=812 calls_out=3 calls_in=1
// strings: 

longlong FUN_01008800(undefined4 *param_1)

{
  undefined1 *puVar1;
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
  
  puVar1 = (undefined1 *)*param_1;
  if (puVar1 == &DAT_00110000) goto LAB_01008830;
  if (*(char *)((int)param_1 + 0x25) == '\0') {
    iVar7 = param_1[1];
    uVar9 = param_1[4];
    uVar2 = param_1[2];
    if ((uVar9 <= uVar2) && (uVar11 = param_1[3], uVar11 <= uVar9)) {
      uVar3 = (uint)*(byte *)(param_1 + 6);
      uVar13 = (uint)*(byte *)((int)(param_1 + 5) + (uVar3 - 1));
      if (uVar3 < 5) {
        do {
          uVar4 = uVar9 - uVar11;
          iVar8 = iVar7 + uVar11;
          if (uVar4 < 8) {
            if (uVar9 == uVar11) goto LAB_01008ad8;
            uVar10 = 0;
            while (*(byte *)(iVar8 + uVar10) != uVar13) {
              uVar10 = uVar10 + 1;
              if (uVar4 == uVar10) goto LAB_01008ad8;
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
LAB_0100891c:
              } while (uVar12 <= uVar4 - 8);
              if (uVar4 == uVar12) goto LAB_01008ad8;
              iVar5 = 0;
              while (*(byte *)(iVar8 + uVar12 + iVar5) != uVar13) {
                iVar5 = iVar5 + 1;
                if ((uVar9 - uVar12) - uVar11 == iVar5) goto LAB_01008ad8;
              }
              uVar10 = iVar5 + uVar12;
            }
            else {
              uVar10 = 0;
              while (*(byte *)(iVar8 + uVar10) != uVar13) {
                uVar10 = uVar10 + 1;
                if (uVar12 == uVar10) goto LAB_0100891c;
              }
            }
          }
          uVar11 = uVar11 + uVar10 + 1;
          param_1[3] = uVar11;
          if (((uVar3 <= uVar11) && (uVar11 <= uVar2)) &&
             (iVar8 = thunk_FUN_016dd50a(iVar7 + (uVar11 - uVar3),param_1 + 5), iVar8 == 0)) {
            iVar8 = param_1[7];
            param_1[7] = uVar11;
            return CONCAT44(uVar11 - iVar8,iVar7 + iVar8);
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
                  goto LAB_01008a90;
                }
                uVar12 = uVar12 + 1;
              } while (uVar4 != uVar12);
              uVar14 = (ulonglong)uVar4 << 0x20;
            }
          }
          else {
            uVar14 = FUN_00fb727c(uVar13,iVar7 + uVar11);
          }
LAB_01008a90:
          if ((uVar14 & 1) == 0) goto LAB_01008ad8;
          uVar11 = uVar11 + (int)(uVar14 >> 0x20) + 1;
          param_1[3] = uVar11;
          if ((uVar3 <= uVar11) && (uVar11 <= uVar2)) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,uVar3,4,&DAT_018af1a8);
          }
        } while (uVar11 <= uVar9);
      }
    }
    goto LAB_01008ae0;
  }
  goto LAB_01008828;
LAB_01008ad8:
  param_1[3] = uVar9;
LAB_01008ae0:
  *(undefined1 *)((int)param_1 + 0x25) = 1;
  if (*(char *)(param_1 + 9) == '\x01') {
    return CONCAT44(param_1[8] - param_1[7],iVar7 + param_1[7]);
  }
  iVar8 = param_1[7];
  if (param_1[8] != iVar8) {
    return CONCAT44(param_1[8] - iVar8,iVar7 + iVar8);
  }
LAB_01008828:
  puVar1 = &DAT_00110000;
  *param_1 = &DAT_00110000;
LAB_01008830:
  return ZEXT48(puVar1) << 0x20;
}

