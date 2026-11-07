// FUN_01714f48 @ 01714f48 size=56 calls_out=1 calls_in=13
// strings: 

undefined4 FUN_01714f48(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_01714e64();
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return 0;
}

