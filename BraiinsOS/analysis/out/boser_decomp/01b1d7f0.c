// FUN_01b1d7f0 @ 01b1d7f0 size=68 calls_out=0 calls_in=4
// strings: 

undefined8 FUN_01b1d7f0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(byte *)(param_1 + iVar1) =
         *(byte *)(param_2 + iVar1 * 8) | *(char *)(param_2 + 4 + iVar1 * 8) << 4;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x80);
  return 0;
}

