// FUN_0080bb54 @ 0080bb54 size=220 calls_out=2 calls_in=3
// strings: 

void FUN_0080bb54(undefined4 *param_1,ushort *param_2)

{
  byte bVar1;
  uint *puVar2;
  
  puVar2 = (uint *)FUN_016d38c8(4,1);
  if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,4);
  }
  bVar1 = *(byte *)((int)param_2 + 5);
  *param_1 = 4;
  param_1[1] = puVar2;
  param_1[2] = 4;
  param_1[3] = 0x28;
  param_1[4] = 4;
  *puVar2 = (bVar1 & 0x3f) >> 4 |
            ((uint)*(byte *)((int)param_2 + 0xd) << 7 | (*(byte *)((int)param_2 + 3) & 1) << 5 |
             ((byte)param_2[1] & 1) << 6 | (uint)(byte)param_2[6] << 3) & 0xff |
            ((byte)param_2[2] & 1) << 2 |
            (*param_2 >> 8 & 1 |
            (bVar1 & 0xf) << 4 | (*(byte *)((int)param_2 + 7) & 1) << 1 |
            ((byte)param_2[3] & 3) << 2) << 8 | (*param_2 & 0xff) << 0x10 |
            (*(byte *)((int)param_2 + 0xb) & 0xf |
            (uint)(byte)param_2[4] << 7 | ((byte)param_2[5] & 1) << 4 |
            (*(byte *)((int)param_2 + 9) & 3) << 5) << 0x18;
  return;
}

