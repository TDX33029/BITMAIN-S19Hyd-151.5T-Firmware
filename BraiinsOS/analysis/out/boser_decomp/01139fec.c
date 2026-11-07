// FUN_01139fec @ 01139fec size=108 calls_out=4 calls_in=0
// strings: 

void FUN_01139fec(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_2 + 0x48);
  if (iVar2 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01c15fcc);
  }
  iVar3 = *(int *)(param_2 + 0x4c);
  iVar4 = *(int *)(param_2 + 0x50);
  piVar1 = (int *)thunk_FUN_01be5118(0xc);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  *piVar1 = iVar2;
  piVar1[1] = iVar3;
  piVar1[2] = iVar4;
  FUN_01bed4e2(param_1,param_2,0x48);
  *(int **)(param_1 + 0x48) = piVar1;
  *(undefined **)(param_1 + 0x4c) = &DAT_01c154c0;
  return;
}

