// FUN_019c456c @ 019c456c size=364 calls_out=3 calls_in=3
// strings: 

undefined8 FUN_019c456c(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x25);
  iVar2 = 0;
  if (uVar3 == 0) {
    iVar10 = *(int *)(param_1 + 4);
    uVar11 = *(uint *)(param_1 + 8);
    uVar3 = *(uint *)(param_1 + 0x10);
    if ((uVar3 <= uVar11) && (uVar9 = *(uint *)(param_1 + 0xc), uVar9 <= uVar3)) {
      uVar8 = (uint)*(byte *)(param_1 + 0x18);
      cVar1 = *(char *)(param_1 + 0x14 + uVar8 + -1);
      do {
        uVar5 = uVar3 - uVar9;
        if (uVar5 < 8) {
          uVar4 = 0;
          if (uVar5 == 0) {
            uVar12 = 0;
          }
          else {
            do {
              if (*(char *)(iVar10 + uVar9 + uVar4) == cVar1) {
                uVar12 = CONCAT44(uVar4,1);
                goto LAB_019c4618;
              }
              uVar4 = uVar4 + 1;
            } while (uVar5 != uVar4);
            uVar12 = (ulonglong)uVar5 << 0x20;
          }
        }
        else {
          uVar12 = FUN_01307168(cVar1,iVar10 + uVar9);
        }
LAB_019c4618:
        if ((uVar12 & 1) == 0) {
          *(uint *)(param_1 + 0xc) = uVar3;
          break;
        }
        uVar9 = uVar9 + (int)(uVar12 >> 0x20) + 1;
        *(uint *)(param_1 + 0xc) = uVar9;
        if ((uVar8 <= uVar9) && (uVar9 <= uVar11)) {
          if (4 < uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,uVar8,4,&DAT_01d2fe40);
          }
          iVar2 = thunk_FUN_01bed842(iVar10 + (uVar9 - uVar8),param_1 + 0x14,uVar8);
          if (iVar2 == 0) {
            iVar6 = *(int *)(param_1 + 0x1c);
            *(uint *)(param_1 + 0x1c) = uVar9;
            iVar2 = iVar10 + iVar6;
            uVar3 = (uVar9 - uVar8) - iVar6;
            goto LAB_019c46a4;
          }
        }
      } while (uVar9 <= uVar3);
    }
    uVar3 = 1;
    *(undefined1 *)(param_1 + 0x25) = 1;
    if (*(char *)(param_1 + 0x24) == '\x01') {
      iVar6 = *(int *)(param_1 + 0x1c);
      iVar7 = *(int *)(param_1 + 0x20);
    }
    else {
      iVar6 = *(int *)(param_1 + 0x1c);
      iVar7 = *(int *)(param_1 + 0x20);
      iVar2 = 0;
      if (iVar7 == iVar6) goto LAB_019c46a4;
    }
    iVar2 = iVar10 + iVar6;
    uVar3 = iVar7 - iVar6;
  }
LAB_019c46a4:
  return CONCAT44(uVar3,iVar2);
}

