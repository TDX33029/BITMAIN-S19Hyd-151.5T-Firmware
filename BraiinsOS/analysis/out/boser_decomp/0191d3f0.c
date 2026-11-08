// FUN_0191d3f0 @ 0191d3f0 size=108 calls_out=2 calls_in=7
// strings: 

void FUN_0191d3f0(int param_1)

{
  char cVar1;
  int local_28 [8];
  
  cVar1 = *(char *)(param_1 + 0x25b);
  *(undefined1 *)(param_1 + 0x25b) = 0;
  if (cVar1 == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x270) == -0x7fffffd7) {
    (**(code **)(*(int *)(param_1 + 0x278) + 0x18))(local_28,*(undefined4 *)(param_1 + 0x274));
  }
  else {
    FUN_0191c9f0(local_28);
  }
  if (local_28[0] != -0x7fffffd7) {
    FUN_01918c18(local_28);
  }
  return;
}

