// FUN_0070d114 @ 0070d114 size=76 calls_out=2 calls_in=1
// strings: 

void FUN_0070d114(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1[1];
  for (uVar2 = (uint)(param_1[3] - iVar1) >> 4; uVar2 != 0; uVar2 = uVar2 - 1) {
    FUN_0070d160(iVar1);
    iVar1 = iVar1 + 0x10;
  }
  FUN_0132b958(param_1[2],*param_1,4,0x10);
  return;
}

