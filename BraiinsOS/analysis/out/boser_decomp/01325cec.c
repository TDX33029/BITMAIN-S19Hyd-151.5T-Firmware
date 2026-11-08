// FUN_01325cec @ 01325cec size=164 calls_out=1 calls_in=1
// strings: 

bool FUN_01325cec(int param_1)

{
  uint uVar1;
  ushort *puVar2;
  bool bVar3;
  
  puVar2 = &DAT_0044a090;
  uVar1 = 0;
  while ((uint)*puVar2 <= param_1 - (uint)puVar2[-1]) {
    puVar2 = puVar2 + 3;
    bVar3 = 0x1d < uVar1;
    uVar1 = uVar1 + 3;
    if (bVar3) {
      return false;
    }
  }
  if (0x1e < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar1 + 2,0x21,&DAT_01ce5fcc);
  }
  uVar1 = (param_1 - (uint)puVar2[-1]) + (uint)(ushort)(&DAT_0044a08e)[uVar1 + 2];
  if (0xfe < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar1,0xff,&DAT_01ce5fdc);
  }
  return *(short *)(&DAT_00445e4a + uVar1 * 2) != 0;
}

