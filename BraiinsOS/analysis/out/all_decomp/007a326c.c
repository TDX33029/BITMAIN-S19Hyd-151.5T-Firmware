// FUN_007a326c @ 007a326c size=128 calls_out=4 calls_in=1
// strings: 

void FUN_007a326c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined1 auStack_150 [192];
  int local_90;
  undefined4 *local_8c;
  undefined4 local_88;
  
  FUN_016dd1aa(auStack_150,param_2,0x134);
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,8);
  }
  *puVar1 = param_3;
  puVar1[1] = param_4;
  if (local_90 != 0) {
    thunk_FUN_016d3fb4(local_8c);
  }
  local_88 = 1;
  local_90 = 1;
  local_8c = puVar1;
  FUN_016dd1aa(param_1,auStack_150,0x134);
  return;
}

