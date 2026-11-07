// FUN_00603494 @ 00603494 size=228 calls_out=1 calls_in=1
// strings: 

void FUN_00603494(uint *param_1,uint *param_2,byte param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = *param_2;
  if (param_3 < 100) {
    uVar2 = uVar4;
  }
  else {
    if (0x12 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar4,0x13,&DAT_01857630);
    }
    uVar2 = uVar4 + 1;
    *param_2 = uVar2;
    *(byte *)((int)param_2 + uVar4 + 4) =
         (byte)((uint)((short)(ushort)param_3 * 0x29) >> 0xc) | 0x30;
  }
  if (0x12 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar2,0x13,&DAT_01857640);
  }
  *param_2 = uVar2 + 1;
  uVar4 = (uint)((short)(ushort)param_3 * 0xcd) >> 0xb;
  uVar3 = (short)uVar4 * 0x1a;
  cVar1 = (char)uVar4;
  *(byte *)((int)param_2 + uVar2 + 4) =
       cVar1 + ((byte)(uVar3 >> 8) | (byte)((uVar3 >> 8) << 2)) * -2 | 0x30;
  if (uVar2 == 0x12) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(0x13,0x13,&DAT_01857650);
  }
  *(byte *)((int)param_2 + uVar2 + 5) = param_3 + cVar1 * -10 | 0x30;
  *param_2 = uVar2 + 2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  return;
}

