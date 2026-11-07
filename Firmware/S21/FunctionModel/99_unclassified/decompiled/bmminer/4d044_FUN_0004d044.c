// FUN_0004d044 @ 0004d044  size=92  callers=3
// program: bmminer


uint FUN_0004d044(int param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    return 0xffff;
  }
  uVar2 = 0xff;
  pbVar1 = (byte *)(param_1 + -1);
  uVar4 = 0xff;
  do {
    pbVar1 = pbVar1 + 1;
    uVar3 = uVar2 ^ *pbVar1;
    uVar2 = (byte)(&DAT_000a3928)[uVar3] ^ uVar4;
    uVar4 = (uint)(byte)(&DAT_000a3a28)[uVar3];
  } while ((byte *)(param_1 + (param_2 - 1U & 0xffff)) != pbVar1);
  return uVar2 | uVar4 << 8;
}

