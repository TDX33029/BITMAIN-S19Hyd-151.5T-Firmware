// FUN_018a11f8 @ 018a11f8 size=380 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_018a11f8(int param_1)

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
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x25);
  iVar2 = 0;
  if (uVar3 == 0) {
    iVar11 = *(int *)(param_1 + 4);
    uVar8 = *(uint *)(param_1 + 0x10);
    uVar3 = *(uint *)(param_1 + 8);
    if ((uVar8 <= uVar3) && (uVar10 = *(uint *)(param_1 + 0xc), uVar10 <= uVar8)) {
      uVar9 = (uint)*(byte *)(param_1 + 0x18);
      cVar1 = *(char *)(param_1 + 0x14 + uVar9 + -1);
      do {
        uVar5 = uVar8 - uVar10;
        if (uVar5 < 8) {
          uVar4 = 0;
          if (uVar5 == 0) {
            uVar12 = 0;
          }
          else {
            do {
              if (*(char *)(iVar11 + uVar10 + uVar4) == cVar1) {
                uVar12 = CONCAT44(uVar4,1);
                goto LAB_018a12b0;
              }
              uVar4 = uVar4 + 1;
            } while (uVar5 != uVar4);
            uVar12 = (ulonglong)uVar5 << 0x20;
          }
        }
        else {
          uVar12 = FUN_01307168(cVar1,iVar11 + uVar10);
        }
LAB_018a12b0:
        if ((uVar12 & 1) == 0) {
          *(uint *)(param_1 + 0xc) = uVar8;
          break;
        }
        uVar10 = uVar10 + (int)(uVar12 >> 0x20) + 1;
        *(uint *)(param_1 + 0xc) = uVar10;
        if ((uVar9 <= uVar10) && (uVar10 <= uVar3)) {
          if (4 < uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,uVar9,4,&DAT_01d28184);
          }
          iVar2 = thunk_FUN_01bed842(iVar11 + (uVar10 - uVar9),param_1 + 0x14,uVar9);
          if (iVar2 == 0) {
            iVar6 = *(int *)(param_1 + 0x1c);
            *(uint *)(param_1 + 0x1c) = uVar10;
            iVar2 = iVar11 + iVar6;
            uVar3 = (uVar10 - uVar9) - iVar6;
            goto LAB_018a1340;
          }
        }
      } while (uVar10 <= uVar8);
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
      if (iVar7 == iVar6) goto LAB_018a1340;
    }
    iVar2 = iVar11 + iVar6;
    uVar3 = iVar7 - iVar6;
  }
LAB_018a1340:
  return CONCAT44(uVar3,iVar2);
}

