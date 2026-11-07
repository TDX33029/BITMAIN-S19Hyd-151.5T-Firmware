// FUN_0072ff34 @ 0072ff34 size=420 calls_out=3 calls_in=0
// strings: Conversion

undefined4 FUN_0072ff34(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int local_38;
  int local_34;
  undefined1 *local_30;
  undefined1 local_29;
  int *local_28;
  undefined *local_24;
  int local_20;
  int local_1c;
  
  piVar3 = param_1 + 1;
  if (*param_1 == 1) {
    local_28 = param_1 + 2;
    uVar1 = FUN_00fb2978(param_2,&DAT_004119be,0xd,piVar3,FUN_007883b8,&local_28,FUN_00d47d08);
    return uVar1;
  }
  iVar5 = *param_2;
  iVar6 = param_2[1];
  pcVar4 = *(code **)(iVar6 + 0xc);
  iVar2 = (*pcVar4)(iVar5,"Conversion",10);
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar4)(iVar5,"(",1);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_011357fc(piVar3,param_2);
      if (iVar2 == 0) {
        iVar5 = *param_2;
        pcVar4 = *(code **)(param_2[1] + 0xc);
LAB_007300bc:
        uVar1 = (*pcVar4)(iVar5,&DAT_00418e07,1);
        return uVar1;
      }
    }
    else {
      iVar2 = (*pcVar4)(iVar5,"(\n",2);
      if (iVar2 == 0) {
        local_30 = &local_29;
        local_24 = &DAT_01880dc4;
        local_28 = &local_38;
        local_20 = param_2[2];
        local_1c = param_2[3];
        local_29 = 1;
        local_38 = iVar5;
        local_34 = iVar6;
        iVar2 = FUN_011357fc(piVar3,&local_28);
        if (iVar2 != 0) {
          return 1;
        }
        iVar2 = (**(code **)(local_24 + 0xc))(local_28,&DAT_00414a81,2);
        if (iVar2 == 0) goto LAB_007300bc;
      }
    }
  }
  return 1;
}

