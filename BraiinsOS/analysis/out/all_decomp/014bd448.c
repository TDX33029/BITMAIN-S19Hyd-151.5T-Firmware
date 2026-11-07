// FUN_014bd448 @ 014bd448 size=416 calls_out=6 calls_in=2
// strings: 

void FUN_014bd448(uint *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  int local_40 [8];
  undefined4 local_20;
  undefined4 *local_1c;
  
  local_48 = param_2;
  uStack_44 = param_4;
  FUN_014d864c(&local_20,param_3,&local_48,FUN_014bd6c0);
  puVar4 = local_1c;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(local_20 & 0xff) {
  case 0:
    cVar1 = FUN_005bc530(local_1c);
    if (cVar1 != '\r') goto LAB_014bd5b0;
    goto LAB_014bd564;
  case 1:
    cVar1 = local_20._1_1_;
    break;
  case 2:
    cVar1 = *(char *)(local_1c + 2);
    break;
  case 3:
    if (*(char *)(local_1c + 2) == '\r') {
      uVar3 = *local_1c;
      puVar4 = (undefined4 *)local_1c[1];
      pcVar2 = (code *)*puVar4;
      *(undefined1 *)param_1 = 5;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(uVar3);
      }
      if (puVar4[1] != 0) {
        thunk_FUN_016d3fb4(uVar3);
      }
      thunk_FUN_016d3fb4(local_1c);
      return;
    }
    goto LAB_014bd5b0;
  case 4:
    FUN_014d4188(local_40,param_3,param_3 + 0x2a0,param_3 + 0x2b0);
    if (local_40[0] == -0x7fffffd7) {
      param_1[1] = (uint)puVar4;
      *(undefined1 *)param_1 = 4;
      return;
    }
    FUN_014bd320(&local_20,param_2,param_3,param_4);
    puVar4 = local_1c;
    if ((5 < (local_20 & 0xff)) || ((local_20 & 0xff) == 3)) {
      uVar3 = *local_1c;
      puVar5 = (undefined4 *)local_1c[1];
      pcVar2 = (code *)*puVar5;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(uVar3);
      }
      if (puVar5[1] != 0) {
        thunk_FUN_016d3fb4(uVar3);
      }
      thunk_FUN_016d3fb4(puVar4);
    }
    FUN_014b39a0(&local_20,0x15,local_40);
    goto LAB_014bd5b0;
  }
  if (cVar1 == '\r') {
LAB_014bd564:
    *(undefined1 *)param_1 = 5;
    return;
  }
LAB_014bd5b0:
  *param_1 = local_20;
  param_1[1] = (uint)local_1c;
  return;
}

