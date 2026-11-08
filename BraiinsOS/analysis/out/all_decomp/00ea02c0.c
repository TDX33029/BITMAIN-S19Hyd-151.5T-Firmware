// FUN_00ea02c0 @ 00ea02c0 size=456 calls_out=4 calls_in=3
// strings: a Display implementation returned an error unexpectedly

undefined4 FUN_00ea02c0(byte *param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  char cVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  byte **local_38;
  undefined1 *local_34;
  undefined4 uStack_30;
  byte **local_28;
  undefined4 local_24;
  undefined4 local_20;
  byte *local_1c;
  
  cVar4 = '\x01';
  local_24 = 1;
  local_20 = 0;
  if (5 < *param_1) {
    cVar4 = *param_1 - 6;
  }
  local_28 = (byte **)0x0;
  if (cVar4 == '\0') {
    local_1c = param_1 + 4;
    local_34 = &LAB_0076dae8;
    local_38 = &local_1c;
    iVar1 = FUN_00fa948c(&local_28,&DAT_0187b3f4,&DAT_00590e71,&local_38);
  }
  else if (cVar4 == '\x01') {
    local_34 = &LAB_0110eb28;
    local_38 = &local_1c;
    local_1c = param_1;
    iVar1 = FUN_00fa948c(&local_28,&DAT_0187b3f4,&DAT_00590e71,&local_38);
  }
  else {
    local_1c = param_1 + 4;
    local_34 = &LAB_008b9b38;
    local_38 = &local_1c;
    iVar1 = FUN_00fa948c(&local_28,&DAT_0187b3f4,&DAT_00590e71,&local_38);
  }
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_1c,
                 &DAT_0187b40c,&DAT_018af130);
  }
  local_38 = local_28;
  local_34 = (undefined1 *)local_24;
  uStack_30 = local_20;
  uVar2 = FUN_0157ba88(&local_38);
  if (*param_1 != 6) {
    return uVar2;
  }
  piVar5 = *(int **)(param_1 + 4);
  if (*piVar5 == 1) {
    if ((char)piVar5[1] != '\x03') goto LAB_00ea044c;
    puVar6 = (undefined4 *)piVar5[2];
    uVar7 = *puVar6;
    puVar8 = (undefined4 *)puVar6[1];
    pcVar3 = (code *)*puVar8;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar7);
    }
    if (puVar8[1] != 0) {
      thunk_FUN_016d3fb4(uVar7);
    }
  }
  else {
    if ((*piVar5 != 0) || (piVar5[2] == 0)) goto LAB_00ea044c;
    puVar6 = (undefined4 *)piVar5[1];
  }
  thunk_FUN_016d3fb4(puVar6);
LAB_00ea044c:
  thunk_FUN_016d3fb4(piVar5);
  return uVar2;
}

