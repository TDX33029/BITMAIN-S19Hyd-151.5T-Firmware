// FUN_018afc44 @ 018afc44 size=680 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_018afc44(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  int ****ppppiVar5;
  undefined *puVar6;
  int iVar7;
  int ****local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  int ****local_34;
  undefined *local_30;
  int ****local_2c;
  undefined4 local_28;
  int *local_24;
  
  piVar3 = (int *)*param_1;
  if (*piVar3 == -0x80000000) {
    ppppiVar5 = (int ****)*param_2;
    puVar6 = (undefined *)param_2[1];
    pcVar4 = *(code **)(puVar6 + 0xc);
    iVar1 = (*pcVar4)(ppppiVar5,&DAT_0052e437,7);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar4)(ppppiVar5,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_018c3be0(ppppiVar5,puVar6,piVar3[2],piVar3[3]);
    }
    else {
      iVar1 = (*pcVar4)(ppppiVar5,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_2c = (int ****)&local_44;
      local_44 = (int ****)CONCAT31(local_44._1_3_,1);
      local_34 = ppppiVar5;
      local_30 = puVar6;
      iVar1 = FUN_018c3be0(&local_34,&DAT_01ce45f8,piVar3[2],piVar3[3]);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_01302620(&local_34,&DAT_005312e2,2);
    }
  }
  else {
    ppppiVar5 = (int ****)*param_2;
    iVar7 = param_2[1];
    pcVar4 = *(code **)(iVar7 + 0xc);
    iVar1 = (*pcVar4)(ppppiVar5,&DAT_00520f39,5);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar4)(ppppiVar5,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      local_34 = (int ****)(piVar3 + 5);
      iVar1 = FUN_01303d90(param_2,&DAT_0051daee,0x16,&DAT_0051db04,6,piVar3,FUN_018aedcc,
                           &DAT_0051db0a,3,&local_34,FUN_018cd124);
      if (iVar1 != 0) {
        return 1;
      }
      ppppiVar5 = (int ****)*param_2;
      pcVar4 = *(code **)(param_2[1] + 0xc);
      goto LAB_018afec8;
    }
    iVar1 = (*pcVar4)(ppppiVar5,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_3c = &local_35;
    local_35 = 1;
    local_2c = (int ****)param_2[2];
    local_28 = param_2[3];
    local_24 = piVar3 + 5;
    local_30 = &DAT_01ce45f8;
    local_34 = (int ****)&local_44;
    local_44 = ppppiVar5;
    local_40 = iVar7;
    iVar1 = FUN_01303d90(&local_34,&DAT_0051daee,0x16,&DAT_0051db04,6,piVar3,FUN_018aedcc,
                         &DAT_0051db0a,3,&local_24,FUN_018cd124);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
  }
  if (iVar1 != 0) {
    return 1;
  }
LAB_018afec8:
  uVar2 = (*pcVar4)(ppppiVar5,&DAT_0053341b,1);
  return uVar2;
}

