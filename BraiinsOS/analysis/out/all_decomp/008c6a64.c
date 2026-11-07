// FUN_008c6a64 @ 008c6a64 size=92 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_008c6a64(undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_98 [8];
  undefined4 local_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined1 local_7b;
  
  local_7b = 0;
  local_90 = param_3;
  local_88 = param_1;
  local_84 = param_2;
  iVar1 = thunk_FUN_016d4a50(0x90);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x90);
  }
  FUN_016dd1aa(iVar1,auStack_98,0x90);
  return CONCAT44(&UNK_01864538,iVar1);
}

