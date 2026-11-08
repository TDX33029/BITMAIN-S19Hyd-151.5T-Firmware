// FUN_016cd664 @ 016cd664 size=292 calls_out=1 calls_in=0
// strings: 

void FUN_016cd664(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 local_1d;
  undefined4 *local_1c;
  code *local_18;
  undefined4 *local_14;
  code *local_10;
  undefined4 local_c;
  
  puVar1 = (undefined1 *)*param_1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*puVar1) {
  case 0:
    local_1d = puVar1[1];
    local_c = *(undefined4 *)(puVar1 + 4);
    uVar2 = *param_2;
    uVar4 = param_2[1];
    local_10 = FUN_012fd02c;
    local_14 = &local_c;
    puVar3 = &DAT_005bd37e;
    local_18 = FUN_016bc3c0;
    local_1c = (undefined4 *)&local_1d;
    goto LAB_016cd784;
  case 1:
    local_c = *(undefined4 *)(puVar1 + 4);
    uVar2 = *param_2;
    uVar4 = param_2[1];
    puVar3 = &DAT_0059f8ba;
    break;
  case 2:
    local_c = *(undefined4 *)(puVar1 + 4);
    uVar2 = *param_2;
    uVar4 = param_2[1];
    puVar3 = &DAT_00589d95;
    break;
  case 3:
    if (*(int *)(puVar1 + 4) == 0) {
      uVar2 = *param_2;
      uVar4 = 0x30;
      UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
      puVar3 = &UNK_004cfa6f;
LAB_016cd754:
                    /* WARNING: Could not recover jumptable at 0x016cd75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(uVar2,puVar3,uVar4);
      return;
    }
    if (*(int *)(puVar1 + 4) == 1) {
      uVar2 = *param_2;
      uVar4 = 0x2e;
      UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
      puVar3 = &UNK_004cfa9f;
      goto LAB_016cd754;
    }
    local_c = *(undefined4 *)(puVar1 + 8);
    uVar2 = *param_2;
    uVar4 = param_2[1];
    puVar3 = &DAT_0059f244;
  }
  local_18 = FUN_012fd02c;
  local_1c = &local_c;
LAB_016cd784:
  FUN_012fa178(uVar2,uVar4,puVar3,&local_1c);
  return;
}

