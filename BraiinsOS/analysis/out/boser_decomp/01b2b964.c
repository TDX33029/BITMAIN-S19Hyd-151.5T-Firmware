// FUN_01b2b964 @ 01b2b964 size=56 calls_out=1 calls_in=12
// strings: 

undefined4 FUN_01b2b964(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_01b2b88c();
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return 0;
}

