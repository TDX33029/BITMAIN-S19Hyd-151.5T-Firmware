// FUN_01ac8058 @ 01ac8058 size=152 calls_out=1 calls_in=0
// strings: 

void FUN_01ac8058(byte *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  byte *local_14;
  byte **local_10;
  undefined1 *local_c;
  
  iVar3 = *param_1 - 3;
  if (*param_1 < 3 || iVar3 == 0) {
    iVar3 = 0;
  }
  if (iVar3 == 0) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    local_c = &LAB_006e1cd8;
    puVar4 = &DAT_00597c57;
    local_14 = param_1;
  }
  else {
    if (iVar3 != 1) {
                    /* WARNING: Could not recover jumptable at 0x01ac80ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_2[1] + 0xc))(*param_2,&UNK_005326f7,0x11);
      return;
    }
    local_14 = param_1 + 4;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    local_c = &LAB_01ac804c;
    puVar4 = &DAT_005a1e79;
  }
  local_10 = &local_14;
  FUN_012fa178(uVar1,uVar2,puVar4,&local_10);
  return;
}

