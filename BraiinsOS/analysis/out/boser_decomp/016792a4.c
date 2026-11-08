// FUN_016792a4 @ 016792a4 size=76 calls_out=2 calls_in=1
// strings: 

void FUN_016792a4(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  if (iVar3 != 0) {
    puVar1 = (undefined4 *)(iVar2 + 4);
    do {
      if (-0x7fffffff < (int)puVar1[-1]) {
        FUN_019bb7e0(puVar1[-1],*puVar1);
      }
      puVar1 = puVar1 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_0134c054(*param_1,iVar2,4,0xc);
  return;
}

