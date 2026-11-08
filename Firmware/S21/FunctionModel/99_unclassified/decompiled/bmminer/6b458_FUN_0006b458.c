// FUN_0006b458 @ 0006b458  size=68  callers=1
// program: bmminer


undefined4 FUN_0006b458(uint param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0006b35c();
  FUN_0006b390(uVar1 & 0xffffe0ff | (param_1 & 0x1f) << 8);
  return 0;
}

