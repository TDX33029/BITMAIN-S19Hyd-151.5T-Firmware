// FUN_01111078 @ 01111078 size=284 calls_out=5 calls_in=1
// strings: BUG: version is already setSequence too longSequence too shortSequence length unknown ahead of timeInvalid Unicode string/character dataIncomplete message; unexpected end of input dataTrailing data left after deserializationFound value other than 1 or 0 when deserializing a bool

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01111078(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int local_50;
  undefined4 *local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 *local_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,8);
  }
  *puVar1 = param_1;
  puVar1[1] = param_2;
  uVar2 = 0;
  if (param_4 < 0) {
LAB_011110b8:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar2,param_4);
  }
  if (param_4 == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = thunk_FUN_016d4a50(param_4);
    if (iVar3 == 0) {
      uVar2 = 1;
      goto LAB_011110b8;
    }
  }
  FUN_016dd1aa(iVar3,param_3,param_4);
  local_48 = 8;
  local_50 = 8;
  DataMemoryBarrier(0xb);
  local_4c = puVar1;
  local_44 = param_4;
  local_40 = iVar3;
  local_3c = param_4;
  if (DAT_018daf08 != 2) {
    FUN_011111e8(&local_50);
  }
  if (local_50 != -0x80000000) {
    local_34 = local_4c;
    uStack_30 = local_48;
    iStack_2c = local_44;
    iStack_28 = local_40;
    iStack_24 = local_3c;
    local_38 = local_50;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: version is already setSequence too longSequence too shortSequence length unknown ahead of timeInvalid Unicode string/character dataIncomplete message, unexpected end of input dataTrailing data left after deserializationFound value other than 1 or 0 when deserializing a bool"
                 ,0x1b,&local_38,&DAT_018870a8);
  }
  return;
}

