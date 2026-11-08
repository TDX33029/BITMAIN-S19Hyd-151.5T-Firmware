// FUN_01bc7bb8 @ 01bc7bb8 size=52 calls_out=0 calls_in=4
// strings: 

undefined8 FUN_01bc7bb8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_2 + iVar1 * 4);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 10);
  return 0;
}

