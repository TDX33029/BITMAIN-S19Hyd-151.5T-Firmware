// FUN_0072f4d4 @ 0072f4d4 size=112 calls_out=2 calls_in=3
// strings: 

undefined4 * FUN_0072f4d4(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  if (param_1[1] != 0) {
    iVar2 = param_1[1] * 0x28;
    puVar3 = (undefined4 *)*param_1;
    do {
      uVar4 = FUN_0073238c(param_1 + 2,*puVar3);
      if ((((int)uVar4 != 0) && ((int)((ulonglong)uVar4 >> 0x20) == param_3)) &&
         (iVar1 = thunk_FUN_01bed842((int)uVar4,param_2,param_3), iVar1 == 0)) {
        return puVar3;
      }
      iVar2 = iVar2 + -0x28;
      puVar3 = puVar3 + 10;
    } while (iVar2 != 0);
  }
  return (undefined4 *)0x0;
}

