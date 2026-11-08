// FUN_00d3ec3c @ 00d3ec3c size=212 calls_out=7 calls_in=1
// strings: waker missing

void FUN_00d3ec3c(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_1010 [1024];
  
  uVar1 = FUN_019d8b4c();
  if ((uVar1 & 8) == 0) {
    local_1010[0] = 2;
    FUN_00f32104(param_1 + 0x18,local_1010);
  }
  else if ((uVar1 & 0x10) != 0) {
    piVar4 = (int *)(param_1 + 0x1030);
    if (*piVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("waker missing",0x1b,&DAT_01d29c20);
    }
    (**(code **)(*piVar4 + 8))(*(undefined4 *)(param_1 + 0x1034));
    uVar1 = FUN_019d8c50(param_1);
    if ((uVar1 & 8) == 0) {
      if (*piVar4 != 0) {
        (**(code **)(*piVar4 + 0xc))(*(undefined4 *)(param_1 + 0x1034));
      }
      *piVar4 = 0;
    }
  }
  iVar2 = FUN_019dc744(*(undefined4 *)(param_1 + 0x18),param_1);
  uVar3 = 2;
  if (iVar2 == 0) {
    uVar3 = 1;
  }
  iVar2 = FUN_019d8bc0(param_1,uVar3);
  if (iVar2 != 0) {
    FUN_00d34524(param_1);
  }
  return;
}

