// FUN_011176d4 @ 011176d4 size=312 calls_out=6 calls_in=0
// strings: 

void FUN_011176d4(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  switch(*(undefined1 *)(param_1 + 0x28)) {
  case 3:
    FUN_00b99500(param_1 + 0x2c);
    goto LAB_01117814;
  case 4:
    if (*(char *)(param_1 + 0x5c0) == '\x03') {
      iVar1 = param_1 + 0x2f8;
LAB_01117800:
      FUN_00b9a8cc(iVar1);
    }
    else if (*(char *)(param_1 + 0x5c0) == '\0') {
      iVar1 = param_1 + 0x30;
      goto LAB_01117800;
    }
    goto LAB_01117804;
  case 5:
    if (*(char *)(param_1 + 0x5c0) == '\x03') {
      iVar1 = param_1 + 0x2f8;
LAB_011177b4:
      FUN_00b9a8cc(iVar1);
    }
    else if (*(char *)(param_1 + 0x5c0) == '\0') {
      iVar1 = param_1 + 0x30;
      goto LAB_011177b4;
    }
    goto LAB_011177d4;
  case 6:
    if (*(char *)(param_1 + 0x5c0) == '\x03') {
      iVar1 = param_1 + 0x2f8;
    }
    else {
      if (*(char *)(param_1 + 0x5c0) != '\0') break;
      iVar1 = param_1 + 0x30;
    }
    FUN_00b9a8cc(iVar1);
    break;
  case 7:
    if (*(char *)(param_1 + 0x5c0) == '\x03') {
      iVar1 = param_1 + 0x2f8;
LAB_0111778c:
      FUN_00b9a8cc(iVar1);
    }
    else if (*(char *)(param_1 + 0x5c0) == '\0') {
      iVar1 = param_1 + 0x30;
      goto LAB_0111778c;
    }
    if (*(int *)(param_1 + 0x5c8) != 3 || *(int *)(param_1 + 0x5cc) != 0) {
      FUN_00a57438();
    }
    break;
  default:
    goto switchD_011176f4_default;
  }
  *(undefined1 *)(param_1 + 0x25) = 0;
  FUN_00a573e8(param_1 + 0x18);
LAB_011177d4:
  puVar2 = *(undefined1 **)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0x26) = 0;
  if ((puVar2 != &DAT_80000008) && (-1 < (int)puVar2)) {
    FUN_019bb7e0(puVar2,*(undefined4 *)(param_1 + 0x10));
  }
LAB_01117804:
  *(undefined1 *)(param_1 + 0x24) = 0;
  FUN_010e7e10(param_1);
LAB_01117814:
  *(undefined1 *)(param_1 + 0x27) = 0;
switchD_011176f4_default:
  return;
}

