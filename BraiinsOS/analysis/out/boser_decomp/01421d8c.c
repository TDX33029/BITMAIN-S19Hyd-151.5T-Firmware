// FUN_01421d8c @ 01421d8c size=164 calls_out=1 calls_in=0
// strings: Length | Chunked

void FUN_01421d8c(int *param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int **ppiVar3;
  undefined *puVar4;
  int *local_10;
  int *local_c;
  
  if (*param_1 == 0) {
    local_10 = param_1 + 1;
    pcVar1 = "Chunked";
    puVar4 = &DAT_01425d50;
    ppiVar3 = &local_10;
    uVar2 = 7;
  }
  else {
    if (*param_1 != 1) {
                    /* WARNING: Could not recover jumptable at 0x01421e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_2[1] + 0xc))(*param_2,&UNK_00477c51,0xe);
      return;
    }
    local_c = param_1 + 2;
    pcVar1 = "Length";
    puVar4 = &LAB_015f5418;
    ppiVar3 = &local_c;
    uVar2 = 6;
  }
  FUN_013032f4(param_2,pcVar1,uVar2,ppiVar3,puVar4);
  return;
}

