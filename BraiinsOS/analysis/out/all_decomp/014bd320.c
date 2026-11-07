// FUN_014bd320 @ 014bd320 size=232 calls_out=3 calls_in=8
// strings: 

void FUN_014bd320(uint *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 *local_1c;
  
  local_28 = param_2;
  uStack_24 = param_4;
  FUN_0155a354(&local_20,param_3 + 500,&local_28,FUN_014bd664);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(local_20 & 0xff) {
  case 0:
    cVar1 = FUN_005bc530(local_1c);
    if (cVar1 != '\r') goto switchD_014bd358_caseD_4;
    goto LAB_014bd3e8;
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
  case 4:
    goto switchD_014bd358_caseD_4;
  }
  if (cVar1 == '\r') {
LAB_014bd3e8:
    *(undefined1 *)param_1 = 5;
    return;
  }
switchD_014bd358_caseD_4:
  *param_1 = local_20;
  param_1[1] = (uint)local_1c;
  return;
}

