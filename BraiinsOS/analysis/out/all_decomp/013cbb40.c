// FUN_013cbb40 @ 013cbb40 size=340 calls_out=7 calls_in=1
// strings: 

void FUN_013cbb40(int *param_1,int param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_30;
  int local_2c;
  int local_28;
  
  local_44 = 1;
  local_48 = 0xfa;
  local_4c = 100;
  local_50 = 10;
  local_54 = 10;
  local_38 = 0;
  local_3c = 4;
  local_40 = 0;
  if (param_4 != 0) {
    puVar3 = param_3;
    do {
      puVar2 = puVar3 + 1;
      FUN_013e8d04(&local_30,&local_54,*puVar3);
      FUN_013cb800(&local_40,&local_30);
      if (local_30 != -0x80000000) {
        puVar3 = (undefined4 *)(local_2c + 4);
        for (iVar1 = local_28; iVar1 != 0; iVar1 = iVar1 + -1) {
          if (puVar3[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar3);
          }
          puVar3 = puVar3 + 4;
        }
        if (local_30 != 0) {
          thunk_FUN_016d3fb4(local_2c);
        }
      }
      puVar3 = puVar2;
    } while (puVar2 != param_3 + param_4);
  }
  if (param_2 == 0) {
    if (local_40 != -0x80000000) {
      if (1 < local_38) {
        if (local_38 < 0x15) {
          FUN_0137e90c();
        }
        else {
          FUN_013cb9e8(local_3c);
        }
      }
      FUN_013604dc(&local_40);
    }
  }
  else {
    FUN_013e8278(&local_40,0);
  }
  *param_1 = local_40;
  param_1[1] = local_3c;
  param_1[2] = local_38;
  return;
}

