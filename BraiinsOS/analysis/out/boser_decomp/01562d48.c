// FUN_01562d48 @ 01562d48 size=240 calls_out=3 calls_in=6
// strings: 

void FUN_01562d48(char *param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*param_1 == '\x02') {
    if (*(int *)(param_1 + 8) == 0) {
      if (-1 < *(int *)(param_1 + 0x14)) goto LAB_01562d8c;
    }
    else if (*(int *)(param_1 + 8) == 1) {
LAB_01562d8c:
      do {
        iVar3 = *param_2;
        bVar2 = (bool)hasExclusiveAccess(param_2);
      } while (!bVar2);
      *param_2 = iVar3 + 1;
      if (-1 < iVar3) {
        uVar4 = FUN_015321a0();
        local_14 = 0;
        local_18 = 0;
        local_1c = 0;
        local_20 = 0;
        local_28[0] = 2;
        FUN_0159610c(param_2,param_3,param_2,param_3,uVar4,param_1,local_28);
        return;
      }
      goto LAB_01562e34;
    }
  }
  do {
    iVar3 = *param_2;
    bVar2 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar2);
  *param_2 = iVar3 + 1;
  if (-1 < iVar3) {
    uVar4 = FUN_015321a0();
    FUN_015956e0(param_2,param_3,param_2,param_3,uVar4,param_1,4);
    return;
  }
LAB_01562e34:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1562e34);
  (*pcVar1)();
}

