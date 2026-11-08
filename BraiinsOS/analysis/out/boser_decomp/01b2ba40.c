// FUN_01b2ba40 @ 01b2ba40 size=176 calls_out=4 calls_in=11
// strings: 

undefined4 * FUN_01b2ba40(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_3 == (undefined4 *)0x0) {
    param_3 = (undefined4 *)FUN_01b2adb8();
    puVar3 = param_3;
    if (param_3 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
  }
  else {
    puVar3 = (undefined4 *)0x0;
  }
  if (param_2 == 0) {
    param_3[1] = 0;
    return param_3;
  }
  iVar2 = (param_2 - 1U >> 2) + 1;
  iVar1 = FUN_01b2b248(param_3,iVar2);
  if (iVar1 == 0) {
    FUN_01b1f904(puVar3);
    return (undefined4 *)0x0;
  }
  param_3[3] = 0;
  param_3[1] = iVar2;
  FUN_01b2b99c(*param_3,iVar2,param_1,param_2);
  return param_3;
}

