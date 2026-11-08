// FUN_016e17e0 @ 016e17e0 size=152 calls_out=2 calls_in=13
// strings: 

void FUN_016e17e0(undefined4 param_1,undefined1 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined1 *local_18;
  uint local_14;
  
  local_14 = DAT_018ddaf8;
  uVar2 = FUN_016e15ac(param_1,&local_18,1,0);
  bVar1 = (int)uVar2 != 0;
  if (bVar1) {
    *local_18 = param_2;
  }
  if ((local_14 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(bVar1,(int)((ulonglong)uVar2 >> 0x20),local_14 ^ DAT_018ddaf8,0);
  }
  return;
}

