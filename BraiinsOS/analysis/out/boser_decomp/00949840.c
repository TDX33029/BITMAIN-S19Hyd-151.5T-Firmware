// FUN_00949840 @ 00949840 size=112 calls_out=2 calls_in=1
// strings: 

void FUN_00949840(undefined4 *param_1)

{
  uint uVar1;
  int extraout_r1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[1];
  uVar1 = param_1[3] - iVar3;
  iVar2 = uVar1 * 0x4ec4ec4f;
  if (uVar1 != 0) {
    uVar1 = uVar1 / 0xd0;
    do {
      uVar1 = uVar1 - 1;
      if (*(char *)(iVar3 + 0xcc) == '\x03') {
        FUN_00949900(iVar3,iVar2);
        iVar2 = extraout_r1;
      }
      iVar3 = iVar3 + 0xd0;
    } while (uVar1 != 0);
  }
  FUN_0132b958(param_1[2],*param_1,8,0xd0);
  return;
}

