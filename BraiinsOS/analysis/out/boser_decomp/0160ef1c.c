// FUN_0160ef1c @ 0160ef1c size=124 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_0160ef1c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(param_1 + 0x30);
  uVar4 = 1;
  if (iVar2 != -0x80000000) {
    if (param_2 != 0) {
      iVar2 = *(int *)(param_1 + 0x38);
    }
    if (param_2 != 0 && iVar2 != 0) {
      puVar3 = (undefined4 *)(*(int *)(param_1 + 0x34) + 4);
      iVar2 = iVar2 * 0xc;
      do {
        if ((puVar3[1] == param_3) &&
           (iVar1 = thunk_FUN_01bed842(*puVar3,param_2,param_3), iVar1 == 0)) {
          return 1;
        }
        puVar3 = puVar3 + 3;
        iVar2 = iVar2 + -0xc;
      } while (iVar2 != 0);
    }
    uVar4 = 0;
  }
  return uVar4;
}

