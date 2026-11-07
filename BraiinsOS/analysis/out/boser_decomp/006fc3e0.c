// FUN_006fc3e0 @ 006fc3e0 size=168 calls_out=1 calls_in=2
// strings: 

undefined4 FUN_006fc3e0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *local_1c;
  int **local_18;
  undefined1 *local_14;
  
  uVar3 = *param_2;
  iVar4 = param_2[1];
  if (*param_1 == 0) {
    local_1c = param_1 + 1;
    local_14 = &LAB_00700b08;
    local_18 = &local_1c;
    iVar1 = FUN_012fa178(uVar3,iVar4,&DAT_005bd5dc,&local_18);
  }
  else {
    iVar1 = (**(code **)(iVar4 + 0xc))(uVar3,*param_1 + 8,param_1[1]);
  }
  uVar2 = 1;
  if ((iVar1 == 0) && (uVar2 = 0, (char)param_1[2] == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x006fc484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(iVar4 + 0x10))(uVar3,0x21);
    return uVar3;
  }
  return uVar2;
}

