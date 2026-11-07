// FUN_008a2a2c @ 008a2a2c size=184 calls_out=2 calls_in=2
// strings: 

void FUN_008a2a2c(undefined4 *param_1,ushort *param_2)

{
  ushort uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)FUN_016d38c8(4,1);
  if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,4);
  }
  *param_1 = 4;
  param_1[3] = 0x28;
  uVar1 = *param_2;
  param_1[1] = puVar2;
  param_1[2] = 4;
  param_1[4] = 4;
  *puVar2 = (uVar1 >> 8 & 1) << 6 | ((byte)param_2[4] & 1) << 7 | (uVar1 & 0xff) >> 2 |
            (param_2[1] >> 8 & 1 |
            (uVar1 & 3) << 6 | (*(byte *)((int)param_2 + 5) & 1) << 1 |
            ((byte)param_2[2] & 0xf) << 2) << 8 | (param_2[1] & 0xff) << 0x10 |
            (*(byte *)((int)param_2 + 7) & 3 | (uint)(byte)param_2[3] << 2) << 0x18;
  return;
}

