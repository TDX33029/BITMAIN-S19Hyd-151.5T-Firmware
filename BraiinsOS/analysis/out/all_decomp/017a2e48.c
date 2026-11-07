// FUN_017a2e48 @ 017a2e48 size=96 calls_out=0 calls_in=2
// strings: 

uint FUN_017a2e48(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  short *psVar4;
  
  piVar2 = (int *)(param_3 + -4);
  psVar4 = (short *)(param_1 + -2);
  uVar1 = 0;
  do {
    psVar4 = psVar4 + 1;
    iVar3 = (int)*psVar4;
    piVar2 = piVar2 + 1;
    if (iVar3 == -1) {
      iVar3 = 1;
    }
    uVar1 = *piVar2 * *(int *)(&DAT_00451158 + (iVar3 << (8U - param_2 & 0xff)) * 4) + uVar1;
  } while ((short *)(param_1 + param_4 * 2) != psVar4);
  return uVar1 >> 8;
}

