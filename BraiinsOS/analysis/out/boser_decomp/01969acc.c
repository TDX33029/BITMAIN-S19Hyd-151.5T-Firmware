// FUN_01969acc @ 01969acc size=100 calls_out=4 calls_in=1
// strings: 

void FUN_01969acc(undefined1 *param_1)

{
  undefined4 uVar1;
  
  switch(*param_1) {
  case 0:
  case 1:
  case 2:
  case 6:
    return;
  case 3:
    FUN_0134bd64(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    return;
  case 4:
    uVar1 = *(undefined4 *)(param_1 + 8);
    FUN_0196b060(uVar1,*(undefined4 *)(param_1 + 0xc));
    FUN_0134aee0(*(undefined4 *)(param_1 + 4),uVar1,8,0x18);
    return;
  default:
    FUN_0196afa8(param_1 + 4);
    return;
  }
}

