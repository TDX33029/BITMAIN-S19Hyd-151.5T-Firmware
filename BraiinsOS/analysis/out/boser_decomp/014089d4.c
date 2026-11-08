// FUN_014089d4 @ 014089d4 size=88 calls_out=1 calls_in=2
// strings: 

void FUN_014089d4(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 4);
    param_1[1] = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 8) = 0;
    }
    *(undefined1 *)(iVar1 + 0x10) = 2;
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    if (iVar2 == 0) {
      *param_1 = 0;
    }
    FUN_013d5a8c(param_2,iVar1 + -8);
    iVar1 = iVar2;
  }
  return;
}

