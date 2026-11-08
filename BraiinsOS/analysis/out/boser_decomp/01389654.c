// FUN_01389654 @ 01389654 size=116 calls_out=1 calls_in=2
// strings: 

void FUN_01389654(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_24;
  int local_20;
  int local_1c;
  
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  FUN_012fbd94(&local_24,iVar2,iVar3);
  if (local_24 == 0) {
    iVar2 = param_2[1];
    iVar3 = param_2[2];
    iVar1 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = iVar2;
    param_1[2] = iVar3;
    param_1[3] = iVar1;
    return;
  }
  iVar1 = *param_2;
  param_1[1] = local_20;
  param_1[2] = local_1c;
  *param_1 = 0;
                    /* WARNING: Could not recover jumptable at 0x013896b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0x10))(param_2 + 3,iVar2,iVar3);
  return;
}

