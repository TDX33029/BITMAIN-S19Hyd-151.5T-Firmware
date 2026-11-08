// FUN_0126a030 @ 0126a030 size=148 calls_out=2 calls_in=1
// strings: 

void FUN_0126a030(undefined4 *param_1)

{
  bool bVar1;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  
  FUN_019abc84(&local_20,&DAT_0056fb80,8);
  if (local_20 == 0) {
    FUN_0134bd64(local_1c,local_18);
    bVar1 = local_14 == 0;
  }
  else {
    bVar1 = true;
    if (local_1c != -0x80000000) {
      FUN_0134bd64(local_1c,local_18);
    }
  }
  *(undefined1 *)((int)param_1 + 0xf) = 0;
  *(bool *)((int)param_1 + 0xe) = bVar1;
  *(undefined2 *)(param_1 + 3) = 1;
  *param_1 = 0x10101;
  param_1[1] = 0x2000000;
  param_1[2] = &DAT_019a892c;
  return;
}

