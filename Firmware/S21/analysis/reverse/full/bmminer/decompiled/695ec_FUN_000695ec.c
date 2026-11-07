// FUN_000695ec @ 000695ec  size=200  callers=1
// program: bmminer


void FUN_000695ec(int param_1,int param_2)

{
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00069eec(*(undefined4 *)(param_2 + 0x10),&local_c);
    (**(code **)(param_1 + 0x1c))(local_c);
  }
  FUN_00069fcc(*(undefined4 *)(param_2 + 0x10));
  if (*(int *)(param_2 + 0x14) != 0) {
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00069eec(*(undefined4 *)(param_2 + 0x14),&local_10);
      (**(code **)(param_1 + 0x20))(local_10);
    }
    FUN_00069fcc(*(undefined4 *)(param_2 + 0x14));
  }
  return;
}

