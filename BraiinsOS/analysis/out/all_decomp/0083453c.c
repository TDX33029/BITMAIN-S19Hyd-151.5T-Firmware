// FUN_0083453c @ 0083453c size=104 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_0083453c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_160 [328];
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_016dd1aa(auStack_160,param_1,0x148);
  local_18 = param_2;
  local_14 = param_3;
  iVar1 = thunk_FUN_016d4a50(0x150);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x150);
  }
  FUN_016dd1aa(iVar1,auStack_160,0x150);
  return CONCAT44(&PTR_FUN_018603f4,iVar1);
}

