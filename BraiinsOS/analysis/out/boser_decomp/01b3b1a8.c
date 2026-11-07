// FUN_01b3b1a8 @ 01b3b1a8 size=136 calls_out=5 calls_in=4
// strings: 

undefined4 FUN_01b3b1a8(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  iVar1 = FUN_01b6de24(param_1 + 0x10);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_01b323f0(param_1[0xe]);
  FUN_01b2ae64(*param_1);
  FUN_01b2ae64(param_1[1]);
  FUN_01b2ae64(param_1[2]);
  FUN_01b2ae64(param_1[3]);
  FUN_01b2ae64(param_1[4]);
  FUN_01b70758(param_1 + 6);
  uVar2 = FUN_01b6b1c4(param_1);
  return uVar2;
}

