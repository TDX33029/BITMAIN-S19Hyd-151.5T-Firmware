// FUN_01805b00 @ 01805b00 size=232 calls_out=0 calls_in=1
// strings: 

int FUN_01805b00(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_2 + 0x38) == 1) {
    uVar2 = 0x1f - LZCOUNT(param_1 + 1);
    return uVar2 * 0x100 + ((param_1 + 1) * 0x100 >> (uVar2 & 0xff));
  }
  if (param_1 == 0x20000) {
    iVar4 = 0x8c;
    iVar1 = 0x1000;
    iVar3 = 0x100;
  }
  else if (param_1 < 0x40) {
    iVar3 = 0;
    iVar4 = (uint)(byte)""[param_1] << 2;
    iVar1 = (uint)(byte)(&DAT_004521a8)[(byte)""[param_1]] << 8;
  }
  else {
    iVar3 = 0;
    iVar4 = (-LZCOUNT(param_1) + 0x32) * 4;
    iVar1 = (uint)(byte)(&UNK_004521da)[-LZCOUNT(param_1)] << 8;
  }
  iVar4 = *(int *)(*(int *)(param_2 + 4) + iVar4) + 1;
  uVar2 = 0x1f - LZCOUNT(iVar4);
  return (iVar3 + iVar1 + *(int *)(param_2 + 0x2c) + uVar2 * -0x100) -
         ((uint)(iVar4 * 0x100) >> (uVar2 & 0xff));
}

