// FUN_00a5cb34 @ 00a5cb34 size=420 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_00a5cb34(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  
  iVar9 = 0;
  if (*(char *)(param_1 + 0x25) == '\0') {
    iVar10 = *(int *)(param_1 + 4);
    uVar11 = *(uint *)(param_1 + 8);
    uVar6 = *(uint *)(param_1 + 0x10);
    if ((uVar6 <= uVar11) && (uVar8 = *(uint *)(param_1 + 0xc), uVar8 <= uVar6)) {
      uVar7 = (uint)*(byte *)(param_1 + 0x18);
      cVar1 = *(char *)(param_1 + 0x14 + uVar7 + -1);
      do {
        uVar4 = uVar6 - uVar8;
        if (uVar4 < 8) {
          uVar3 = 0;
          if (uVar4 == 0) {
            uVar12 = 0;
          }
          else {
            do {
              if (*(char *)(iVar10 + uVar8 + uVar3) == cVar1) {
                uVar12 = CONCAT44(uVar3,1);
                goto LAB_00a5cbe0;
              }
              uVar3 = uVar3 + 1;
            } while (uVar4 != uVar3);
            uVar12 = (ulonglong)uVar4 << 0x20;
          }
        }
        else {
          uVar12 = FUN_01307168(cVar1,iVar10 + uVar8);
        }
LAB_00a5cbe0:
        if ((uVar12 & 1) == 0) {
          *(uint *)(param_1 + 0xc) = uVar6;
          break;
        }
        uVar8 = uVar8 + (int)(uVar12 >> 0x20) + 1;
        *(uint *)(param_1 + 0xc) = uVar8;
        if ((uVar7 <= uVar8) && (uVar8 <= uVar11)) {
          if (4 < uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,uVar7,4,&DAT_01d2fe40);
          }
          iVar2 = thunk_FUN_01bed842(iVar10 + (uVar8 - uVar7),param_1 + 0x14,uVar7);
          if (iVar2 == 0) {
            iVar5 = *(int *)(param_1 + 0x1c);
            *(uint *)(param_1 + 0x1c) = uVar8;
            iVar2 = uVar8 - iVar5;
            goto LAB_00a5cc64;
          }
        }
      } while (uVar8 <= uVar6);
    }
    param_2 = 1;
    *(undefined1 *)(param_1 + 0x25) = 1;
    if (*(char *)(param_1 + 0x24) == '\x01') {
      iVar5 = *(int *)(param_1 + 0x1c);
      iVar2 = *(int *)(param_1 + 0x20);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x1c);
      iVar2 = *(int *)(param_1 + 0x20);
      if (iVar2 == iVar5) goto LAB_00a5cca4;
    }
    iVar2 = iVar2 - iVar5;
LAB_00a5cc64:
    iVar9 = iVar10 + iVar5;
    param_2 = iVar2;
    if ((iVar2 != 0) && (*(char *)(iVar9 + iVar2 + -1) == '\n')) {
      param_2 = iVar2 + -1;
      if ((param_2 != 0) && (*(char *)(iVar9 + param_2 + -1) == '\r')) {
        param_2 = iVar2 + -2;
      }
    }
  }
LAB_00a5cca4:
  return CONCAT44(param_2,iVar9);
}

