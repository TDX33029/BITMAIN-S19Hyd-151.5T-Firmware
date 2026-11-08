// FUN_00d3f710 @ 00d3f710 size=204 calls_out=7 calls_in=1
// strings: waker missing

void FUN_00d3f710(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_a0 [38];
  
  uVar1 = FUN_019d8b4c();
  if ((uVar1 & 8) == 0) {
    local_a0[0] = 2;
    FUN_00f32080(param_1 + 0x18,local_a0);
  }
  else if ((uVar1 & 0x10) != 0) {
    if (*(int *)(param_1 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("waker missing",0x1b,&DAT_01d29c20);
    }
    (**(code **)(*(int *)(param_1 + 200) + 8))(*(undefined4 *)(param_1 + 0xcc));
    uVar1 = FUN_019d8c50(param_1);
    if ((uVar1 & 8) == 0) {
      if (*(int *)(param_1 + 200) != 0) {
        (**(code **)(*(int *)(param_1 + 200) + 0xc))(*(undefined4 *)(param_1 + 0xcc));
      }
      *(undefined4 *)(param_1 + 200) = 0;
    }
  }
  iVar2 = FUN_019dc744(*(undefined4 *)(param_1 + 0x18),param_1);
  uVar3 = 2;
  if (iVar2 == 0) {
    uVar3 = 1;
  }
  iVar2 = FUN_019d8bc0(param_1,uVar3);
  if (iVar2 != 0) {
    FUN_00d3448c(param_1);
  }
  return;
}

