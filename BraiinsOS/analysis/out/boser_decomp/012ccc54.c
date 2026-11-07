// FUN_012ccc54 @ 012ccc54 size=308 calls_out=8 calls_in=1
// strings: 

void FUN_012ccc54(int param_1)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  
  if (*(char *)(param_1 + 0xf0) == '\0') {
    FUN_0193c71c(param_1 + 0xe8);
    param_1 = param_1 + 0xec;
LAB_012cccbc:
    FUN_005faf6c(param_1);
    return;
  }
  if (*(char *)(param_1 + 0xf0) != '\x03') {
    return;
  }
  switch(*(undefined1 *)(param_1 + 0x31)) {
  case 0:
    FUN_0193c71c(param_1 + 0x28);
    param_1 = param_1 + 0x2c;
    goto LAB_012cccbc;
  default:
    return;
  case 3:
    if (*(char *)(param_1 + 0xd2) == '\x03') {
      FUN_00b76614(param_1 + 0x38);
      *(undefined2 *)(param_1 + 0xd0) = 0;
    }
    break;
  case 4:
    FUN_019f1850((int *)(param_1 + 0x48));
    FUN_00668d74(param_1 + 0x78);
    iVar2 = *(int *)(param_1 + 0x4c);
    bVar1 = *(int *)(param_1 + 0x48) == 0;
    bVar3 = bVar1 && iVar2 == 0;
    if (!bVar1 || iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 0x68);
      bVar3 = iVar2 == 0;
    }
    if (!bVar3) {
      (**(code **)(iVar2 + 0xc))(*(undefined4 *)(param_1 + 0x6c));
    }
    FUN_012c7f64(param_1 + 0x98);
    FUN_0069d8a4(*(undefined1 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
    break;
  case 5:
    if (*(char *)(param_1 + 0xe4) == '\x03') {
      FUN_012c7f64(param_1 + 0xb8);
      FUN_011178c4(param_1 + 0x58);
      FUN_005faf6c(param_1 + 0x54);
      FUN_0193c71c(param_1 + 0x50);
    }
    else if (*(char *)(param_1 + 0xe4) == '\0') {
      FUN_00b76614(param_1 + 0x38);
      FUN_0193c71c(param_1 + 0x48);
      FUN_005faf6c(param_1 + 0x4c);
    }
  }
  *(undefined1 *)(param_1 + 0x30) = 0;
  FUN_005faf6c(param_1 + 0x24);
  FUN_0193c71c(param_1 + 0x20);
  return;
}

