// FUN_00e7ac24 @ 00e7ac24 size=116 calls_out=1 calls_in=1
// strings: 

void FUN_00e7ac24(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 == -0x80000000) {
    param_1[0x12] = 1;
    iVar1 = param_2[1];
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)((int)param_1 + 0x46) = 2;
    param_1[0x10] = 0;
    *(undefined2 *)(param_1 + 0xe) = 0;
    param_1[6] = 2;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 4;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 4;
    param_1[0xd] = 0;
    param_1[0x13] = &DAT_01c07674;
    *(short *)(param_1 + 0x11) = (short)iVar1;
    return;
  }
  FUN_00a28800();
  return;
}

