// FUN_01ac60b8 @ 01ac60b8 size=200 calls_out=1 calls_in=0
// strings: 

void FUN_01ac60b8(char *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  int iVar3;
  char local_19;
  char *local_18;
  undefined4 local_14;
  
  if (*param_1 != '\x01') {
    uVar2 = *param_2;
    iVar3 = param_2[1];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_1[1]) {
    case '\0':
                    /* WARNING: Could not recover jumptable at 0x01ac5e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar3 + 0xc))(uVar2,&UNK_00570e40,8);
      return;
    case '\x01':
                    /* WARNING: Could not recover jumptable at 0x01ac5ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar3 + 0xc))(uVar2,&UNK_0056cff0,4);
      return;
    case '\x02':
                    /* WARNING: Could not recover jumptable at 0x01ac5e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar3 + 0xc))(uVar2,&UNK_00532444,6);
      return;
    case '\x03':
      local_14 = (code *)CONCAT13(param_1[2],(undefined3)local_14);
      FUN_012fa178(uVar2,iVar3,&DAT_00594e6a,(int)register0x00000054 + -0x10);
      return;
    }
  }
  iVar3 = param_2[1];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_1[1]) {
  case '\0':
    UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0xc);
    uVar2 = 5;
    puVar1 = &UNK_0053248c;
    goto LAB_01ac6184;
  case '\x01':
    puVar1 = &UNK_0056dfb0;
    break;
  case '\x02':
    puVar1 = &DAT_0056d134;
    break;
  case '\x03':
    local_19 = param_1[2];
    local_18 = &local_19;
    local_14 = FUN_012fcc70;
    FUN_012fa178(*param_2,iVar3,&DAT_005bd985,&local_18);
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0xc);
  uVar2 = 4;
LAB_01ac6184:
                    /* WARNING: Could not recover jumptable at 0x01ac618c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_2,puVar1,uVar2);
  return;
}

