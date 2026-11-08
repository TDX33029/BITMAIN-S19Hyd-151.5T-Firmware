// FUN_01890aec @ 01890aec size=72 calls_out=0 calls_in=2
// strings: 

void FUN_01890aec(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 local_10 [4];
  
  iVar1 = 0;
  do {
    local_10[iVar1] = *(undefined4 *)(param_2 + iVar1 * 4);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  param_1[3] = local_10[3];
  param_1[2] = local_10[2];
  param_1[1] = local_10[1];
  *param_1 = local_10[0];
  return;
}

