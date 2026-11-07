// FUN_0196c344 @ 0196c344 size=212 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_0196c344(int param_1,undefined4 *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int *local_30;
  undefined1 *local_2c;
  code *local_28;
  
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0196c414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,".",1);
    return uVar3;
  }
  uVar6 = *param_2;
  iVar7 = param_2[1];
  uVar3 = 0;
  iVar4 = *(int *)(param_1 + 8) << 4;
  pcVar2 = (char *)0x1;
  local_30 = *(int **)(param_1 + 4);
  do {
    piVar5 = local_30 + 4;
    if ((*local_30 != 0) && (iVar1 = (**(code **)(iVar7 + 0xc))(uVar6,pcVar2,uVar3), iVar1 != 0)) {
      return 1;
    }
    local_28 = FUN_0196c298;
    local_2c = (undefined1 *)&local_30;
    iVar1 = FUN_012fa178(uVar6,iVar7,&DAT_00590e5f,&local_2c);
    if (iVar1 != 0) {
      return 1;
    }
    iVar4 = iVar4 + -0x10;
    uVar3 = 1;
    pcVar2 = ".";
    local_30 = piVar5;
  } while (iVar4 != 0);
  return 0;
}

