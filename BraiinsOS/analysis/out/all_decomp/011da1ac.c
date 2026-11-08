// FUN_011da1ac @ 011da1ac size=124 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_011da1ac(int param_1,char *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (*param_2 != '\x03') {
    return 1;
  }
  if (*(int *)(param_1 + 8) != 0) {
    uVar4 = *(undefined4 *)(param_2 + 8);
    iVar5 = *(int *)(param_2 + 0xc);
    puVar2 = (undefined4 *)(*(int *)(param_1 + 4) + 4);
    iVar3 = *(int *)(param_1 + 8) * 0xc;
    do {
      if ((puVar2[1] == iVar5) && (iVar1 = thunk_FUN_016dd50a(*puVar2,uVar4,iVar5), iVar1 == 0)) {
        return 1;
      }
      puVar2 = puVar2 + 3;
      iVar3 = iVar3 + -0xc;
    } while (iVar3 != 0);
  }
  return 0;
}

