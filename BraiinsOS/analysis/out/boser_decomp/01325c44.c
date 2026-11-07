// FUN_01325c44 @ 01325c44 size=152 calls_out=1 calls_in=1
// strings: 

longlong FUN_01325c44(int param_1)

{
  uint uVar1;
  uint uVar2;
  ushort *puVar3;
  bool bVar4;
  
  puVar3 = &DAT_00449744;
  uVar1 = 0;
  while ((uint)*puVar3 <= param_1 - (uint)puVar3[-1]) {
    uVar2 = uVar1 + 3;
    puVar3 = puVar3 + 3;
    bVar4 = 0x1d < uVar1;
    uVar1 = uVar2;
    if (bVar4) {
      return (ulonglong)uVar2 << 0x20;
    }
  }
  if (0x1e < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar1 + 2,0x21,&DAT_01ce5fac);
  }
  uVar1 = (param_1 - (uint)puVar3[-1]) + (uint)(ushort)(&DAT_00449742)[uVar1 + 2];
  if (0xef < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar1,0xf0,&DAT_01ce5fbc);
  }
  return CONCAT44((uint)*(ushort *)(&DAT_00445b20 + uVar1 * 2),1);
}

