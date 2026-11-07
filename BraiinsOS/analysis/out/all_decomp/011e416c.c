// FUN_011e416c @ 011e416c size=116 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_011e416c(int param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if ((*param_2 == '\x03') && (*(int *)(param_1 + 0x28) != 0)) {
    iVar3 = *(int *)(param_1 + 0x28) << 3;
    uVar4 = *(undefined4 *)(param_2 + 8);
    iVar5 = *(int *)(param_2 + 0xc);
    piVar2 = (int *)(*(int *)(param_1 + 0x24) + 4);
    do {
      if ((*piVar2 == iVar5) && (iVar1 = thunk_FUN_016dd50a(piVar2[-1],uVar4,iVar5), iVar1 == 0)) {
        return 1;
      }
      piVar2 = piVar2 + 2;
      iVar3 = iVar3 + -8;
    } while (iVar3 != 0);
  }
  return 0;
}

