// FUN_011258d0 @ 011258d0 size=372 calls_out=5 calls_in=1
// strings: a Display implementation returned an error unexpectedly

undefined4 FUN_011258d0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *local_58;
  undefined4 local_54;
  undefined4 local_50;
  int **local_48;
  undefined *local_44;
  undefined1 *local_40;
  undefined4 local_3c;
  int *local_38;
  code *local_34;
  int *piStack_30;
  undefined1 *puStack_2c;
  int *piStack_28;
  undefined1 *local_24;
  undefined1 uStack_19;
  
  local_50 = 0;
  local_58 = (int *)0x0;
  local_3c = 0;
  local_54 = 1;
  local_40 = &DAT_60000020;
  local_44 = &DAT_018874c0;
  local_48 = &local_58;
  if (param_1[3] == 0) {
    iVar1 = FUN_0157c6d0(param_1,&local_48);
  }
  else {
    piStack_28 = param_1 + 4;
    local_24 = &LAB_00fac484;
    puStack_2c = &LAB_00fac484;
    local_34 = FUN_0157c6d0;
    local_38 = param_1;
    piStack_30 = param_1 + 3;
    iVar1 = FUN_00fa948c(&local_58,&DAT_018874c0,&DAT_00579fdb,&local_38);
  }
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_19,
                 &DAT_018874d8,&DAT_018af130);
  }
  local_38 = local_58;
  local_34 = (code *)local_54;
  piStack_30 = (int *)local_50;
  uVar2 = FUN_0157ba88(&local_38);
  if (*param_1 == 1) {
    if ((char)param_1[1] != '\x03') goto LAB_01125a08;
    puVar4 = (undefined4 *)param_1[2];
    uVar5 = *puVar4;
    puVar6 = (undefined4 *)puVar4[1];
    pcVar3 = (code *)*puVar6;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar5);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_016d3fb4(uVar5);
    }
  }
  else {
    if ((*param_1 != 0) || (param_1[2] == 0)) goto LAB_01125a08;
    puVar4 = (undefined4 *)param_1[1];
  }
  thunk_FUN_016d3fb4(puVar4);
LAB_01125a08:
  thunk_FUN_016d3fb4(param_1);
  return uVar2;
}

