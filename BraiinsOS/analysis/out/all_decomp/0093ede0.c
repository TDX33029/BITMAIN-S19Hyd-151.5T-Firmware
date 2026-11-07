// FUN_0093ede0 @ 0093ede0 size=368 calls_out=5 calls_in=0
// strings: 

undefined4 FUN_0093ede0(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 ****local_38;
  int *local_34;
  undefined4 local_30;
  undefined4 ****local_2c;
  int *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  local_34 = (int *)thunk_FUN_016d4a50(0x80);
  if (local_34 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x80);
  }
  local_30 = 0;
  local_24 = 2;
  local_38 = (undefined4 ****)&DAT_00000080;
  local_1c = 0;
  local_20 = 0;
  local_28 = (int *)0x40dd9f;
  local_2c = &local_38;
  piVar1 = (int *)FUN_0093a808(param_1,&local_2c);
  if (piVar1 == (int *)0x0) {
    piVar1 = local_34;
    if (local_38 != (undefined4 ****)&DAT_80000000) {
      local_24 = local_30;
      local_2c = local_38;
      local_28 = local_34;
      local_34 = &DAT_006043a8;
      local_38 = &local_2c;
      uVar3 = FUN_00fa948c(*param_2,param_2[1],&DAT_00590e71,&local_38);
      if (local_2c == (undefined4 ****)0x0) {
        return uVar3;
      }
      piVar1 = local_28;
      goto LAB_0093ef30;
    }
  }
  else if (local_38 != (undefined4 ****)0x0) {
    thunk_FUN_016d3fb4(local_34);
  }
  uVar3 = 1;
  if (*piVar1 == 1) {
    if ((char)piVar1[1] != '\x03') goto LAB_0093ef30;
    puVar4 = (undefined4 *)piVar1[2];
    uVar5 = *puVar4;
    puVar6 = (undefined4 *)puVar4[1];
    pcVar2 = (code *)*puVar6;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar5);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_016d3fb4(uVar5);
    }
  }
  else {
    if ((*piVar1 != 0) || (piVar1[2] == 0)) goto LAB_0093ef30;
    puVar4 = (undefined4 *)piVar1[1];
  }
  thunk_FUN_016d3fb4(puVar4);
LAB_0093ef30:
  thunk_FUN_016d3fb4(piVar1);
  return uVar3;
}

