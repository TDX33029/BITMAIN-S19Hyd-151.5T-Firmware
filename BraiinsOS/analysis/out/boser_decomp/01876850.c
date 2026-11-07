// FUN_01876850 @ 01876850 size=244 calls_out=4 calls_in=2
// strings: 

void FUN_01876850(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint *local_48;
  undefined1 *local_44;
  uint *local_40;
  undefined1 *local_3c;
  int iStack_38;
  uint local_20;
  uint local_1c;
  
  if (*(char *)(param_1 + 0x24) != '\0') {
    local_44 = (undefined1 *)*param_2;
    local_40 = (uint *)param_2[1];
    local_3c = (undefined1 *)param_2[2];
    iStack_38 = param_2[3];
    local_48 = (uint *)0x0;
    FUN_01885284(param_1 + 0x10);
    return;
  }
  uVar2 = param_2[2];
  FUN_01424824(param_1,uVar2);
  iVar1 = param_2[1];
  while( true ) {
    if (uVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01876904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x10))(param_2 + 3,iVar1,0);
      return;
    }
    FUN_01ac6cbc(param_1,iVar1,uVar2);
    local_1c = param_2[2];
    local_20 = uVar2;
    if (local_1c < uVar2) break;
    iVar1 = param_2[1] + uVar2;
    param_2[1] = iVar1;
    param_2[2] = local_1c - uVar2;
    uVar2 = local_1c - uVar2;
  }
  local_40 = &local_1c;
  local_48 = &local_20;
  local_3c = &LAB_01a6a304;
  local_44 = &LAB_01a6a304;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(&DAT_005ac267,&local_48,&DAT_01d2e534);
}

