// FUN_005f56fc @ 005f56fc size=176 calls_out=3 calls_in=2
// strings: 

void FUN_005f56fc(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  cVar1 = *(char *)(param_1 + 0x2ac);
  iVar2 = param_1 + 0x50;
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0x30c) == '\x03') {
      iVar3 = 0x20;
      iVar6 = 0x1c;
      iVar5 = 0x24;
      iVar4 = 0x2a0;
LAB_005f5760:
      iVar7 = param_1 + 0x2d8;
      (**(code **)(*(int *)(iVar2 + iVar4) + 0x10))
                (iVar7 + iVar5,*(undefined4 *)(iVar7 + iVar6),*(undefined4 *)(iVar7 + iVar3));
    }
    else if (*(char *)(param_1 + 0x30c) == '\0') {
      iVar3 = 0xc;
      iVar6 = 8;
      iVar5 = 0x10;
      iVar4 = 0x28c;
      goto LAB_005f5760;
    }
    *(undefined1 *)(param_1 + 0x2ad) = 0;
    if (*(int *)(param_1 + 0x2c8) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x2c8),*(undefined4 *)(param_1 + 0x2cc));
    }
    *(undefined1 *)(param_1 + 0x2ae) = 0;
LAB_005f5798:
    iVar2 = param_1 + 0x140;
  }
  else {
    if (cVar1 == '\x03') goto LAB_005f5798;
    if (cVar1 != '\0') goto LAB_005f57a0;
  }
  FUN_005f1224(iVar2);
LAB_005f57a0:
  FUN_01431b40(param_1);
  return;
}

