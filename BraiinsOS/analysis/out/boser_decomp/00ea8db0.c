// FUN_00ea8db0 @ 00ea8db0 size=140 calls_out=3 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00ea8db0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int local_2c;
  
  uVar1 = FUN_01381c1c(1,param_1);
  local_2c = (uint)local_2c._1_3_ << 8;
  puVar2 = (undefined4 *)thunk_FUN_01be5118(0x24);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x24);
  }
  *puVar2 = 1;
  puVar2[1] = 1;
  puVar2[2] = 0;
  puVar2[3] = local_2c;
  puVar2[4] = 0;
  puVar2[5] = 8;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  return uVar1;
}

