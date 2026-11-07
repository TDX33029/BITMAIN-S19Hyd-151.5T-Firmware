// FUN_01bcfd44 @ 01bcfd44 size=52 calls_out=0 calls_in=5
// strings: 

undefined8 FUN_01bcfd44(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_2 + iVar1 * 4);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0xc);
  return 0;
}

