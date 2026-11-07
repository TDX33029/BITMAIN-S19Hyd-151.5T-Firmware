// FUN_015c4d94 @ 015c4d94 size=752 calls_out=3 calls_in=3
// strings: 

void FUN_015c4d94(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
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
  
  uVar6 = *(uint *)(param_2 + 0xc);
  uVar12 = *(uint *)(param_2 + 0x10);
  if ((uVar6 <= uVar12) && (uVar1 = *(uint *)(param_2 + 8), uVar12 <= uVar1)) {
    iVar2 = *(int *)(param_2 + 4);
    uVar11 = (uint)*(byte *)(param_2 + 0x18);
    uVar10 = (uint)*(byte *)(param_2 + 0x14 + uVar11 + -1);
    if (uVar11 < 5) {
      do {
        uVar3 = uVar12 - uVar6;
        iVar8 = iVar2 + uVar6;
        if (uVar3 < 8) {
          if (uVar12 == uVar6) goto LAB_015c506c;
          uVar9 = 0;
          while (*(byte *)(iVar8 + uVar9) != uVar10) {
            uVar9 = uVar9 + 1;
            if (uVar3 == uVar9) goto LAB_015c506c;
          }
        }
        else {
          uVar5 = (iVar8 + 3U & 0xfffffffc) - iVar8;
          if (uVar5 == 0) {
            uVar5 = 0;
            do {
              uVar7 = *(uint *)(iVar8 + uVar5) ^ uVar10 * 0x1010101;
              uVar9 = ((uint *)(iVar8 + uVar5))[1] ^ uVar10 * 0x1010101;
              if (((0x1010100 - uVar7 | uVar7) & 0x80808080 & (0x1010100 - uVar9 | uVar9)) !=
                  0x80808080) break;
              uVar5 = uVar5 + 8;
LAB_015c4e7c:
            } while (uVar5 <= uVar3 - 8);
            if (uVar3 == uVar5) goto LAB_015c506c;
            iVar4 = 0;
            while (*(byte *)(iVar8 + uVar5 + iVar4) != uVar10) {
              iVar4 = iVar4 + 1;
              if ((uVar12 - uVar5) - uVar6 == iVar4) goto LAB_015c506c;
            }
            uVar9 = iVar4 + uVar5;
          }
          else {
            uVar9 = 0;
            while (*(byte *)(iVar8 + uVar9) != uVar10) {
              uVar9 = uVar9 + 1;
              if (uVar5 == uVar9) goto LAB_015c4e7c;
            }
          }
        }
        uVar6 = uVar6 + uVar9 + 1;
        *(uint *)(param_2 + 0xc) = uVar6;
        if ((uVar11 <= uVar6) && (uVar6 <= uVar1)) {
          iVar8 = thunk_FUN_016dd50a(iVar2 + (uVar6 - uVar11),param_2 + 0x14,uVar11);
          if (iVar8 == 0) {
            param_1[1] = uVar6 - uVar11;
            param_1[2] = uVar6;
            *param_1 = 1;
            return;
          }
        }
      } while (uVar6 <= uVar12);
    }
    else {
      do {
        uVar3 = uVar12 - uVar6;
        if (uVar3 < 8) {
          uVar5 = 0;
          if (uVar3 == 0) {
            uVar13 = 0;
          }
          else {
            do {
              if (*(byte *)(iVar2 + uVar6 + uVar5) == uVar10) {
                uVar13 = CONCAT44(uVar5,1);
                goto LAB_015c502c;
              }
              uVar5 = uVar5 + 1;
            } while (uVar3 != uVar5);
            uVar13 = (ulonglong)uVar3 << 0x20;
          }
        }
        else {
          uVar13 = FUN_00fb727c(uVar10,iVar2 + uVar6);
        }
LAB_015c502c:
        if ((uVar13 & 1) == 0) goto LAB_015c506c;
        uVar6 = uVar6 + (int)(uVar13 >> 0x20) + 1;
        *(uint *)(param_2 + 0xc) = uVar6;
        if ((uVar11 <= uVar6) && (uVar6 <= uVar1)) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar11,4,&DAT_018ab5b0);
        }
      } while (uVar6 <= uVar12);
    }
    *param_1 = 0;
    return;
  }
LAB_015c5074:
  *param_1 = 0;
  return;
LAB_015c506c:
  *(uint *)(param_2 + 0xc) = uVar12;
  goto LAB_015c5074;
}

