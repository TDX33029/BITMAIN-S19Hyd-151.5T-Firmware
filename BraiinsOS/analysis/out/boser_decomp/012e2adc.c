// FUN_012e2adc @ 012e2adc size=240 calls_out=4 calls_in=2
// strings: 

void FUN_012e2adc(int param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_34;
  int local_30;
  undefined1 local_2c;
  int local_28;
  undefined1 local_24;
  
  FUN_01656cb0(&local_34,param_1);
  if (local_34 == 1) {
    local_24 = local_2c;
    local_28 = local_30;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_28,&DAT_01ce3778,&DAT_01d06978);
  }
  do {
    iVar3 = *param_3;
    bVar2 = (bool)hasExclusiveAccess(param_3);
  } while (!bVar2);
  *param_3 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x12e2bc8);
    (*pcVar1)();
  }
  iVar3 = *(int *)(local_30 + 0x10);
  if (iVar3 == *(int *)(local_30 + 8)) {
    FUN_018c4418();
  }
  puVar4 = (undefined4 *)(*(int *)(local_30 + 0xc) + iVar3 * 0xc);
  *puVar4 = param_3;
  puVar4[1] = param_2;
  puVar4[2] = 0;
  iVar5 = iVar3 + 1;
  *(int *)(local_30 + 0x10) = iVar5;
  if (iVar3 == -1) {
    iVar5 = *(int *)(local_30 + 0x1c);
  }
  DataMemoryBarrier(0xb);
  *(bool *)(param_1 + 0x20) = iVar3 == -1 && iVar5 == 0;
  DataMemoryBarrier(0xb);
  FUN_00a97e8c(local_30,local_2c);
  return;
}

