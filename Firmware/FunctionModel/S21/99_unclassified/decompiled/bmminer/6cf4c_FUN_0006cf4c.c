// FUN_0006cf4c @ 0006cf4c  size=220  callers=0
// program: bmminer


undefined4 FUN_0006cf4c(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  byte bStack_b;
  byte bStack_a;
  byte bStack_9;
  
  uVar1 = FUN_0006c7d8();
  if (param_1 == 0) {
    uVar2 = FUN_0006cda8(uVar1 & 0x3f);
  }
  else if (param_1 == 1) {
    bStack_b = (byte)(uVar1 >> 8);
    uVar2 = FUN_0006cda8(bStack_b & 0x3f);
  }
  else if (param_1 == 2) {
    bStack_a = (byte)(uVar1 >> 0x10);
    uVar2 = FUN_0006cda8(bStack_a & 0x3f);
  }
  else if (param_1 == 3) {
    bStack_9 = (byte)(uVar1 >> 0x18);
    uVar2 = FUN_0006cda8(bStack_9 & 0x3f);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

