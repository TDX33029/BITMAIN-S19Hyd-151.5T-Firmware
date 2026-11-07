// FUN_0095b7d0 @ 0095b7d0 size=136 calls_out=3 calls_in=0
// strings: 

undefined8
FUN_0095b7d0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_7d8 [72];
  undefined4 local_790;
  undefined4 uStack_78c;
  undefined4 uStack_788;
  undefined4 local_784;
  undefined4 local_780;
  undefined1 local_778;
  
  local_784 = param_3[1];
  uStack_788 = *param_3;
  local_780 = param_3[2];
  local_790 = param_1;
  uStack_78c = param_2;
  FUN_016dd1aa(auStack_7d8,param_4,0x48);
  local_778 = 0;
  iVar1 = thunk_FUN_016d4a50(0x7c8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x7c8);
  }
  FUN_016dd1aa(iVar1,auStack_7d8,0x7c8);
  return CONCAT44(&PTR_FUN_018683dc,iVar1);
}

