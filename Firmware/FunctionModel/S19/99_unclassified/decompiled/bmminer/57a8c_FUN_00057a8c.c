// FUN_00057a8c @ 00057a8c  size=56  callers=1
// program: bmminer


void FUN_00057a8c(undefined4 param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x80000000;
  }
  FUN_000571b0(param_1,1,0,0xc,uVar1 | param_3 & 0xffff);
  return;
}

