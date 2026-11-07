// FUN_019d8bc0 @ 019d8bc0 size=132 calls_out=1 calls_in=202
// strings: 

bool FUN_019d8bc0(uint *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint local_20;
  uint uStack_1c;
  uint *puStack_18;
  code *pcStack_14;
  undefined1 *puStack_10;
  code *pcStack_c;
  
  puStack_10 = (undefined1 *)&local_20;
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar2 + param_2 * -0x40;
  uStack_1c = uVar2 >> 6;
  if (param_2 <= uVar2 >> 6) {
    param_1 = (uint *)(uStack_1c - param_2);
  }
  DataMemoryBarrier(0xb);
  if (uVar2 >> 6 < param_2) {
    pcStack_c = FUN_012fd02c;
    pcStack_14 = FUN_012fd02c;
    puStack_18 = &uStack_1c;
    local_20 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_00573d57,&puStack_18,&DAT_01d28d94);
  }
  return param_1 == (uint *)0x0;
}

