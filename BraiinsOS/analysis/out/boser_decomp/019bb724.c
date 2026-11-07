// FUN_019bb724 @ 019bb724 size=188 calls_out=3 calls_in=1
// strings: 

void FUN_019bb724(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((char)param_2[2] != '\0') {
    *param_1 = -0x80000000;
    return;
  }
  iVar2 = *param_2;
  iVar3 = param_2[1];
  if (iVar3 != 0) {
    iVar1 = 0;
    do {
      if (*(char *)(iVar2 + iVar1) == ':') {
        *param_2 = iVar2 + iVar1 + 1;
        param_2[1] = iVar3 - (iVar1 + 1);
        iVar3 = iVar1;
        goto joined_r0x019bb7bc;
      }
      iVar1 = iVar1 + 1;
    } while (iVar3 != iVar1);
  }
  *(undefined1 *)(param_2 + 2) = 1;
joined_r0x019bb7bc:
  if (iVar3 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_01298504(iVar3,1);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,iVar3);
    }
  }
  FUN_01bed4e2(iVar1,iVar2,iVar3);
  *param_1 = iVar3;
  param_1[1] = iVar1;
  param_1[2] = iVar3;
  return;
}

