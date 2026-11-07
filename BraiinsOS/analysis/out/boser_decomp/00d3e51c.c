// FUN_00d3e51c @ 00d3e51c size=204 calls_out=7 calls_in=1
// strings: waker missing

void FUN_00d3e51c(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_710 [448];
  
  uVar1 = FUN_019d8b4c();
  if ((uVar1 & 8) == 0) {
    local_710[0] = 2;
    FUN_00f31f78(param_1 + 0x18,local_710);
  }
  else if ((uVar1 & 0x10) != 0) {
    if (*(int *)(param_1 + 0x730) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("waker missing",0x1b,&DAT_01d29c20);
    }
    (**(code **)(*(int *)(param_1 + 0x730) + 8))(*(undefined4 *)(param_1 + 0x734));
    uVar1 = FUN_019d8c50(param_1);
    if ((uVar1 & 8) == 0) {
      if (*(int *)(param_1 + 0x730) != 0) {
        (**(code **)(*(int *)(param_1 + 0x730) + 0xc))(*(undefined4 *)(param_1 + 0x734));
      }
      *(undefined4 *)(param_1 + 0x730) = 0;
    }
  }
  iVar2 = FUN_019dc584(*(undefined4 *)(param_1 + 0x18),param_1);
  uVar3 = 2;
  if (iVar2 == 0) {
    uVar3 = 1;
  }
  iVar2 = FUN_019d8bc0(param_1,uVar3);
  if (iVar2 != 0) {
    FUN_00d3c440(param_1);
  }
  return;
}

