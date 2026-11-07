// FUN_0004a5d4 @ 0004a5d4  size=56  callers=2
// program: bmminer


void FUN_0004a5d4(uint param_1)

{
  uint uVar1;
  undefined1 auStack_c [8];
  
  uVar1 = 0x1ffff;
  if (param_1 < 0x1ffff) {
    uVar1 = param_1;
  }
  FUN_00045c40(0x14,uVar1 | 0x80000000);
  FUN_00045bc4(0x14,auStack_c);
  return;
}

