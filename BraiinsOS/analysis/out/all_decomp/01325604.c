// FUN_01325604 @ 01325604 size=140 calls_out=2 calls_in=0
// strings: 

void FUN_01325604(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 *local_1c;
  undefined4 **local_18;
  undefined4 **local_14;
  
  local_1c = &DAT_018d8934;
  DataMemoryBarrier(0xb);
  if (DAT_018d8934 != 0) {
    local_18 = &local_1c;
    local_14 = &local_18;
    FUN_015eedc4(&DAT_018d8934,0,&local_14,&DAT_0188f078,&DAT_0188e9dc);
  }
  uVar1 = FUN_0133c5fc(DAT_018d8938,*param_2);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *param_1 = 9;
  return;
}

