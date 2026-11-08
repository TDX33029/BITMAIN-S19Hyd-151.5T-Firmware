// FUN_0195deb8 @ 0195deb8 size=116 calls_out=1 calls_in=1
// strings: 

void FUN_0195deb8(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 auStack_1a [10];
  
  if (*(int *)(*param_1 + 4) != *param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012ffe14(0,auStack_1a + -0xe,&DAT_01d27080,auStack_1a + -10);
  }
  iVar1 = param_2[2];
  *(int *)(*param_1 + 8) = param_2[1];
  param_1[1] = iVar1;
  return;
}

