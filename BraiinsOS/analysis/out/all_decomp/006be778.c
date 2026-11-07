// FUN_006be778 @ 006be778 size=100 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_006be778(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_54;
  
  local_68 = *param_2;
  uStack_64 = param_2[1];
  local_60 = param_2[2];
  local_54 = 0;
  local_5c = param_1;
  iVar1 = thunk_FUN_016d4a50(0x60);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x60);
  }
  FUN_016dd1aa(iVar1,&local_68,0x60);
  return CONCAT44(&UNK_01858a28,iVar1);
}

