// FUN_0006ce70 @ 0006ce70  size=220  callers=1
// program: bmminer


undefined4 FUN_0006ce70(int param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = FUN_0006cc84(param_2);
  bVar2 = FUN_0006c7d8();
  if (param_1 == 0) {
    bVar2 = bVar2 & 0xc0 | bVar1 & 0x3f;
  }
  FUN_0006c80c(bVar2);
  return 0;
}

