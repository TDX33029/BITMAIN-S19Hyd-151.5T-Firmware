// FUN_00d3f31c @ 00d3f31c size=212 calls_out=7 calls_in=1
// strings: waker missing

void FUN_00d3f31c(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_38 [12];
  
  uVar1 = FUN_019d8b4c();
  if ((uVar1 & 8) == 0) {
    local_38[0] = 2;
    FUN_00f316a4(param_1 + 0x18,local_38);
  }
  else if ((uVar1 & 0x10) != 0) {
    if (*(int *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("waker missing",0x1b,&DAT_01d29c20);
    }
    (**(code **)(*(int *)(param_1 + 0x60) + 8))(*(undefined4 *)(param_1 + 100));
    uVar1 = FUN_019d8c50(param_1);
    if ((uVar1 & 8) == 0) {
      if (*(int *)(param_1 + 0x60) != 0) {
        (**(code **)(*(int *)(param_1 + 0x60) + 0xc))(*(undefined4 *)(param_1 + 100));
      }
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  iVar2 = FUN_019dc744(*(undefined4 *)(param_1 + 0x18),param_1);
  uVar3 = 2;
  if (iVar2 == 0) {
    uVar3 = 1;
  }
  iVar2 = FUN_019d8bc0(param_1,uVar3);
  if (iVar2 == 0) {
    return;
  }
  FUN_00d3c278(param_1);
  return;
}

