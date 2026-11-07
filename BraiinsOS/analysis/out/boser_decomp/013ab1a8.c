// FUN_013ab1a8 @ 013ab1a8 size=352 calls_out=4 calls_in=1
// strings: 

void FUN_013ab1a8(int param_1)

{
  byte bVar1;
  int iVar2;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [4];
  int local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [16];
  
  bVar1 = *(byte *)(param_1 + 0x24);
  if (bVar1 != 0xc) {
    if (((bVar1 != 0xb) && (9 < bVar1)) && (*(int *)(param_1 + 0x2c) != 0)) {
      thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x28));
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      (**(code **)(*(int *)(param_1 + 0x38) + 0x10))
                (param_1 + 0x44,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
    }
    if (*(int *)(param_1 + 0x48) != 0) {
      (**(code **)(*(int *)(param_1 + 0x48) + 0x10))
                (param_1 + 0x54,*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    }
    if (*(int *)(param_1 + 0x58) != 0) {
      (**(code **)(*(int *)(param_1 + 0x58) + 0x10))
                (param_1 + 100,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
    }
    if (*(int *)(param_1 + 0x68) != 0) {
      (**(code **)(*(int *)(param_1 + 0x68) + 0x10))
                (param_1 + 0x74,*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70));
    }
  }
  while (FUN_013b4c44(&local_40,param_1), local_40 != 2) {
    iVar2 = 0;
    if (local_40 != 0) {
      iVar2 = local_3c;
    }
    if (local_40 != 0 && iVar2 != 0) {
      (**(code **)(iVar2 + 0x10))(auStack_30,local_38,local_34);
    }
    (**(code **)(local_2c + 0x10))(auStack_20,uStack_28,uStack_24);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_006cbc5c(param_1 + 0x14);
  FUN_008e0ddc(param_1 + 8);
  return;
}

