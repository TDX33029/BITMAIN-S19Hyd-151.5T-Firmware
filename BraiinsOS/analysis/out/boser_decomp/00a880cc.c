// FUN_00a880cc @ 00a880cc size=128 calls_out=2 calls_in=3
// strings: 

void FUN_00a880cc(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_0094f574(&local_14);
  if ((char)local_14 != '\x01') {
    if (local_14._1_1_ == '\0') {
      uVar1 = 0;
      param_1[1] = 0;
      goto LAB_00a88140;
    }
    if (local_14._1_1_ == '\x01') {
      param_1[1] = 1;
      uVar1 = 0;
      goto LAB_00a88140;
    }
    local_10 = CONCAT31(local_10._1_3_,local_14._1_1_);
    local_14 = 0x80000002;
    local_10 = FUN_0073696c(&local_14);
  }
  *(undefined4 *)(param_1 + 4) = local_10;
  uVar1 = 1;
LAB_00a88140:
  *param_1 = uVar1;
  return;
}

