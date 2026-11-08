// FUN_015816dc @ 015816dc size=112 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_015816dc(int param_1,char *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  if (*param_2 == '\x03') {
    if (*(int *)(param_1 + 8) != 0) {
      uVar5 = *(undefined4 *)(param_2 + 8);
      iVar4 = *(int *)(param_2 + 0xc);
      puVar2 = (undefined4 *)(*(int *)(param_1 + 4) + 4);
      iVar3 = *(int *)(param_1 + 8) * 0xc;
      do {
        if ((puVar2[1] == iVar4) && (iVar1 = thunk_FUN_01bed842(*puVar2,uVar5,iVar4), iVar1 == 0)) {
          return 1;
        }
        puVar2 = puVar2 + 3;
        iVar3 = iVar3 + -0xc;
      } while (iVar3 != 0);
    }
    uVar5 = 0;
  }
  return uVar5;
}

