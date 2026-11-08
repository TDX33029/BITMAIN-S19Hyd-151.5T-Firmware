// FUN_01279988 @ 01279988 size=40 calls_out=1 calls_in=1
// strings: 

void FUN_01279988(char *param_1)

{
  if (*param_1 != '\x01' && *param_1 != '\x03') {
    return;
  }
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  thunk_FUN_01be4678(*(undefined4 *)(param_1 + 4));
  return;
}

