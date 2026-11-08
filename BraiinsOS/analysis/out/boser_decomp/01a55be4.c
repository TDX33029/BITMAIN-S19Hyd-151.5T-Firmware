// FUN_01a55be4 @ 01a55be4 size=64 calls_out=2 calls_in=2
// strings: 

bool FUN_01a55be4(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (int *)FUN_01a551d0();
  iVar5 = 0;
  piVar2 = (int *)*piVar1;
  while (piVar2 != (int *)piVar1[1]) {
    piVar3 = piVar2 + 0x30;
    iVar4 = *piVar2;
    *piVar1 = (int)piVar3;
    piVar2 = piVar3;
    if (iVar4 != 0) {
      iVar5 = iVar5 + 1;
    }
  }
  thunk_FUN_01be4678();
  return iVar5 == 0;
}

