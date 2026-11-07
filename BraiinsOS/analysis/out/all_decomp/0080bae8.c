// FUN_0080bae8 @ 0080bae8 size=108 calls_out=2 calls_in=1
// strings: 

void FUN_0080bae8(undefined4 *param_1,ushort *param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint *puVar4;
  
  puVar4 = (uint *)FUN_016d38c8(4,1);
  if (puVar4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,4);
  }
  uVar2 = param_2[1];
  bVar1 = *(byte *)((int)param_2 + 3);
  uVar3 = param_2[2];
  *param_1 = 4;
  param_1[1] = puVar4;
  param_1[2] = 4;
  param_1[3] = 0x2c;
  param_1[4] = 4;
  *puVar4 = ((uint)(byte)uVar2 << 2 | (uint)bVar1 << 1 | (uint)(byte)uVar3) << 0x18 |
            ((uint)*param_2 << 0x18 | (uint)(*param_2 >> 8) << 0x10) >> 0x10;
  return;
}

