// FUN_012fce60 @ 012fce60 size=88 calls_out=2 calls_in=0
// strings: 

void FUN_012fce60(uint *param_1,undefined4 param_2)

{
  uint uVar2;
  int iVar1;
  uint uVar3;
  undefined1 auStack_22 [10];
  
  uVar3 = *param_1;
  uVar2 = uVar3;
  if ((int)uVar3 < 0) {
    uVar2 = -uVar3;
  }
  iVar1 = FUN_012fc81c(uVar2,auStack_22);
  FUN_012fa378(param_2,~uVar3 >> 0x1f,1,0,auStack_22 + iVar1,10 - iVar1);
  return;
}

