// FUN_01694018 @ 01694018 size=344 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_01694018(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  undefined4 local_30;
  int iStack_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
  bVar1 = *param_1;
  if (bVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x0169404c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0056eb34,4);
    return uVar2;
  }
  uVar2 = *param_2;
  iVar7 = param_2[1];
  pcVar6 = *(code **)(iVar7 + 0xc);
  iVar3 = (*pcVar6)(uVar2,&DAT_0056f9dc,4);
  if (iVar3 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar3 = (*pcVar6)(uVar2,"(",1);
    if (iVar3 != 0) {
      return 1;
    }
    uVar5 = 3;
    puVar4 = &DAT_004cfc88;
    if ((bVar1 & 1) != 0) {
      uVar5 = 0xd;
      puVar4 = &DAT_004cfa47;
    }
    iVar3 = (*pcVar6)(uVar2,puVar4,uVar5);
  }
  else {
    iVar3 = (*pcVar6)(uVar2,"(\n",2);
    if (iVar3 != 0) {
      return 1;
    }
    local_28 = &local_21;
    puVar4 = &DAT_004cfc88;
    uVar5 = 3;
    if ((bVar1 & 1) != 0) {
      uVar5 = 0xd;
      puVar4 = &DAT_004cfa47;
    }
    local_21 = 1;
    local_30 = uVar2;
    iStack_2c = iVar7;
    iVar3 = FUN_01302620(&local_30,puVar4,uVar5);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = FUN_01302620(&local_30,&DAT_005312e2,2);
  }
  uVar5 = 1;
  if (iVar3 == 0) {
    uVar5 = (*pcVar6)(uVar2,&DAT_0053341b,1);
  }
  return uVar5;
}

