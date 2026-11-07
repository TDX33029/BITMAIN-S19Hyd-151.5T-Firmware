// FUN_00a97944 @ 00a97944 size=180 calls_out=3 calls_in=1
// strings: 

int FUN_00a97944(void)

{
  uint local_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_20;
  undefined4 uStack_1c;
  int local_18;
  uint local_10;
  
  FUN_015f3b0c(&local_20,0);
  local_2c = 0;
  local_30 = 0;
  local_40 = local_20;
  uStack_3c = uStack_1c;
  iStack_38 = local_18;
  local_28 = 0;
  FUN_015f3c24(&local_20,&local_40,&local_30);
  if ((local_20 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_0034e123,0x35,&local_20,&DAT_0186df04);
  }
  return local_18 * 1000000 + local_10 / 1000;
}

