// FUN_006cedd4 @ 006cedd4 size=140 calls_out=3 calls_in=0
// strings: 

void FUN_006cedd4(int param_1)

{
  int iVar1;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [4];
  int local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [8];
  
  while (FUN_006ced10(&local_40,param_1), local_40 != 2) {
    iVar1 = 0;
    if (local_40 != 0) {
      iVar1 = local_3c;
    }
    if (local_40 != 0 && iVar1 != 0) {
      (**(code **)(iVar1 + 0x10))(auStack_30,local_38,local_34);
    }
    (**(code **)(local_2c + 0x10))(auStack_20,uStack_28,uStack_24);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_006cbc5c(param_1 + 0x14);
  FUN_008e0ddc(param_1 + 8);
  return;
}

