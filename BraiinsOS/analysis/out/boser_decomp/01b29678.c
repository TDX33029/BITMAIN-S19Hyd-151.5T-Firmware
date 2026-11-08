// FUN_01b29678 @ 01b29678 size=216 calls_out=3 calls_in=2
// strings: 

undefined8
FUN_01b29678(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
            int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  
  FUN_01b269d8(param_1,param_7,0x20);
  FUN_01b269d8(param_3,param_7 + 0x20);
  FUN_01b269d8(param_2,param_7 + 0x40);
  iVar2 = param_7 + 0x80;
  do {
    iVar1 = iVar2 + 0x60;
    FUN_01b1d0a4(param_5,iVar2);
    param_5 = param_5 + 0x400;
    iVar2 = iVar1;
  } while (iVar1 != param_7 + 0x200);
  iVar2 = param_7 + 0x200;
  do {
    iVar1 = iVar2 + 0x60;
    FUN_01b1d0a4(param_6,iVar2);
    param_6 = param_6 + 0x400;
    iVar2 = iVar1;
  } while (iVar1 != param_7 + 0x380);
  iVar2 = param_7 + 0x380;
  do {
    iVar1 = iVar2 + 0x1a0;
    FUN_01b1cdf4(param_4,iVar2);
    param_4 = param_4 + 0x400;
    iVar2 = iVar1;
  } while (iVar1 != param_7 + 0xa00);
  return 0;
}

