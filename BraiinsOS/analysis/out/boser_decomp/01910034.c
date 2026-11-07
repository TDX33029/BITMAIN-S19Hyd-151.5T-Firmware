// FUN_01910034 @ 01910034 size=28 calls_out=1 calls_in=1
// strings: 

void FUN_01910034(int param_1)

{
  int iVar1;
  
  iVar1 = 0x44;
  do {
    *(undefined1 *)(param_1 + iVar1) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x74);
  thunk_FUN_01be4678();
  return;
}

