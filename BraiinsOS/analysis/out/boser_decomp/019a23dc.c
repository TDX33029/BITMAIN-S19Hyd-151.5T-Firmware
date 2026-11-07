// FUN_019a23dc @ 019a23dc size=264 calls_out=4 calls_in=2
// strings: 

void FUN_019a23dc(undefined4 *param_1,int *param_2,int param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined *local_28;
  code *local_24;
  undefined1 *local_20;
  undefined4 *local_1c;
  
  if (*param_2 == 0) {
    pcVar1 = (char *)param_2[1];
    iVar2 = param_2[2];
    if (param_3 != 0) goto LAB_019a24cc;
    if (iVar2 == 0) {
      iVar2 = 0;
      goto LAB_019a24cc;
    }
  }
  else {
    iVar2 = 9;
    pcVar1 = &DAT_00525a44;
    if (param_3 != 0) goto LAB_019a24cc;
  }
  if ((param_4 != 0) && (*pcVar1 == '/')) {
    uVar3 = FUN_019830f8(pcVar1,iVar2,*(undefined4 *)(param_4 + 4),*(undefined4 *)(param_4 + 8));
    if (((int)uVar3 != 0) &&
       (FUN_012fbd94(&local_28,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20)),
       local_28 != (undefined *)0x1)) {
      local_30 = local_24;
      uStack_2c = local_20;
      local_24 = FUN_012fbb84;
      local_1c = &DAT_0197a814;
      local_28 = &DAT_0056e088;
      local_20 = (undefined1 *)&local_30;
      FUN_012fa178(*param_1,param_1[1],&DAT_00579c2b,&local_28);
      return;
    }
  }
LAB_019a24cc:
  FUN_019a24f8(pcVar1,iVar2,param_1);
  return;
}

