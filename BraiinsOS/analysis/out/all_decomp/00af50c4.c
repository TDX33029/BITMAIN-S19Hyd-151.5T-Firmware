// FUN_00af50c4 @ 00af50c4 size=184 calls_out=9 calls_in=1
// strings: 

void FUN_00af50c4(int param_1)

{
  switch(*(undefined1 *)(param_1 + 0x648)) {
  case 0:
    FUN_00b101b8(param_1);
    return;
  default:
    return;
  case 3:
    FUN_00b15fac(param_1 + 0x668);
    break;
  case 4:
    FUN_00b170b0(param_1 + 0x6a8);
    FUN_00c48708(param_1 + 0x694);
    break;
  case 5:
    FUN_00b17400(param_1 + 0x650);
    break;
  case 6:
    FUN_00b17638(param_1 + 0x650);
    break;
  case 7:
    FUN_00b17828(param_1 + 0x680);
    if (*(int *)(param_1 + 0x670) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x674));
      *(undefined4 *)(param_1 + 0x649) = 0;
      *(undefined2 *)(param_1 + 0x64d) = 0;
      return;
    }
    break;
  case 8:
    FUN_00b104cc(param_1 + 0x650);
  }
  *(undefined4 *)(param_1 + 0x649) = 0;
  *(undefined2 *)(param_1 + 0x64d) = 0;
  return;
}

