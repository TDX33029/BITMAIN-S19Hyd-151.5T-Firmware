// FUN_0004d18c @ 0004d18c  size=72  callers=1
// program: bmminer


uint FUN_0004d18c(byte *param_1,int param_2)

{
  byte *pbVar2;
  byte *pbVar1;
  uint uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar3 = 0xffffffff;
  pbVar2 = param_1;
  do {
    pbVar1 = pbVar2 + 1;
    uVar3 = *(uint *)(&DAT_000a3b28 + ((*pbVar2 ^ uVar3) & 0xff) * 4) ^ uVar3 >> 8;
    pbVar2 = pbVar1;
  } while (pbVar1 != param_1 + param_2);
  return ~uVar3;
}

