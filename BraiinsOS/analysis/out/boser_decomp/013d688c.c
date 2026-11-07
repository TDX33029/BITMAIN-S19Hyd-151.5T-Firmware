// FUN_013d688c @ 013d688c size=316 calls_out=5 calls_in=1
// strings: 

void FUN_013d688c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_2[1];
  iVar6 = param_2[2];
  uVar4 = 0;
  if (iVar6 < 0) {
LAB_013d68a4:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar4,iVar6);
  }
  if (iVar6 == 0) {
    FUN_01bed4e2(1,iVar5,0);
    iVar6 = 0;
    iVar1 = 1;
LAB_013d6954:
    iVar5 = iVar1;
    iVar1 = param_2[1];
    iVar2 = param_2[2];
    *param_1 = *param_2;
    param_1[1] = iVar1;
    param_1[2] = iVar2;
  }
  else {
    uVar4 = 1;
    iVar1 = FUN_01298504(iVar6,1);
    if (iVar1 == 0) goto LAB_013d68a4;
    FUN_01bed4e2(iVar1,iVar5,iVar6);
    iVar2 = 0;
    do {
      bVar3 = *(byte *)(iVar1 + iVar2);
      if (bVar3 - 0x41 < 0x1a) {
        bVar3 = bVar3 | 0x20;
      }
      *(byte *)(iVar1 + iVar2) = bVar3;
      iVar2 = iVar2 + 1;
    } while (iVar6 != iVar2);
    if (iVar6 == 5) {
      iVar2 = thunk_FUN_01bed842(iVar1,&DAT_004741ca,5);
      if (iVar2 == 0) {
        iVar2 = -0x80000000;
      }
      else {
        iVar2 = thunk_FUN_01bed842(iVar1,&DAT_004741d8,5);
        if (iVar2 != 0) goto LAB_013d6954;
        iVar2 = -0x7ffffffe;
      }
    }
    else {
      if ((iVar6 != 9) || (iVar2 = thunk_FUN_01bed842(iVar1,&DAT_004741cf,9), iVar2 != 0))
      goto LAB_013d6954;
      iVar2 = -0x7fffffff;
    }
    *param_1 = iVar2;
    FUN_019bb7e0(iVar6,iVar1);
    iVar6 = *param_2;
  }
  FUN_019bb7e0(iVar6,iVar5);
  return;
}

