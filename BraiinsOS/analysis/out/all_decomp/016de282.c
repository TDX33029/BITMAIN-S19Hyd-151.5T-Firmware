// FUN_016de282 @ 016de282 size=24 calls_out=0 calls_in=3
// strings: 

void FUN_016de282(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 in_cr0;
  undefined4 in_cr13;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  iVar1 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
  param_1[2] = *(undefined4 *)(iVar1 + -0x34);
  *(undefined4 **)(iVar1 + -0x34) = param_1;
  return;
}

