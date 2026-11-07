// FUN_0143b210 @ 0143b210 size=396 calls_out=3 calls_in=0
// strings: hyper::ErrorMethodVersionH2UriTooLong

void FUN_0143b210(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  int local_50;
  undefined4 *local_4c;
  char local_48;
  undefined1 local_47;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_48 = (**(code **)(param_2[1] + 0xc))(*param_2,"hyper::ErrorMethodVersionH2UriTooLong",0xc);
  piVar7 = (int *)*param_1;
  local_47 = 0;
  local_50 = 0;
  local_4c = param_2;
  FUN_01302888(&local_50,piVar7 + 6,&LAB_0143b3b8);
  puVar2 = local_4c;
  iVar1 = local_50;
  iVar4 = *piVar7;
  if (iVar4 == 0) goto LAB_0143b38c;
  cVar3 = '\x01';
  if (local_48 == '\0') {
    if ((*(byte *)((int)local_4c + 10) & 0x80) == 0) {
      uVar6 = 2;
      pcVar5 = ", newline\'`\'\x02\x02\x02\x02\x02\x02\x02\x02\x02\x02\x02";
      if (local_50 == 0) {
        uVar6 = 1;
        pcVar5 = "(";
      }
      iVar4 = (**(code **)(local_4c[1] + 0xc))(*local_4c,pcVar5,uVar6);
      if (iVar4 == 0) {
        cVar3 = (**(code **)(piVar7[1] + 0xc))(*piVar7,puVar2);
      }
    }
    else {
      if (local_50 == 0) {
        iVar4 = (**(code **)(local_4c[1] + 0xc))(*local_4c,"(\n",2);
        if (iVar4 != 0) goto LAB_0143b380;
        iVar4 = *piVar7;
      }
      local_44 = *puVar2;
      local_40 = puVar2[1];
      cVar3 = '\x01';
      uStack_2c = puVar2[2];
      uStack_28 = puVar2[3];
      local_3c = &local_35;
      local_30 = &DAT_01ce45f8;
      local_35 = 1;
      local_34 = &local_44;
      iVar4 = (**(code **)(piVar7[1] + 0xc))(iVar4,&local_34);
      if (iVar4 == 0) {
        cVar3 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
      }
    }
  }
LAB_0143b380:
  local_50 = iVar1 + 1;
  local_48 = cVar3;
LAB_0143b38c:
  FUN_01302aa0(&local_50);
  return;
}

