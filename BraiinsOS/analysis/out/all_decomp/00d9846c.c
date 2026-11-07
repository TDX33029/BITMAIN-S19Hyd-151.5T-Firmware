// FUN_00d9846c @ 00d9846c size=100 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_00d9846c(undefined4 *param_1)

{
  int iVar1;
  undefined1 auStack_d8 [88];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  
  local_80 = *param_1;
  local_7c = param_1[1];
  local_78 = param_1[2];
  local_74 = 0;
  iVar1 = thunk_FUN_016d4a50(0xd0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0xd0);
  }
  FUN_016dd1aa(iVar1,auStack_d8,0xd0);
  return CONCAT44(&UNK_01878220,iVar1);
}

