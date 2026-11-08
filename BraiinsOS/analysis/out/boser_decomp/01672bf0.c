// FUN_01672bf0 @ 01672bf0 size=120 calls_out=0 calls_in=2
// strings: 

void FUN_01672bf0(uint *param_1,uint param_2,char *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (*param_3 != '\x05') {
    *param_1 = 3;
    return;
  }
  uVar3 = *(uint *)(param_3 + 4);
  uVar4 = *(uint *)(param_3 + 8);
  uVar2 = *(uint *)(param_3 + 0xc);
  if (uVar3 == 0) {
    uVar2 = 0;
  }
  uVar1 = *(uint *)(&DAT_01d33160 + (param_2 & 0xff) * 4);
  param_1[8] = uVar2;
  param_1[0x14] = 5;
  param_1[10] = 5;
  uVar2 = (uint)(uVar3 != 0);
  param_1[2] = uVar3;
  *param_1 = uVar2;
  param_1[1] = 0;
  param_1[3] = uVar4;
  param_1[4] = uVar2;
  param_1[5] = 0;
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  param_1[9] = uVar1;
  return;
}

