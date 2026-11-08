// FUN_00b81640 @ 00b81640 size=192 calls_out=6 calls_in=1
// strings: waker missing

void FUN_00b81640(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 local_30 [10];
  
  uVar1 = FUN_019d8b4c();
  if ((uVar1 & 8) == 0) {
    local_30[0] = 2;
    FUN_0079a238(param_1 + 0x18,local_30);
  }
  else if ((uVar1 & 0x10) != 0) {
    if (*(int *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("waker missing",0x1b,&DAT_01d29c20);
    }
    (**(code **)(*(int *)(param_1 + 0x58) + 8))(*(undefined4 *)(param_1 + 0x5c));
    uVar1 = FUN_019d8c50(param_1);
    if ((uVar1 & 8) == 0) {
      if (*(int *)(param_1 + 0x58) != 0) {
        (**(code **)(*(int *)(param_1 + 0x58) + 0xc))(*(undefined4 *)(param_1 + 0x5c));
      }
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
  }
  iVar2 = FUN_019d8bc0(param_1,1);
  if (iVar2 == 0) {
    return;
  }
  FUN_00795e48(param_1);
  return;
}

