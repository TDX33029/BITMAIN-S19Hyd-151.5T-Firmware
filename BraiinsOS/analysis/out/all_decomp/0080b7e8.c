// FUN_0080b7e8 @ 0080b7e8 size=140 calls_out=2 calls_in=1
// strings: 

void FUN_0080b7e8(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint *puVar4;
  
  puVar4 = (uint *)FUN_016d38c8(4,1);
  if (puVar4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,4);
  }
  bVar1 = param_2[5];
  bVar2 = param_2[6];
  *param_1 = 4;
  bVar3 = *param_2;
  param_1[1] = puVar4;
  param_1[2] = 4;
  param_1[3] = 0xa8;
  param_1[4] = 4;
  *puVar4 = ((uint)bVar2 | (uint)bVar1 << 4) << 0x18 |
            (((uint)bVar3 << 2 | (uint)param_2[1] << 1) & 0xff | (uint)param_2[2]) << 0x10 |
            (uint)param_2[7] << 8 | (uint)param_2[4] | (uint)param_2[3] << 4;
  return;
}

