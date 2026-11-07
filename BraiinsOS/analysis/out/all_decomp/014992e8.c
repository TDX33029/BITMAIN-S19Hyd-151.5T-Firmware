// FUN_014992e8 @ 014992e8 size=68 calls_out=1 calls_in=0
// strings: 

void FUN_014992e8(int *param_1)

{
  if ((char)param_1[0x14] != '\x02') {
    (**(code **)(param_1[0x10] + 0x10))(param_1 + 0x13,param_1[0x11],param_1[0x12]);
  }
  if (*param_1 == 3 && param_1[1] == 0) {
    return;
  }
  FUN_0102a890(param_1);
  return;
}

