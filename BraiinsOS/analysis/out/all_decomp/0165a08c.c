// FUN_0165a08c @ 0165a08c size=368 calls_out=1 calls_in=0
// strings: 

void FUN_0165a08c(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  code *pcVar5;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  code *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  
  puVar4 = *(undefined4 **)(param_1 + 8);
  if (puVar4 == (undefined4 *)0x0) {
    puVar3 = &DAT_0058d2c3;
LAB_0165a1d0:
    local_24 = FUN_01653c08;
    local_28 = param_1;
    FUN_00fa948c(*param_2,param_2[1],puVar3,&local_28);
    return;
  }
  pcVar5 = *(code **)(*(int *)(param_1 + 0xc) + 0xc);
  (*pcVar5)(&local_28,puVar4);
  if ((local_28 == 0x50f052f7 && local_20 == (undefined1 *)0xdf97b325) &&
      (local_24 == (code *)0x9909b2a5 && local_1c == (undefined1 *)0xb55cb20e)) {
    iVar1 = 8;
    puVar2 = puVar4 + 1;
  }
  else {
    (*pcVar5)(&local_28,puVar4);
    iVar1 = 4;
    puVar2 = puVar4;
    if ((local_28 != -0x2934a293 || local_20 != (undefined1 *)0x57a64178) ||
        (local_24 != (code *)0x63eb502c || local_1c != (undefined1 *)0xb98b1b71)) {
      puVar3 = &DAT_0058eea7;
      goto LAB_0165a1d0;
    }
  }
  local_2c = *(undefined4 *)((int)puVar4 + iVar1);
  local_30 = *puVar2;
  local_1c = &LAB_0157a210;
  local_24 = FUN_01653c08;
  local_28 = param_1;
  local_20 = (undefined1 *)&local_30;
  FUN_00fa948c(*param_2,param_2[1],&DAT_005752bc,&local_28);
  return;
}

