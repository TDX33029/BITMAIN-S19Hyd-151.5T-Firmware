// FUN_01b1d960 @ 01b1d960 size=84 calls_out=1 calls_in=2
// strings: 

uint FUN_01b1d960(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar2 = param_1;
  do {
    iVar3 = iVar2 + 0x400;
    uVar1 = FUN_01b1cf6c(iVar2,param_2);
    uVar4 = uVar4 | uVar1;
    iVar2 = iVar3;
  } while (iVar3 != param_1 + 0x1800);
  return uVar4;
}

