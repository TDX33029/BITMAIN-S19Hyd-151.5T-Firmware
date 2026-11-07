// FUN_01a64e38 @ 01a64e38 size=108 calls_out=2 calls_in=6
// strings: 

void FUN_01a64e38(int param_1)

{
  int iVar1;
  int iStack_1c;
  int iStack_18;
  undefined1 local_14;
  
  FUN_01933ff0(&iStack_1c,param_1 + 8);
  if ((iStack_1c == 0) &&
     (iVar1 = *(int *)(iStack_18 + 0x1a0) + -1, *(int *)(iStack_18 + 0x1a0) = iVar1, iVar1 == 1)) {
    iVar1 = *(int *)(iStack_18 + 0xe0);
    *(undefined4 *)(iStack_18 + 0xe0) = 0;
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 4))(*(undefined4 *)(iStack_18 + 0xe4));
    }
  }
  FUN_00a97e8c(iStack_18,local_14);
  return;
}

