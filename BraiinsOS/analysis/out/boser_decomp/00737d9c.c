// FUN_00737d9c @ 00737d9c size=192 calls_out=6 calls_in=1
// strings: waker missing

void FUN_00737d9c(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 local_20 [6];
  
  uVar1 = FUN_019d8b4c();
  if ((uVar1 & 8) == 0) {
    local_20[0] = 2;
    FUN_007421c0(param_1 + 0x18,local_20);
  }
  else if ((uVar1 & 0x10) != 0) {
    if (*(int *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("waker missing",0x1b,&DAT_01d29c20);
    }
    (**(code **)(*(int *)(param_1 + 0x48) + 8))(*(undefined4 *)(param_1 + 0x4c));
    uVar1 = FUN_019d8c50(param_1);
    if ((uVar1 & 8) == 0) {
      if (*(int *)(param_1 + 0x48) != 0) {
        (**(code **)(*(int *)(param_1 + 0x48) + 0xc))(*(undefined4 *)(param_1 + 0x4c));
      }
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
  }
  iVar2 = FUN_019d8bc0(param_1,1);
  if (iVar2 == 0) {
    return;
  }
  FUN_0073735c(param_1);
  return;
}

