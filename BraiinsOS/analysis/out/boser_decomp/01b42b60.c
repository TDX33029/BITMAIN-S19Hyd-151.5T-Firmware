// FUN_01b42b60 @ 01b42b60 size=156 calls_out=4 calls_in=1
// strings: 

undefined8 FUN_01b42b60(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_2 + 0x198;
  FUN_01b425e0();
  uVar1 = 2;
  FUN_01b424bc(param_2 + 0xcc,param_3);
  do {
    if ((uVar1 & 1) == 0) {
      FUN_01b3ee18(param_1,iVar2,(uVar1 >> 1) * 0xcc + param_2);
    }
    else {
      FUN_01b3f8c0(param_1,iVar2,param_2 + 0xcc,iVar2 + -0xcc);
    }
    uVar1 = uVar1 + 1;
    iVar2 = iVar2 + 0xcc;
  } while (uVar1 != 0x11);
  return 0;
}

