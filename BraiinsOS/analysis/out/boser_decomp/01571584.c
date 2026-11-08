// FUN_01571584 @ 01571584 size=148 calls_out=2 calls_in=3
// strings: 

void FUN_01571584(undefined4 param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  do {
    iVar3 = *param_3;
    bVar2 = (bool)hasExclusiveAccess(param_3);
  } while (!bVar2);
  *param_3 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1571614);
    (*pcVar1)();
  }
  FUN_0166bf5c();
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *param_3;
    bVar2 = (bool)hasExclusiveAccess(param_3);
  } while (!bVar2);
  *param_3 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01670d04(param_3);
  }
  return;
}

