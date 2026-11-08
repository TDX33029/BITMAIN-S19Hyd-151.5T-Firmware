// FUN_013dc760 @ 013dc760 size=240 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_013dc760(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_3c;
  int local_38;
  int *local_34;
  code *local_30;
  int *local_2c;
  undefined1 *local_28;
  
  uVar5 = *param_2;
  uVar6 = param_2[1];
  local_2c = (int *)(param_1 + 0xc);
  local_34 = (int *)(param_1 + 0x50);
  local_28 = &LAB_013cad1c;
  local_30 = FUN_012fcf18;
  iVar1 = FUN_012fa178(uVar5,uVar6,&DAT_0057d5fc,&local_34);
  uVar3 = 1;
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 8) != 0) {
      iVar1 = *(int *)(param_1 + 4);
      iVar4 = iVar1 + *(int *)(param_1 + 8) * 0x14;
      do {
        local_38 = iVar1 + 4;
        local_28 = &LAB_013dc868;
        local_30 = (code *)&LAB_013dc588;
        local_3c = iVar1;
        local_34 = &local_3c;
        local_2c = &local_38;
        iVar2 = FUN_012fa178(uVar5,uVar6,&DAT_0059574a,&local_34);
        if (iVar2 != 0) {
          return 1;
        }
        iVar1 = iVar1 + 0x14;
      } while (iVar1 != iVar4);
    }
    uVar3 = 0;
  }
  return uVar3;
}

