// FUN_007059ac @ 007059ac size=224 calls_out=5 calls_in=0
// strings: 

undefined4
FUN_007059ac(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  pbVar2 = (byte *)*param_1;
  FUN_00703ebc(&local_2c,param_2,param_3,*(undefined4 *)(&DAT_00568918 + (uint)*pbVar2 * 4));
  uVar1 = local_28;
  uVar3 = 1;
  if (local_2c == 0) {
    if (*(char *)(param_1 + 2) == '\x01') {
      FUN_00705ab4(&local_2c,*pbVar2,param_6,param_7);
      if (local_2c == 0) {
        uVar3 = FUN_00703c54(uVar1,param_4,param_5,param_1[1],local_28,local_24);
        FUN_01b6b1c4(local_28);
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = FUN_00703c54(local_28,param_4,param_5,param_1[1],param_6,param_7);
    }
    FUN_01b46fd8(uVar1);
  }
  return uVar3;
}

