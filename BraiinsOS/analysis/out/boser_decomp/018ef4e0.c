// FUN_018ef4e0 @ 018ef4e0 size=192 calls_out=0 calls_in=3
// strings: 

void FUN_018ef4e0(undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  
  uVar3 = *(uint *)(param_2 + 8);
  if (0x4001 < uVar3) {
    *param_1 = &DAT_80000024;
    return;
  }
  iVar5 = *(int *)(param_2 + 4);
  do {
    if (uVar3 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x16;
      *param_1 = &DAT_8000001c;
      return;
    }
    cVar1 = *(char *)(iVar5 + -1 + uVar3);
    uVar3 = uVar3 - 1;
  } while (cVar1 == '\0');
  switch(cVar1) {
  case '\x14':
    uVar4 = 0;
    break;
  case '\x15':
    uVar4 = 1;
    break;
  case '\x16':
    uVar4 = 2;
    break;
  case '\x17':
    uVar4 = 3;
    break;
  case '\x18':
    uVar4 = 4;
    break;
  default:
    uVar4 = 5;
  }
  *(char *)((int)param_1 + 0x11) = cVar1;
  *(undefined2 *)(param_1 + 1) = 5;
  uVar2 = *(undefined2 *)(param_2 + 2);
  param_1[2] = iVar5;
  *(undefined1 *)(param_1 + 4) = uVar4;
  param_1[3] = uVar3;
  *param_1 = 0x80000029;
  *(undefined2 *)((int)param_1 + 6) = uVar2;
  return;
}

