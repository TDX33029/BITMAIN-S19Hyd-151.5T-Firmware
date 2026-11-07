// FUN_01b01f88 @ 01b01f88 size=180 calls_out=6 calls_in=2
// strings: 

undefined8 FUN_01b01f88(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  iVar1 = FUN_01b6de24(param_1 + 0xf,0,0);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_01b0c518(&DAT_01d51b24,param_1,param_1 + 0x10);
  FUN_01b2ae64(*param_1);
  FUN_01b2ae64(param_1[1]);
  FUN_01b2ae64(param_1[2]);
  FUN_01b2ae64(param_1[3]);
  FUN_01b2ae64(param_1[4]);
  FUN_01b323f0(param_1[0xd]);
  FUN_01b323f0(param_1[0xe]);
  FUN_01b70758(param_1 + 5);
  uVar2 = FUN_01b6b1c4(param_1);
  return uVar2;
}

