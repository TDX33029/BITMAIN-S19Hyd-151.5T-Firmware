// FUN_014b5ad4 @ 014b5ad4 size=124 calls_out=2 calls_in=2
// strings: 

void FUN_014b5ad4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  
  FUN_01965170(&local_18);
  if ((char)local_18 == '\x01') {
LAB_014b5af8:
    param_1[1] = local_14;
    *(undefined2 *)param_1 = 1;
  }
  else {
    if (local_18._1_1_ == '\0') {
      uVar1 = 0;
    }
    else {
      FUN_014b593c(&local_18,*param_2);
      if (local_18 != 0) goto LAB_014b5af8;
      *(undefined2 *)(param_1 + 1) = local_16;
      uVar1 = 0x10000;
    }
    *param_1 = uVar1;
  }
  return;
}

