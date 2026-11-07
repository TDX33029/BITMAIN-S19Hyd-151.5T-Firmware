// FUN_000282a4 @ 000282a4  size=256  callers=1
// program: bmminer


undefined4 FUN_000282a4(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char acStack_2018 [8192];
  
  if (3 < DAT_000be63c) {
    snprintf(acStack_2018,0x2000,"1.inc all chain freq to %d",*param_1);
    FUN_0004948c(3,acStack_2018,0);
    if (3 < DAT_000be63c) {
      snprintf(acStack_2018,0x2000,"start_vol :%d end_vol %d",param_2,param_3);
      FUN_0004948c(3,acStack_2018,0);
    }
  }
  iVar3 = 0x884;
  if (param_3 < 0x884) {
    iVar3 = param_3;
  }
  iVar1 = FUN_000281f0();
  uVar4 = *param_1;
  uVar2 = FUN_00019f9c();
  if (uVar2 < 0x13) {
    DAT_00a4ed90 = iVar1 - 200U;
    if (uVar4 <= iVar1 - 200U) {
      DAT_00a4ed90 = uVar4;
    }
  }
  else {
    DAT_00a4ed90 = *param_1;
  }
  FUN_00027460(0x32,DAT_00a4ed90,param_2,iVar3,1);
  return 0;
}

