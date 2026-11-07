// FUN_0191f214 @ 0191f214 size=104 calls_out=1 calls_in=1
// strings: 

void FUN_0191f214(undefined4 *param_1)

{
  int iVar1;
  
  FUN_01139b38(*param_1,param_1[1]);
  iVar1 = 0;
  do {
    *(undefined1 *)((int)param_1 + iVar1 + 0xc) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x40);
  iVar1 = 0;
  do {
    *(undefined1 *)((int)param_1 + iVar1 + 0x50) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x40);
  iVar1 = 0;
  do {
    *(undefined1 *)((int)param_1 + iVar1 + 0x94) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x40);
  return;
}

