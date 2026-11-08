// FUN_014280cc @ 014280cc size=364 calls_out=4 calls_in=1
// strings: 

undefined4 FUN_014280cc(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 0x25) == '\0') {
    iVar10 = *(int *)(param_1 + 4);
    uVar11 = *(uint *)(param_1 + 8);
    uVar7 = *(uint *)(param_1 + 0x10);
    if ((uVar7 <= uVar11) && (uVar9 = *(uint *)(param_1 + 0xc), uVar9 <= uVar7)) {
      uVar8 = (uint)*(byte *)(param_1 + 0x18);
      cVar1 = *(char *)(param_1 + 0x14 + uVar8 + -1);
      do {
        uVar5 = uVar7 - uVar9;
        if (uVar5 < 8) {
          uVar4 = 0;
          if (uVar5 == 0) {
            uVar12 = 0;
          }
          else {
            do {
              if (*(char *)(iVar10 + uVar9 + uVar4) == cVar1) {
                uVar12 = CONCAT44(uVar4,1);
                goto LAB_01428178;
              }
              uVar4 = uVar4 + 1;
            } while (uVar5 != uVar4);
            uVar12 = (ulonglong)uVar5 << 0x20;
          }
        }
        else {
          uVar12 = FUN_01307168(cVar1,iVar10 + uVar9);
        }
LAB_01428178:
        if ((uVar12 & 1) == 0) {
          *(uint *)(param_1 + 0xc) = uVar7;
          break;
        }
        uVar9 = uVar9 + (int)(uVar12 >> 0x20) + 1;
        *(uint *)(param_1 + 0xc) = uVar9;
        if ((uVar8 <= uVar9) && (uVar9 <= uVar11)) {
          if (4 < uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,uVar8,4,&DAT_01d2fe40);
          }
          iVar3 = thunk_FUN_01bed842(iVar10 + (uVar9 - uVar8),param_1 + 0x14,uVar8);
          if (iVar3 == 0) {
            iVar6 = *(int *)(param_1 + 0x1c);
            *(uint *)(param_1 + 0x1c) = uVar9;
            iVar3 = (uVar9 - uVar8) - iVar6;
            goto LAB_01428200;
          }
        }
      } while (uVar9 <= uVar7);
    }
    *(undefined1 *)(param_1 + 0x25) = 1;
    if (*(char *)(param_1 + 0x24) == '\x01') {
      iVar6 = *(int *)(param_1 + 0x1c);
      iVar3 = *(int *)(param_1 + 0x20);
    }
    else {
      iVar6 = *(int *)(param_1 + 0x1c);
      iVar3 = *(int *)(param_1 + 0x20);
      if (iVar3 == iVar6) {
        return 0;
      }
    }
    iVar3 = iVar3 - iVar6;
LAB_01428200:
    uVar2 = FUN_013245a0(iVar10 + iVar6,iVar3);
  }
  return uVar2;
}

