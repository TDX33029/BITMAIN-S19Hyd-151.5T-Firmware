// FUN_00fa1d8c @ 00fa1d8c size=304 calls_out=3 calls_in=1
// strings: 

bool FUN_00fa1d8c(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint local_30;
  byte *local_2c;
  int local_28;
  uint local_24;
  byte *local_20;
  int local_1c;
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    bVar1 = false;
    if (param_4 == param_2[1]) {
      iVar2 = thunk_FUN_016dd50a(param_3,*param_2,param_4);
      return iVar2 == 0;
    }
  }
  else {
    FUN_006008c8(&local_30,param_3,param_4);
    FUN_006008c8(&local_24,*param_2,param_2[1]);
    bVar1 = false;
    if (local_28 == local_1c) {
      pbVar3 = local_20;
      pbVar4 = local_2c;
      do {
        if (local_28 == 0) {
          bVar1 = true;
          break;
        }
        uVar6 = (uint)*pbVar3;
        local_28 = local_28 + -1;
        uVar5 = (uint)*pbVar4;
        if (uVar6 - 0x41 < 0x1a) {
          uVar6 = uVar6 | 0x20;
        }
        if (uVar5 - 0x41 < 0x1a) {
          uVar5 = uVar5 | 0x20;
        }
        pbVar3 = pbVar3 + 1;
        pbVar4 = pbVar4 + 1;
      } while (uVar5 == uVar6);
    }
    if ((local_24 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(local_20);
    }
    if ((local_30 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(local_2c);
      return bVar1;
    }
  }
  return bVar1;
}

