// FUN_010b5720 @ 010b5720 size=108 calls_out=4 calls_in=1
// strings: 

void FUN_010b5720(undefined4 param_1)

{
  int local_44;
  undefined1 auStack_40 [24];
  undefined4 local_28;
  undefined4 *local_24;
  
  local_24 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (local_24 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *(undefined2 *)(local_24 + 2) = 0x701;
  *local_24 = 0;
  local_28 = 0;
  FUN_010bf0cc(&local_44,param_1,&local_28);
  if (local_44 != 0) {
    FUN_010b51ac(auStack_40);
  }
  return;
}

