// FUN_01545cdc @ 01545cdc size=68 calls_out=2 calls_in=1
// strings: 

void FUN_01545cdc(int param_1)

{
  FUN_01542eb4(param_1 + 0x150);
  FUN_015448f0(param_1);
  if (*(int *)(param_1 + 0x70) != 2) {
    FUN_015448f0();
  }
  if (*(int *)(param_1 + 0xe0) == 2) {
    return;
  }
  FUN_015448f0((int *)(param_1 + 0xe0));
  return;
}

