// FUN_00e7c3bc @ 00e7c3bc size=44 calls_out=1 calls_in=3
// strings: 

void FUN_00e7c3bc(uint *param_1)

{
  uint *puVar1;
  
  puVar1 = param_1 + 1;
  if (*param_1 < 2) {
    FUN_019bb7e0(param_1[1],param_1[2]);
    puVar1 = param_1 + 4;
  }
  FUN_019bb7e0(*puVar1,puVar1[1]);
  return;
}

