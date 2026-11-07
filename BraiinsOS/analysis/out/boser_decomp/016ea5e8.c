// FUN_016ea5e8 @ 016ea5e8 size=156 calls_out=3 calls_in=0
// strings: 

void FUN_016ea5e8(undefined4 *param_1,int *param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_2;
  if ((*(byte *)(iVar2 + 0x10) & 1) != 0) {
    FUN_016de590(param_5);
  }
  if (param_4 != 0) {
    FUN_016de88c(param_5);
  }
  if (*(char *)(iVar2 + 0x17) != '\0') {
    iVar1 = *(int *)(param_5 + 8);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(param_5 + 4) + iVar1 * 2;
    }
    if ((iVar1 != 0 && iVar2 != 2) && (*(char *)(iVar2 + -1) < '\0')) {
      FUN_016e9480(param_1,param_2[1],param_2[2],param_3);
      return;
    }
  }
  *param_1 = 0x80000000;
  return;
}

