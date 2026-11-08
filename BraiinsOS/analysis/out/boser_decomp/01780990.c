// FUN_01780990 @ 01780990 size=208 calls_out=4 calls_in=2
// strings: 

void FUN_01780990(undefined1 *param_1,int param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_2 + 0x400);
  *(undefined1 *)(param_2 + 0x413) = 1;
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c(&DAT_0050928e,0x16,&DAT_01d1a410);
  }
  if (0x400 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,param_3,0x400,&DAT_01d1a420);
  }
  iVar1 = piVar2[2];
  if ((uint)(*piVar2 - iVar1) < param_3) {
    FUN_0132b898(piVar2,iVar1,param_3,1,1);
    iVar1 = piVar2[2];
  }
  FUN_01bed4e2(piVar2[1] + iVar1,param_2,param_3);
  iVar1 = piVar2[2];
  *(undefined1 *)(param_2 + 0x413) = 0;
  *(undefined4 *)(param_2 + 0x408) = 0;
  *param_1 = 4;
  piVar2[2] = iVar1 + param_3;
  return;
}

