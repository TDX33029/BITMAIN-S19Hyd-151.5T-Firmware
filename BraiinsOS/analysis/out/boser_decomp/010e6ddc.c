// FUN_010e6ddc @ 010e6ddc size=168 calls_out=2 calls_in=0
// strings: 

void FUN_010e6ddc(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  cVar1 = *(char *)(param_1 + 0x25c);
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 700) == '\x03') {
      iVar2 = 0x20;
      iVar3 = 0x1c;
      iVar5 = 0x24;
      iVar4 = 0x2a0;
LAB_010e6e3c:
      iVar6 = param_1 + 0x288;
      (**(code **)(*(int *)(param_1 + iVar4) + 0x10))
                (iVar6 + iVar5,*(undefined4 *)(iVar6 + iVar3),*(undefined4 *)(iVar6 + iVar2));
    }
    else if (*(char *)(param_1 + 700) == '\0') {
      iVar2 = 0xc;
      iVar3 = 8;
      iVar5 = 0x10;
      iVar4 = 0x28c;
      goto LAB_010e6e3c;
    }
    *(undefined1 *)(param_1 + 0x25d) = 0;
    if (*(int *)(param_1 + 0x278) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x278),*(undefined4 *)(param_1 + 0x27c));
    }
    *(undefined1 *)(param_1 + 0x25e) = 0;
  }
  else if (cVar1 != '\x03') {
    if (cVar1 != '\0') {
      return;
    }
    goto LAB_010e6e78;
  }
  param_1 = param_1 + 0xf0;
LAB_010e6e78:
  FUN_005f1224(param_1);
  return;
}

