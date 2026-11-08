// FUN_01824bec @ 01824bec size=72 calls_out=0 calls_in=3
// strings: 

void FUN_01824bec(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x95) == '\x02') {
    return;
  }
  iVar1 = 0;
  do {
    *(undefined1 *)(param_1 + 8 + iVar1) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x40);
  iVar1 = 0;
  do {
    *(undefined1 *)(param_1 + 0x4c + iVar1) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x40);
  return;
}

