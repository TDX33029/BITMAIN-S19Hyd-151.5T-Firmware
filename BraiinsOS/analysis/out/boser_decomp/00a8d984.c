// FUN_00a8d984 @ 00a8d984 size=96 calls_out=1 calls_in=0
// strings: 

void FUN_00a8d984(char param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  
  if (param_1 == '\0') {
    puVar1 = &local_b;
    local_b = 0;
  }
  else if (param_1 == '\x01') {
    puVar1 = &local_a;
    local_a = 1;
  }
  else {
    puVar1 = &local_9;
    local_9 = 2;
  }
  FUN_01ac6d2c(param_2,puVar1,puVar1 + 1);
  return;
}

