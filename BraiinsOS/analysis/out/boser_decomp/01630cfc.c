// FUN_01630cfc @ 01630cfc size=120 calls_out=4 calls_in=1
// strings: 

void FUN_01630cfc(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  switch(*param_1) {
  default:
    uVar1 = *(undefined4 *)(param_1 + 4);
    uVar2 = *(undefined4 *)(param_1 + 8);
    break;
  case 1:
    uVar1 = *(undefined4 *)(param_1 + 8);
    FUN_01630e60(uVar1,*(undefined4 *)(param_1 + 0xc));
    FUN_0134aee0(*(undefined4 *)(param_1 + 4),uVar1,4,0x1c);
    return;
  case 2:
  case 8:
  case 9:
  case 10:
    return;
  case 3:
    if (*(uint *)(param_1 + 4) < 2) {
      return;
    }
    uVar1 = *(undefined4 *)(param_1 + 8);
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    break;
  case 6:
    FUN_0162ee9c(param_1 + 4);
    return;
  }
  FUN_0134bd64(uVar1,uVar2);
  return;
}

