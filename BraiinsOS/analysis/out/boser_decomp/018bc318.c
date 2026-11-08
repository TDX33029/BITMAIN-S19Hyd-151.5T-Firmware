// FUN_018bc318 @ 018bc318 size=336 calls_out=4 calls_in=0
// strings: 

void FUN_018bc318(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int local_40;
  undefined4 *local_3c;
  char local_38;
  undefined1 local_37;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
  iVar7 = *param_1;
  uVar3 = 1;
  local_38 = (**(code **)(param_2[1] + 0xc))(*param_2,1,0);
  local_37 = 1;
  local_40 = 0;
  local_3c = param_2;
  local_34 = iVar7;
  FUN_01302888(&local_40,&local_34,&LAB_018bc1ec);
  puVar2 = local_3c;
  iVar1 = local_40;
  if (local_38 == '\0') {
    if ((*(byte *)((int)local_3c + 10) & 0x80) == 0) {
      uVar6 = 2;
      pcVar4 = ", newline\'`\'\x02\x02\x02\x02\x02\x02\x02\x02\x02\x02\x02";
      if (local_40 == 0) {
        uVar6 = 1;
        pcVar4 = "(";
      }
      iVar5 = (**(code **)(local_3c[1] + 0xc))(*local_3c,pcVar4,uVar6);
      if (iVar5 == 0) {
        uVar3 = FUN_018c3be0(*puVar2,puVar2[1],*(undefined4 *)(iVar7 + 8),
                             *(undefined4 *)(iVar7 + 0xc));
      }
    }
    else if ((local_40 != 0) ||
            (iVar5 = (**(code **)(local_3c[1] + 0xc))(*local_3c,"(\n",2), iVar5 == 0)) {
      local_28 = &local_21;
      local_30 = *puVar2;
      local_2c = puVar2[1];
      uVar3 = 1;
      local_21 = 1;
      iVar7 = FUN_018c3be0(&local_30,&DAT_01ce45f8,*(undefined4 *)(iVar7 + 8),
                           *(undefined4 *)(iVar7 + 0xc));
      if (iVar7 == 0) {
        uVar3 = FUN_01302620(&local_30,&DAT_005312e2,2);
      }
    }
  }
  local_40 = iVar1 + 1;
  local_38 = uVar3;
  FUN_01302aa0(&local_40);
  return;
}

