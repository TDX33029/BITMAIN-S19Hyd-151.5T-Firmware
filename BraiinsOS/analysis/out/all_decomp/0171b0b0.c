// FUN_0171b0b0 @ 0171b0b0 size=280 calls_out=7 calls_in=1
// strings: 

undefined4
FUN_0171b0b0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 *param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_017147ac();
  if ((iVar1 == 0) || (iVar1 = FUN_01714d30(param_1,param_4[1]), iVar1 == 0)) {
    return 0;
  }
  FUN_017185b4(param_5);
  uVar3 = param_4[1];
  puVar2 = (undefined4 *)FUN_017186b0(param_5);
  if ((puVar2 == (undefined4 *)0x0) || (iVar1 = FUN_0171464c(puVar2,uVar3), iVar1 == 0)) {
    uVar3 = 0;
  }
  else {
    puVar2[1] = uVar3;
    puVar2[3] = 0;
    if (0 < param_3) {
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        uVar3 = *param_1;
        FUN_0171af10(uVar3,uVar3,uVar3,*param_4,*puVar2,param_4[1]);
      } while (param_3 != iVar1);
    }
    uVar3 = 1;
    param_1[3] = 0;
  }
  FUN_01718904(param_5);
  return uVar3;
}

