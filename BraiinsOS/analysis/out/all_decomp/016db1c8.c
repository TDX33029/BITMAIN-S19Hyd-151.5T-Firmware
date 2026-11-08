// FUN_016db1c8 @ 016db1c8 size=126 calls_out=2 calls_in=4
// strings: 

uint FUN_016db1c8(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_3 + 0x10);
  if (iVar5 == 0) {
    iVar5 = FUN_016dae50(param_3);
    if (iVar5 != 0) {
      return 0;
    }
    iVar5 = *(int *)(param_3 + 0x10);
  }
  iVar1 = *(int *)(param_3 + 0x14);
  if ((uint)(iVar5 - iVar1) < param_2) {
                    /* WARNING: Could not recover jumptable at 0x016db202. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_3 + 0x24))(param_3,param_1,param_2);
    return uVar2;
  }
  if (-1 < *(int *)(param_3 + 0x50)) {
    pcVar4 = (char *)(param_1 + param_2);
    uVar2 = param_2;
    while (uVar2 != 0) {
      pcVar4 = pcVar4 + -1;
      if (*pcVar4 == '\n') {
        uVar3 = (**(code **)(param_3 + 0x24))(param_3,param_1,uVar2);
        if (uVar3 < uVar2) {
          return uVar3;
        }
        param_1 = param_1 + uVar2;
        iVar1 = *(int *)(param_3 + 0x14);
        uVar2 = param_2 - uVar2;
        goto LAB_016db22e;
      }
      uVar2 = uVar2 - 1;
    }
  }
  uVar2 = param_2;
LAB_016db22e:
  FUN_016dd1aa(iVar1,param_1,uVar2);
  *(uint *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + uVar2;
  return param_2;
}

