// FUN_01bd3b08 @ 01bd3b08 size=52 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_01bd3b08(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_2 + iVar1 * 4);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 8);
  return 0;
}

