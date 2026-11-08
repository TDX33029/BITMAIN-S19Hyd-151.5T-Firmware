// FUN_01630f98 @ 01630f98 size=172 calls_out=11 calls_in=1
// strings: 

void FUN_01630f98(undefined1 *param_1)

{
  undefined4 uVar1;
  
  switch(*param_1) {
  case 0:
    FUN_016310e8(param_1 + 4);
    return;
  case 1:
    FUN_01631138(param_1 + 4);
    return;
  case 2:
  case 0xd:
  case 0xe:
    FUN_0161f174(param_1 + 4);
    return;
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
    return;
  case 5:
    FUN_0161dec0(param_1 + 4);
    return;
  case 0xc:
    uVar1 = *(undefined4 *)(param_1 + 8);
    FUN_01631418(uVar1,*(undefined4 *)(param_1 + 0xc));
    FUN_0134aee0(*(undefined4 *)(param_1 + 4),uVar1,4,0x1c);
    return;
  default:
    FUN_0134bd64(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    return;
  case 0x10:
    FUN_016311d8(param_1 + 4);
    return;
  case 0x11:
    FUN_0161a99c(param_1 + 4);
    return;
  case 0x24:
    FUN_0134aee0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),4,8);
    return;
  case 0x32:
    FUN_0161ecd8(param_1 + 4);
    return;
  case 0x33:
    FUN_01631228(param_1 + 4);
    return;
  }
}

