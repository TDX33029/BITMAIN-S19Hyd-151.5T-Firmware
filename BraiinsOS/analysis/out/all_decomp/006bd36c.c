// FUN_006bd36c @ 006bd36c size=104 calls_out=3 calls_in=0
// strings: 

undefined8
FUN_006bd36c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_54;
  
  local_70 = *param_4;
  uStack_6c = param_4[1];
  local_68 = param_4[2];
  local_54 = 0;
  local_64 = param_1;
  uStack_60 = param_2;
  uStack_5c = param_3;
  iVar1 = thunk_FUN_016d4a50(0x68);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x68);
  }
  FUN_016dd1aa(iVar1,&local_70,0x68);
  return CONCAT44(&UNK_01858a08,iVar1);
}

