// FUN_00b75e40 @ 00b75e40 size=176 calls_out=6 calls_in=2
// strings: 

void FUN_00b75e40(int param_1)

{
  ushort uVar1;
  bool bVar2;
  
  switch(*(undefined1 *)(param_1 + 0xd4)) {
  case 3:
    uVar1 = (ushort)*(byte *)(param_1 + 0xfe);
    bVar2 = uVar1 == 3;
    if (bVar2) {
      uVar1 = *(ushort *)(param_1 + 0xd8);
    }
    if (bVar2 && uVar1 == 3) {
      FUN_0187266c(*(undefined1 *)(param_1 + 0xdc),*(undefined4 *)(param_1 + 0xe0));
    }
    goto LAB_00b75ee0;
  case 4:
    FUN_00b76664(param_1 + 0xd8);
    goto LAB_00b75ed0;
  case 5:
    FUN_00b76bc4(param_1 + 0xd8);
    break;
  case 6:
    FUN_00b76c74(param_1 + 0xe0);
    if (*(short *)(param_1 + 0x9c) != 3) {
      *(undefined1 *)(param_1 + 0xd3) = 0;
    }
    break;
  default:
    return;
  }
  *(undefined1 *)(param_1 + 0xd3) = 0;
LAB_00b75ed0:
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90));
  FUN_00b76614(param_1 + 0x40);
LAB_00b75ee0:
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78));
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
  return;
}

