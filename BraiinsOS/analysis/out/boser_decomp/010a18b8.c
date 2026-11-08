// FUN_010a18b8 @ 010a18b8 size=128 calls_out=1 calls_in=1
// strings: 

void FUN_010a18b8(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_28 = param_3[4];
  uStack_24 = param_3[5];
  uStack_20 = param_3[6];
  uStack_1c = param_3[7];
  piVar3 = *(int **)(param_2 + 0x50);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + 1;
    if (iVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x10a1934);
      (*pcVar1)();
    }
  }
  FUN_011878ec(param_1,&local_38,param_4,param_5,param_2,piVar3);
  return;
}

