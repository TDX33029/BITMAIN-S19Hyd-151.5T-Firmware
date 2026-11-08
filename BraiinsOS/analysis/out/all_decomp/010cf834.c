// FUN_010cf834 @ 010cf834 size=76 calls_out=1 calls_in=0
// strings: 

void FUN_010cf834(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x24);
  if (piVar2[1] != 3) {
    return;
  }
  iVar1 = (**(code **)(*piVar2 + 0x18))(piVar2);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_0033d887,0x18,&DAT_018576d0);
  }
  return;
}

