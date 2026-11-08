// FUN_00605f38 @ 00605f38 size=392 calls_out=9 calls_in=0
// strings: 

undefined4
FUN_00605f38(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_24;
  
  pbVar4 = (byte *)*param_1;
  FUN_00604af8(&local_3c,param_2,param_3,*(undefined4 *)(&DAT_00564600 + (uint)*pbVar4 * 4));
  uVar1 = local_38;
  if (local_3c != 0) {
    return 1;
  }
  if (*(char *)(param_1 + 2) == '\x01') {
    FUN_00606104(&local_3c,*pbVar4,param_6,param_7);
    if (local_3c == 0) {
      iVar3 = param_1[1];
      FUN_0172aab0(&local_3c);
      uVar2 = FUN_00605900(iVar3 + 0x18);
      local_24 = 0;
      iVar3 = FUN_0173e7c4(&local_3c,&local_24,uVar2,0,uVar1);
      uVar2 = 1;
      if (iVar3 == 1) {
        iVar3 = FUN_0173ce50(&local_3c,local_38,local_34,param_4,param_5);
        uVar2 = 0;
        if (iVar3 != 1) {
          uVar2 = 1;
        }
      }
      FUN_0172aae8(&local_3c);
      FUN_0177aafc(local_38);
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    iVar3 = param_1[1];
    FUN_0172aab0(&local_3c);
    uVar2 = FUN_00605900(iVar3 + 0x18);
    local_24 = 0;
    iVar3 = FUN_0173e7c4(&local_3c,&local_24,uVar2,0,local_38);
    uVar2 = 1;
    if (iVar3 == 1) {
      iVar3 = FUN_0173ce50(&local_3c,param_6,param_7,param_4,param_5);
      uVar2 = 0;
      if (iVar3 != 1) {
        uVar2 = 1;
      }
    }
    FUN_0172aae8(&local_3c);
  }
  FUN_01739ee4(uVar1);
  return uVar2;
}

