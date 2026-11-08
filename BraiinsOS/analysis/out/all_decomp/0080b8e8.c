// FUN_0080b8e8 @ 0080b8e8 size=152 calls_out=2 calls_in=1
// strings: 

void FUN_0080b8e8(undefined4 *param_1,ushort *param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint *puVar5;
  
  puVar5 = (uint *)FUN_016d38c8(4,1);
  if (puVar5 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,4);
  }
  uVar2 = *param_2;
  uVar3 = param_2[1];
  bVar1 = *(byte *)((int)param_2 + 3);
  uVar4 = param_2[2];
  *param_1 = 4;
  param_1[1] = puVar5;
  param_1[2] = 4;
  param_1[3] = 0x58;
  param_1[4] = 4;
  *puVar5 = (uVar2 >> 8 & 0xf) << 4 | (uVar2 & 0xff) >> 4 |
            ((byte)uVar3 & 0xf | (uVar2 & 0xf) << 4) << 8 |
            ((byte)uVar4 & 0xf | (bVar1 & 0xf) << 4) << 0x10 |
            ((byte)param_2[3] & 0xf | (uint)*(byte *)((int)param_2 + 5) << 4) << 0x18;
  return;
}

