// FUN_00b0dbe0 @ 00b0dbe0 size=544 calls_out=3 calls_in=0
// strings: /cgi-bin/luci/admin/system/commands | Actions | /cgi-bin/luci/admin/status/overview | Network (Advanced) | /cgi-bin/luci/admin/network/network/lan | Firmware Backup / Flash

void FUN_00b0dbe0(undefined4 *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  uint local_30;
  undefined4 local_28;
  undefined4 *local_24;
  uint local_20;
  
  puVar3 = (undefined4 *)thunk_FUN_01be5118(0x10);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(4,0x10);
  }
  local_24 = (undefined4 *)thunk_FUN_01be5118(0x70);
  if (local_24 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620();
  }
  cVar1 = *param_2;
  local_28 = 7;
  if (cVar1 != '\0') {
    puVar3[2] = "/cgi-bin/luci/admin/system/commands";
    *puVar3 = "Actions";
    puVar3[1] = 7;
    puVar3[3] = 0x23;
  }
  local_30 = (uint)(cVar1 != '\0');
  bVar5 = param_2[1] != '\0';
  if (bVar5) {
    local_24[2] = "/cgi-bin/luci/admin/status/overview";
    local_24[3] = 0x23;
    *local_24 = &DAT_00532460;
    local_24[1] = 6;
  }
  local_20 = (uint)bVar5;
  if (param_2[2] != '\0') {
    puVar4 = local_24 + (uint)bVar5 * 4;
    *puVar4 = "Network (Advanced)";
    local_20 = bVar5 + 1;
    puVar4[1] = 0x12;
    puVar4[2] = "/cgi-bin/luci/admin/network/network/lan";
    puVar4[3] = 0x27;
  }
  if (param_2[3] != '\0') {
    puVar4 = local_24 + local_20 * 4;
    *puVar4 = "Firmware Backup / Flash";
    local_20 = local_20 + 1;
    puVar4[1] = 0x17;
    puVar4[2] = "/cgi-bin/luci/admin/system/flashops";
    puVar4[3] = 0x23;
  }
  if (param_2[4] != '\0') {
    puVar4 = local_24 + local_20 * 4;
    *puVar4 = "Auto Upgrade";
    local_20 = local_20 + 1;
    puVar4[1] = 0xc;
    puVar4[2] = "/cgi-bin/luci/admin/system/upgrade";
    puVar4[3] = 0x22;
  }
  uVar2 = local_20;
  if (param_2[5] != '\0') {
    if (local_20 == 7) {
      FUN_01aa1b90(&local_28);
    }
    puVar4 = local_24 + uVar2 * 4;
    *puVar4 = "Nand Install";
    puVar4[3] = 0x26;
    local_20 = uVar2 + 1;
    puVar4[1] = 0xc;
    puVar4[2] = "/cgi-bin/luci/admin/system/nandinstall";
  }
  *param_1 = 1;
  param_1[1] = puVar3;
  param_1[2] = local_30;
  param_1[3] = local_28;
  param_1[4] = local_24;
  param_1[5] = local_20;
  return;
}

