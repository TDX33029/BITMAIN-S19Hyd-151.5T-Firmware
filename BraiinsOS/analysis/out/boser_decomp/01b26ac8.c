// FUN_01b26ac8 @ 01b26ac8 size=220 calls_out=3 calls_in=2
// strings: 

undefined8
FUN_01b26ac8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
            int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_01b269d8(param_1,param_7,0x20);
  FUN_01b269d8(param_3,param_7 + 0x20);
  FUN_01b269d8(param_2,param_7 + 0x40);
  iVar3 = param_5;
  iVar2 = param_7;
  do {
    iVar2 = iVar2 + 0x80;
    iVar1 = iVar3 + 0x400;
    FUN_01b1d68c(iVar3,iVar2);
    iVar3 = iVar1;
  } while (iVar1 != param_5 + 0x1400);
  iVar2 = param_7 + 0x300;
  do {
    iVar3 = iVar2 + 0x80;
    FUN_01b1d68c(param_6,iVar2);
    param_6 = param_6 + 0x400;
    iVar2 = iVar3;
  } while (iVar3 != param_7 + 0x600);
  iVar2 = param_7 + 0x600;
  do {
    iVar3 = iVar2 + 0x1a0;
    FUN_01b1cdf4(param_4,iVar2);
    param_4 = param_4 + 0x400;
    iVar2 = iVar3;
  } while (iVar3 != param_7 + 0xfc0);
  return 0;
}

