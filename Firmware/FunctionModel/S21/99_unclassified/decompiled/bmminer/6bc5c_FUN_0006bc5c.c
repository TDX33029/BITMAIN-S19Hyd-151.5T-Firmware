// FUN_0006bc5c @ 0006bc5c  size=64  callers=0
// program: bmminer


uint FUN_0006bc5c(uint param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0006bc30();
  return 1 << (param_1 & 0xff) & 0xffU & uVar1 & 0xff;
}

