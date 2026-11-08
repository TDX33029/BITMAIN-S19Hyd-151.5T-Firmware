// FUN_00620e6c @ 00620e6c size=316 calls_out=7 calls_in=3
// strings: 

void FUN_00620e6c(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  byte local_88 [4];
  undefined4 *local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined2 local_74;
  uint local_50;
  int local_4c;
  
  local_80 = 0;
  local_74 = 0;
  local_7c = 0x1b6;
  local_78 = 1;
  FUN_015ec1bc(local_88,&local_80,param_2,param_3);
  if (local_88[0] != 4) {
    if (2 < local_88[0]) {
      uVar4 = *local_84;
      puVar5 = (undefined4 *)local_84[1];
      pcVar3 = (code *)*puVar5;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar4);
      }
      if (puVar5[1] != 0) {
        thunk_FUN_016d3fb4(uVar4);
      }
      thunk_FUN_016d3fb4(local_84);
    }
    *param_1 = 0;
    return;
  }
  FUN_016dd606(&local_80,0,0x68);
  iVar1 = FUN_016e03d2(local_84,&local_80);
  if (iVar1 == -1) {
    FUN_016d2bc8();
  }
  else if (local_4c == 0) {
    uVar2 = FUN_016d69b4(0,local_50,1,2,local_84);
    if (uVar2 != 0xffffffff) {
      param_1[1] = uVar2;
      param_1[2] = local_50;
    }
    *param_1 = (uint)(uVar2 != 0xffffffff);
    FUN_016dffb2(local_84);
    return;
  }
  *param_1 = 0;
  FUN_016dffb2(local_84);
  return;
}

