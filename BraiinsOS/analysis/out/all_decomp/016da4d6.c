// FUN_016da4d6 @ 016da4d6 size=52 calls_out=3 calls_in=1
// strings: 

undefined4 FUN_016da4d6(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_cr0;
  undefined4 in_cr13;
  undefined1 auStack_90 [132];
  
  FUN_016da498(auStack_90);
  iVar2 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
  software_interrupt(0);
  uVar1 = FUN_016d3496(*(undefined4 *)(iVar2 + -0x60),param_1);
  FUN_016da4b4(auStack_90);
  return uVar1;
}

