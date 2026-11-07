// FUN_01b30464 @ 01b30464 size=276 calls_out=4 calls_in=3
// strings: 

undefined4 FUN_01b30464(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar1 = param_3 * 2;
  param_1[iVar1 + 0x3fffffff] = 0;
  *param_1 = 0;
  if (param_3 != 1) {
    uVar2 = FUN_01b2ef2c(param_1 + 1,param_2 + 1,param_3 + -1,*param_2);
    (param_1 + 1)[param_3 + 0x3fffffff] = uVar2;
    if (param_3 != 2) {
      iVar3 = param_3 + -2;
      puVar6 = param_1 + param_3 + 0x40000000;
      puVar4 = param_2 + 1;
      puVar5 = param_1 + 3;
      do {
        uVar2 = FUN_01b2ee10(puVar5,puVar4 + 1,iVar3,*puVar4);
        puVar6 = puVar6 + 1;
        *puVar6 = uVar2;
        iVar3 = iVar3 + -1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 2;
      } while (iVar3 != 0);
    }
  }
  FUN_01b30190(param_1,param_1,param_1,iVar1);
  FUN_01b2f184(param_4,param_2,param_3);
  uVar2 = FUN_01b30190(param_1,param_1,param_4,iVar1);
  return uVar2;
}

