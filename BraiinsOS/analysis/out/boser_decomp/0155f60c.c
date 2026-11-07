// FUN_0155f60c @ 0155f60c size=116 calls_out=2 calls_in=1
// strings: regex

void FUN_0155f60c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_30 [8];
  
  do {
    iVar3 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x155f67c);
    (*pcVar1)();
  }
  local_30[0] = 0;
  uVar4 = FUN_015321a0();
  FUN_01595ecc(param_1,param_2,local_30,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20),param_3,"regex",5
              );
  return;
}

