// FUN_01919920 @ 01919920 size=184 calls_out=3 calls_in=1
// strings: 

void FUN_01919920(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int local_28;
  int iStack_24;
  int iStack_20;
  
  iVar2 = 0;
  iVar3 = 0;
  do {
    iVar1 = iVar2 * 8;
    iVar2 = iVar2 + 1;
    iVar3 = *(int *)(param_2 + 4 + iVar1) + iVar3;
  } while (iVar2 != 2);
  uVar4 = 0;
  if (iVar3 < 0) {
LAB_0191995c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar4,iVar3);
  }
  iVar2 = 0;
  if (iVar3 == 0) {
    iStack_24 = 1;
    iVar3 = 0;
  }
  else {
    uVar4 = 1;
    iStack_24 = FUN_01298504(iVar3,1);
    if (iStack_24 == 0) goto LAB_0191995c;
  }
  iStack_20 = 0;
  local_28 = iVar3;
  for (; iVar2 != 0x10; iVar2 = iVar2 + 8) {
    iVar3 = *(int *)(param_2 + iVar2);
    FUN_01657150(&local_28,iVar3,iVar3 + ((int *)(param_2 + iVar2))[1]);
  }
  *param_1 = local_28;
  param_1[1] = iStack_24;
  param_1[2] = iStack_20;
  return;
}

