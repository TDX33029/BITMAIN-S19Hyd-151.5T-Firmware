// FUN_0080ba10 @ 0080ba10 size=216 calls_out=2 calls_in=1
// strings: 

void FUN_0080ba10(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  uint *puVar3;
  
  puVar3 = (uint *)FUN_016d38c8(4,1);
  if (puVar3 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,4);
  }
  bVar1 = param_2[9];
  bVar2 = param_2[8];
  *param_1 = 4;
  param_1[1] = puVar3;
  param_1[2] = 4;
  param_1[3] = 0x18;
  param_1[4] = 4;
  *puVar3 = (bVar1 & 0x1f) >> 1 | (bVar2 & 0xf) << 4 |
            (((uint)*param_2 << 6 | (uint)bVar1 << 7) & 0xff | (param_2[10] & 0x1f) << 1 |
            (uint)param_2[1]) << 8 |
            (param_2[0xb] & 0x1f |
            ((uint)param_2[3] << 6 | (uint)param_2[2] << 7 | (uint)param_2[4] << 5) & 0xff) << 0x10
            | ((uint)param_2[6] << 6 | (uint)param_2[5] << 7 | (uint)param_2[7] << 4 |
              param_2[0xc] & 0xf) << 0x18;
  return;
}

