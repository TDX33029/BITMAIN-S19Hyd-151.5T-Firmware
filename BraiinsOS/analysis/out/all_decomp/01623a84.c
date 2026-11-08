// FUN_01623a84 @ 01623a84 size=484 calls_out=6 calls_in=0
// strings: 

void FUN_01623a84(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 local_a4;
  code *local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  int local_90;
  code *local_8c;
  undefined4 *local_88;
  undefined2 local_84;
  
  local_8c = FUN_00fac4cc;
  local_90 = param_2;
  FUN_00600d2c(&local_a4,&DAT_0056ee63,&local_90);
  pcVar1 = local_a0;
  FUN_015f5984(&local_90,local_a0,local_9c);
  if (local_90 == 0) {
    if (local_a4 != 0) {
      thunk_FUN_016d3fb4(pcVar1);
      *param_1 = 4;
      return;
    }
  }
  else {
    if ((char)local_8c == '\x03') {
      uVar4 = *local_88;
      puVar5 = (undefined4 *)local_88[1];
      pcVar3 = (code *)*puVar5;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar4);
      }
      if (puVar5[1] != 0) {
        thunk_FUN_016d3fb4(uVar4);
      }
      thunk_FUN_016d3fb4(local_88);
    }
    if (local_a4 != 0) {
      thunk_FUN_016d3fb4(pcVar1);
    }
    local_8c = (code *)0x1b6;
    local_88 = (undefined4 *)0x1000100;
    local_84 = 1;
    local_90 = 0;
    FUN_015ec1bc(&local_a4,&local_90,&DAT_00411a4b,0x16);
    pcVar1 = local_a0;
    if ((char)local_a4 != '\x04') {
      *(undefined1 *)((int)param_1 + 7) = local_a4._3_1_;
      *(undefined2 *)((int)param_1 + 5) = local_a4._1_2_;
      param_1[2] = local_a0;
      *(char *)(param_1 + 1) = (char)local_a4;
      *param_1 = 0;
      return;
    }
    local_a0 = FUN_00fac4cc;
    local_a4 = param_2;
    FUN_00600d2c(&local_90,&DAT_00590e71,&local_a4);
    pcVar3 = local_8c;
    iVar2 = local_90;
    FUN_01623cf4(&local_98,pcVar1,local_8c,local_88);
    if ((char)local_98 != '\x04') {
      *param_1 = 0;
      param_1[1] = local_98;
      param_1[2] = local_94;
      if (iVar2 != 0) {
        thunk_FUN_016d3fb4(pcVar3);
      }
      FUN_016dffb2(pcVar1);
      return;
    }
    if (iVar2 != 0) {
      thunk_FUN_016d3fb4(pcVar3);
    }
    FUN_016dffb2(pcVar1);
  }
  *param_1 = 4;
  return;
}

