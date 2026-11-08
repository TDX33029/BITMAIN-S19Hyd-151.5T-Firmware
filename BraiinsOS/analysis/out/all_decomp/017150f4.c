// FUN_017150f4 @ 017150f4 size=204 calls_out=4 calls_in=11
// strings: 

undefined4 * FUN_017150f4(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_017141d0();
    if (puVar3 != (undefined4 *)0x0) {
      param_3 = puVar3;
      goto LAB_01715120;
    }
  }
  else {
    puVar3 = (undefined4 *)0x0;
LAB_01715120:
    if (param_2 == 0) {
      param_3[1] = 0;
      goto LAB_01715130;
    }
    iVar2 = (param_2 - 1U >> 2) + 1;
    iVar1 = FUN_0171464c(param_3);
    if (iVar1 != 0) {
      param_3[1] = iVar2;
      param_3[3] = 0;
      FUN_01714f80(*param_3,iVar2,param_1);
      goto LAB_01715130;
    }
    FUN_017046e0(puVar3);
  }
  param_3 = (undefined4 *)0x0;
LAB_01715130:
  return param_3;
}

