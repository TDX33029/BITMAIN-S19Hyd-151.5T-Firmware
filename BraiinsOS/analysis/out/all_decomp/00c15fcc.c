// FUN_00c15fcc @ 00c15fcc size=248 calls_out=4 calls_in=0
// strings: 

void FUN_00c15fcc(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 **local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 *local_1c;
  
  DataMemoryBarrier(0xb);
  if (DAT_018ce310 != 0) {
    local_38 = &local_1c;
    local_1c = &DAT_018ce2b0;
    FUN_015eedc4(&DAT_018ce310,1,&local_38,&DAT_01873414,&DAT_018ac9b8);
  }
  uVar1 = DAT_018ce2dc;
  DataMemoryBarrier(0xb);
  if (DAT_018ce310 != 0) {
    local_38 = &local_1c;
    local_1c = &DAT_018ce2b0;
    FUN_015eedc4(&DAT_018ce310,1,&local_38,&DAT_01873414,&DAT_018ac9b8);
  }
  FUN_00c0d95c(&uStack_30,&DAT_01872ed4,uVar1,DAT_018ce2e0);
  local_34 = 1;
  local_38 = (undefined4 **)0x1;
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(0x18);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x18);
  }
  *puVar2 = local_38;
  puVar2[1] = local_34;
  puVar2[2] = uStack_30;
  puVar2[3] = uStack_2c;
  puVar2[4] = uStack_28;
  puVar2[5] = uStack_24;
  return;
}

