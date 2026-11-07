// FUN_008a7eac @ 008a7eac size=124 calls_out=2 calls_in=0
// strings: 

void FUN_008a7eac(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  char local_28 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  if (param_3 == 0) {
    uVar1 = FUN_00808f1c(&DAT_00344eb7,0x55);
  }
  else {
    (**(code **)(*(int *)(param_2 + 0x14c) + 0x10))(local_28,*(undefined4 *)(param_2 + 0x148),1);
    if (local_28[0] == '\f') {
      *param_1 = uStack_24;
      param_1[1] = uStack_20;
      return;
    }
    uVar1 = FUN_00809000(local_28);
  }
  *param_1 = 0;
  param_1[1] = uVar1;
  return;
}

