// FUN_014030ac @ 014030ac size=88 calls_out=2 calls_in=2
// strings: 

void FUN_014030ac(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ((uint)(param_1[3] - param_1[1]) >> 2) * -0x5f75270d + 1;
  iVar1 = param_1[1];
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_01401c2c(iVar1);
    iVar1 = iVar1 + 0xec;
  }
  FUN_01af7af8(param_1[2],*param_1,4,0xec);
  return;
}

