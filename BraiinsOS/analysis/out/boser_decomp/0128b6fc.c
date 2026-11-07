// FUN_0128b6fc @ 0128b6fc size=296 calls_out=0 calls_in=1
// strings: 

void FUN_0128b6fc(undefined1 *param_1,int param_2,uint param_3,uint param_4,byte param_5)

{
  byte bVar1;
  undefined1 uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_3 < 0x36) {
    if (param_2 - 0x3ffffU < 0xfff80002) {
      uVar2 = 1;
      param_1[1] = 0;
    }
    else {
      param_4 = param_4 & 0xff;
      uVar6 = (uint)param_5;
      puVar3 = &DAT_00405081;
      if (param_2 % 400 < 0) {
        puVar3 = &DAT_00405211;
      }
      bVar1 = puVar3[param_2 % 400];
      uVar4 = ((bVar1 >> 4 | 1) + (bVar1 & 7)) % 7;
      uVar5 = uVar6;
      if (uVar6 < uVar4) {
        uVar5 = uVar6 + 7;
      }
      if (param_4 < uVar6) {
        param_4 = param_4 + 7;
      }
      uVar6 = (((param_3 * 7 + param_4) - (uVar6 + uVar4)) + uVar5) - 6;
      if ((((int)uVar6 < 1) || (0x16e < uVar6)) ||
         (uVar6 = param_2 << 0xd | bVar1 & 0xf | uVar6 * 0x10, 0x16e0 < (uVar6 & 0x1ff8))) {
        uVar2 = 1;
        param_1[1] = 1;
      }
      else {
        *(uint *)(param_1 + 4) = uVar6;
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 1;
    param_1[1] = 0;
  }
  *param_1 = uVar2;
  return;
}

