// FUN_0171f16c @ 0171f16c size=252 calls_out=7 calls_in=2
// strings: 

undefined4 FUN_0171f16c(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  FUN_017185b4(param_4);
  puVar3 = (undefined4 *)FUN_017186b0(param_4);
  if (((puVar3 == (undefined4 *)0x0) || (iVar4 = FUN_017147ac(param_1,param_2), iVar4 == 0)) ||
     (iVar4 = FUN_0171464c(puVar3,param_1[1]), iVar4 == 0)) {
    uVar6 = 0;
  }
  else {
    iVar4 = param_1[1];
    uVar1 = iVar4 << 5;
    if (uVar1 != 0) {
      uVar5 = 0;
      while( true ) {
        uVar2 = uVar5 & 0xff;
        FUN_0171e8ec(*puVar3,*param_1,1 << (uVar5 & 0xff),iVar4);
        uVar5 = uVar5 + 1;
        FUN_01714e04(*param_1,-(param_3 >> uVar2 & 1),*puVar3,*param_1,param_1[1]);
        if (uVar1 >> (uVar5 & 0xff) == 0) break;
        iVar4 = param_1[1];
      }
    }
    uVar6 = 1;
  }
  FUN_01718904(param_4);
  return uVar6;
}

