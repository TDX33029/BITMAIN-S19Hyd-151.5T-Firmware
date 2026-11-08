// FUN_01b1d640 @ 01b1d640 size=76 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_01b1d640(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(byte *)(param_1 + iVar1) =
         4U - *(char *)(param_2 + iVar1 * 8) |
         ('\x04' - *(char *)(param_2 + 4 + iVar1 * 8)) * '\x10';
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x80);
  return 0;
}

