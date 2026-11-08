// FUN_00f1e8e8 @ 00f1e8e8 size=116 calls_out=1 calls_in=8
// strings: 

void FUN_00f1e8e8(undefined4 *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piVar4 = (int *)param_2[3];
  do {
    iVar3 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xf1e958);
    (*pcVar1)();
  }
  if (*param_2 == -0x80000000) {
    local_20 = 0x80000000;
  }
  else {
    FUN_006666fc(&local_20,param_2[1],param_2[2]);
  }
  param_1[3] = piVar4;
  *param_1 = local_20;
  param_1[1] = uStack_1c;
  param_1[2] = uStack_18;
  return;
}

