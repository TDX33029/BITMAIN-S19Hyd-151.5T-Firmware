// FUN_01adb830 @ 01adb830 size=100 calls_out=1 calls_in=2
// strings: 

undefined4 FUN_01adb830(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar2 = 0;
  if (param_2 == param_4) {
    if (param_2 != 0) {
      puVar3 = (undefined4 *)(param_1 + 4);
      puVar4 = (undefined4 *)(param_3 + 4);
      do {
        if (puVar3[1] != puVar4[1]) {
          return 0;
        }
        iVar1 = thunk_FUN_01bed842(*puVar3,*puVar4);
        if (iVar1 != 0) {
          return 0;
        }
        puVar3 = puVar3 + 3;
        puVar4 = puVar4 + 3;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    uVar2 = 1;
  }
  return uVar2;
}

