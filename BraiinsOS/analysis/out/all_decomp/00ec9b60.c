// FUN_00ec9b60 @ 00ec9b60 size=180 calls_out=1 calls_in=0
// strings: 

void FUN_00ec9b60(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  param_1 = (int *)*param_1;
  piVar2 = param_1 + 5;
  DataMemoryBarrier(0xb);
  iVar3 = param_1[5];
  do {
    if (iVar3 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00408941,0x35,&DAT_0187bdf8);
    }
    iVar4 = *piVar2;
    if (iVar4 == iVar3) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar2);
        if (bVar1) {
          *piVar2 = iVar3 + 1;
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *param_1;
            bVar1 = (bool)hasExclusiveAccess(param_1);
          } while (!bVar1);
          *param_1 = iVar3 + 1;
          if (iVar3 < 0) {
            software_udf(0xfdee,0xec9bf8);
            return;
          }
          return;
        }
        iVar4 = *piVar2;
      } while (iVar4 == iVar3);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    iVar3 = iVar4;
  } while( true );
}

