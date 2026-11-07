// FUN_0094a864 @ 0094a864 size=88 calls_out=2 calls_in=1
// strings: 

void FUN_0094a864(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ((uint)(param_1[3] - param_1[1]) >> 2) * 0x2b2e43db + 1;
  iVar1 = param_1[1];
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_0094a8fc(iVar1);
    iVar1 = iVar1 + 0x14c;
  }
  FUN_0132b958(param_1[2],*param_1,4,0x14c);
  return;
}

