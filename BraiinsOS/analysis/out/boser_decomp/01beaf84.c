// FUN_01beaf84 @ 01beaf84 size=66 calls_out=1 calls_in=1
// strings: 

void FUN_01beaf84(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return;
  }
  if (-1 < *(int *)(param_1 + 0x4c)) {
    FUN_01beae30();
  }
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x1c)) {
    (**(code **)(param_1 + 0x24))(param_1,0);
  }
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    iVar1 = *(int *)(param_1 + 4) - *(int *)(param_1 + 8);
    (**(code **)(param_1 + 0x28))(param_1,*(code **)(param_1 + 0x28),iVar1,iVar1 >> 0x1f,1);
  }
  return;
}

