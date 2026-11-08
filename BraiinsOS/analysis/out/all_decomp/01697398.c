// FUN_01697398 @ 01697398 size=160 calls_out=4 calls_in=1
// strings: 

void FUN_01697398(undefined4 param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int local_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  piVar2 = (int *)FUN_00fba86c();
  local_38 = *param_2;
  *param_2 = -0x7fffffff;
  if (local_38 == -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ae130);
  }
  local_34 = param_2[1];
  iStack_30 = param_2[2];
  iStack_2c = param_2[3];
  local_28 = param_2[4];
  iStack_24 = param_2[5];
  iStack_20 = param_2[6];
  iStack_1c = param_2[7];
  FUN_01696ae4(param_1,&local_38,piVar2);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00fbaa00(piVar2);
    return;
  }
  return;
}

