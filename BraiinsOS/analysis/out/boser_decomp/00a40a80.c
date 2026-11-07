// FUN_00a40a80 @ 00a40a80 size=208 calls_out=1 calls_in=3
// strings: 

void FUN_00a40a80(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  double local_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  
  if (*(int *)(param_2 + 0x118) == 2 && *(int *)(param_2 + 0x11c) == 0) {
    uVar1 = 2;
  }
  else {
    FUN_00b621e8(&local_68);
    uVar1 = 1;
    param_1[4] = 1;
    param_1[5] = 0;
    param_1[8] = 1;
    param_1[9] = 0;
    param_1[0xc] = 1;
    param_1[0xd] = 0;
    param_1[0x10] = 1;
    param_1[0x11] = 0;
    param_1[0x14] = 1;
    param_1[0x15] = 0;
    param_1[0x18] = 1;
    param_1[0x19] = 0;
    param_1[0x1c] = 1;
    param_1[0x1d] = 0;
    param_1[0x20] = 1;
    param_1[0x21] = 0;
    param_1[0x24] = 1;
    param_1[0x25] = 0;
    *(double *)(param_1 + 2) = dStack_60 / 1000.0;
    *(double *)(param_1 + 6) = dStack_58 / 1000.0;
    *(double *)(param_1 + 10) = dStack_50 / 1000.0;
    *(double *)(param_1 + 0xe) = dStack_48 / 1000.0;
    *(double *)(param_1 + 0x12) = dStack_40 / 1000.0;
    *(double *)(param_1 + 0x16) = dStack_38 / 1000.0;
    *(double *)(param_1 + 0x1a) = dStack_30 / 1000.0;
    *(double *)(param_1 + 0x1e) = dStack_28 / 1000.0;
    *(double *)(param_1 + 0x22) = dStack_20 / 1000.0;
    *(double *)(param_1 + 0x26) = local_68 / 1000.0;
  }
  *param_1 = uVar1;
  param_1[1] = 0;
  return;
}

