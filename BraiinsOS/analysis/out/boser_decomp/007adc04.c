// FUN_007adc04 @ 007adc04 size=96 calls_out=1 calls_in=2
// strings: 

int FUN_007adc04(int param_1,uint param_2)

{
  uint local_20;
  undefined4 local_1c;
  undefined4 *puStack_18;
  code *pcStack_14;
  undefined1 *puStack_10;
  code *pcStack_c;
  
  puStack_10 = (undefined1 *)&local_20;
  local_1c = *(undefined4 *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x18) <= param_2) {
    pcStack_c = FUN_012fd02c;
    pcStack_14 = FUN_012fd02c;
    puStack_18 = &local_1c;
    local_20 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_005b9bf5,&puStack_18);
  }
  return *(int *)(param_1 + 0x14) + param_2 * 0xc0;
}

