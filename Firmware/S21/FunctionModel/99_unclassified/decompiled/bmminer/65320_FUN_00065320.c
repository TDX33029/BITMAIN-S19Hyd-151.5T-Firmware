// FUN_00065320 @ 00065320  size=256  callers=1
// program: bmminer


undefined4 FUN_00065320(void)

{
  undefined4 uVar1;
  
  if (DAT_00945054 == 0) {
    uVar1 = FUN_0006508c(1);
    FUN_00061b4c(uVar1);
    uVar1 = FUN_0006508c(1);
    FUN_00061fa4(uVar1,1);
    uVar1 = FUN_0006508c(2);
    FUN_00061b4c(uVar1);
    uVar1 = FUN_0006508c(2);
    FUN_00061fa4(uVar1,1);
    uVar1 = FUN_0006508c(0x100);
    FUN_00061b4c(uVar1);
    uVar1 = FUN_0006508c(0x100);
    FUN_00061fa4(uVar1,0);
    uVar1 = FUN_0006508c(0x101);
    FUN_00061b4c(uVar1);
    uVar1 = FUN_0006508c(0x101);
    FUN_00061fa4(uVar1,0);
    DAT_00945054 = 1;
  }
  return 0;
}

