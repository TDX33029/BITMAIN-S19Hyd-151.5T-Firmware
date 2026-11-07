// FUN_019cad90 @ 019cad90 size=116 calls_out=2 calls_in=2
// strings: 

void FUN_019cad90(uint *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int local_24;
  uint local_20;
  uint local_1c;
  
  uVar1 = param_2[1];
  FUN_019adfac(&local_24,uVar1,param_2[2]);
  if (local_24 != 1) {
    param_1[1] = local_20;
    *(undefined1 *)(param_1 + 2) = (undefined1)local_1c;
  }
  else {
    param_1[1] = local_20;
    param_1[2] = local_1c;
  }
  *param_1 = (uint)(local_24 == 1);
  FUN_0134bd64(*param_2,uVar1);
  return;
}

