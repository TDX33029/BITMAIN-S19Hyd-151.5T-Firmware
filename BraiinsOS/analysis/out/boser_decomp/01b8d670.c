// FUN_01b8d670 @ 01b8d670 size=96 calls_out=0 calls_in=3
// strings: 

uint FUN_01b8d670(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)(param_1 + -2);
  piVar1 = (int *)(param_3 + -4);
  uVar2 = 0;
  do {
    psVar4 = psVar4 + 1;
    iVar3 = (int)*psVar4;
    piVar1 = piVar1 + 1;
    if (iVar3 == -1) {
      iVar3 = 1;
    }
    uVar2 = *piVar1 * *(int *)(&DAT_0056296c + (iVar3 << (8U - param_2 & 0xff)) * 4) + uVar2;
  } while ((short *)(param_1 + param_4 * 2) != psVar4);
  return uVar2 >> 8;
}

