// FUN_01429ce8 @ 01429ce8 size=112 calls_out=4 calls_in=1
// strings: 

undefined4 FUN_01429ce8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_38 = 0;
  uStack_34 = 0x45;
  uStack_30 = 0;
  uStack_2c = 0;
  FUN_0141e078(&local_1c,param_1);
  FUN_0141c42c(&local_38,local_14,local_1c,local_18);
  iVar1 = FUN_0141c10c(&local_38);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0142994c(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
  }
  return uVar2;
}

