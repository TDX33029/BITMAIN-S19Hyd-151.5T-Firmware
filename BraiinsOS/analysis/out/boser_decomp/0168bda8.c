// FUN_0168bda8 @ 0168bda8 size=160 calls_out=1 calls_in=0
// strings: 

void FUN_0168bda8(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = (param_2 - param_1[3]) * 2 ^ param_2 - param_1[3] >> 0x1f;
  if (uVar2 < 0x80) {
    iVar3 = param_1[2];
  }
  else {
    iVar3 = param_1[2];
    uVar4 = uVar2;
    do {
      if (iVar3 == *param_1) {
        FUN_006666a0(param_1);
      }
      uVar2 = uVar4 >> 7;
      *(byte *)(param_1[1] + iVar3) = (byte)uVar4 | 0x80;
      iVar3 = iVar3 + 1;
      uVar1 = uVar4 >> 0xe;
      param_1[2] = iVar3;
      uVar4 = uVar2;
    } while (uVar1 != 0);
  }
  if (iVar3 == *param_1) {
    FUN_006666a0(param_1);
  }
  param_1[2] = iVar3 + 1;
  param_1[3] = param_2;
  *(char *)(param_1[1] + iVar3) = (char)uVar2;
  return;
}

