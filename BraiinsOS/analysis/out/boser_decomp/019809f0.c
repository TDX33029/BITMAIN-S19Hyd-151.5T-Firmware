// FUN_019809f0 @ 019809f0 size=452 calls_out=10 calls_in=3
// strings: 

void FUN_019809f0(uint *param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined2 local_1c4;
  uint local_1c0;
  undefined4 *local_1bc;
  undefined4 *local_1b4;
  undefined1 auStack_1b0 [48];
  uint local_180;
  int local_17c;
  int local_2c;
  undefined4 local_28;
  
  local_1cc = 0x1b6;
  local_1c8 = 1;
  local_1b4 = &local_1d0;
  local_1d0 = 0;
  local_1c4 = 0;
  if (param_3 >> 7 < 3) {
    FUN_01bed4e2(auStack_1b0,param_2,param_3);
    auStack_1b0[param_3] = 0;
    FUN_012fbc58(&local_2c,auStack_1b0,param_3 + 1);
    if (local_2c == 1) {
      local_1c0 = 2;
      local_1bc = &DAT_01d27a70;
    }
    else {
      FUN_01980058(&local_1c0,local_28,&local_1d0);
    }
  }
  else {
    FUN_019a0974(&local_1c0,param_2,param_3,&local_1b4);
  }
  puVar1 = local_1bc;
  if ((char)local_1c0 != '\x04') {
    if ((local_1c0 & 0xff) != 4) {
      if ((local_1c0 & 0xff) == 3) {
        uVar5 = *local_1bc;
        puVar6 = (undefined4 *)local_1bc[1];
        pcVar4 = (code *)*puVar6;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(uVar5);
        }
        if (puVar6[1] != 0) {
          thunk_FUN_01be4678(uVar5);
        }
        thunk_FUN_01be4678(puVar1);
      }
LAB_01980b74:
      *param_1 = 0;
      return;
    }
    if (local_1bc == (undefined4 *)&DAT_ffffffff) goto LAB_01980b74;
  }
  FUN_01bed93e(auStack_1b0,0,0x68);
  iVar2 = FUN_01bf05c2(puVar1,auStack_1b0);
  if (iVar2 == -1) {
    FUN_01be3244();
  }
  else if (local_17c == 0) {
    uVar3 = FUN_01be6c88(0,local_180,1,2,puVar1);
    if (uVar3 != 0xffffffff) {
      param_1[1] = uVar3;
      param_1[2] = local_180;
    }
    *param_1 = (uint)(uVar3 != 0xffffffff);
    goto LAB_01980b90;
  }
  *param_1 = 0;
LAB_01980b90:
  FUN_01bf01d6(puVar1);
  return;
}

