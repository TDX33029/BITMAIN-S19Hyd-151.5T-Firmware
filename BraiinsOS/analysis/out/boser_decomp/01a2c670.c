// FUN_01a2c670 @ 01a2c670 size=336 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_01a2c670(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uStack_54;
  int iStack_50;
  undefined1 *local_4c;
  undefined1 local_45;
  undefined1 auStack_44 [36];
  
  pcVar3 = (char *)*param_1;
  if (*pcVar3 != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x01a2c6dc. Too many branches */
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
  pcVar3 = pcVar3 + 1;
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar4)(uVar5,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    FUN_01ae1bfc(auStack_44,pcVar3);
    iVar1 = (*pcVar4)(uVar5,auStack_44,0x24);
  }
  else {
    iVar1 = (*pcVar4)(uVar5,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_4c = &local_45;
    local_45 = 1;
    uStack_54 = uVar5;
    iStack_50 = iVar6;
    FUN_01ae1bfc(auStack_44,pcVar3);
    iVar1 = FUN_01302620(&uStack_54,auStack_44,0x24);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_01302620(&uStack_54,&DAT_005312e2,2);
  }
  uVar2 = 1;
  if (iVar1 == 0) {
    uVar2 = (*pcVar4)(uVar5,&DAT_0053341b,1);
  }
  return uVar2;
}

