// FUN_01736618 @ 01736618 size=420 calls_out=5 calls_in=2
// strings: reqwest::blocking::client | reqwest::blocking::client | reqwest::blocking::client | reqwest::blocking::client | reqwest::blocking::client | reqwest::blocking::client

void FUN_01736618(int *param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined1 *local_3c;
  undefined8 local_38;
  char *local_30;
  int local_2c;
  char *local_28;
  undefined4 local_24;
  undefined *local_20;
  
  piVar2 = param_1 + 1;
  iVar1 = *piVar2;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("thread not dropped yet",0x16,&DAT_01d1976c);
  }
  local_48 = *(undefined4 *)(iVar1 + 8);
  uStack_44 = *(undefined4 *)(iVar1 + 0xc);
  if (4 < DAT_01d51b00) {
    local_20 = &DAT_01d1977c;
    local_24 = 0x19;
    local_2c = 0x19;
    local_38._0_4_ = FUN_01203168;
    local_28 = "reqwest::blocking::client";
    local_30 = "reqwest::blocking::client";
    local_3c = (undefined1 *)&local_48;
    FUN_0193b350(&DAT_0058fa65,&local_3c,5,&local_30);
  }
  iVar1 = *param_1;
  *param_1 = 0;
  if (iVar1 != 0) {
    FUN_017365a0();
  }
  if (4 < DAT_01d51b00) {
    local_20 = &DAT_01d1978c;
    local_24 = 0x19;
    local_2c = 0x19;
    local_38._0_4_ = FUN_01203168;
    local_28 = "reqwest::blocking::client";
    local_30 = "reqwest::blocking::client";
    local_3c = (undefined1 *)&local_48;
    FUN_0193b350(&DAT_00575833,&local_3c,5,&local_30);
  }
  local_30 = (char *)*piVar2;
  local_2c = param_1[2];
  local_28 = (char *)param_1[3];
  *piVar2 = 0;
  bVar3 = local_30 != (char *)0x0;
  if (bVar3) {
    local_38 = FUN_019f6e6c(&local_30);
  }
  local_3c = (undefined1 *)(uint)bVar3;
  FUN_017cc744(&local_3c);
  if (4 < DAT_01d51b00) {
    local_20 = &DAT_01d1979c;
    local_24 = 0x19;
    local_2c = 0x19;
    local_38._0_4_ = FUN_01203168;
    local_28 = "reqwest::blocking::client";
    local_30 = "reqwest::blocking::client";
    local_3c = (undefined1 *)&local_48;
    FUN_0193b350(&DAT_0058c9bb,&local_3c,5,&local_30);
  }
  return;
}

