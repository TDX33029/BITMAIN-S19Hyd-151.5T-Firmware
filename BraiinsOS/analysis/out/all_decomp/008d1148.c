// FUN_008d1148 @ 008d1148 size=104 calls_out=3 calls_in=0
// strings: 

undefined8
FUN_008d1148(undefined4 param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined1 auStack_b8 [144];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_14;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  
  local_b = 0;
  local_24 = param_5;
  local_28 = param_4;
  local_14 = param_1;
  local_a = param_2;
  local_9 = param_3;
  iVar1 = thunk_FUN_016d4a50(0xb0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0xb0);
  }
  FUN_016dd1aa(iVar1,auStack_b8,0xb0);
  return CONCAT44(&UNK_01864fa0,iVar1);
}

