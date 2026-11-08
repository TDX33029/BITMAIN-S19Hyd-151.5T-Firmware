// FUN_0076dc84 @ 0076dc84 size=212 calls_out=5 calls_in=1
// strings: 

void FUN_0076dc84(undefined4 param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int local_1a8 [50];
  int local_e0 [50];
  
  FUN_0076dd88(local_1a8);
  if (local_1a8[0] != -0x7fffffff) {
    FUN_01bed4e2(local_e0,local_1a8,0xc4);
    if (local_e0[0] == -0x80000000) {
      piVar2 = (int *)*param_2;
      if (piVar2 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_013cf318(*param_2);
        }
      }
      *param_2 = 0;
    }
    FUN_01bed4e2(param_1,local_e0,0xc4);
    return;
  }
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d2df1c);
  }
  FUN_01348e78(*param_2 + 0x24,param_3);
  FUN_0076dd88(param_1,param_2);
  return;
}

