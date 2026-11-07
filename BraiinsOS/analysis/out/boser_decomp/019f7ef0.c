// FUN_019f7ef0 @ 019f7ef0 size=112 calls_out=1 calls_in=5
// strings: 

bool FUN_019f7ef0(int *param_1,int *param_2,int *param_3)

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
    pcVar1 = (code *)software_udf(0xfdee,0x19f7f5c);
    (*pcVar1)();
  }
  iVar3 = param_2[2];
  if (iVar3 == *param_2) {
    FUN_019ee1a8(param_2);
  }
  *(int **)(param_2[1] + iVar3 * 4) = param_3;
  param_2[2] = iVar3 + 1;
  DataMemoryBarrier(0xb);
  *param_1 = iVar3 + 1;
  return iVar3 == 0xf;
}

