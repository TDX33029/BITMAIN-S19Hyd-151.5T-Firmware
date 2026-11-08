// FUN_00cb6b38 @ 00cb6b38 size=100 calls_out=4 calls_in=2
// strings: 

void FUN_00cb6b38(undefined4 *param_1)

{
  if (*(char *)(param_1 + 0x19) == '\x03') {
    FUN_00fe4378(param_1[0x17],param_1[0x18]);
    *(undefined1 *)((int)param_1 + 0x69) = 0;
    FUN_0134aee0(param_1[0x14],param_1[0x15],1,4);
  }
  else if (*(char *)(param_1 + 0x19) != '\0') {
    return;
  }
  FUN_019bb7e0(*param_1,param_1[1]);
  FUN_019bb7e0(param_1[3],param_1[4]);
  FUN_019bb7e0(param_1[6],param_1[7]);
  FUN_006a41c0(param_1 + 9);
  return;
}

