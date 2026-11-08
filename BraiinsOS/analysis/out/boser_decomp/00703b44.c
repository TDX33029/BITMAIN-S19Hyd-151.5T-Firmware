// FUN_00703b44 @ 00703b44 size=128 calls_out=4 calls_in=4
// strings: WrongAlgorithm | InvalidEncoding

void FUN_00703b44(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_01afd61c(&local_20);
  local_28 = local_20;
  uStack_24 = local_1c;
  iVar1 = FUN_01b056b0(&local_28);
  if (iVar1 == 0) {
    iVar1 = 0xf;
    pcVar3 = "InvalidEncoding";
  }
  else {
    iVar2 = FUN_01b4776c();
    if (iVar2 == param_4) {
      pcVar3 = (char *)0x0;
    }
    else {
      FUN_01b46fd8(iVar1);
      iVar1 = 0xe;
      pcVar3 = "WrongAlgorithm";
    }
  }
  *param_1 = pcVar3;
  param_1[1] = iVar1;
  return;
}

