// FUN_009f4fb4 @ 009f4fb4 size=196 calls_out=3 calls_in=1
// strings: 

void FUN_009f4fb4(undefined2 *param_1)

{
  bool bVar1;
  int local_30;
  undefined4 uStack_2c;
  int iStack_28;
  int local_24 [3];
  
  FUN_015e9334(&local_30,&DAT_00569958,8);
  if (local_30 == -0x80000000) {
    bVar1 = true;
  }
  else {
    FUN_00fab1e0(local_24,uStack_2c,iStack_28);
    if (local_24[0] == 0) {
      if (local_30 != 0) {
        thunk_FUN_016d3fb4(uStack_2c);
      }
      bVar1 = iStack_28 == 0;
    }
    else {
      bVar1 = true;
      if (local_30 != 0) {
        thunk_FUN_016d3fb4(uStack_2c);
      }
    }
  }
  *(undefined1 *)((int)param_1 + 0xf) = 0;
  *(undefined4 *)((int)param_1 + 3) = 0;
  *(bool *)(param_1 + 7) = bVar1;
  param_1[6] = 1;
  *(undefined1 *)((int)param_1 + 7) = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 0x101;
  *(undefined **)(param_1 + 4) = &DAT_015f02a0;
  return;
}

