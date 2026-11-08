// FUN_01a61db4 @ 01a61db4 size=68 calls_out=2 calls_in=1
// strings: 

int FUN_01a61db4(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar1 = (int *)FUN_01a61224();
  iVar5 = 0;
  piVar2 = (int *)*piVar1;
  while (piVar2 != (int *)piVar1[1]) {
    piVar4 = piVar2 + 0x30;
    *piVar1 = (int)piVar4;
    iVar3 = *piVar2;
    piVar2 = piVar4;
    if (iVar3 != 0) {
      iVar5 = iVar5 + 1;
    }
  }
  thunk_FUN_01be4678();
  return iVar5;
}

