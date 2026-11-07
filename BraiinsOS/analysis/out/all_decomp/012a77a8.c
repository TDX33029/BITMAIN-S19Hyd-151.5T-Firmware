// FUN_012a77a8 @ 012a77a8 size=144 calls_out=2 calls_in=0
// strings: 

void FUN_012a77a8(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 *local_1c;
  undefined4 **local_18;
  undefined4 ***local_14;
  
  local_1c = &DAT_018d8844;
  DataMemoryBarrier(0xb);
  if (DAT_018d8844 != 0) {
    local_18 = &local_1c;
    local_14 = &local_18;
    FUN_015eedc4(&DAT_018d8844,0,&local_14,&DAT_0188bdd8,&DAT_0188bca0);
  }
  uVar1 = FUN_0133c5fc(local_1c[1],*param_2);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *param_1 = 9;
  return;
}

