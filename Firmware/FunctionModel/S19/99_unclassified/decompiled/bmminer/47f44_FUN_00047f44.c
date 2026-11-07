// FUN_00047f44 @ 00047f44  size=144  callers=1
// program: bmminer


undefined4 FUN_00047f44(void)

{
  undefined4 uVar1;
  
  if (DAT_0050f970 == 0) {
    FUN_00047c18();
    FUN_00046044();
    uVar1 = FUN_00047c18();
    FUN_00046388(uVar1,1);
    FUN_00047c38(2);
    FUN_00046044();
    uVar1 = FUN_00047c38(2);
    FUN_00046388(uVar1,1);
    FUN_00047c38(0x100);
    FUN_00046044();
    uVar1 = FUN_00047c38(0x100);
    FUN_00046388(uVar1,0);
    FUN_00047c38(0x101);
    FUN_00046044();
    uVar1 = FUN_00047c38(0x101);
    FUN_00046388(uVar1,0);
    DAT_0050f970 = 1;
  }
  return 0;
}

