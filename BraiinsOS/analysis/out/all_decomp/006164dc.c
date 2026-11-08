// FUN_006164dc @ 006164dc size=64 calls_out=1 calls_in=1
// strings: .debug_str_offsets.dwo

void FUN_006164dc(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0062d74c(param_2,param_3,".debug_str_offsets.dwo",0x16);
  if ((int)uVar1 == 0) {
    uVar1 = 1;
  }
  *param_1 = 0x4f;
  *(undefined8 *)(param_1 + 4) = uVar1;
  return;
}

