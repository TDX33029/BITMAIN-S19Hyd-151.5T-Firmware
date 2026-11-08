// FUN_00f36024 @ 00f36024 size=256 calls_out=0 calls_in=6
// strings: 

void FUN_00f36024(short *param_1)

{
  undefined4 local_8;
  
  if (*param_1 != 2) {
    if ((char)param_1[2] != '\x02') {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    *(undefined1 *)(param_1 + 2) = 0;
    *(undefined1 *)(param_1 + 2) = 2;
    if (*param_1 == 1) {
      param_1[1] = 0;
    }
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((int)param_1 + 1) = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)((int)param_1 + 3) = 0;
    *param_1 = 0;
    param_1[1] = (short)param_1;
    *param_1 = 2;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)((int)param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *param_1 = 2;
  *(undefined4 *)(param_1 + 1) = local_8;
  return;
}

