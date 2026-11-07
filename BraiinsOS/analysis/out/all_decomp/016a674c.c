// FUN_016a674c @ 016a674c size=232 calls_out=3 calls_in=0
// strings: 

void FUN_016a674c(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined *local_20;
  undefined1 **local_1c;
  undefined1 *local_18;
  undefined4 *local_14;
  
  if (*(char *)(param_1 + 0xd) != '\0') {
    return;
  }
  uVar2 = param_2[4];
  local_28 = param_3;
  uStack_24 = param_4;
  if ((uint)param_2[1] <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar2,param_2[1],&DAT_018ae7cc);
  }
  puVar3 = (undefined4 *)(*param_2 + uVar2 * 8);
  if ((puVar3[1] == 7) && (iVar1 = thunk_FUN_016dd50a(*puVar3,&DAT_00418440,7), iVar1 == 0)) {
    local_1c = &local_18;
    local_14 = &DAT_0157d360;
    local_20 = &DAT_00590e71;
    local_18 = (undefined1 *)&local_28;
    FUN_016a6ba4(param_1,param_2,&local_20,&DAT_018ae78c);
    return;
  }
  FUN_016a6ba4(param_1,param_2,&local_28,&DAT_018ae7dc);
  return;
}

