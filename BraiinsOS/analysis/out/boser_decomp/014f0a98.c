// FUN_014f0a98 @ 014f0a98 size=124 calls_out=3 calls_in=2
// strings: 

undefined4 FUN_014f0a98(byte *param_1,int param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  pbVar1 = param_1;
  if (param_2 == 2) {
    pbVar1 = (byte *)(uint)*param_1;
  }
  if ((param_2 != 2 || pbVar1 != (byte *)0x76) || (uVar2 = 0, param_1[1] != 0x31)) {
    FUN_006643f0(&local_1c);
    uVar2 = FUN_014dee68(local_18,local_14,&DAT_01cfa51c,1);
    if (local_1c != -0x80000000) {
      FUN_019bb7e0(local_1c,local_18);
    }
  }
  return uVar2;
}

