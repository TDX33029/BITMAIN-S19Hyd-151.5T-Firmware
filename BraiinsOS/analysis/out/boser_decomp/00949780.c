// FUN_00949780 @ 00949780 size=112 calls_out=2 calls_in=1
// strings: 

void FUN_00949780(undefined4 *param_1)

{
  uint uVar1;
  int extraout_r1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[1];
  uVar1 = param_1[3] - iVar3;
  iVar2 = uVar1 * -0x45d1745d;
  if (uVar1 != 0) {
    uVar1 = uVar1 / 0xb0;
    do {
      uVar1 = uVar1 - 1;
      if (*(char *)(iVar3 + 0xac) == '\x03') {
        FUN_0094a960(iVar3,iVar2);
        iVar2 = extraout_r1;
      }
      iVar3 = iVar3 + 0xb0;
    } while (uVar1 != 0);
  }
  FUN_0132b958(param_1[2],*param_1,8,0xb0);
  return;
}

