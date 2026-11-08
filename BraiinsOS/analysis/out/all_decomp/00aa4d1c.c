// FUN_00aa4d1c @ 00aa4d1c size=60 calls_out=0 calls_in=3
// strings: 

void FUN_00aa4d1c(int *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  do {
    iVar3 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xaa5e90);
    (*pcVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x00aa4d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00aa4d54 + *(int *)(&DAT_00aa4d54 + *param_2 * 4)))();
  return;
}

