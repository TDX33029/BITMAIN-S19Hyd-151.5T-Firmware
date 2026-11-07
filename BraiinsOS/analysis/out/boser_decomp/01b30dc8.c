// FUN_01b30dc8 @ 01b30dc8 size=268 calls_out=6 calls_in=3
// strings: 

undefined4
FUN_01b30dc8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  FUN_01b2e894(param_5);
  puVar1 = (undefined4 *)FUN_01b2eb00(param_2,param_4[1],param_5);
  puVar2 = (undefined4 *)FUN_01b2eb00(param_3,param_4[1],param_5);
  puVar3 = (undefined4 *)FUN_01b2ea9c(param_4[1],param_5);
  if ((puVar3 == (undefined4 *)0x0 || (puVar1 == (undefined4 *)0x0 || puVar2 == (undefined4 *)0x0))
     || (iVar4 = FUN_01b2b248(param_1,param_4[1]), iVar4 == 0)) {
    uVar5 = 0;
  }
  else {
    FUN_01b30d7c(*param_1,*puVar1,*puVar2,*param_4,*puVar3,param_4[1]);
    param_1[1] = param_4[1];
    uVar5 = 1;
    param_1[3] = 0;
  }
  FUN_01b2ebbc(param_5);
  return uVar5;
}

