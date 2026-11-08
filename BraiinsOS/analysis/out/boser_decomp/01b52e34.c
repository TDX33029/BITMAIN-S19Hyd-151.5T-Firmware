// FUN_01b52e34 @ 01b52e34 size=108 calls_out=4 calls_in=1
// strings: 

undefined4 FUN_01b52e34(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_01b52d0c();
  if ((iVar1 == 0) || (iVar1 = FUN_01b45774(param_1), iVar1 == 0)) {
    FUN_01b3d37c(*(undefined4 *)(param_1 + 4));
    FUN_01b6b1c4(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    return 0;
  }
  return 1;
}

