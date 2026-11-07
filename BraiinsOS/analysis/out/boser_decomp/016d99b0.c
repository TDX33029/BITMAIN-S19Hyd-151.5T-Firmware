// FUN_016d99b0 @ 016d99b0 size=208 calls_out=3 calls_in=3
// strings: 

undefined4 FUN_016d99b0(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar4 = *(uint *)(*param_1 + 0x50);
  uVar2 = param_1[2];
  if (uVar4 != 0) {
    if (uVar4 < uVar2) {
      if (*(char *)(param_1[1] + uVar4) < -0x40) {
LAB_016d99f4:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514();
      }
    }
    else if (uVar2 != uVar4) goto LAB_016d99f4;
  }
  uVar5 = 0;
  if ((param_3 <= uVar2 - uVar4) &&
     (iVar1 = thunk_FUN_01bed842(param_2,param_1[1] + uVar4,param_3), iVar1 == 0)) {
    uVar2 = 0;
    iVar1 = 0;
    do {
      pcVar3 = (char *)(param_2 + uVar2);
      uVar2 = uVar2 + 1;
      if (-0x41 < *pcVar3) {
        iVar1 = iVar1 + 1;
      }
    } while (param_3 != uVar2);
    uVar5 = 1;
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      FUN_016d4fe8(param_1);
    }
  }
  return uVar5;
}

