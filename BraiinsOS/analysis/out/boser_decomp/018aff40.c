// FUN_018aff40 @ 018aff40 size=360 calls_out=3 calls_in=0
// strings: IpAddress

undefined4 FUN_018aff40(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  code *pcVar5;
  int *piVar6;
  int iVar7;
  int *local_30;
  int local_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
  piVar4 = (int *)*param_1;
  if (*piVar4 == 0) {
    local_30 = piVar4 + 1;
    uVar3 = FUN_013032f4(param_2,&DAT_00570730,8,&local_30,FUN_018c38dc);
  }
  else {
    if (*piVar4 == 1) {
      piVar6 = (int *)*param_2;
      iVar7 = param_2[1];
      uVar3 = 9;
      pcVar5 = *(code **)(iVar7 + 0xc);
      pcVar2 = "IpAddress";
    }
    else {
      piVar6 = (int *)*param_2;
      iVar7 = param_2[1];
      uVar3 = 7;
      pcVar5 = *(code **)(iVar7 + 0xc);
      pcVar2 = 
      "UnknownInvalidArgumentAlreadyExistsResourceExhaustedFailedPreconditionAbortedOutOfRangeUnimplemented"
      ;
    }
    iVar1 = (*pcVar5)(piVar6,pcVar2,uVar3);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar5)(piVar6,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar7 = FUN_018c3be0(piVar6,iVar7,piVar4[2],piVar4[3]);
    }
    else {
      iVar1 = (*pcVar5)(piVar6,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_28 = &local_21;
      local_21 = 1;
      local_30 = piVar6;
      local_2c = iVar7;
      iVar7 = FUN_018c3be0(&local_30,&DAT_01ce45f8,piVar4[2],piVar4[3]);
      if (iVar7 != 0) {
        return 1;
      }
      iVar7 = FUN_01302620(&local_30,&DAT_005312e2,2);
    }
    if (iVar7 != 0) {
      return 1;
    }
    uVar3 = (*pcVar5)(piVar6,&DAT_0053341b,1);
  }
  return uVar3;
}

