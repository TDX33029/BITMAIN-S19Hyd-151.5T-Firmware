// FUN_014ef2c8 @ 014ef2c8 size=132 calls_out=4 calls_in=3
// strings: 

undefined8 FUN_014ef2c8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_014caa68(&local_24,param_1);
  uVar2 = local_20;
  iVar1 = local_24;
  if (local_24 == -0x80000000) {
    uVar3 = 1;
  }
  else {
    FUN_0160058c(&local_24,local_20,local_1c);
    if ((char)local_24 != '\x01') {
    }
    else {
      local_20 = FUN_014e64fc(local_24._1_1_);
    }
    uVar3 = (uint)((char)local_24 == '\x01');
    FUN_019bb7e0(iVar1,uVar2);
  }
  return CONCAT44(local_20,uVar3);
}

