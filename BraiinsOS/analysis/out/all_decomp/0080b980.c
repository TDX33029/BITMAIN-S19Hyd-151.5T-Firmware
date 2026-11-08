// FUN_0080b980 @ 0080b980 size=144 calls_out=2 calls_in=2
// strings: 

void FUN_0080b980(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  
  puVar6 = (uint *)FUN_016d38c8(4,1);
  if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,4);
  }
  bVar1 = param_2[1];
  bVar2 = param_2[5];
  bVar3 = *param_2;
  bVar4 = param_2[2];
  bVar5 = param_2[3];
  *param_1 = 4;
  param_1[1] = puVar6;
  param_1[2] = 4;
  param_1[3] = 0x3c;
  param_1[4] = 4;
  *puVar6 = (uint)param_2[7] << 0x18 |
            (((uint)bVar1 << 7 | (uint)bVar4 << 6 | (uint)bVar5 << 5) & 0xff | (uint)param_2[4]) <<
            0x10 | (uint)param_2[6] << 8 | bVar2 & 0x7f | (uint)bVar3 << 7;
  return;
}

