// FUN_0196a870 @ 0196a870 size=96 calls_out=2 calls_in=2
// strings: 

void FUN_0196a870(undefined4 *param_1,int param_2)

{
  int iStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  *(undefined4 *)(param_2 + 8) = 0;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  FUN_019686b4(&iStack_14,param_2 + 0xc);
  if (iStack_14 == 2) {
    *param_1 = 0x80000000;
    param_1[1] = uStack_10;
    return;
  }
  FUN_012c1060(param_1,uStack_10,local_c);
  return;
}

