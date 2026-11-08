// FUN_013d79b4 @ 013d79b4 size=184 calls_out=5 calls_in=7
// strings: 

undefined4 FUN_013d79b4(int param_1,uint param_2,uint param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 local_5c [2];
  uint local_58;
  
  uVar3 = param_5 + param_3;
  if (param_2 < uVar3) {
    local_5c[0] = 0xe;
    local_58 = param_2;
    uVar1 = FUN_013e649c(local_5c);
  }
  else {
    uVar2 = *(uint *)(param_1 + 8);
    if (param_3 == uVar2) {
      FUN_00724be8(param_1,param_4,param_5);
    }
    else {
      if (uVar2 < uVar3) {
        FUN_01af7ce4(param_1,uVar3);
        uVar2 = *(uint *)(param_1 + 8);
      }
      if ((uVar3 < param_3) || (uVar2 < uVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(param_3,uVar3,uVar2,&DAT_01cf2c68);
      }
      FUN_01bed4e2(*(int *)(param_1 + 4) + param_3,param_4,param_5);
    }
    uVar1 = 0;
  }
  return uVar1;
}

