// FUN_013e1cac @ 013e1cac size=128 calls_out=3 calls_in=0
// strings: 

int FUN_013e1cac(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined2 local_5c [2];
  undefined4 local_58;
  uint local_54;
  
  if (param_3 < 0x100) {
    iVar1 = FUN_013e1c64(param_1,param_3);
    if (iVar1 == 0) {
      iVar2 = *(int *)(param_1 + 0x14);
      iVar1 = FUN_013d79b4(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),iVar2,
                           param_2,param_3);
      if (iVar1 == 0) {
        *(uint *)(param_1 + 0x14) = iVar2 + param_3;
        iVar1 = 0;
      }
    }
  }
  else {
    local_58 = 0xff;
    local_5c[0] = 5;
    local_54 = param_3;
    iVar1 = FUN_013e649c(local_5c);
  }
  return iVar1;
}

