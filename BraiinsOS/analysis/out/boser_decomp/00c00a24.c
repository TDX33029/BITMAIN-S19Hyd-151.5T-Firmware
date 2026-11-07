// FUN_00c00a24 @ 00c00a24 size=292 calls_out=15 calls_in=1
// strings: 

void FUN_00c00a24(int param_1)

{
  switch(*(undefined1 *)(param_1 + 0x1a4)) {
  case 0:
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x180),*(undefined4 *)(param_1 + 0x184));
    FUN_00bfca04(param_1 + 400);
    return;
  default:
    return;
  case 3:
    FUN_00bf959c(param_1 + 0x1a8);
    goto LAB_00c00ac8;
  case 4:
    FUN_00bba254(param_1 + 0x1a8);
    break;
  case 5:
    FUN_00bba254(param_1 + 0x1a8);
    if (*(char *)(param_1 + 0x19c) == '\x01') {
      FUN_019bb7e0(*(undefined4 *)(param_1 + 0x174),*(undefined4 *)(param_1 + 0x178));
    }
    break;
  case 6:
    FUN_00c00c94(param_1 + 0x210);
    FUN_00def7a8(param_1 + 0x200);
    FUN_00b55288(param_1 + 0x1a8);
    goto LAB_00c00b0c;
  }
  *(undefined1 *)(param_1 + 0x19c) = 0;
  FUN_00c00f20(param_1 + 0xf8);
  *(undefined1 *)(param_1 + 0x1a1) = 0;
LAB_00c00ac8:
  *(undefined1 *)(param_1 + 0x1a2) = 0;
  if (*(char *)(param_1 + 0x19f) != '\0') {
    FUN_00c00f84(param_1 + 0x40);
  }
  *(undefined1 *)(param_1 + 0x19f) = 0;
  FUN_00def754(param_1 + 0xe0);
LAB_00c00b0c:
  FUN_00befecc(param_1 + 0x168);
  *(undefined1 *)(param_1 + 0x19d) = 0;
  FUN_0118c3d0(param_1 + 0xc0);
  FUN_015d1344(param_1 + 0xa0);
  *(undefined1 *)(param_1 + 0x19e) = 0;
  FUN_015d1344(param_1 + 0x80);
  if (*(char *)(param_1 + 0x1a0) != '\0') {
    FUN_00c00fc4(param_1 + 0x150);
  }
  *(undefined1 *)(param_1 + 0x1a3) = 0;
  *(undefined1 *)(param_1 + 0x1a0) = 0;
  FUN_019f8c54(*(undefined4 *)(param_1 + 0x144),*(undefined4 *)(param_1 + 0x148));
  return;
}

