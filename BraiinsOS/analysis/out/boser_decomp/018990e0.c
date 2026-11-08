// FUN_018990e0 @ 018990e0 size=68 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_018990e0(undefined4 param_1,undefined4 param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  uint extraout_r3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_01898838(param_2,param_1);
  iVar3 = (int)((ulonglong)uVar5 >> 0x20);
  pbVar1 = (byte *)uVar5;
  pbVar2 = (byte *)0x0;
  uVar4 = extraout_r3;
  if ((pbVar1 != (byte *)0x0 && iVar3 != 0) && (uVar4 = (uint)*pbVar1, uVar4 == 0)) {
    pbVar2 = pbVar1 + 1;
    uVar4 = iVar3 - 1;
  }
  return CONCAT44(uVar4,pbVar2);
}

