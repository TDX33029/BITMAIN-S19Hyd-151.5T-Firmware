// FUN_0071d8e8 @ 0071d8e8 size=104 calls_out=3 calls_in=1
// strings: 

int FUN_0071d8e8(undefined4 param_1)

{
  int iVar1;
  undefined2 local_50 [2];
  undefined4 local_4c;
  undefined2 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined1 local_28;
  
  local_50[0] = 0x15;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_3c = 0;
  local_44 = 0;
  local_4c = 0;
  local_40 = param_1;
  iVar1 = thunk_FUN_016d4a50(0x44);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x44);
  }
  FUN_016dd1aa(iVar1,local_50,0x44);
  return iVar1;
}

