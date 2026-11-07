// FUN_0004b788 @ 0004b788  size=80  callers=0
// program: bmminer


undefined4 FUN_0004b788(void)

{
  uint uVar1;
  
  uVar1 = FUN_00049df8();
  FUN_00045bc4(0xf);
  uVar1 = uVar1 & 0x3f;
  FUN_00045c40(0xf,uVar1 | uVar1 << 8 | uVar1 << 0x10 | uVar1 << 0x18);
  return 0;
}

