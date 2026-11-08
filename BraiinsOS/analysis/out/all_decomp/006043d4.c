// FUN_006043d4 @ 006043d4 size=296 calls_out=4 calls_in=1
// strings: end of range should be a character boundary

void FUN_006043d4(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar1 = param_1[2];
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,1,0,&DAT_018576b0);
  }
  puVar2 = (undefined1 *)param_1[1];
  if ((iVar1 != 1) && ((char)puVar2[1] < -0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("end of range should be a character boundary",0x57,&DAT_018576b0);
  }
  iVar1 = iVar1 + -1;
  iVar3 = 0;
  param_1[2] = 0;
  if (iVar1 == 0) {
    if (*param_1 == 0) {
      FUN_010e02bc(param_1,0,1);
      puVar2 = (undefined1 *)param_1[1];
      iVar3 = param_1[2];
    }
    puVar2[iVar3] = 0x53;
    param_1[2] = iVar3 + 1;
    return;
  }
  *puVar2 = 0x53;
  iVar3 = param_1[2] + 1;
  param_1[2] = iVar3;
  if (iVar3 != 1) {
    FUN_016dd52c(param_1[1] + iVar3,param_1[1] + 1,iVar1);
  }
  param_1[2] = iVar3 + iVar1;
  return;
}

