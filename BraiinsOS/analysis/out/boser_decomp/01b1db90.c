// FUN_01b1db90 @ 01b1db90 size=264 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_01b1db90(byte *param_1,ushort *param_2)

{
  ushort *puVar2;
  ushort *puVar1;
  int iVar3;
  byte *pbVar4;
  byte local_1c [8];
  int local_14;
  
  iVar3 = 0;
  local_14 = DAT_01d53560;
  while( true ) {
    local_1c[0] = 0;
    local_1c[1] = 0;
    local_1c[2] = 0;
    local_1c[3] = 0;
    local_1c[4] = 0;
    local_1c[5] = 0;
    local_1c[6] = 0;
    local_1c[7] = 0;
    puVar1 = param_2;
    pbVar4 = local_1c;
    do {
      puVar2 = puVar1 + 1;
      *pbVar4 = (byte)((uint)*puVar1 * 0x13afb0 + 0x8000000 >> 0x1c);
      puVar1 = puVar2;
      pbVar4 = pbVar4 + 1;
    } while (param_2 + 8 != puVar2);
    iVar3 = iVar3 + 8;
    *param_1 = local_1c[0] | local_1c[1] << 4;
    param_1[1] = local_1c[2] | local_1c[3] << 4;
    param_1[2] = local_1c[4] | local_1c[5] << 4;
    param_1[3] = local_1c[6] | local_1c[7] << 4;
    if (iVar3 == 0x100) break;
    param_1 = param_1 + 4;
    param_2 = param_2 + 8;
  }
  if (local_14 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

