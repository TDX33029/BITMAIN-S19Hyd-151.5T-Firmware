// FUN_01499d28 @ 01499d28 size=76 calls_out=2 calls_in=1
// strings: 

void FUN_01499d28(int *param_1)

{
  FUN_01499168(param_1 + 0x16);
  if ((char)param_1[0x14] != '\x02') {
    (**(code **)(param_1[0x10] + 0x10))(param_1 + 0x13,param_1[0x11],param_1[0x12]);
  }
  if (*param_1 == 3 && param_1[1] == 0) {
    return;
  }
  FUN_0102a890(param_1);
  return;
}

