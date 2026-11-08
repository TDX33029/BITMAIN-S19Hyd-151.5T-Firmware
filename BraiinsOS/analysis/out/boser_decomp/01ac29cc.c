// FUN_01ac29cc @ 01ac29cc size=52 calls_out=1 calls_in=0
// strings: 

void FUN_01ac29cc(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = 0x7c;
  do {
    iVar1 = *(int *)(param_1 + uVar2 * 4);
    if (iVar1 != 0) {
      FUN_01ac2198(iVar1,1 << (uVar2 & 0xff));
    }
    uVar2 = uVar2 + 1;
    iVar3 = iVar3 + -4;
  } while (iVar3 != 0);
  return;
}

