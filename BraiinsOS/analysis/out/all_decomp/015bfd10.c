// FUN_015bfd10 @ 015bfd10 size=460 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_015bfd10(char *param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  code *pcVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  char local_7d;
  char *local_7c;
  undefined4 *local_78;
  char local_70;
  undefined4 *local_6c;
  char **local_68;
  undefined *local_64;
  undefined4 local_60;
  char local_5c;
  undefined4 local_58;
  char local_51;
  undefined4 local_50;
  undefined1 local_4a;
  char local_49;
  char *local_48;
  undefined4 *local_44;
  char *local_40;
  undefined4 **local_3c;
  char *local_38;
  undefined4 *local_34;
  undefined1 *local_30;
  char **local_2c;
  undefined *local_28;
  
  cVar1 = *param_1;
  local_7d = cVar1;
  FUN_015bff34(&local_48);
  pcVar2 = local_40;
  pcVar5 = local_48;
  if (local_48 == &DAT_80000000) {
    local_78 = (undefined4 *)((uint)local_44 & 0xff);
    if (local_78 == (undefined4 *)0x3) {
      puVar6 = *(undefined4 **)(local_40 + 4);
      uVar7 = *(undefined4 *)local_40;
      pcVar4 = (code *)*puVar6;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar7);
      }
      if (puVar6[1] != 0) {
        thunk_FUN_016d3fb4(uVar7);
      }
      local_78 = (undefined4 *)thunk_FUN_016d3fb4(pcVar2);
    }
  }
  else {
    local_78 = local_44;
  }
  local_7c = pcVar5;
  local_70 = cVar1;
  iVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00410767,0x11);
  if (iVar3 == 0) {
    local_68 = &local_7c;
    local_64 = &DAT_018aaf3c;
    local_4a = 1;
    local_30 = &local_4a;
    local_34 = &local_50;
    local_38 = &local_49;
    local_3c = &local_6c;
    local_40 = &local_51;
    local_28 = &DAT_018aaf50;
    local_44 = &local_58;
    local_48 = &local_7d;
    local_60 = 0;
    local_58 = 0;
    local_51 = '\0';
    local_50 = 0;
    local_6c = param_2;
    local_5c = cVar1;
    local_49 = cVar1;
    local_2c = &local_48;
    FUN_0184241c(FUN_015c0088,&local_2c);
    if ((local_51 == '\0') &&
       ((cVar1 != '\0' ||
        (iVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00410778,0x58), iVar3 == 0)))) {
      uVar7 = 0;
      pcVar5 = local_7c;
      goto joined_r0x015bfebc;
    }
    pcVar5 = local_7c;
  }
  uVar7 = 1;
joined_r0x015bfebc:
  if (((uint)pcVar5 & 0x7fffffff) == 0) {
    return uVar7;
  }
  thunk_FUN_016d3fb4(local_78);
  return uVar7;
}

