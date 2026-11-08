// FUN_01ac63fc @ 01ac63fc size=100 calls_out=1 calls_in=5
// strings: 

undefined4 FUN_01ac63fc(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_4 != 0) {
    puVar2 = (undefined4 *)(param_3 + 4);
    param_4 = param_4 * 0xc;
    do {
      if ((puVar2[1] == param_2) &&
         (iVar1 = thunk_FUN_01bed842(*puVar2,param_1,param_2), iVar1 == 0)) {
        return 1;
      }
      puVar2 = puVar2 + 3;
      param_4 = param_4 + -0xc;
    } while (param_4 != 0);
  }
  return 0;
}

