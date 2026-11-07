// FUN_0171b5e8 @ 0171b5e8 size=272 calls_out=6 calls_in=2
// strings: 

undefined4
FUN_0171b5e8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  FUN_017185b4(param_5);
  puVar1 = (undefined4 *)FUN_01718810(param_2,param_4[1],param_5);
  puVar2 = (undefined4 *)FUN_01718810(param_3,param_4[1],param_5);
  uVar5 = param_4[1];
  puVar3 = (undefined4 *)FUN_017186b0(param_5);
  if ((puVar3 != (undefined4 *)0x0) && (iVar4 = FUN_0171464c(puVar3,uVar5), iVar4 != 0)) {
    puVar3[1] = uVar5;
    puVar3[3] = 0;
    if ((puVar1 != (undefined4 *)0x0 && puVar2 != (undefined4 *)0x0) &&
       (iVar4 = FUN_0171464c(param_1,param_4[1]), iVar4 != 0)) {
      uVar5 = 1;
      FUN_0171b584(*param_1,*puVar1,*puVar2,*param_4,*puVar3,param_4[1]);
      param_1[1] = param_4[1];
      param_1[3] = 0;
      goto LAB_0171b684;
    }
  }
  uVar5 = 0;
LAB_0171b684:
  FUN_01718904(param_5);
  return uVar5;
}

