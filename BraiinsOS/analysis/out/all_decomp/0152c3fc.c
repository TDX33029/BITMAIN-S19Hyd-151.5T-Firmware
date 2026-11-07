// FUN_0152c3fc @ 0152c3fc size=632 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_0152c3fc(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  code *pcVar6;
  int **ppiVar7;
  code *pcVar8;
  int **local_40;
  code *local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  int local_30;
  int *local_2c;
  code *local_28;
  
  ppiVar7 = (int **)*param_2;
  pcVar8 = (code *)param_2[1];
  pcVar6 = *(code **)(pcVar8 + 0xc);
  iVar1 = (*pcVar6)(ppiVar7,&DAT_0040bf04,0xe);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar6)(ppiVar7,"(",1);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 0) goto LAB_0152c650;
      piVar5 = *(int **)(param_1 + 4);
      local_2c = piVar5;
      iVar2 = (*pcVar6)(ppiVar7,"0x",2);
      if (iVar2 == 0) {
        local_40 = &local_2c;
        local_3c = FUN_01576770;
        iVar2 = FUN_00fa948c(ppiVar7,pcVar8,&DAT_00569c68,&local_40);
        while (iVar2 == 0) {
          iVar1 = iVar1 + -1;
          if (iVar1 == 0) goto LAB_0152c650;
          piVar5 = (int *)((int)piVar5 + 1);
          local_3c = FUN_01576770;
          local_40 = &local_2c;
          local_2c = piVar5;
          iVar2 = FUN_00fa948c(ppiVar7,pcVar8,&DAT_00569c68,&local_40);
        }
      }
    }
  }
  else {
    iVar1 = (*pcVar6)(ppiVar7,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = *(int *)(param_1 + 4);
    iVar2 = *(int *)(param_1 + 8);
    local_38 = &local_31;
    local_31 = 1;
    local_40 = ppiVar7;
    local_3c = pcVar8;
    if (iVar2 != 0) {
      local_30 = iVar1;
      iVar3 = FUN_00fb1f64(&local_40,"0x",2);
      if (iVar3 != 0) {
        return 1;
      }
      local_2c = &local_30;
      local_28 = FUN_01576770;
      iVar3 = FUN_00fa948c(&local_40,&DAT_01880dc4,&DAT_00569c68,&local_2c);
      if (iVar3 != 0) {
        return 1;
      }
      iVar2 = iVar2 + -1;
      if (iVar2 != 0) {
        do {
          iVar1 = iVar1 + 1;
          local_28 = FUN_01576770;
          local_2c = &local_30;
          local_30 = iVar1;
          iVar3 = FUN_00fa948c(&local_40,&DAT_01880dc4,&DAT_00569c68,&local_2c);
          if (iVar3 != 0) {
            return 1;
          }
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    iVar1 = FUN_00fb1f64(&local_40,&DAT_00414a81,2);
    if (iVar1 == 0) {
LAB_0152c650:
      uVar4 = (*pcVar6)(ppiVar7,&DAT_00418e07,1);
      return uVar4;
    }
  }
  return 1;
}

