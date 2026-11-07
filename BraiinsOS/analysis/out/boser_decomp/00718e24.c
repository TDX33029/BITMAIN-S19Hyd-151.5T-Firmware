// FUN_00718e24 @ 00718e24 size=156 calls_out=2 calls_in=2
// strings: 

void FUN_00718e24(char *param_1,int param_2)

{
  int iVar1;
  char local_30;
  byte local_2f;
  
  iVar1 = *(int *)(param_2 + 0x2c);
  while( true ) {
    FUN_00718b48(&local_30,param_2);
    if (local_30 != 'O') {
      FUN_01bed4e2(param_1 + 2,(uint)&local_30 | 2,0xe);
      param_1[1] = local_2f;
      *param_1 = local_30;
      return;
    }
    if ((local_2f & 1) == 0) break;
    if (*(int *)(param_2 + 0x10) != 0) {
      *(int *)(param_1 + 4) = iVar1;
      *(int **)(param_1 + 8) = (int *)(param_2 + 0x10);
      *param_1 = 'O';
      return;
    }
    iVar1 = *(int *)(param_2 + 0x2c) + iVar1;
  }
  *param_1 = 'O';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  return;
}

