// FUN_01b1dca8 @ 01b1dca8 size=256 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_01b1dca8(undefined1 *param_1,ushort *param_2)

{
  ushort *puVar2;
  ushort *puVar1;
  int iVar3;
  ushort *puVar4;
  ushort local_24 [4];
  int local_1c;
  
  local_1c = DAT_01d53560;
  iVar3 = 0;
  while( true ) {
    puVar1 = param_2;
    puVar4 = local_24;
    do {
      puVar2 = puVar1 + 1;
      *puVar4 = (ushort)(((uint)((ulonglong)*puVar1 * 0x9d7dbc00 + 0x100000000 >> 0x20) & 0x7ff) >>
                        1);
      puVar1 = puVar2;
      puVar4 = puVar4 + 1;
    } while (param_2 + 4 != puVar2);
    iVar3 = iVar3 + 4;
    *param_1 = (char)local_24[0];
    param_1[1] = (char)local_24[1] << 2 | (byte)(local_24[0] >> 8);
    param_1[2] = (char)local_24[2] << 4 | (byte)(local_24[1] >> 6);
    param_1[4] = (char)(local_24[3] >> 2);
    param_1[3] = (byte)(local_24[3] << 6) | (byte)(local_24[2] >> 4);
    if (iVar3 == 0x100) break;
    param_1 = param_1 + 5;
    param_2 = param_2 + 4;
  }
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

