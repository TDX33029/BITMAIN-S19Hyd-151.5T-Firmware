// FUN_014232b8 @ 014232b8 size=196 calls_out=4 calls_in=4
// strings: 

undefined4 FUN_014232b8(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_1c;
  int *local_18;
  code *local_14;
  
  iVar2 = *(int *)(param_1 + 4);
  FUN_007038d0(iVar2 + 0xc,*param_2);
  local_1c = *(int *)(iVar2 + 8);
  DataMemoryBarrier(0xb);
  if (local_1c != 0) {
    if (local_1c == 1) {
      return 1;
    }
    if (local_1c != 2) {
      local_18 = &local_1c;
      local_14 = FUN_012fd02c;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_0057624e,&local_18,&DAT_01cf4924);
    }
    if (*(char *)(param_1 + 0x10) != '\x02') {
      DataMemoryBarrier(0xb);
      if (*(int *)(*(int *)(param_1 + 8) + 0x1c) < 0) {
        uVar1 = FUN_01421e44((int *)(param_1 + 8),param_2);
        return uVar1;
      }
    }
  }
  FUN_01427b74(5);
  return 0;
}

