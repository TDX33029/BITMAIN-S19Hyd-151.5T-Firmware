// FUN_01554064 @ 01554064 size=340 calls_out=7 calls_in=2
// strings: 

undefined4 FUN_01554064(undefined4 *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [32];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_2 != '\x02') {
    return 0;
  }
  iVar4 = FUN_01591188(param_2 + 8,param_2,param_1[8],param_1[9]);
  if (iVar4 != 0) {
    return 0;
  }
  piVar5 = (int *)param_1[6];
  do {
    iVar4 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar4 + 1;
  if (iVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x15541cc);
    (*pcVar1)();
  }
  uVar6 = param_1[7];
  FUN_01508624(auStack_60,param_4,piVar5,uVar6);
  uVar7 = FUN_01531840(param_3);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)param_1) {
  case 0:
    uVar3 = 0;
    break;
  case 1:
    local_40 = *param_1;
    uStack_3c = param_1[1];
    local_38 = param_1[2];
    uStack_34 = param_1[3];
    uStack_30 = param_1[4];
    uStack_2c = param_1[5];
    goto LAB_0155419c;
  case 2:
    local_38 = param_1[2];
    uStack_34 = param_1[3];
    uStack_30 = param_1[4];
    uStack_2c = param_1[5];
    uVar3 = 2;
    break;
  case 3:
    FUN_006666fc((uint)&local_40 | 4,param_1[2],param_1[3]);
    uVar3 = 3;
    break;
  case 4:
    FUN_014fcef8((uint)&local_40 | 4,param_1 + 1);
    uVar3 = 4;
    break;
  case 5:
    FUN_0156aa80((uint)&local_40 | 4,param_1 + 1);
    uVar3 = 5;
  }
  local_40 = CONCAT31(local_40._1_3_,uVar3);
LAB_0155419c:
  uVar6 = FUN_01595570(piVar5,uVar6,auStack_60,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20),param_2,
                       &local_40);
  return uVar6;
}

