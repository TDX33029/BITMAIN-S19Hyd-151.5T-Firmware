// FUN_0082bea4 @ 0082bea4 size=84 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_0082bea4(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_b8 [20];
  undefined4 local_a4;
  undefined1 local_9d;
  
  local_9d = 0;
  local_a4 = param_1;
  iVar1 = thunk_FUN_016d4a50(0xac);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xac);
  }
  FUN_016dd1aa(iVar1,auStack_b8,0xac);
  return CONCAT44(&UNK_0186001c,iVar1);
}

