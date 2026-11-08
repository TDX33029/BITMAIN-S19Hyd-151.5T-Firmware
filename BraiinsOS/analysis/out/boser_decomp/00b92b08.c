// FUN_00b92b08 @ 00b92b08 size=540 calls_out=6 calls_in=1
// strings: 

void FUN_00b92b08(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  
  if (*(char *)(param_2 + 0x25) == '\0') {
    iVar11 = *(int *)(param_2 + 4);
    uVar12 = *(uint *)(param_2 + 8);
    uVar8 = *(uint *)(param_2 + 0x10);
    if ((uVar8 <= uVar12) && (uVar10 = *(uint *)(param_2 + 0xc), uVar10 <= uVar8)) {
      uVar7 = (uint)*(byte *)(param_2 + 0x18);
      cVar1 = *(char *)(param_2 + 0x14 + uVar7 + -1);
      do {
        uVar5 = uVar8 - uVar10;
        if (uVar5 < 8) {
          uVar4 = 0;
          if (uVar5 == 0) {
            uVar13 = 0;
          }
          else {
            do {
              if (*(char *)(iVar11 + uVar10 + uVar4) == cVar1) {
                uVar13 = CONCAT44(uVar4,1);
                goto LAB_00b92bb0;
              }
              uVar4 = uVar4 + 1;
            } while (uVar5 != uVar4);
            uVar13 = (ulonglong)uVar5 << 0x20;
          }
        }
        else {
          uVar13 = FUN_01307168(cVar1,iVar11 + uVar10);
        }
LAB_00b92bb0:
        if ((uVar13 & 1) == 0) {
          *(uint *)(param_2 + 0xc) = uVar8;
          break;
        }
        uVar10 = uVar10 + (int)(uVar13 >> 0x20) + 1;
        *(uint *)(param_2 + 0xc) = uVar10;
        if ((uVar7 <= uVar10) && (uVar10 <= uVar12)) {
          if (4 < uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,uVar7,4,&DAT_01d2fe40);
          }
          iVar2 = thunk_FUN_01bed842(iVar11 + (uVar10 - uVar7),param_2 + 0x14,uVar7);
          if (iVar2 == 0) {
            iVar6 = *(int *)(param_2 + 0x1c);
            *(uint *)(param_2 + 0x1c) = uVar10;
            iVar2 = uVar10 - iVar6;
            goto LAB_00b92c3c;
          }
        }
      } while (uVar10 <= uVar8);
    }
    *(undefined1 *)(param_2 + 0x25) = 1;
    if (*(char *)(param_2 + 0x24) == '\x01') {
      iVar6 = *(int *)(param_2 + 0x1c);
      iVar2 = *(int *)(param_2 + 0x20);
    }
    else {
      iVar6 = *(int *)(param_2 + 0x1c);
      iVar2 = *(int *)(param_2 + 0x20);
      if (iVar2 == iVar6) goto LAB_00b92c9c;
    }
    iVar2 = iVar2 - iVar6;
LAB_00b92c3c:
    iVar11 = iVar11 + iVar6;
    iVar6 = iVar2;
    if ((iVar2 != 0) && (*(char *)(iVar11 + iVar2 + -1) == '\n')) {
      iVar6 = iVar2 + -1;
      if ((iVar6 != 0) && (*(char *)(iVar11 + iVar6 + -1) == '\r')) {
        iVar6 = iVar2 + -2;
      }
    }
    if (iVar11 != 0) {
      uVar9 = 0;
      if (iVar6 < 0) {
LAB_00b92c90:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar9,iVar6);
      }
      if (iVar6 == 0) {
        iVar3 = 1;
        iVar2 = 0;
      }
      else {
        uVar9 = 1;
        iVar3 = FUN_01298504(iVar6,1);
        iVar2 = iVar6;
        if (iVar3 == 0) goto LAB_00b92c90;
      }
      FUN_01bed4e2(iVar3,iVar11,iVar6);
      *param_1 = iVar2;
      param_1[1] = iVar3;
      param_1[2] = iVar6;
      return;
    }
  }
LAB_00b92c9c:
  *param_1 = -0x80000000;
  return;
}

