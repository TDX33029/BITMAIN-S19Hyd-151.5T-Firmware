// FUN_0143da38 @ 0143da38 size=300 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_0143da38(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_30;
  int iStack_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
  iVar3 = *param_1;
  if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0143daa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0056eb34,4);
    return uVar5;
  }
  uVar5 = *param_2;
  iVar6 = param_2[1];
  pcVar4 = *(code **)(iVar6 + 0xc);
  iVar1 = (*pcVar4)(uVar5,&DAT_0056f9dc,4);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar4)(uVar5,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar3 = FUN_01414624(iVar3,uVar5,iVar6);
  }
  else {
    iVar1 = (*pcVar4)(uVar5,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_28 = &local_21;
    local_21 = 1;
    local_30 = uVar5;
    iStack_2c = iVar6;
    iVar3 = FUN_01414624(iVar3,&local_30,&DAT_01ce45f8);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = FUN_01302620(&local_30,&DAT_005312e2,2);
  }
  uVar2 = 1;
  if (iVar3 == 0) {
    uVar2 = (*pcVar4)(uVar5,&DAT_0053341b,1);
  }
  return uVar2;
}

