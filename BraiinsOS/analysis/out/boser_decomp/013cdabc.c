// FUN_013cdabc @ 013cdabc size=92 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_013cdabc(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined4 *)*param_1;
  uVar4 = FUN_013c7920(param_2 + 0x48);
  uVar1 = (uint)uVar4 & 0xffff;
  if ((uVar1 == *(ushort *)*puVar3) &&
     ((uVar1 != 0x24 ||
      (((uint)((ulonglong)uVar4 >> 0x20) & 0xffff) == (uint)((ushort *)*puVar3)[1])))) {
    uVar2 = FUN_013cad2c(param_2,param_1[1]);
    return uVar2;
  }
  return 0;
}

