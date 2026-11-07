// FUN_01b30f18 @ 01b30f18 size=220 calls_out=6 calls_in=1
// strings: 

undefined4
FUN_01b30f18(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 *param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_01b2b33c();
  if ((iVar1 == 0) || (iVar1 = FUN_01b2b700(param_1,param_4[1]), iVar1 == 0)) {
    uVar4 = 0;
  }
  else {
    FUN_01b2e894(param_5);
    puVar2 = (undefined4 *)FUN_01b2ea9c(param_4[1],param_5);
    if (puVar2 == (undefined4 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
      for (iVar1 = 0; iVar1 < param_3; iVar1 = iVar1 + 1) {
        uVar3 = *param_1;
        FUN_01b30d7c(uVar3,uVar3,uVar3,*param_4,*puVar2,param_4[1]);
      }
      param_1[3] = 0;
    }
    FUN_01b2ebbc(param_5);
  }
  return uVar4;
}

