// FUN_0001eba4 @ 0001eba4  size=5208
// callers: [FUN_0003839c]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0001eba4(void)

{
  bool bVar1;
  undefined2 uVar2;
  int *piVar3;
  int *piVar4;
  char *pcVar5;
  size_t sVar6;
  char *pcVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined1 auStack_924 [252];
  char local_828 [4];
  undefined3 local_824;
  char cStack_821;
  char acStack_820 [4];
  char acStack_81c [4];
  undefined3 local_818;
  char cStack_815;
  undefined2 local_814 [2];
  undefined3 local_810;
  char cStack_80d;
  undefined3 uStack_80c;
  char cStack_809;
  char local_808 [4];
  char acStack_804 [4];
  undefined2 uStack_800;
  undefined1 local_7fe;
  
  piVar3 = (int *)FUN_00054e88("/etc/topol.conf",0,auStack_924);
  if ((piVar3 == (int *)0x0) || (*piVar3 != 0)) {
    if (DAT_00087bbc < 4) {
      return -1;
    }
    snprintf(local_828,0x800,"load topol config file %s failed\n","/etc/topol.conf");
    FUN_00032218(3,local_828,0);
    return -1;
  }
  piVar4 = (int *)FUN_000559d4(piVar3,"machine");
  if ((piVar4 == (int *)0x0) || (*piVar4 != 2)) {
    if (3 < DAT_00087bbc) {
      local_828[0] = s_get_machine_failed_00069af4[0];
      local_828[1] = s_get_machine_failed_00069af4[1];
      local_828[2] = s_get_machine_failed_00069af4[2];
      local_828[3] = s_get_machine_failed_00069af4[3];
      local_824._0_1_ = s_get_machine_failed_00069af4[4];
      local_824._1_1_ = s_get_machine_failed_00069af4[5];
      local_824._2_1_ = s_get_machine_failed_00069af4[6];
      cStack_821 = s_get_machine_failed_00069af4[7];
      acStack_820[0] = s_get_machine_failed_00069af4[8];
      acStack_820[1] = s_get_machine_failed_00069af4[9];
      acStack_820[2] = s_get_machine_failed_00069af4[10];
      acStack_820[3] = s_get_machine_failed_00069af4[0xb];
      acStack_81c[0] = s_get_machine_failed_00069af4[0xc];
      acStack_81c[1] = s_get_machine_failed_00069af4[0xd];
      acStack_81c[2] = s_get_machine_failed_00069af4[0xe];
      acStack_81c[3] = s_get_machine_failed_00069af4[0xf];
      local_818._0_1_ = s_get_machine_failed_00069af4[0x10];
      local_818._1_1_ = s_get_machine_failed_00069af4[0x11];
      local_818._2_1_ = s_get_machine_failed_00069af4[0x12];
      cStack_815 = s_get_machine_failed_00069af4[0x13];
      FUN_00032218(3,local_828,0);
LAB_0001ecf4:
      if (3 < DAT_00087bbc) {
        iVar12 = -1;
        local_828[0] = s_parse_machine_failed_00069bc4[0];
        local_828[1] = s_parse_machine_failed_00069bc4[1];
        local_828[2] = s_parse_machine_failed_00069bc4[2];
        local_828[3] = s_parse_machine_failed_00069bc4[3];
        local_824._0_1_ = s_parse_machine_failed_00069bc4[4];
        local_824._1_1_ = s_parse_machine_failed_00069bc4[5];
        local_824._2_1_ = s_parse_machine_failed_00069bc4[6];
        cStack_821 = s_parse_machine_failed_00069bc4[7];
        acStack_820[0] = s_parse_machine_failed_00069bc4[8];
        acStack_820[1] = s_parse_machine_failed_00069bc4[9];
        acStack_820[2] = s_parse_machine_failed_00069bc4[10];
        acStack_820[3] = s_parse_machine_failed_00069bc4[0xb];
        acStack_81c[0] = s_parse_machine_failed_00069bc4[0xc];
        acStack_81c[1] = s_parse_machine_failed_00069bc4[0xd];
        acStack_81c[2] = s_parse_machine_failed_00069bc4[0xe];
        acStack_81c[3] = s_parse_machine_failed_00069bc4[0xf];
        local_818._0_1_ = s_parse_machine_failed_00069bc4[0x10];
        local_818._1_1_ = s_parse_machine_failed_00069bc4[0x11];
        local_818._2_1_ = s_parse_machine_failed_00069bc4[0x12];
        cStack_815 = s_parse_machine_failed_00069bc4[0x13];
        local_814[0] = (short)ram0x00069bd8;
        FUN_00032218(3,local_828,0);
        goto LAB_0001ec38;
      }
    }
  }
  else {
    if (3 < DAT_00087bbc) {
      pcVar5 = (char *)FUN_00055f08();
      snprintf(local_828,0x800,"load machine %s conf\n",pcVar5);
      FUN_00032218(3,local_828,0);
    }
    pcVar5 = (char *)FUN_00055f08(piVar4);
    sVar6 = strlen(pcVar5);
    pcVar7 = calloc(sVar6 + 1,1);
    DAT_0071c3e8 = pcVar7;
    if (pcVar7 == (char *)0x0) {
      if (3 < DAT_00087bbc) {
        local_828[0] = s_get_machine_failed__Cannot_alloc_00069b20[0];
        local_828[1] = s_get_machine_failed__Cannot_alloc_00069b20[1];
        local_828[2] = s_get_machine_failed__Cannot_alloc_00069b20[2];
        local_828[3] = s_get_machine_failed__Cannot_alloc_00069b20[3];
        local_824._0_1_ = s_get_machine_failed__Cannot_alloc_00069b20[4];
        local_824._1_1_ = s_get_machine_failed__Cannot_alloc_00069b20[5];
        local_824._2_1_ = s_get_machine_failed__Cannot_alloc_00069b20[6];
        cStack_821 = s_get_machine_failed__Cannot_alloc_00069b20[7];
        acStack_820[0] = s_get_machine_failed__Cannot_alloc_00069b20[8];
        acStack_820[1] = s_get_machine_failed__Cannot_alloc_00069b20[9];
        acStack_820[2] = s_get_machine_failed__Cannot_alloc_00069b20[10];
        acStack_820[3] = s_get_machine_failed__Cannot_alloc_00069b20[0xb];
        acStack_81c[0] = s_get_machine_failed__Cannot_alloc_00069b20[0xc];
        acStack_81c[1] = s_get_machine_failed__Cannot_alloc_00069b20[0xd];
        acStack_81c[2] = s_get_machine_failed__Cannot_alloc_00069b20[0xe];
        acStack_81c[3] = s_get_machine_failed__Cannot_alloc_00069b20[0xf];
        local_818._0_1_ = s_get_machine_failed__Cannot_alloc_00069b20[0x10];
        local_818._1_1_ = s_get_machine_failed__Cannot_alloc_00069b20[0x11];
        local_818._2_1_ = s_get_machine_failed__Cannot_alloc_00069b20[0x12];
        cStack_815 = s_get_machine_failed__Cannot_alloc_00069b20[0x13];
        local_814 = (undefined2  [2])s_get_machine_failed__Cannot_alloc_00069b20._20_4_;
        local_810._0_1_ = s_get_machine_failed__Cannot_alloc_00069b20[0x18];
        local_810._1_1_ = s_get_machine_failed__Cannot_alloc_00069b20[0x19];
        local_810._2_1_ = s_get_machine_failed__Cannot_alloc_00069b20[0x1a];
        cStack_80d = s_get_machine_failed__Cannot_alloc_00069b20[0x1b];
        uStack_80c._0_1_ = s_get_machine_failed__Cannot_alloc_00069b20[0x1c];
        uStack_80c._1_1_ = s_get_machine_failed__Cannot_alloc_00069b20[0x1d];
        uStack_80c._2_1_ = s_get_machine_failed__Cannot_alloc_00069b20[0x1e];
        cStack_809 = s_get_machine_failed__Cannot_alloc_00069b20[0x1f];
        local_808[0] = s_get_machine_failed__Cannot_alloc_00069b20[0x20];
        local_808[1] = s_get_machine_failed__Cannot_alloc_00069b20[0x21];
        local_808[2] = s_get_machine_failed__Cannot_alloc_00069b20[0x22];
        local_808[3] = s_get_machine_failed__Cannot_alloc_00069b20[0x23];
        acStack_804[0] = s_get_machine_failed__Cannot_alloc_00069b20[0x24];
        acStack_804[1] = s_get_machine_failed__Cannot_alloc_00069b20[0x25];
        acStack_804[2] = s_get_machine_failed__Cannot_alloc_00069b20[0x26];
        acStack_804[3] = s_get_machine_failed__Cannot_alloc_00069b20[0x27];
        uStack_800 = (undefined2)ram0x00069b48;
        local_7fe = (undefined1)((uint)ram0x00069b48 >> 0x10);
        FUN_00032218(3,local_828,0);
        goto LAB_0001ecf4;
      }
    }
    else {
      strcpy(pcVar7,pcVar5);
      if (3 < DAT_00087bbc) {
        snprintf(local_828,0x800,"machine : %s \n",pcVar7);
        FUN_00032218(3,local_828,0);
      }
      piVar4 = (int *)FUN_000559d4(piVar3,"hw_version");
      if ((piVar4 == (int *)0x0) || (*piVar4 != 2)) {
        if (3 < DAT_00087bbc) {
          pcVar5 = "get hw_version failed\n";
LAB_0001edc8:
          local_828 = *(char (*) [4])pcVar5;
          _local_824 = *(undefined4 *)(pcVar5 + 4);
          acStack_820 = *(char (*) [4])(pcVar5 + 8);
          acStack_81c = *(char (*) [4])(pcVar5 + 0xc);
          _local_818 = *(undefined4 *)(pcVar5 + 0x10);
          local_814[0] = (short)*(undefined4 *)(pcVar5 + 0x14);
          FUN_00032218(3,local_828,0);
          goto LAB_0001ecf4;
        }
      }
      else {
        if (4 < DAT_00087bbc) {
          pcVar5 = (char *)FUN_00055f08();
          snprintf(local_828,0x800,"hw_version: %s\n",pcVar5);
          FUN_00032218(4,local_828,0);
        }
        piVar4 = (int *)FUN_000559d4(piVar3,"sw_version");
        if ((piVar4 == (int *)0x0) || (*piVar4 != 2)) {
          if (3 < DAT_00087bbc) {
            pcVar5 = "get sw_version failed\n";
            goto LAB_0001edc8;
          }
        }
        else {
          if (4 < DAT_00087bbc) {
            pcVar5 = (char *)FUN_00055f08();
            snprintf(local_828,0x800,"sw_version: %s\n",pcVar5);
            FUN_00032218(4,local_828,0);
          }
          piVar4 = (int *)FUN_000559d4(piVar3,"processor");
          if ((piVar4 == (int *)0x0) || (*piVar4 != 0)) {
            if (3 < DAT_00087bbc) {
              local_828[0] = s_get_processor_failed_00069be8[0];
              local_828[1] = s_get_processor_failed_00069be8[1];
              local_828[2] = s_get_processor_failed_00069be8[2];
              local_828[3] = s_get_processor_failed_00069be8[3];
              local_824._0_1_ = s_get_processor_failed_00069be8[4];
              local_824._1_1_ = s_get_processor_failed_00069be8[5];
              local_824._2_1_ = s_get_processor_failed_00069be8[6];
              cStack_821 = s_get_processor_failed_00069be8[7];
              acStack_820[0] = s_get_processor_failed_00069be8[8];
              acStack_820[1] = s_get_processor_failed_00069be8[9];
              acStack_820[2] = s_get_processor_failed_00069be8[10];
              acStack_820[3] = s_get_processor_failed_00069be8[0xb];
              acStack_81c[0] = s_get_processor_failed_00069be8[0xc];
              acStack_81c[1] = s_get_processor_failed_00069be8[0xd];
              acStack_81c[2] = s_get_processor_failed_00069be8[0xe];
              acStack_81c[3] = s_get_processor_failed_00069be8[0xf];
              local_818._0_1_ = s_get_processor_failed_00069be8[0x10];
              local_818._1_1_ = s_get_processor_failed_00069be8[0x11];
              local_818._2_1_ = s_get_processor_failed_00069be8[0x12];
              cStack_815 = s_get_processor_failed_00069be8[0x13];
              local_814[0] = (short)ram0x00069bfc;
              FUN_00032218(3,local_828,0);
LAB_0001eff4:
              if (3 < DAT_00087bbc) {
                iVar12 = -1;
                local_828[0] = s_parse_processor_failed_00069c0c[0];
                local_828[1] = s_parse_processor_failed_00069c0c[1];
                local_828[2] = s_parse_processor_failed_00069c0c[2];
                local_828[3] = s_parse_processor_failed_00069c0c[3];
                local_824._0_1_ = s_parse_processor_failed_00069c0c[4];
                local_824._1_1_ = s_parse_processor_failed_00069c0c[5];
                local_824._2_1_ = s_parse_processor_failed_00069c0c[6];
                cStack_821 = s_parse_processor_failed_00069c0c[7];
                acStack_820[0] = s_parse_processor_failed_00069c0c[8];
                acStack_820[1] = s_parse_processor_failed_00069c0c[9];
                acStack_820[2] = s_parse_processor_failed_00069c0c[10];
                acStack_820[3] = s_parse_processor_failed_00069c0c[0xb];
                acStack_81c[0] = s_parse_processor_failed_00069c0c[0xc];
                acStack_81c[1] = s_parse_processor_failed_00069c0c[0xd];
                acStack_81c[2] = s_parse_processor_failed_00069c0c[0xe];
                acStack_81c[3] = s_parse_processor_failed_00069c0c[0xf];
                local_818._0_1_ = s_parse_processor_failed_00069c0c[0x10];
                local_818._1_1_ = s_parse_processor_failed_00069c0c[0x11];
                local_818._2_1_ = s_parse_processor_failed_00069c0c[0x12];
                cStack_815 = s_parse_processor_failed_00069c0c[0x13];
                local_814 = (undefined2  [2])s_parse_processor_failed_00069c0c._20_4_;
                FUN_00032218(3,local_828,0);
                goto LAB_0001ec38;
              }
            }
          }
          else {
            if (4 < DAT_00087bbc) {
              local_828[0] = s_processor__00069c00[0];
              local_828[1] = s_processor__00069c00[1];
              local_828[2] = s_processor__00069c00[2];
              local_828[3] = s_processor__00069c00[3];
              local_824._0_1_ = s_processor__00069c00[4];
              local_824._1_1_ = s_processor__00069c00[5];
              local_824._2_1_ = s_processor__00069c00[6];
              cStack_821 = s_processor__00069c00[7];
              acStack_820[0] = s_processor__00069c00[8];
              acStack_820[1] = s_processor__00069c00[9];
              acStack_820[2] = s_processor__00069c00[10];
              acStack_820[3] = s_processor__00069c00[0xb];
              FUN_00032218(4,local_828,0);
            }
            piVar4 = (int *)FUN_000559d4(piVar4,"type");
            if ((piVar4 == (int *)0x0) || (*piVar4 != 2)) {
              if (3 < DAT_00087bbc) {
                local_828[0] = s_get_type_failed_00069750[0];
                local_828[1] = s_get_type_failed_00069750[1];
                local_828[2] = s_get_type_failed_00069750[2];
                local_828[3] = s_get_type_failed_00069750[3];
                local_824._0_1_ = s_get_type_failed_00069750[4];
                local_824._1_1_ = s_get_type_failed_00069750[5];
                local_824._2_1_ = s_get_type_failed_00069750[6];
                cStack_821 = s_get_type_failed_00069750[7];
                acStack_820[0] = s_get_type_failed_00069750[8];
                acStack_820[1] = s_get_type_failed_00069750[9];
                acStack_820[2] = s_get_type_failed_00069750[10];
                acStack_820[3] = s_get_type_failed_00069750[0xb];
                acStack_81c[0] = s_get_type_failed_00069750[0xc];
                acStack_81c[1] = s_get_type_failed_00069750[0xd];
                acStack_81c[2] = s_get_type_failed_00069750[0xe];
                acStack_81c[3] = s_get_type_failed_00069750[0xf];
                local_818._0_1_ = (char)ram0x00069760;
                FUN_00032218(3,local_828,0);
                goto LAB_0001eff4;
              }
            }
            else {
              if (4 < DAT_00087bbc) {
                pcVar5 = (char *)FUN_00055f08();
                snprintf(local_828,0x800,"type: %s\n",pcVar5);
                FUN_00032218(4,local_828,0);
              }
              piVar4 = (int *)FUN_000559d4(piVar3,"power");
              if ((piVar4 == (int *)0x0) || (*piVar4 != 0)) {
                if (3 < DAT_00087bbc) {
                  local_828[0] = s_get_power_failed_00069c24[0];
                  local_828[1] = s_get_power_failed_00069c24[1];
                  local_828[2] = s_get_power_failed_00069c24[2];
                  local_828[3] = s_get_power_failed_00069c24[3];
                  local_824._0_1_ = s_get_power_failed_00069c24[4];
                  local_824._1_1_ = s_get_power_failed_00069c24[5];
                  local_824._2_1_ = s_get_power_failed_00069c24[6];
                  cStack_821 = s_get_power_failed_00069c24[7];
                  acStack_820[0] = s_get_power_failed_00069c24[8];
                  acStack_820[1] = s_get_power_failed_00069c24[9];
                  acStack_820[2] = s_get_power_failed_00069c24[10];
                  acStack_820[3] = s_get_power_failed_00069c24[0xb];
                  acStack_81c[0] = s_get_power_failed_00069c24[0xc];
                  acStack_81c[1] = s_get_power_failed_00069c24[0xd];
                  acStack_81c[2] = s_get_power_failed_00069c24[0xe];
                  acStack_81c[3] = s_get_power_failed_00069c24[0xf];
                  local_818._0_1_ = (char)ram0x00069c34;
                  local_818._1_1_ = (char)((uint)ram0x00069c34 >> 8);
                  FUN_00032218(3,local_828,0);
LAB_0001f168:
                  if (3 < DAT_00087bbc) {
                    iVar12 = -1;
                    local_828[0] = s_parse_power_failed_00069c98[0];
                    local_828[1] = s_parse_power_failed_00069c98[1];
                    local_828[2] = s_parse_power_failed_00069c98[2];
                    local_828[3] = s_parse_power_failed_00069c98[3];
                    local_824._0_1_ = s_parse_power_failed_00069c98[4];
                    local_824._1_1_ = s_parse_power_failed_00069c98[5];
                    local_824._2_1_ = s_parse_power_failed_00069c98[6];
                    cStack_821 = s_parse_power_failed_00069c98[7];
                    acStack_820[0] = s_parse_power_failed_00069c98[8];
                    acStack_820[1] = s_parse_power_failed_00069c98[9];
                    acStack_820[2] = s_parse_power_failed_00069c98[10];
                    acStack_820[3] = s_parse_power_failed_00069c98[0xb];
                    acStack_81c[0] = s_parse_power_failed_00069c98[0xc];
                    acStack_81c[1] = s_parse_power_failed_00069c98[0xd];
                    acStack_81c[2] = s_parse_power_failed_00069c98[0xe];
                    acStack_81c[3] = s_parse_power_failed_00069c98[0xf];
                    local_818._0_1_ = s_parse_power_failed_00069c98[0x10];
                    local_818._1_1_ = s_parse_power_failed_00069c98[0x11];
                    local_818._2_1_ = s_parse_power_failed_00069c98[0x12];
                    cStack_815 = s_parse_power_failed_00069c98[0x13];
                    FUN_00032218(3,local_828,0);
                    goto LAB_0001ec38;
                  }
                }
              }
              else {
                if (4 < DAT_00087bbc) {
                  local_828[0] = s_power__00069c38[0];
                  local_828[1] = s_power__00069c38[1];
                  local_828[2] = s_power__00069c38[2];
                  local_828[3] = s_power__00069c38[3];
                  local_824._0_1_ = s_power__00069c38[4];
                  local_824._1_1_ = s_power__00069c38[5];
                  local_824._2_1_ = s_power__00069c38[6];
                  cStack_821 = s_power__00069c38[7];
                  FUN_00032218(4,local_828);
                }
                piVar8 = (int *)FUN_000559d4(piVar4,"type");
                if ((piVar8 == (int *)0x0) || (*piVar8 != 2)) {
                  if (3 < DAT_00087bbc) {
                    pcVar5 = "get type failed\n";
LAB_0001f144:
                    local_828 = *(char (*) [4])pcVar5;
                    _local_824 = *(undefined4 *)(pcVar5 + 4);
                    acStack_820 = *(char (*) [4])(pcVar5 + 8);
                    acStack_81c = *(char (*) [4])(pcVar5 + 0xc);
                    local_818._0_1_ = (char)*(undefined4 *)(pcVar5 + 0x10);
                    FUN_00032218(3,local_828,0);
                    goto LAB_0001f168;
                  }
                }
                else {
                  if (4 < DAT_00087bbc) {
                    pcVar5 = (char *)FUN_00055f08();
                    snprintf(local_828,0x800,"type: %s\n",pcVar5);
                    FUN_00032218(4,local_828,0);
                  }
                  piVar8 = (int *)FUN_000559d4(piVar4,"version");
                  if ((piVar8 == (int *)0x0) || (*piVar8 != 1)) {
                    if (3 < DAT_00087bbc) {
                      local_828[0] = s_get_version_array_failed_00069c40[0];
                      local_828[1] = s_get_version_array_failed_00069c40[1];
                      local_828[2] = s_get_version_array_failed_00069c40[2];
                      local_828[3] = s_get_version_array_failed_00069c40[3];
                      local_824._0_1_ = s_get_version_array_failed_00069c40[4];
                      local_824._1_1_ = s_get_version_array_failed_00069c40[5];
                      local_824._2_1_ = s_get_version_array_failed_00069c40[6];
                      cStack_821 = s_get_version_array_failed_00069c40[7];
                      acStack_820[0] = s_get_version_array_failed_00069c40[8];
                      acStack_820[1] = s_get_version_array_failed_00069c40[9];
                      acStack_820[2] = s_get_version_array_failed_00069c40[10];
                      acStack_820[3] = s_get_version_array_failed_00069c40[0xb];
                      acStack_81c[0] = s_get_version_array_failed_00069c40[0xc];
                      acStack_81c[1] = s_get_version_array_failed_00069c40[0xd];
                      acStack_81c[2] = s_get_version_array_failed_00069c40[0xe];
                      acStack_81c[3] = s_get_version_array_failed_00069c40[0xf];
                      local_818._0_1_ = s_get_version_array_failed_00069c40[0x10];
                      local_818._1_1_ = s_get_version_array_failed_00069c40[0x11];
                      local_818._2_1_ = s_get_version_array_failed_00069c40[0x12];
                      cStack_815 = s_get_version_array_failed_00069c40[0x13];
                      local_814 = (undefined2  [2])s_get_version_array_failed_00069c40._20_4_;
                      local_810._0_1_ = (char)ram0x00069c58;
                      local_810._1_1_ = (char)((uint)ram0x00069c58 >> 8);
                      FUN_00032218(3,local_828,0);
                      goto LAB_0001f168;
                    }
                  }
                  else {
                    sVar6 = FUN_00055d40();
                    DAT_0071c478 = sVar6;
                    DAT_0071c47c = calloc(sVar6,2);
                    if (0 < (int)sVar6) {
                      iVar12 = 0;
                      do {
                        FUN_00055d5c(piVar8,iVar12);
                        uVar2 = FUN_00056164();
                        iVar11 = iVar12 * 2;
                        iVar12 = iVar12 + 1;
                        *(undefined2 *)((int)DAT_0071c47c + iVar11) = uVar2;
                        if (4 < DAT_00087bbc) {
                          snprintf(local_828,0x800,"psu version = 0x%x",
                                   (uint)*(ushort *)((int)DAT_0071c47c + iVar11));
                          FUN_00032218(4,local_828,0);
                        }
                      } while (iVar12 < (int)DAT_0071c478);
                    }
                    piVar8 = (int *)FUN_000559d4(piVar4,"i2c_addr");
                    if ((piVar8 == (int *)0x0) || (*piVar8 != 3)) {
                      if (3 < DAT_00087bbc) {
                        local_828[0] = s_get_i2c_addr_failed_0006977c[0];
                        local_828[1] = s_get_i2c_addr_failed_0006977c[1];
                        local_828[2] = s_get_i2c_addr_failed_0006977c[2];
                        local_828[3] = s_get_i2c_addr_failed_0006977c[3];
                        local_824._0_1_ = s_get_i2c_addr_failed_0006977c[4];
                        local_824._1_1_ = s_get_i2c_addr_failed_0006977c[5];
                        local_824._2_1_ = s_get_i2c_addr_failed_0006977c[6];
                        cStack_821 = s_get_i2c_addr_failed_0006977c[7];
                        acStack_820[0] = s_get_i2c_addr_failed_0006977c[8];
                        acStack_820[1] = s_get_i2c_addr_failed_0006977c[9];
                        acStack_820[2] = s_get_i2c_addr_failed_0006977c[10];
                        acStack_820[3] = s_get_i2c_addr_failed_0006977c[0xb];
                        acStack_81c[0] = s_get_i2c_addr_failed_0006977c[0xc];
                        acStack_81c[1] = s_get_i2c_addr_failed_0006977c[0xd];
                        acStack_81c[2] = s_get_i2c_addr_failed_0006977c[0xe];
                        acStack_81c[3] = s_get_i2c_addr_failed_0006977c[0xf];
                        local_818._0_1_ = s_get_i2c_addr_failed_0006977c[0x10];
                        local_818._1_1_ = s_get_i2c_addr_failed_0006977c[0x11];
                        local_818._2_1_ = s_get_i2c_addr_failed_0006977c[0x12];
                        cStack_815 = s_get_i2c_addr_failed_0006977c[0x13];
                        local_814[0]._0_1_ = (char)ram0x00069790;
                        FUN_00032218(3,local_828,0);
                        goto LAB_0001f168;
                      }
                    }
                    else {
                      if (4 < DAT_00087bbc) {
                        iVar12 = FUN_00056164();
                        snprintf(local_828,0x800,"i2c_addr: %d\n",iVar12);
                        FUN_00032218(4,local_828,0);
                      }
                      piVar4 = (int *)FUN_000559d4(piVar4,&DAT_00069c70);
                      if ((piVar4 == (int *)0x0) || (*piVar4 != 3)) {
                        if (3 < DAT_00087bbc) {
                          pcVar5 = "get gpio failed\n";
                          goto LAB_0001f144;
                        }
                      }
                      else {
                        if (4 < DAT_00087bbc) {
                          iVar12 = FUN_00056164();
                          snprintf(local_828,0x800,"gpio: %d\n",iVar12);
                          FUN_00032218(4,local_828,0);
                        }
                        piVar4 = (int *)FUN_000559d4(piVar3,&DAT_00069cac);
                        if ((piVar4 == (int *)0x0) || (*piVar4 != 1)) {
                          if (3 < DAT_00087bbc) {
                            local_828[0] = s_get_fan_failed_00069cb0[0];
                            local_828[1] = s_get_fan_failed_00069cb0[1];
                            local_828[2] = s_get_fan_failed_00069cb0[2];
                            local_828[3] = s_get_fan_failed_00069cb0[3];
                            local_824._0_1_ = s_get_fan_failed_00069cb0[4];
                            local_824._1_1_ = s_get_fan_failed_00069cb0[5];
                            local_824._2_1_ = s_get_fan_failed_00069cb0[6];
                            cStack_821 = s_get_fan_failed_00069cb0[7];
                            acStack_820[0] = s_get_fan_failed_00069cb0[8];
                            acStack_820[1] = s_get_fan_failed_00069cb0[9];
                            acStack_820[2] = s_get_fan_failed_00069cb0[10];
                            acStack_820[3] = s_get_fan_failed_00069cb0[0xb];
                            acStack_81c[0] = s_get_fan_failed_00069cb0[0xc];
                            acStack_81c[1] = s_get_fan_failed_00069cb0[0xd];
                            acStack_81c[2] = s_get_fan_failed_00069cb0[0xe];
                            acStack_81c[3] = s_get_fan_failed_00069cb0[0xf];
                            FUN_00032218(3,local_828,0);
LAB_0001f4a4:
                            if (3 < DAT_00087bbc) {
                              iVar12 = -1;
                              local_828[0] = s_parse_fan_failed_00069da4[0];
                              local_828[1] = s_parse_fan_failed_00069da4[1];
                              local_828[2] = s_parse_fan_failed_00069da4[2];
                              local_828[3] = s_parse_fan_failed_00069da4[3];
                              local_824._0_1_ = s_parse_fan_failed_00069da4[4];
                              local_824._1_1_ = s_parse_fan_failed_00069da4[5];
                              local_824._2_1_ = s_parse_fan_failed_00069da4[6];
                              cStack_821 = s_parse_fan_failed_00069da4[7];
                              acStack_820[0] = s_parse_fan_failed_00069da4[8];
                              acStack_820[1] = s_parse_fan_failed_00069da4[9];
                              acStack_820[2] = s_parse_fan_failed_00069da4[10];
                              acStack_820[3] = s_parse_fan_failed_00069da4[0xb];
                              acStack_81c[0] = s_parse_fan_failed_00069da4[0xc];
                              acStack_81c[1] = s_parse_fan_failed_00069da4[0xd];
                              acStack_81c[2] = s_parse_fan_failed_00069da4[0xe];
                              acStack_81c[3] = s_parse_fan_failed_00069da4[0xf];
                              local_818._0_1_ = (char)ram0x00069db4;
                              local_818._1_1_ = (char)((uint)ram0x00069db4 >> 8);
                              FUN_00032218(3,local_828,0);
                              goto LAB_0001ec38;
                            }
                          }
                        }
                        else {
                          if (4 < DAT_00087bbc) {
                            local_828[0] = (char)DAT_00069cc0;
                            local_828[1] = DAT_00069cc0._1_1_;
                            local_828[2] = DAT_00069cc0._2_1_;
                            local_828[3] = DAT_00069cc0._3_1_;
                            local_824._0_1_ = (char)DAT_00069cc4;
                            local_824._1_1_ = (char)((uint)DAT_00069cc4 >> 8);
                            FUN_00032218(4,local_828,0);
                          }
                          pcVar7 = (char *)0x0;
                          pcVar5 = (char *)0x0;
                          for (uVar13 = 0; uVar9 = FUN_00055d40(piVar4), uVar13 < uVar9;
                              uVar13 = uVar13 + 1) {
                            piVar8 = (int *)FUN_00055d5c(piVar4,uVar13);
                            if ((piVar8 == (int *)0x0) || (*piVar8 != 0)) {
                              if (DAT_00087bbc < 4) goto LAB_0001ec34;
                              pcVar5 = "get array %d failed\n";
LAB_0001f6d4:
                              snprintf(local_828,0x800,pcVar5,uVar13);
                              FUN_00032218(3,local_828,0);
                              goto LAB_0001f4a4;
                            }
                            piVar10 = (int *)FUN_000559d4(piVar8,&DAT_00069cc8);
                            if ((piVar10 == (int *)0x0) || (*piVar10 != 3)) {
                              if (3 < DAT_00087bbc) {
                                pcVar5 = "get arrya %d id failed\n";
                                goto LAB_0001f6d4;
                              }
                              goto LAB_0001ec34;
                            }
                            if (4 < DAT_00087bbc) {
                              iVar12 = FUN_00056164();
                              snprintf(local_828,0x800,"id: %d\n",iVar12);
                              FUN_00032218(4,local_828,0);
                            }
                            piVar10 = (int *)FUN_000559d4(piVar8,"position");
                            if ((piVar10 == (int *)0x0) || (*piVar10 != 2)) {
                              if (3 < DAT_00087bbc) {
                                pcVar5 = "get arrya %d position failed\n";
                                goto LAB_0001f6d4;
                              }
                              goto LAB_0001ec34;
                            }
                            if (4 < DAT_00087bbc) {
                              pcVar5 = (char *)FUN_00055f08();
                              snprintf(local_828,0x800,"position: %s\n",pcVar5);
                              FUN_00032218(4,local_828,0);
                            }
                            pcVar5 = (char *)FUN_00055f08(piVar10);
                            piVar8 = (int *)FUN_000559d4(piVar8,"direction");
                            if ((piVar8 == (int *)0x0) || (*piVar8 != 2)) {
                              if (3 < DAT_00087bbc) {
                                pcVar5 = "get arrya%d direction failed\n";
                                goto LAB_0001f6d4;
                              }
                              goto LAB_0001ec34;
                            }
                            if (4 < DAT_00087bbc) {
                              pcVar7 = (char *)FUN_00055f08();
                              snprintf(local_828,0x800,"direction: %s\n",pcVar7);
                              FUN_00032218(4,local_828,0);
                            }
                            pcVar7 = (char *)FUN_00055f08(piVar8);
                            DAT_0071c434 = DAT_0071c434 + 1;
                          }
                          iVar12 = strncmp(pcVar5,"right",5);
                          if (iVar12 == 0) {
                            iVar12 = strncmp(pcVar7,"in",2);
                            if (iVar12 == 0) {
LAB_0001fb24:
                              DAT_0071c430 = 0;
                            }
                            else {
                              iVar12 = strncmp(pcVar5,"left",4);
                              if (iVar12 == 0) goto LAB_0001f88c;
                              iVar12 = strncmp(pcVar7,"out",2);
joined_r0x0001f8c0:
                              if (iVar12 != 0) {
                                iVar12 = strncmp(pcVar5,"up",2);
                                if (iVar12 != 0) goto LAB_0001f7f8;
LAB_0001fb84:
                                iVar12 = strncmp(pcVar5,"down",4);
                                if (iVar12 == 0) {
                                  iVar12 = strncmp(pcVar7,"out",3);
                                  if (iVar12 == 0) goto LAB_0001fbbc;
                                }
                                else {
                                  iVar12 = strncmp(pcVar7,"out",3);
joined_r0x0001f848:
                                  if (iVar12 == 0) {
                                    DAT_0071c430 = 3;
                                    goto LAB_0001f8cc;
                                  }
                                }
LAB_0001f84c:
                                if (3 < DAT_00087bbc) {
                                  snprintf(local_828,0x800,
                                           "unkonwn wind position %s, direction %s\n",pcVar5,pcVar7)
                                  ;
                                  FUN_00032218(3,local_828,0);
                                  goto LAB_0001f4a4;
                                }
                                goto LAB_0001ec34;
                              }
                              DAT_0071c430 = 1;
                            }
                          }
                          else {
                            iVar12 = strncmp(pcVar5,"left",4);
                            if (iVar12 == 0) {
LAB_0001f88c:
                              iVar12 = strncmp(pcVar7,"out",2);
                              if (iVar12 == 0) goto LAB_0001fb24;
                              iVar12 = strncmp(pcVar7,"in",2);
                              goto joined_r0x0001f8c0;
                            }
                            iVar12 = strncmp(pcVar5,"up",2);
                            if (iVar12 == 0) {
                              iVar12 = strncmp(pcVar7,"in",2);
                              if (iVar12 != 0) goto LAB_0001fb84;
                            }
                            else {
LAB_0001f7f8:
                              iVar12 = strncmp(pcVar5,"down",4);
                              if (iVar12 != 0) goto LAB_0001f84c;
                              iVar12 = strncmp(pcVar7,"out",3);
                              if (iVar12 != 0) {
                                iVar12 = strncmp(pcVar7,"in",2);
                                goto joined_r0x0001f848;
                              }
                            }
LAB_0001fbbc:
                            DAT_0071c430 = 2;
                          }
LAB_0001f8cc:
                          piVar4 = (int *)FUN_000559d4(piVar3,&DAT_00069974);
                          if ((piVar4 == (int *)0x0) || (*piVar4 != 0)) {
                            if (3 < DAT_00087bbc) {
                              local_828[0] = s_get_asic_failed_0006997c[0];
                              local_828[1] = s_get_asic_failed_0006997c[1];
                              local_828[2] = s_get_asic_failed_0006997c[2];
                              local_828[3] = s_get_asic_failed_0006997c[3];
                              local_824._0_1_ = s_get_asic_failed_0006997c[4];
                              local_824._1_1_ = s_get_asic_failed_0006997c[5];
                              local_824._2_1_ = s_get_asic_failed_0006997c[6];
                              cStack_821 = s_get_asic_failed_0006997c[7];
                              acStack_820[0] = s_get_asic_failed_0006997c[8];
                              acStack_820[1] = s_get_asic_failed_0006997c[9];
                              acStack_820[2] = s_get_asic_failed_0006997c[10];
                              acStack_820[3] = s_get_asic_failed_0006997c[0xb];
                              acStack_81c[0] = s_get_asic_failed_0006997c[0xc];
                              acStack_81c[1] = s_get_asic_failed_0006997c[0xd];
                              acStack_81c[2] = s_get_asic_failed_0006997c[0xe];
                              acStack_81c[3] = s_get_asic_failed_0006997c[0xf];
                              local_818._0_1_ = (char)ram0x0006998c;
                              FUN_00032218(3,local_828,0);
LAB_0001f960:
                              if (3 < DAT_00087bbc) {
                                iVar12 = -1;
                                local_828[0] = s_parse_asic_failed_00069fb8[0];
                                local_828[1] = s_parse_asic_failed_00069fb8[1];
                                local_828[2] = s_parse_asic_failed_00069fb8[2];
                                local_828[3] = s_parse_asic_failed_00069fb8[3];
                                local_824._0_1_ = s_parse_asic_failed_00069fb8[4];
                                local_824._1_1_ = s_parse_asic_failed_00069fb8[5];
                                local_824._2_1_ = s_parse_asic_failed_00069fb8[6];
                                cStack_821 = s_parse_asic_failed_00069fb8[7];
                                acStack_820[0] = s_parse_asic_failed_00069fb8[8];
                                acStack_820[1] = s_parse_asic_failed_00069fb8[9];
                                acStack_820[2] = s_parse_asic_failed_00069fb8[10];
                                acStack_820[3] = s_parse_asic_failed_00069fb8[0xb];
                                acStack_81c[0] = s_parse_asic_failed_00069fb8[0xc];
                                acStack_81c[1] = s_parse_asic_failed_00069fb8[0xd];
                                acStack_81c[2] = s_parse_asic_failed_00069fb8[0xe];
                                acStack_81c[3] = s_parse_asic_failed_00069fb8[0xf];
                                local_818 = (undefined3)ram0x00069fc8;
                                FUN_00032218(3,local_828,0);
                                goto LAB_0001ec38;
                              }
                            }
                          }
                          else {
                            if (4 < DAT_00087bbc) {
                              local_828[0] = (char)DAT_00069990;
                              local_828[1] = DAT_00069990._1_1_;
                              local_828[2] = DAT_00069990._2_1_;
                              local_828[3] = DAT_00069990._3_1_;
                              local_824 = (undefined3)DAT_00069994;
                              FUN_00032218(4,local_828);
                            }
                            piVar8 = (int *)FUN_000559d4(piVar4,"asic_id");
                            if ((piVar8 == (int *)0x0) || (*piVar8 != 2)) {
                              if (3 < DAT_00087bbc) {
                                local_828[0] = s_get_asic_id_failed_00069dc0[0];
                                local_828[1] = s_get_asic_id_failed_00069dc0[1];
                                local_828[2] = s_get_asic_id_failed_00069dc0[2];
                                local_828[3] = s_get_asic_id_failed_00069dc0[3];
                                local_824._0_1_ = s_get_asic_id_failed_00069dc0[4];
                                local_824._1_1_ = s_get_asic_id_failed_00069dc0[5];
                                local_824._2_1_ = s_get_asic_id_failed_00069dc0[6];
                                cStack_821 = s_get_asic_id_failed_00069dc0[7];
                                acStack_820[0] = s_get_asic_id_failed_00069dc0[8];
                                acStack_820[1] = s_get_asic_id_failed_00069dc0[9];
                                acStack_820[2] = s_get_asic_id_failed_00069dc0[10];
                                acStack_820[3] = s_get_asic_id_failed_00069dc0[0xb];
                                acStack_81c[0] = s_get_asic_id_failed_00069dc0[0xc];
                                acStack_81c[1] = s_get_asic_id_failed_00069dc0[0xd];
                                acStack_81c[2] = s_get_asic_id_failed_00069dc0[0xe];
                                acStack_81c[3] = s_get_asic_id_failed_00069dc0[0xf];
                                local_818._0_1_ = s_get_asic_id_failed_00069dc0[0x10];
                                local_818._1_1_ = s_get_asic_id_failed_00069dc0[0x11];
                                local_818._2_1_ = s_get_asic_id_failed_00069dc0[0x12];
                                cStack_815 = s_get_asic_id_failed_00069dc0[0x13];
                                FUN_00032218(3,local_828,0);
                                goto LAB_0001f960;
                              }
                            }
                            else {
                              if (4 < DAT_00087bbc) {
                                pcVar5 = (char *)FUN_00055f08();
                                snprintf(local_828,0x800,"asic_id: %s\n",pcVar5);
                                FUN_00032218(4,local_828,0);
                              }
                              piVar8 = (int *)FUN_000559d4(piVar4,"asic_addr");
                              if ((piVar8 == (int *)0x0) || (*piVar8 != 2)) {
                                if (3 < DAT_00087bbc) {
                                  local_828[0] = s_get_asic_addr_failed_00069df0[0];
                                  local_828[1] = s_get_asic_addr_failed_00069df0[1];
                                  local_828[2] = s_get_asic_addr_failed_00069df0[2];
                                  local_828[3] = s_get_asic_addr_failed_00069df0[3];
                                  local_824._0_1_ = s_get_asic_addr_failed_00069df0[4];
                                  local_824._1_1_ = s_get_asic_addr_failed_00069df0[5];
                                  local_824._2_1_ = s_get_asic_addr_failed_00069df0[6];
                                  cStack_821 = s_get_asic_addr_failed_00069df0[7];
                                  acStack_820[0] = s_get_asic_addr_failed_00069df0[8];
                                  acStack_820[1] = s_get_asic_addr_failed_00069df0[9];
                                  acStack_820[2] = s_get_asic_addr_failed_00069df0[10];
                                  acStack_820[3] = s_get_asic_addr_failed_00069df0[0xb];
                                  acStack_81c[0] = s_get_asic_addr_failed_00069df0[0xc];
                                  acStack_81c[1] = s_get_asic_addr_failed_00069df0[0xd];
                                  acStack_81c[2] = s_get_asic_addr_failed_00069df0[0xe];
                                  acStack_81c[3] = s_get_asic_addr_failed_00069df0[0xf];
                                  local_818._0_1_ = s_get_asic_addr_failed_00069df0[0x10];
                                  local_818._1_1_ = s_get_asic_addr_failed_00069df0[0x11];
                                  local_818._2_1_ = s_get_asic_addr_failed_00069df0[0x12];
                                  cStack_815 = s_get_asic_addr_failed_00069df0[0x13];
                                  local_814[0] = (short)ram0x00069e04;
                                  FUN_00032218(3,local_828,0);
                                  goto LAB_0001f960;
                                }
                              }
                              else {
                                if (4 < DAT_00087bbc) {
                                  pcVar5 = (char *)FUN_00055f08();
                                  snprintf(local_828,0x800,"asic_addr : %s\n",pcVar5);
                                  FUN_00032218(4,local_828,0);
                                }
                                pcVar5 = (char *)FUN_00055f08(piVar8);
                                DAT_0071c408 = strtol(pcVar5,(char **)0x0,0);
                                if (DAT_0071c408 == 0) {
                                  if (3 < DAT_00087bbc) {
                                    pcVar5 = "convert asic_addr failed\n";
LAB_0001faf8:
                                    local_828 = *(char (*) [4])pcVar5;
                                    _local_824 = *(undefined4 *)(pcVar5 + 4);
                                    acStack_820 = *(char (*) [4])(pcVar5 + 8);
                                    acStack_81c = *(char (*) [4])(pcVar5 + 0xc);
                                    _local_818 = *(undefined4 *)(pcVar5 + 0x10);
                                    local_814 = *(undefined2 (*) [2])(pcVar5 + 0x14);
                                    local_810._0_1_ = (char)*(undefined4 *)(pcVar5 + 0x18);
                                    local_810._1_1_ =
                                         (char)((uint)*(undefined4 *)(pcVar5 + 0x18) >> 8);
                                    FUN_00032218(3,local_828,0);
                                    goto LAB_0001f960;
                                  }
                                }
                                else {
                                  if (4 < DAT_00087bbc) {
                                    snprintf(local_828,0x800,"asic_addr 0x%x\n",DAT_0071c408);
                                    FUN_00032218(4,local_828,0);
                                  }
                                  piVar8 = (int *)FUN_000559d4(piVar4,"asic_core_num");
                                  if ((piVar8 == (int *)0x0) || (*piVar8 != 3)) {
                                    if (3 < DAT_00087bbc) {
                                      pcVar5 = "get asic_core_num failed\n";
                                      goto LAB_0001faf8;
                                    }
                                  }
                                  else {
                                    if (4 < DAT_00087bbc) {
                                      iVar12 = FUN_00056164();
                                      snprintf(local_828,0x800,"asic_core_num: %d\n",iVar12);
                                      FUN_00032218(4,local_828,0);
                                    }
                                    DAT_0071c40c = FUN_00056164(piVar8);
                                    piVar8 = (int *)FUN_000559d4(piVar4,"asic_small_core_num");
                                    if ((piVar8 == (int *)0x0) || (*piVar8 != 3)) {
                                      if (3 < DAT_00087bbc) {
                                        pcVar5 = "get asic_small_core_num failed\n";
LAB_0001fd14:
                                        local_828 = *(char (*) [4])pcVar5;
                                        _local_824 = *(undefined4 *)(pcVar5 + 4);
                                        acStack_820 = *(char (*) [4])(pcVar5 + 8);
                                        acStack_81c = *(char (*) [4])(pcVar5 + 0xc);
                                        _local_818 = *(undefined4 *)(pcVar5 + 0x10);
                                        local_814 = *(undefined2 (*) [2])(pcVar5 + 0x14);
                                        _local_810 = *(undefined4 *)(pcVar5 + 0x18);
                                        _uStack_80c = *(undefined4 *)(pcVar5 + 0x1c);
                                        FUN_00032218(3,local_828,0);
                                        goto LAB_0001f960;
                                      }
                                    }
                                    else {
                                      if (4 < DAT_00087bbc) {
                                        iVar12 = FUN_00056164();
                                        snprintf(local_828,0x800,"asic_small_core_num: %d\n",iVar12)
                                        ;
                                        FUN_00032218(4,local_828,0);
                                      }
                                      DAT_0071c410 = FUN_00056164(piVar8);
                                      piVar8 = (int *)FUN_000559d4(piVar4,"core_small_core_num");
                                      if ((piVar8 == (int *)0x0) || (*piVar8 != 3)) {
                                        if (3 < DAT_00087bbc) {
                                          pcVar5 = "get core_small_core_num failed\n";
                                          goto LAB_0001fd14;
                                        }
                                      }
                                      else {
                                        if (4 < DAT_00087bbc) {
                                          iVar12 = FUN_00056164();
                                          snprintf(local_828,0x800,"core_small_core_num: %d\n",
                                                   iVar12);
                                          FUN_00032218(4,local_828,0);
                                        }
                                        DAT_0071c414 = FUN_00056164(piVar8);
                                        piVar8 = (int *)FUN_000559d4(piVar4,"asic_domain_num");
                                        if ((piVar8 == (int *)0x0) || (*piVar8 != 3)) {
                                          if (3 < DAT_00087bbc) {
                                            local_828[0] = s_get_asic_domain_num_failed_00069f34[0];
                                            local_828[1] = s_get_asic_domain_num_failed_00069f34[1];
                                            local_828[2] = s_get_asic_domain_num_failed_00069f34[2];
                                            local_828[3] = s_get_asic_domain_num_failed_00069f34[3];
                                            local_824._0_1_ =
                                                 s_get_asic_domain_num_failed_00069f34[4];
                                            local_824._1_1_ =
                                                 s_get_asic_domain_num_failed_00069f34[5];
                                            local_824._2_1_ =
                                                 s_get_asic_domain_num_failed_00069f34[6];
                                            cStack_821 = s_get_asic_domain_num_failed_00069f34[7];
                                            acStack_820[0] =
                                                 s_get_asic_domain_num_failed_00069f34[8];
                                            acStack_820[1] =
                                                 s_get_asic_domain_num_failed_00069f34[9];
                                            acStack_820[2] =
                                                 s_get_asic_domain_num_failed_00069f34[10];
                                            acStack_820[3] =
                                                 s_get_asic_domain_num_failed_00069f34[0xb];
                                            acStack_81c[0] =
                                                 s_get_asic_domain_num_failed_00069f34[0xc];
                                            acStack_81c[1] =
                                                 s_get_asic_domain_num_failed_00069f34[0xd];
                                            acStack_81c[2] =
                                                 s_get_asic_domain_num_failed_00069f34[0xe];
                                            acStack_81c[3] =
                                                 s_get_asic_domain_num_failed_00069f34[0xf];
                                            local_818._0_1_ =
                                                 s_get_asic_domain_num_failed_00069f34[0x10];
                                            local_818._1_1_ =
                                                 s_get_asic_domain_num_failed_00069f34[0x11];
                                            local_818._2_1_ =
                                                 s_get_asic_domain_num_failed_00069f34[0x12];
                                            cStack_815 = s_get_asic_domain_num_failed_00069f34[0x13]
                                            ;
                                            local_814 = (undefined2  [2])
                                                        s_get_asic_domain_num_failed_00069f34._20_4_
                                            ;
                                            local_810._0_1_ =
                                                 s_get_asic_domain_num_failed_00069f34[0x18];
                                            local_810._1_1_ =
                                                 s_get_asic_domain_num_failed_00069f34[0x19];
                                            local_810._2_1_ =
                                                 s_get_asic_domain_num_failed_00069f34[0x1a];
                                            cStack_80d = s_get_asic_domain_num_failed_00069f34[0x1b]
                                            ;
                                            FUN_00032218(3,local_828,0);
                                            goto LAB_0001f960;
                                          }
                                        }
                                        else {
                                          if (4 < DAT_00087bbc) {
                                            iVar12 = FUN_00056164();
                                            snprintf(local_828,0x800,"asic_domain_num : %d\n",iVar12
                                                    );
                                            FUN_00032218(4,local_828,0);
                                          }
                                          DAT_0071c418 = FUN_00056164(piVar8);
                                          piVar4 = (int *)FUN_000559d4(piVar4,"asic_addr_interval");
                                          if ((piVar4 != (int *)0x0) && (*piVar4 == 3)) {
                                            if (4 < DAT_00087bbc) {
                                              iVar12 = FUN_00056164();
                                              snprintf(local_828,0x800,"asic_addr_interval : %d\n",
                                                       iVar12);
                                              FUN_00032218(4,local_828,0);
                                            }
                                            DAT_0071c41c = FUN_00056164(piVar4);
                                            iVar12 = FUN_00012650(piVar3);
                                            if (iVar12 == 0) {
                                              iVar12 = FUN_0001ea90();
                                              if ((iVar12 != 0) && (3 < DAT_00087bbc)) {
                                                local_828[0] = s_init_topol_runtime_failed_00069fe0
                                                               [0];
                                                local_828[1] = s_init_topol_runtime_failed_00069fe0
                                                               [1];
                                                local_828[2] = s_init_topol_runtime_failed_00069fe0
                                                               [2];
                                                local_828[3] = s_init_topol_runtime_failed_00069fe0
                                                               [3];
                                                local_824._0_1_ =
                                                     s_init_topol_runtime_failed_00069fe0[4];
                                                local_824._1_1_ =
                                                     s_init_topol_runtime_failed_00069fe0[5];
                                                local_824._2_1_ =
                                                     s_init_topol_runtime_failed_00069fe0[6];
                                                cStack_821 = s_init_topol_runtime_failed_00069fe0[7]
                                                ;
                                                acStack_820[0] =
                                                     s_init_topol_runtime_failed_00069fe0[8];
                                                acStack_820[1] =
                                                     s_init_topol_runtime_failed_00069fe0[9];
                                                acStack_820[2] =
                                                     s_init_topol_runtime_failed_00069fe0[10];
                                                acStack_820[3] =
                                                     s_init_topol_runtime_failed_00069fe0[0xb];
                                                acStack_81c[0] =
                                                     s_init_topol_runtime_failed_00069fe0[0xc];
                                                acStack_81c[1] =
                                                     s_init_topol_runtime_failed_00069fe0[0xd];
                                                acStack_81c[2] =
                                                     s_init_topol_runtime_failed_00069fe0[0xe];
                                                acStack_81c[3] =
                                                     s_init_topol_runtime_failed_00069fe0[0xf];
                                                local_818._0_1_ =
                                                     s_init_topol_runtime_failed_00069fe0[0x10];
                                                local_818._1_1_ =
                                                     s_init_topol_runtime_failed_00069fe0[0x11];
                                                local_818._2_1_ =
                                                     s_init_topol_runtime_failed_00069fe0[0x12];
                                                cStack_815 = s_init_topol_runtime_failed_00069fe0
                                                             [0x13];
                                                local_814 = (undefined2  [2])
                                                            s_init_topol_runtime_failed_00069fe0.
                                                            _20_4_;
                                                local_810 = (undefined3)ram0x00069ff8;
                                                FUN_00032218(3,local_828,0);
                                              }
                                            }
                                            else if (3 < DAT_00087bbc) {
                                              local_828[0] = s_parse_chain_failed_00069fcc[0];
                                              local_828[1] = s_parse_chain_failed_00069fcc[1];
                                              local_828[2] = s_parse_chain_failed_00069fcc[2];
                                              local_828[3] = s_parse_chain_failed_00069fcc[3];
                                              local_824._0_1_ = s_parse_chain_failed_00069fcc[4];
                                              local_824._1_1_ = s_parse_chain_failed_00069fcc[5];
                                              local_824._2_1_ = s_parse_chain_failed_00069fcc[6];
                                              cStack_821 = s_parse_chain_failed_00069fcc[7];
                                              acStack_820[0] = s_parse_chain_failed_00069fcc[8];
                                              acStack_820[1] = s_parse_chain_failed_00069fcc[9];
                                              acStack_820[2] = s_parse_chain_failed_00069fcc[10];
                                              acStack_820[3] = s_parse_chain_failed_00069fcc[0xb];
                                              acStack_81c[0] = s_parse_chain_failed_00069fcc[0xc];
                                              acStack_81c[1] = s_parse_chain_failed_00069fcc[0xd];
                                              acStack_81c[2] = s_parse_chain_failed_00069fcc[0xe];
                                              acStack_81c[3] = s_parse_chain_failed_00069fcc[0xf];
                                              local_818._0_1_ = s_parse_chain_failed_00069fcc[0x10];
                                              local_818._1_1_ = s_parse_chain_failed_00069fcc[0x11];
                                              local_818._2_1_ = s_parse_chain_failed_00069fcc[0x12];
                                              cStack_815 = s_parse_chain_failed_00069fcc[0x13];
                                              FUN_00032218(3,local_828,0);
                                            }
                                            goto LAB_0001ec38;
                                          }
                                          if (3 < DAT_00087bbc) {
                                            local_828[0] = s_get_asic_addr_interval_failed_00069f7c
                                                           [0];
                                            local_828[1] = s_get_asic_addr_interval_failed_00069f7c
                                                           [1];
                                            local_828[2] = s_get_asic_addr_interval_failed_00069f7c
                                                           [2];
                                            local_828[3] = s_get_asic_addr_interval_failed_00069f7c
                                                           [3];
                                            local_824._0_1_ =
                                                 s_get_asic_addr_interval_failed_00069f7c[4];
                                            local_824._1_1_ =
                                                 s_get_asic_addr_interval_failed_00069f7c[5];
                                            local_824._2_1_ =
                                                 s_get_asic_addr_interval_failed_00069f7c[6];
                                            cStack_821 = s_get_asic_addr_interval_failed_00069f7c[7]
                                            ;
                                            acStack_820[0] =
                                                 s_get_asic_addr_interval_failed_00069f7c[8];
                                            acStack_820[1] =
                                                 s_get_asic_addr_interval_failed_00069f7c[9];
                                            acStack_820[2] =
                                                 s_get_asic_addr_interval_failed_00069f7c[10];
                                            acStack_820[3] =
                                                 s_get_asic_addr_interval_failed_00069f7c[0xb];
                                            acStack_81c[0] =
                                                 s_get_asic_addr_interval_failed_00069f7c[0xc];
                                            acStack_81c[1] =
                                                 s_get_asic_addr_interval_failed_00069f7c[0xd];
                                            acStack_81c[2] =
                                                 s_get_asic_addr_interval_failed_00069f7c[0xe];
                                            acStack_81c[3] =
                                                 s_get_asic_addr_interval_failed_00069f7c[0xf];
                                            local_818._0_1_ =
                                                 s_get_asic_addr_interval_failed_00069f7c[0x10];
                                            local_818._1_1_ =
                                                 s_get_asic_addr_interval_failed_00069f7c[0x11];
                                            local_818._2_1_ =
                                                 s_get_asic_addr_interval_failed_00069f7c[0x12];
                                            cStack_815 = s_get_asic_addr_interval_failed_00069f7c
                                                         [0x13];
                                            local_814 = (undefined2  [2])
                                                        s_get_asic_addr_interval_failed_00069f7c.
                                                        _20_4_;
                                            local_810._0_1_ =
                                                 s_get_asic_addr_interval_failed_00069f7c[0x18];
                                            local_810._1_1_ =
                                                 s_get_asic_addr_interval_failed_00069f7c[0x19];
                                            local_810._2_1_ =
                                                 s_get_asic_addr_interval_failed_00069f7c[0x1a];
                                            cStack_80d = s_get_asic_addr_interval_failed_00069f7c
                                                         [0x1b];
                                            uStack_80c = (undefined3)ram0x00069f98;
                                            FUN_00032218(3,local_828,0);
                                            goto LAB_0001f960;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0001ec34:
  iVar12 = -1;
LAB_0001ec38:
  if (piVar3[1] != -1) {
    piVar4 = piVar3 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar11 + -1;
    if (iVar11 + -1 == 0) {
      FUN_0005630c(piVar3);
    }
  }
  return iVar12;
}


