// FUN_01af3370 @ 01af3370 size=92 calls_out=1 calls_in=3
// strings: 

void FUN_01af3370(int *param_1)

{
  int iVar1;
  int local_38;
  undefined1 *puStack_34;
  int iStack_30;
  int local_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  FUN_01af33cc(&local_38);
  if (local_38 == -0x7fffffd3) {
    iVar1 = -0x80000000;
    if (iStack_30 == 1) {
      iVar1 = -0x7fffffd3;
      *(undefined1 *)(param_1 + 1) = *puStack_34;
    }
    *param_1 = iVar1;
  }
  else {
    param_1[3] = local_2c;
    param_1[4] = iStack_28;
    param_1[5] = iStack_24;
    param_1[6] = iStack_20;
    param_1[7] = iStack_1c;
    *param_1 = local_38;
    param_1[1] = (int)puStack_34;
    param_1[2] = iStack_30;
  }
  return;
}

