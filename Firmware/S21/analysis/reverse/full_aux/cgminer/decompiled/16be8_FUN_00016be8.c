// FUN_00016be8 @ 00016be8  size=508  callers=0
// program: cgminer


undefined4 FUN_00016be8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char acStack_850 [64];
  char acStack_810 [2048];
  
  memset(acStack_850,0,0x40);
  if (param_1 != 0 && param_2 != 0) {
    FUN_00016a60(param_1,1,0x16,*(undefined4 *)(param_2 + 8));
    uVar1 = FUN_00048fb8();
    uVar2 = FUN_00048c28();
    uVar3 = FUN_000491bc("1.0.0");
    FUN_00049a4c(uVar2,"BMMiner",uVar3);
    uVar3 = FUN_000491bc(&DAT_0004b248);
    FUN_00049a4c(uVar2,&DAT_0004b24c,uVar3);
    uVar3 = FUN_000491bc(&DAT_0006a6e0);
    FUN_00049a4c(uVar2,"Miner",uVar3);
    uVar3 = FUN_000491bc(&DAT_0006a26c);
    FUN_00049a4c(uVar2,"CompileTime",uVar3);
    snprintf(acStack_850,0x40,"%s",&DAT_0006a36c);
    if (DAT_00076334 != '\0') {
      snprintf(acStack_850,0x40,"%s",&DAT_00076334);
    }
    uVar3 = FUN_000491bc(acStack_850);
    FUN_00049a4c(uVar2,&DAT_0004b258,uVar3);
    FUN_00049f0c(uVar1,uVar2);
    FUN_00049a4c(param_1,"VERSION",uVar1);
    uVar1 = FUN_00049408(1,0);
    FUN_00049a4c(param_1,&DAT_0004b220,uVar1);
    return 0;
  }
  if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
    snprintf(acStack_810,0x800,"%s: input bad api param\n","get_version_old");
    FUN_0001dd98(3,acStack_810,0);
  }
  return 0x80000002;
}

