// FUN_00d9cce4 @ 00d9cce4 size=184 calls_out=3 calls_in=2
// strings: 

void FUN_00d9cce4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  cVar1 = *(char *)(param_1 + 0xe6);
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0x144) == '\x03') {
      iVar5 = 0x20;
      iVar2 = 0x1c;
      iVar6 = 0x24;
      iVar3 = 0xd8;
LAB_00d9cd4c:
      iVar4 = param_1 + 0x110;
      (**(code **)(*(int *)(param_1 + 0x50 + iVar3) + 0x10))
                (iVar4 + iVar6,*(undefined4 *)(iVar4 + iVar2),*(undefined4 *)(iVar4 + iVar5));
    }
    else if (*(char *)(param_1 + 0x144) == '\0') {
      iVar5 = 0xc;
      iVar2 = 8;
      iVar6 = 0x10;
      iVar3 = 0xc4;
      goto LAB_00d9cd4c;
    }
    *(undefined1 *)(param_1 + 0xe4) = 0;
    if (*(int *)(param_1 + 0x100) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x100),*(undefined4 *)(param_1 + 0x104));
    }
    *(undefined1 *)(param_1 + 0xe5) = 0;
LAB_00d9cd84:
    iVar2 = 0x7c;
  }
  else {
    if (cVar1 == '\x03') goto LAB_00d9cd84;
    iVar2 = 0x8c;
    if (cVar1 != '\0') goto LAB_00d9cd90;
  }
  FUN_00d9cde8(*(undefined4 *)(param_1 + 0x50 + iVar2));
LAB_00d9cd90:
  FUN_01431b40(param_1);
  return;
}

