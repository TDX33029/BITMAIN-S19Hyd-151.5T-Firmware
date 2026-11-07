// FUN_011def0c @ 011def0c size=728 calls_out=3 calls_in=0
// strings: ; .. } |  { .. }

undefined4 FUN_011def0c(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  code *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int *local_4c;
  char local_48;
  char local_47;
  int local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  int *local_34;
  undefined *local_30;
  int *local_2c;
  int local_28;
  
  iVar9 = *param_2;
  pcVar6 = *(code **)(param_2[1] + 0xc);
  iVar7 = *(int *)*param_1;
  iVar3 = (*pcVar6)(iVar9,&DAT_0038c09c,0x13);
  uVar8 = 1;
  cVar2 = '\x01';
  local_4c = param_2;
  if (iVar3 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar3 = (*pcVar6)(iVar9,&DAT_00414a79,3);
      cVar2 = '\x01';
      if (iVar3 == 0) {
        iVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_005699a0,8);
        cVar2 = '\x01';
        if (iVar3 == 0) {
          iVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
          cVar2 = '\x01';
          if (iVar3 == 0) {
            iVar3 = iVar7 + 0x58;
            if (*(char *)(iVar7 + 0x58) == '\x06') {
              iVar3 = *(int *)(iVar7 + 0x5c);
            }
            cVar2 = FUN_0157a500(iVar3,param_2);
          }
        }
      }
    }
    else {
      iVar3 = (*pcVar6)(iVar9,&DAT_00414a7e,3);
      cVar2 = '\x01';
      if (iVar3 == 0) {
        local_44 = *param_2;
        local_40 = param_2[1];
        local_2c = (int *)param_2[2];
        local_28 = param_2[3];
        local_3c = &local_35;
        local_34 = &local_44;
        local_35 = 1;
        local_30 = &DAT_01880dc4;
        iVar3 = FUN_00fb1f64(local_34,&DAT_005699a0,8);
        if ((iVar3 == 0) && (iVar3 = FUN_00fb1f64(&local_44,&DAT_00414a7c,2), iVar3 == 0)) {
          iVar3 = iVar7 + 0x58;
          if (*(char *)(iVar7 + 0x58) == '\x06') {
            iVar3 = *(int *)(iVar7 + 0x5c);
          }
          iVar3 = FUN_0157a500(iVar3,&local_34);
          if (iVar3 == 0) {
            cVar2 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
          }
          else {
            cVar2 = '\x01';
          }
        }
      }
    }
  }
  local_47 = '\x01';
  local_48 = cVar2;
  uVar4 = FUN_00fb2258(&local_4c,&DAT_005691b4,4,iVar7 + 0x20,FUN_011f383c);
  uVar4 = FUN_00fb2258(uVar4,&DAT_0038c0af,0xd,iVar7 + 0x70,FUN_011cadf8);
  FUN_00fb2258(uVar4,&DAT_0038c0bc,0xb,iVar7 + 0x78,FUN_011cadf8);
  piVar1 = local_4c;
  if (local_48 == '\0') {
    if (local_47 == '\0') {
      iVar3 = *local_4c;
      uVar8 = 7;
      pcVar6 = *(code **)(local_4c[1] + 0xc);
      pcVar5 = " { .. }";
    }
    else if ((*(byte *)((int)local_4c + 10) & 0x80) == 0) {
      iVar3 = *local_4c;
      uVar8 = 6;
      pcVar6 = *(code **)(local_4c[1] + 0xc);
      pcVar5 = ", .. }";
    }
    else {
      local_2c = &local_44;
      local_34 = (int *)*local_4c;
      local_30 = (undefined *)local_4c[1];
      local_44 = CONCAT31(local_44._1_3_,1);
      iVar3 = FUN_00fb1f64(&local_34,"..\n",3);
      if (iVar3 != 0) {
        return 1;
      }
      iVar3 = *piVar1;
      uVar8 = 1;
      pcVar6 = *(code **)(piVar1[1] + 0xc);
      pcVar5 = "}";
    }
    uVar8 = (*pcVar6)(iVar3,pcVar5,uVar8);
  }
  return uVar8;
}

