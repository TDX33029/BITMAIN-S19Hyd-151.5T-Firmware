// FUN_011d8724 @ 011d8724 size=164 calls_out=3 calls_in=3
// strings: 

undefined8 FUN_011d8724(undefined4 param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  
  do {
    iVar4 = *param_3;
    bVar2 = (bool)hasExclusiveAccess(param_3);
  } while (!bVar2);
  *param_3 = iVar4 + 1;
  if (iVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x11d87c4);
    (*pcVar1)();
  }
  puVar3 = (undefined4 *)thunk_FUN_01be5118(0xc);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  *puVar3 = param_3;
  puVar3[1] = param_1;
  puVar3[2] = param_2;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *param_3;
    bVar2 = (bool)hasExclusiveAccess(param_3);
  } while (!bVar2);
  *param_3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01177340(param_3);
  }
  return CONCAT44(&DAT_01c1c180,puVar3);
}

