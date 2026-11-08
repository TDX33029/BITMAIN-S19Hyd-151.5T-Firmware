// FUN_01bef8fc @ 01bef8fc size=32 calls_out=0 calls_in=9
// strings: 

undefined4 FUN_01bef8fc(uint param_1,uint *param_2)

{
  int iVar1;
  undefined4 in_cr0;
  undefined4 in_cr13;
  
  if (2 < param_1) {
    return 0x16;
  }
  iVar1 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
  if (param_2 != (uint *)0x0) {
    *param_2 = (uint)*(byte *)(iVar1 + -0x50);
  }
  *(char *)(iVar1 + -0x50) = (char)param_1;
  return 0;
}

