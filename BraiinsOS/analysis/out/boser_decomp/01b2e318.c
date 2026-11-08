// FUN_01b2e318 @ 01b2e318 size=64 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01b2e318(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    iVar1 = FUN_01b2e300();
    uVar2 = (uint)(iVar1 == 0);
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  return 0;
}

