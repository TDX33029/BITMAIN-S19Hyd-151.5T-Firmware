// FUN_00016920 @ 00016920  size=320  callers=4
// program: cgminer


void FUN_00016920(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char acStack_d0 [64];
  char acStack_90 [64];
  char acStack_50 [68];
  
  memset(acStack_d0,0,0x40);
  memset(acStack_90,0,0x40);
  memset(acStack_50,0,0x40);
  if (param_1 != 0) {
    uVar1 = FUN_00048c28();
    snprintf(acStack_d0,0x40,"%s",&DAT_0006a6e0);
    uVar2 = FUN_000491bc(acStack_d0);
    FUN_00049a4c(uVar1,"miner_version",uVar2);
    snprintf(acStack_90,0x40,"%s",&DAT_0006a26c);
    uVar2 = FUN_000491bc(acStack_90);
    FUN_00049a4c(uVar1,"CompileTime",uVar2);
    snprintf(acStack_50,0x40,"%s",&DAT_0006a36c);
    if (DAT_00076334 != '\0') {
      snprintf(acStack_50,0x40,"%s",&DAT_00076334);
    }
    uVar2 = FUN_000491bc(acStack_50);
    FUN_00049a4c(uVar1,&DAT_0004b1e8,uVar2);
    FUN_00049a4c(param_1,&DAT_0004b1f0,uVar1);
  }
  return;
}

