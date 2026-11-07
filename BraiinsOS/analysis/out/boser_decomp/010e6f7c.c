// FUN_010e6f7c @ 010e6f7c size=172 calls_out=2 calls_in=0
// strings: 

void FUN_010e6f7c(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  cVar1 = *(char *)(param_1 + 0x96);
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0xf4) == '\x03') {
      iVar2 = 0x20;
      iVar3 = 0x1c;
      iVar5 = 0x24;
      iVar4 = 0xd8;
LAB_010e6fe0:
      iVar6 = param_1 + 0xc0;
      (**(code **)(*(int *)(param_1 + iVar4) + 0x10))
                (iVar6 + iVar5,*(undefined4 *)(iVar6 + iVar3),*(undefined4 *)(iVar6 + iVar2));
    }
    else if (*(char *)(param_1 + 0xf4) == '\0') {
      iVar2 = 0xc;
      iVar3 = 8;
      iVar5 = 0x10;
      iVar4 = 0xc4;
      goto LAB_010e6fe0;
    }
    *(undefined1 *)(param_1 + 0x94) = 0;
    if (*(int *)(param_1 + 0xb0) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb4));
    }
    *(undefined1 *)(param_1 + 0x95) = 0;
  }
  else if (cVar1 != '\x03') {
    iVar2 = 0x8c;
    if (cVar1 != '\0') {
      return;
    }
    goto LAB_010e701c;
  }
  iVar2 = 0x7c;
LAB_010e701c:
  FUN_010e7060(*(undefined4 *)(param_1 + iVar2));
  return;
}

