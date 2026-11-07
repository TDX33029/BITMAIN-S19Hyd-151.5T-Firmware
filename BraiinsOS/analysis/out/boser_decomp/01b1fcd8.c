// FUN_01b1fcd8 @ 01b1fcd8 size=96 calls_out=1 calls_in=2
// strings: 

void FUN_01b1fcd8(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_01b6b0a8(0x58);
  if (piVar1 == (int *)0x0) {
    return;
  }
  *piVar1 = (int)(piVar1 + 5);
  iVar2 = *(int *)(param_1 + 0xec);
  piVar1[1] = iVar2;
  piVar1[2] = iVar2;
  piVar1[4] = 2;
  return;
}

