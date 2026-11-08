// FUN_0143f7e0 @ 0143f7e0 size=592 calls_out=4 calls_in=0
// strings: ConnectError

void FUN_0143f7e0(short *param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  int iVar8;
  int local_4c;
  int *local_48;
  char local_44;
  undefined1 local_43;
  int local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  int *local_30;
  undefined *local_2c;
  int *local_28;
  int local_24;
  
  iVar8 = *param_2;
  pcVar7 = *(code **)(param_2[1] + 0xc);
  iVar3 = (*pcVar7)(iVar8,"ConnectError",0xc);
  cVar2 = '\x01';
  local_43 = 0;
  local_48 = param_2;
  if (iVar3 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar3 = (*pcVar7)(iVar8,"(",1);
      if (iVar3 == 0) {
        cVar2 = FUN_012fb170(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x12),
                             *param_2,param_2[1]);
      }
    }
    else {
      iVar3 = (*pcVar7)(iVar8,"(\n",2);
      cVar2 = '\x01';
      if (iVar3 == 0) {
        local_30 = (int *)*param_2;
        local_2c = (undefined *)param_2[1];
        local_28 = &local_40;
        local_40 = CONCAT31(local_40._1_3_,1);
        iVar3 = FUN_012fb170(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x12),
                             &local_30,&DAT_01ce45f8);
        if (iVar3 == 0) {
          cVar2 = FUN_01302620(&local_30,&DAT_005312e2,2);
        }
      }
    }
  }
  local_4c = 1;
  local_44 = cVar2;
  if (*param_1 != 2) {
    FUN_01302888(&local_4c,param_1,&DAT_01309c20);
  }
  piVar1 = local_48;
  iVar3 = local_4c;
  iVar8 = *(int *)(param_1 + 0x14);
  if (iVar8 != 0) {
    cVar2 = '\x01';
    if (local_44 == '\0') {
      if ((*(byte *)((int)local_48 + 10) & 0x80) == 0) {
        uVar6 = 2;
        pcVar4 = ", newline\'`\'\x02\x02\x02\x02\x02\x02\x02\x02\x02\x02\x02";
        if (local_4c == 0) {
          uVar6 = 1;
          pcVar4 = "(";
        }
        iVar5 = (**(code **)(local_48[1] + 0xc))(*local_48,pcVar4,uVar6);
        if (iVar5 == 0) {
          cVar2 = (**(code **)(*(int *)(param_1 + 0x16) + 0xc))(iVar8,piVar1);
        }
      }
      else if ((local_4c != 0) ||
              (iVar5 = (**(code **)(local_48[1] + 0xc))(*local_48,"(\n",2), iVar5 == 0)) {
        local_38 = &local_31;
        local_40 = *piVar1;
        local_3c = piVar1[1];
        cVar2 = '\x01';
        local_28 = (int *)piVar1[2];
        local_24 = piVar1[3];
        local_30 = &local_40;
        local_31 = 1;
        local_2c = &DAT_01ce45f8;
        iVar8 = (**(code **)(*(int *)(param_1 + 0x16) + 0xc))(iVar8,&local_30);
        if (iVar8 == 0) {
          cVar2 = (**(code **)(local_2c + 0xc))(local_30,&DAT_005312e2,2);
        }
      }
    }
    local_4c = iVar3 + 1;
    local_44 = cVar2;
  }
  FUN_01302aa0(&local_4c);
  return;
}

