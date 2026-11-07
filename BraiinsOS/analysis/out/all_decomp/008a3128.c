// FUN_008a3128 @ 008a3128 size=76 calls_out=1 calls_in=0
// strings: 

void FUN_008a3128(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x28);
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

