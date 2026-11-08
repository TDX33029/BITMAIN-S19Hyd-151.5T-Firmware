// FUN_0178f618 @ 0178f618 size=248 calls_out=2 calls_in=2
// strings: 

undefined4 FUN_0178f618(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint local_10;
  int local_c;
  
  local_10 = 0;
  local_c = 0;
  if ((*(byte *)(param_1 + 0x44) & 2) != 0) {
    local_c = 0x40;
  }
  FUN_0178f4d4(param_1,param_2,0,0,0);
  do {
    uVar2 = FUN_0178eb74(param_1);
    if ((int)uVar2 != 0) {
      return 0;
    }
    iVar1 = FUN_0178f4d4(param_1,(int)((ulonglong)uVar2 >> 0x20),0,0,0);
  } while ((iVar1 != 0) ||
          (local_10 = local_10 + 1, local_10 < (uint)(*(int *)(param_1 + 0x14) * (local_c + 0x100)))
          );
  return 0;
}

