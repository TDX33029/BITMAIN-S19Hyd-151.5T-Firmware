// FUN_00845ac4 @ 00845ac4 size=96 calls_out=3 calls_in=0
// strings: 

undefined8
FUN_00845ac4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_10;
  undefined1 local_c;
  
  local_c = 0;
  local_68 = param_5;
  local_70 = param_3;
  uStack_6c = param_4;
  local_10 = param_1;
  iVar1 = thunk_FUN_016d4a50(0x68);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x68);
  }
  FUN_016dd1aa(iVar1,&local_70,0x68);
  return CONCAT44(&UNK_01860a1c,iVar1);
}

