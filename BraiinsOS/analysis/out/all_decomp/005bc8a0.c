// FUN_005bc8a0 @ 005bc8a0 size=460 calls_out=4 calls_in=2
// strings: 

void FUN_005bc8a0(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  bool bVar4;
  
  cVar1 = *(char *)(param_1 + 0x28);
  if (cVar1 == '\x03') {
    cVar1 = *(char *)(param_1 + 0x3c);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x12f) == '\x03') {
        FUN_005c270c(param_1 + 0x50);
        *(undefined2 *)(param_1 + 0x12d) = 0;
        if (*(char *)(param_1 + 0xfc) == '\0') {
          puVar2 = *(undefined4 **)(param_1 + 0xf8);
          uVar3 = *(undefined4 *)(param_1 + 0xf4);
          *puVar2 = *(undefined4 *)(param_1 + 0xf0);
          puVar2[1] = uVar3;
        }
        *(undefined1 *)(param_1 + 300) = 0;
      }
      FUN_00e44114(*(undefined4 *)(param_1 + 0x40));
      return;
    }
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x4c);
    }
    if ((bVar4 && cVar1 == '\x03') && (*(int *)(param_1 + 0x44) != 0)) {
      FUN_00e43e74(*(int *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48),1);
      return;
    }
    return;
  }
  bVar4 = cVar1 == '\x04';
  if (bVar4) {
    cVar1 = *(char *)(param_1 + 0x199);
  }
  if (!bVar4 || cVar1 != '\x03') {
    return;
  }
  switch(*(undefined1 *)(param_1 + 0x88)) {
  case 3:
  case 5:
  case 7:
  case 9:
  case 0xb:
  case 0xd:
    if ((*(char *)(param_1 + 0x98) == '\x03') && (*(int *)(param_1 + 0x90) != 0)) {
      FUN_00e43e74(*(int *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),1);
    }
    goto switchD_005bc8e0_default;
  case 4:
    if (*(char *)(param_1 + 0x140) == '\x03') {
      FUN_005c270c(param_1 + 0x98);
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0x183) == '\x03') {
      FUN_005c270c(param_1 + 0x98);
      *(undefined2 *)(param_1 + 0x180) = 0;
      *(undefined1 *)(param_1 + 0x182) = 0;
    }
    break;
  case 8:
    if (*(char *)(param_1 + 0x150) == '\x03') {
      FUN_005c270c(param_1 + 0xa0);
    }
    break;
  case 10:
    if (*(char *)(param_1 + 0x151) == '\x03') {
      FUN_005c270c(param_1 + 0x98);
LAB_005bca10:
      *(undefined1 *)(param_1 + 0x150) = 0;
    }
    break;
  case 0xc:
    if (*(char *)(param_1 + 0x151) == '\x03') {
      FUN_005c270c(param_1 + 0x98);
      goto LAB_005bca10;
    }
    break;
  case 0xe:
    if (*(char *)(param_1 + 0x166) == '\x03') {
      FUN_005c270c(param_1 + 0x98);
      *(undefined1 *)(param_1 + 0x165) = 0;
      FUN_005c37bc(param_1 + 0x140);
      *(undefined1 *)(param_1 + 0x164) = 0;
    }
    break;
  default:
    goto switchD_005bc8e0_default;
  }
  FUN_00e44114(*(undefined4 *)(param_1 + 0x8c));
switchD_005bc8e0_default:
  if (*(char *)(param_1 + 0x3c) == '\0') {
    puVar2 = *(undefined4 **)(param_1 + 0x38);
    uVar3 = *(undefined4 *)(param_1 + 0x34);
    *puVar2 = *(undefined4 *)(param_1 + 0x30);
    puVar2[1] = uVar3;
  }
  *(undefined1 *)(param_1 + 0x198) = 0;
  return;
}

