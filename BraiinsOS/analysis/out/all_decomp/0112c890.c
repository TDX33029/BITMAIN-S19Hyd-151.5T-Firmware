// FUN_0112c890 @ 0112c890 size=816 calls_out=6 calls_in=1
// strings: host name string too long | host name not a stringevent open/protocols/stratum-proxy/src/translation.rs:468 | invalid number string | port number neither string nor int | invalid u16

void FUN_0112c890(undefined4 *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  byte *pbVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  undefined8 uVar9;
  int local_74;
  uint local_70;
  int local_6c;
  uint local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  char *local_3c;
  undefined4 local_38;
  char **local_34;
  undefined4 *local_30;
  int *local_2c;
  code *local_28;
  
  pcVar6 = *(char **)(param_2 + 4);
  uVar7 = *(uint *)(param_2 + 8);
  local_74 = param_2;
  if (uVar7 == 0) {
    uVar4 = 0;
    local_6c = 1;
    local_68 = 0;
    local_70 = 0;
    uVar9 = FUN_01139000(&local_70);
    goto LAB_0112c8f8;
  }
  if (*pcVar6 == '\x03') {
    uVar3 = *(undefined4 *)(pcVar6 + 8);
    uVar4 = *(uint *)(pcVar6 + 0xc);
    if (uVar4 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = thunk_FUN_016d4a50(uVar4);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,uVar4);
      }
    }
    FUN_016dd1aa(iVar2,uVar3,uVar4);
    local_70 = uVar4;
    local_6c = iVar2;
    local_68 = uVar4;
    if (uVar4 < 0x100) {
      uVar9 = FUN_01139000(&local_70);
      uVar4 = 0;
      if (uVar7 < 2) {
LAB_0112c8f8:
        *(short *)(param_1 + 3) = (short)uVar4;
        *param_1 = 0x11;
        *(undefined8 *)(param_1 + 1) = uVar9;
        return;
      }
      if (pcVar6[0x18] == '\x02') {
        uVar7 = *(uint *)(pcVar6 + 0x20) | *(uint *)(pcVar6 + 0x24);
        bVar8 = uVar7 == 0;
        local_38 = 0xb;
        if (bVar8) {
          uVar4 = *(uint *)(pcVar6 + 0x28);
          uVar7 = *(uint *)(pcVar6 + 0x2c);
        }
        local_3c = "invalid u16";
        if (bVar8 && (uVar7 == 0 && uVar4 >> 0x10 == 0)) goto LAB_0112c8f8;
      }
      else if (pcVar6[0x18] == '\x03') {
        uVar7 = *(uint *)(pcVar6 + 0x24);
        local_38 = 0x15;
        local_3c = "invalid number string";
        if (uVar7 != 0) {
          pbVar5 = *(byte **)(pcVar6 + 0x20);
          if (uVar7 == 1) {
            bVar1 = *pbVar5;
            if ((bVar1 == 0x2b) || (bVar1 == 0x2d)) goto LAB_0112ca90;
          }
          else {
            bVar1 = *pbVar5;
          }
          if (bVar1 == 0x2b) {
            pbVar5 = pbVar5 + 1;
            uVar7 = uVar7 - 1;
          }
          if (uVar7 < 5) {
            for (; uVar7 != 0; uVar7 = uVar7 - 1) {
              bVar1 = *pbVar5;
              if (9 < bVar1 - 0x30) goto LAB_0112ca90;
              pbVar5 = pbVar5 + 1;
              uVar4 = (bVar1 - 0x30) + uVar4 * 10;
            }
            goto LAB_0112c8f8;
          }
          do {
            if (uVar7 == 0) goto LAB_0112c8f8;
            uVar4 = (uVar4 & 0xffff) * 4 + (uVar4 & 0xffff);
            if (uVar4 >> 0xf != 0) break;
            if (9 < *pbVar5 - 0x30) break;
            uVar4 = (uVar4 * 2 & 0xffff) + (*pbVar5 - 0x30 & 0xffff);
            uVar7 = uVar7 - 1;
            pbVar5 = pbVar5 + 1;
          } while (uVar4 >> 0x10 == 0);
        }
      }
      else {
        local_38 = 0x22;
        local_3c = "port number neither string nor int";
      }
LAB_0112ca90:
      local_30 = &DAT_0157d360;
      local_34 = &local_3c;
      local_28 = FUN_0113a1c4;
      local_2c = &local_74;
      FUN_00600d2c(&local_60,&DAT_0057eb17,&local_34);
      FUN_016dd1aa((int)param_1 + 6,(int)&local_60 + 2,0x22);
      *(undefined2 *)(param_1 + 1) = (undefined2)local_60;
      *param_1 = 1;
      if ((int)((ulonglong)uVar9 >> 0x20) == 0) {
        return;
      }
      thunk_FUN_016d3fb4((int)uVar9);
      return;
    }
    thunk_FUN_016d3fb4(iVar2);
    local_38 = 0x19;
    local_3c = "host name string too long";
  }
  else {
    local_38 = 0x16;
    local_3c = "host name not a stringevent open/protocols/stratum-proxy/src/translation.rs:468";
  }
  local_2c = &local_74;
  local_34 = &local_3c;
  local_28 = FUN_0113a1c4;
  local_30 = &DAT_0157d360;
  FUN_00600d2c(&local_60,&DAT_005745ff,&local_34);
  param_1[3] = local_58;
  param_1[4] = uStack_54;
  param_1[5] = uStack_50;
  param_1[6] = local_4c;
  param_1[7] = uStack_48;
  param_1[8] = uStack_44;
  param_1[9] = uStack_40;
  *param_1 = 1;
  param_1[1] = local_60;
  param_1[2] = local_5c;
  return;
}

