// FUN_00737cac @ 00737cac size=204 calls_out=7 calls_in=1
// strings: waker missing

void FUN_00737cac(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_2c8 [174];
  
  uVar1 = FUN_019d8b4c();
  if ((uVar1 & 8) == 0) {
    local_2c8[0] = 2;
    FUN_007424c8(param_1 + 0x18,local_2c8);
  }
  else if ((uVar1 & 0x10) != 0) {
    if (*(int *)(param_1 + 0x2e8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("waker missing",0x1b,&DAT_01d29c20);
    }
    (**(code **)(*(int *)(param_1 + 0x2e8) + 8))(*(undefined4 *)(param_1 + 0x2ec));
    uVar1 = FUN_019d8c50(param_1);
    if ((uVar1 & 8) == 0) {
      if (*(int *)(param_1 + 0x2e8) != 0) {
        (**(code **)(*(int *)(param_1 + 0x2e8) + 0xc))(*(undefined4 *)(param_1 + 0x2ec));
      }
      *(undefined4 *)(param_1 + 0x2e8) = 0;
    }
  }
  iVar2 = FUN_019dc584(*(undefined4 *)(param_1 + 0x18),param_1);
  uVar3 = 2;
  if (iVar2 == 0) {
    uVar3 = 1;
  }
  iVar2 = FUN_019d8bc0(param_1,uVar3);
  if (iVar2 != 0) {
    FUN_00737568(param_1);
  }
  return;
}

