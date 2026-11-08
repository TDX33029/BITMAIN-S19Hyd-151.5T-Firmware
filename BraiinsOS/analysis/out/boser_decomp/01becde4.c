// FUN_01becde4 @ 01becde4 size=260 calls_out=5 calls_in=2
// strings: 

undefined4 FUN_01becde4(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_ec;
  undefined1 auStack_e8 [40];
  undefined1 auStack_c0 [80];
  undefined1 auStack_70 [80];
  
  FUN_01bed93e(auStack_e8,0,0x28);
  local_ec = param_3;
  iVar1 = FUN_01bec48c(0,param_2,&local_ec,auStack_c0,auStack_e8);
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  if ((int)param_1[0x13] < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_01beae30(param_1);
  }
  uVar4 = *param_1;
  *param_1 = uVar4 & 0xffffffdf;
  if (param_1[0xc] == 0) {
    uVar5 = param_1[0xb];
    param_1[4] = 0;
    uVar3 = 0xffffffff;
    param_1[7] = 0;
    param_1[5] = 0;
    param_1[0xb] = (uint)auStack_70;
    param_1[0xc] = 0x50;
    iVar2 = FUN_01beb168(param_1);
    if (iVar2 == 0) goto LAB_01bece76;
  }
  else {
    if (param_1[4] == 0) {
      iVar2 = FUN_01beb168(param_1);
      uVar5 = 0;
      if (iVar2 != 0) {
        uVar3 = 0xffffffff;
        goto LAB_01becea6;
      }
    }
    else {
      uVar5 = 0;
    }
LAB_01bece76:
    uVar3 = FUN_01bec48c(param_1,param_2,&local_ec,auStack_c0,auStack_e8);
  }
  if (uVar5 != 0) {
    (*(code *)param_1[9])(param_1,0);
    param_1[0xb] = uVar5;
    param_1[0xc] = 0;
    if (param_1[5] == 0) {
      uVar3 = 0xffffffff;
    }
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[5] = 0;
  }
LAB_01becea6:
  if ((*param_1 & 0x20) != 0) {
    uVar3 = 0xffffffff;
  }
  *param_1 = uVar4 & 0x20 | *param_1;
  if (iVar1 != 0) {
    FUN_01beaed6(param_1);
  }
  return uVar3;
}

