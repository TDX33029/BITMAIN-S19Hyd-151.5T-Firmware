// FUN_012d9f1c @ 012d9f1c size=160 calls_out=4 calls_in=1
// strings: 

void FUN_012d9f1c(undefined4 param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int local_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int local_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  piVar2 = (int *)FUN_019b0254();
  local_44 = *param_2;
  *param_2 = -0x80000000;
  if (local_44 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d06a98);
  }
  local_40 = param_2[1];
  iStack_3c = param_2[2];
  iStack_38 = param_2[3];
  iStack_34 = param_2[4];
  iStack_30 = param_2[5];
  local_2c = param_2[6];
  iStack_28 = param_2[7];
  iStack_24 = param_2[8];
  iStack_20 = param_2[9];
  iStack_1c = param_2[10];
  FUN_012d97d8(param_1,&local_44,piVar2);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019db128(piVar2);
    return;
  }
  return;
}

