// FUN_015707a4 @ 015707a4 size=152 calls_out=3 calls_in=5
// strings: json-schema

int * FUN_015707a4(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  
  do {
    iVar3 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1570838);
    (*pcVar1)();
  }
  uVar5 = FUN_013437d0(param_1[3],param_1[4],0,param_1[7]);
  if (((int)((ulonglong)uVar5 >> 0x20) == 0xb) &&
     (iVar3 = thunk_FUN_01bed842((int)uVar5,"json-schema",0xb), iVar3 == 0)) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *param_1;
      bVar2 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar2);
    *param_1 = iVar3 + -1;
    piVar4 = (int *)0x0;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01670d04(param_1);
    }
  }
  else {
    piVar4 = param_1;
  }
  return piVar4;
}

