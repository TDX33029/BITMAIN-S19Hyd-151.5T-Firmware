// FUN_013dab58 @ 013dab58 size=500 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_013dab58(int *param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_30;
  int iStack_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
  if (*param_1 == -0x7fffffff) {
    uVar3 = *param_2;
    iVar4 = param_2[1];
    pcVar2 = *(code **)(iVar4 + 0xc);
    iVar1 = (*pcVar2)(uVar3,&DAT_0052c2af,3);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar2)(uVar3,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (*pcVar2)(uVar3,&DAT_004745b6,6);
    }
    else {
      iVar1 = (*pcVar2)(uVar3,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_28 = &local_21;
      local_21 = 1;
      local_30 = uVar3;
      iStack_2c = iVar4;
      iVar1 = FUN_01302620(&local_30,&DAT_004745b6,6);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_01302620(&local_30,&DAT_005312e2,2);
    }
    if (iVar1 != 0) {
      return 1;
    }
    uVar3 = (*pcVar2)(uVar3,&DAT_0053341b,1);
  }
  else {
    uVar3 = *param_2;
    iVar4 = param_2[1];
    pcVar2 = *(code **)(iVar4 + 0xc);
    iVar1 = (*pcVar2)(uVar3,&DAT_0052e42c,2);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar2)(uVar3,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_012fb170(param_1[1],param_1[2],uVar3,iVar4);
    }
    else {
      iVar1 = (*pcVar2)(uVar3,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_28 = &local_21;
      local_21 = 1;
      local_30 = uVar3;
      iStack_2c = iVar4;
      iVar1 = FUN_012fb170(param_1[1],param_1[2],&local_30,&DAT_01ce45f8);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_01302620(&local_30,&DAT_005312e2,2);
    }
    if (iVar1 != 0) {
      return 1;
    }
    uVar3 = (*pcVar2)(uVar3,&DAT_0053341b,1);
  }
  return uVar3;
}

