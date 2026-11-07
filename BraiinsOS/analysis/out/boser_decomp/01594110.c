// FUN_01594110 @ 01594110 size=140 calls_out=1 calls_in=1
// strings: 

uint FUN_01594110(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined1 local_11;
  undefined1 *local_10;
  code *local_c;
  
  bVar1 = *param_1;
  uVar2 = (uint)bVar1;
  if (uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    *param_1 = bVar1 - 1 & bVar1;
    uVar2 = uVar2 & -uVar2;
    local_11 = (undefined1)uVar2;
    if (((0x1f < uVar2 - 1) || ((1 << (uVar2 - 1 & 0xff) & 0x8000808bU) == 0)) && (uVar2 != 0x40)) {
      local_10 = &local_11;
      local_c = FUN_012fcc70;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_0059b94e,&local_10,&DAT_01cfc1ec);
    }
  }
  return uVar2;
}

