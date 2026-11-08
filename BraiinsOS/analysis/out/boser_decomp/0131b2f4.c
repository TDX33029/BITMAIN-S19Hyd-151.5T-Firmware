// FUN_0131b2f4 @ 0131b2f4 size=120 calls_out=2 calls_in=1
// strings: 

void FUN_0131b2f4(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte local_58 [32];
  byte local_38 [32];
  
  FUN_0131b36c(local_58,param_1);
  FUN_0131b36c(local_38,param_2);
  iVar3 = 0;
  uVar2 = 1;
  do {
    uVar1 = (uint)(local_38[iVar3] ^ local_58[iVar3]);
    uVar1 = FUN_0131bb90((uVar1 | -uVar1 & 0xff) >> 7 ^ 1);
    iVar3 = iVar3 + 1;
    uVar2 = uVar1 & uVar2;
  } while (iVar3 != 0x20);
  FUN_0131bb90(uVar2);
  return;
}

