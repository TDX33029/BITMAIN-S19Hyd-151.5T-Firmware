// FUN_0070fde0 @ 0070fde0 size=176 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_0070fde0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_18;
  code *local_14;
  
  iVar3 = *(int *)(param_1 + 8) << 4;
  piVar1 = *(int **)(param_1 + 4);
  do {
    if (iVar3 == 0) {
      uVar6 = *param_2;
      uVar5 = param_2[1];
      goto LAB_0070fe5c;
    }
    iVar4 = *piVar1;
    iVar3 = iVar3 + -0x10;
    piVar1 = piVar1 + 4;
  } while (iVar4 == 3);
  uVar6 = *param_2;
  uVar5 = param_2[1];
  local_14 = FUN_0196c344;
  local_18 = param_1;
  iVar3 = FUN_012fa178(uVar6,uVar5,&DAT_00572339,&local_18);
  uVar2 = 1;
  if (iVar3 == 0) {
LAB_0070fe5c:
    local_18 = param_1 + 0xc;
    local_14 = (code *)&LAB_019674bc;
    uVar2 = FUN_012fa178(uVar6,uVar5,&DAT_00590e5f,&local_18);
  }
  return uVar2;
}

