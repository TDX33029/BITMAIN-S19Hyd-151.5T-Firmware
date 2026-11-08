// FUN_00f33df4 @ 00f33df4 size=80 calls_out=0 calls_in=1
// strings: 

void FUN_00f33df4(short *param_1)

{
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
  return;
}

