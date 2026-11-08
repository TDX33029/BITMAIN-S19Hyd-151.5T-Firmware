// FUN_0139aef8 @ 0139aef8 size=212 calls_out=5 calls_in=0
// strings: 

undefined8 FUN_0139aef8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *local_1c8;
  undefined4 local_1c4;
  undefined4 uStack_1c0;
  undefined4 local_1bc;
  undefined1 *local_1b8;
  undefined4 local_1b4;
  undefined4 uStack_1b0;
  undefined4 local_1ac;
  undefined4 local_20;
  
  FUN_013bb460(&local_1c8,param_2,0,0);
  if (local_1c8 != &DAT_80000004) {
    local_1ac = local_1bc;
    local_1b8 = local_1c8;
    local_1b4 = local_1c4;
    uStack_1b0 = uStack_1c0;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_1b8,&DAT_018935e8,&DAT_018931d0);
  }
  FUN_016dd1aa(&uStack_1b0,param_1,400);
  local_20 = local_1c4;
  local_1b4 = 1;
  local_1b8 = (undefined1 *)0x1;
  iVar1 = thunk_FUN_016d4a50(0x19c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x19c);
  }
  FUN_016dd1aa(iVar1,&local_1b8,0x19c);
  return CONCAT44(&DAT_018931e0,iVar1);
}

