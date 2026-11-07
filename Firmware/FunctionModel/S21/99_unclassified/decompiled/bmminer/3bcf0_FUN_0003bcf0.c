// FUN_0003bcf0 @ 0003bcf0  size=280  callers=1
// program: bmminer


void FUN_0003bcf0(int param_1)

{
  int iVar1;
  undefined4 local_34;
  undefined4 uStack_30;
  int local_2c;
  
  *(undefined4 *)(param_1 + 0x60) = 1;
  *(undefined4 *)(param_1 + 0x68) = 0x14;
  if ((*(int *)(param_1 + 0x2c) <= *(int *)(param_1 + 0x30)) &&
     (iVar1 = FUN_00039b8c(param_1 + 0x18,*(undefined4 *)(param_1 + 100),
                           *(int *)(param_1 + 0x6c) + 8), iVar1 == 0)) {
    *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) | 2;
    return;
  }
  do {
    FUN_0003a5a4(&local_34,param_1 + 0x48,param_1 + 0x18);
    iVar1 = local_2c;
    if (local_2c == 0) {
      return;
    }
    FUN_0003a734(param_1 + 0x70,local_34,uStack_30,local_2c);
    switch(iVar1) {
    case 6:
      *(undefined4 *)(param_1 + 0x60) = 3;
      (**(code **)(param_1 + 0xc))(param_1);
      break;
    case 7:
    case 8:
      *(undefined4 *)(param_1 + 0x60) = 3;
      if (iVar1 == 8) {
        *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) | 1;
      }
      (**(code **)(*(int *)(param_1 + 0x6c) + 0x24))(param_1);
      break;
    case 0xb:
      FUN_0003bc8c(param_1,400,"Bad Request");
    }
  } while (*(int *)(param_1 + 0x60) == 1);
  return;
}

