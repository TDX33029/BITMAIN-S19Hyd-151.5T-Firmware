// FUN_018c3860 @ 018c3860 size=124 calls_out=0 calls_in=0
// strings: 

short FUN_018c3860(undefined4 *param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  short *psVar5;
  
  psVar3 = (short *)*param_1;
  do {
    do {
      if (psVar3 == (short *)param_1[1]) {
        return 0xe;
      }
      sVar1 = psVar3[1];
      sVar2 = *psVar3;
      psVar3 = psVar3 + 2;
      *param_1 = psVar3;
    } while (param_3 == 0);
    iVar4 = param_3 << 2;
    psVar5 = (short *)(param_2 + 2);
    do {
      if (psVar5[-1] == sVar2) {
        if (sVar2 != 0xd) {
          return sVar2;
        }
        if (*psVar5 == sVar1) {
          return 0xd;
        }
      }
      psVar5 = psVar5 + 2;
      iVar4 = iVar4 + -4;
    } while (iVar4 != 0);
  } while( true );
}

