// FUN_01814534 @ 01814534 size=508 calls_out=0 calls_in=5
// strings: 

uint FUN_01814534(uint param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  param_1 = ~param_1;
  if (7 < param_3) {
    pbVar1 = param_2 + 8;
    do {
      pbVar2 = pbVar1 + 8;
      uVar3 = *(uint *)(&DAT_004521cc + ((pbVar1[-8] ^ param_1) & 0xff) * 4) ^ param_1 >> 8;
      uVar3 = *(uint *)(&DAT_004521cc + ((pbVar1[-7] ^ uVar3) & 0xff) * 4) ^ uVar3 >> 8;
      uVar3 = *(uint *)(&DAT_004521cc + ((pbVar1[-6] ^ uVar3) & 0xff) * 4) ^ uVar3 >> 8;
      uVar3 = *(uint *)(&DAT_004521cc + ((pbVar1[-5] ^ uVar3) & 0xff) * 4) ^ uVar3 >> 8;
      uVar3 = *(uint *)(&DAT_004521cc + ((pbVar1[-4] ^ uVar3) & 0xff) * 4) ^ uVar3 >> 8;
      uVar3 = *(uint *)(&DAT_004521cc + ((pbVar1[-3] ^ uVar3) & 0xff) * 4) ^ uVar3 >> 8;
      uVar3 = *(uint *)(&DAT_004521cc + ((pbVar1[-2] ^ uVar3) & 0xff) * 4) ^ uVar3 >> 8;
      param_1 = *(uint *)(&DAT_004521cc + ((pbVar1[-1] ^ uVar3) & 0xff) * 4) ^ uVar3 >> 8;
      pbVar1 = pbVar2;
    } while (pbVar2 != param_2 + (param_3 & 0xfffffff8) + 8);
    param_2 = param_2 + (param_3 & 0xfffffff8);
    param_3 = param_3 & 7;
  }
  if ((((param_3 != 0) &&
       (param_1 = *(uint *)(&DAT_004521cc + ((*param_2 ^ param_1) & 0xff) * 4) ^ param_1 >> 8,
       param_3 != 1)) &&
      (param_1 = *(uint *)(&DAT_004521cc + ((param_2[1] ^ param_1) & 0xff) * 4) ^ param_1 >> 8,
      param_3 != 2)) &&
     (((param_1 = *(uint *)(&DAT_004521cc + ((param_2[2] ^ param_1) & 0xff) * 4) ^ param_1 >> 8,
       param_3 != 3 &&
       (param_1 = *(uint *)(&DAT_004521cc + ((param_2[3] ^ param_1) & 0xff) * 4) ^ param_1 >> 8,
       param_3 != 4)) &&
      ((param_1 = *(uint *)(&DAT_004521cc + ((param_2[4] ^ param_1) & 0xff) * 4) ^ param_1 >> 8,
       param_3 != 5 &&
       (param_1 = *(uint *)(&DAT_004521cc + ((param_2[5] ^ param_1) & 0xff) * 4) ^ param_1 >> 8,
       param_3 != 6)))))) {
    param_1 = *(uint *)(&DAT_004521cc + ((param_2[6] ^ param_1) & 0xff) * 4) ^ param_1 >> 8;
  }
  return ~param_1;
}

