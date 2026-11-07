// FUN_00017a98 @ 00017a98  size=1448  callers=1
// program: bmminer


undefined4 FUN_00017a98(uint param_1)

{
  short sVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined1 uVar11;
  ushort uVar12;
  char *param5;
  int local_850;
  undefined1 local_829;
  uint local_828;
  char acStack_824 [2048];
  
  param5 = (char *)0x0;
  local_850 = 0;
  iVar4 = FUN_00017028();
  if (iVar4 < 1) {
LAB_00017e24:
    if (3 < DAT_00087bbc) {
      snprintf((char *)&local_828,0x800,"chain %d temp sensor %s\n",param_1,param5);
      FUN_00032218(3,&local_828,0);
    }
    return 0;
  }
LAB_00017ae0:
  iVar10 = 0;
  uVar12 = 0x1a;
  uVar11 = 0xfe;
  iVar4 = local_850 * 4;
  uVar9 = (int)(short)*(undefined4 *)(DAT_00088824 + local_850 * 4) * (int)(short)DAT_00088820 &
          0xff;
  FUN_00058098(param_1 & 0xff,uVar9,0);
  usleep(10000);
  do {
    iVar8 = 4;
    do {
      local_828 = local_828 & 0xffffff00;
      FUN_00015c70(param_1,uVar9,uVar11,0,&local_828);
      if ((byte)local_828 == uVar12) {
        param5 = (char *)(&DAT_00067e48)[iVar10 * 4];
        sVar1 = (&DAT_00067e4e)[iVar10 * 8];
        if (3 < DAT_00087bbc) {
          snprintf((char *)&local_828,0x800,"sensor %d @ chain %d is %s offset is:%d",
                   *(int *)(DAT_00088824 + iVar4),param_1,param5,(int)sVar1);
          FUN_00032218(3,&local_828,0);
        }
        local_829 = 4;
        if (DAT_00088820 == 0) {
          if (DAT_00087bbc < 4) {
            return 0;
          }
          local_828._0_1_ = 'c';
          local_828._1_1_ = 'a';
          local_828._2_1_ = 'n';
          local_828._3_1_ = ' ';
          builtin_strncpy(acStack_824,"not set ext mode before calibration",0x24);
          FUN_00032218(3,&local_828,0);
        }
        else {
          iVar8 = FUN_000200ac();
          if ((iVar8 == 0) || (iVar8 = thunk_FUN_00036ad8(), iVar8 == 0)) {
            if (DAT_00087bbc < 4) {
              return 0;
            }
            snprintf((char *)&local_828,0x800,"%s chain %d ,index %d not connected","set_ext_mode",
                     param_1,local_850);
            FUN_00032218(3,&local_828,0);
          }
          else {
            iVar8 = FUN_00015c70(param_1,(int)(short)*(undefined4 *)(DAT_00088824 + iVar4) *
                                         (int)(short)DAT_00088820 & 0xff,
                                 (&DAT_00067e53)[iVar10 * 0x10],1,&local_829);
            if (iVar8 != 0) {
              pcVar5 = (char *)FUN_0001fffc();
              iVar8 = strcmp(pcVar5,"NBS2003");
              if (iVar8 != 0) {
                pcVar5 = (char *)FUN_0001fffc();
                iVar8 = strcmp(pcVar5,"HHB28601");
                if (iVar8 != 0) {
                  pcVar5 = (char *)FUN_0001fffc();
                  iVar8 = strcmp(pcVar5,"HHB28602");
                  if (iVar8 != 0) {
                    cVar7 = '\v';
                    goto LAB_00017ec4;
                  }
                }
              }
              FUN_00015dec(param_1,local_850,iVar10,(int)(char)sVar1);
              goto LAB_00017e00;
            }
            if (DAT_00087bbc < 4) {
              return 0;
            }
            snprintf((char *)&local_828,0x800,"set ext mode failed for senser %d @ chain %d",
                     *(int *)(DAT_00088824 + iVar4),param_1);
            FUN_00032218(3,&local_828,0);
          }
        }
        if (DAT_00087bbc < 4) {
          return 0;
        }
        snprintf((char *)&local_828,0x800,"sensor %d @ chain %d fail to set to ext mode",
                 *(int *)(DAT_00088824 + iVar4),param_1);
        FUN_00032218(3,&local_828,0);
        goto LAB_00017e24;
      }
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    iVar10 = iVar10 + 1;
    if (iVar10 == 3) {
      if (DAT_00087bbc < 4) {
        return 0xffffffff;
      }
      snprintf((char *)&local_828,0x800,"sensor %d @ chain %d manufacture id unknown",
               *(int *)(DAT_00088824 + iVar4),param_1);
      FUN_00032218(3,&local_828,0);
      return 0xffffffff;
    }
    uVar11 = (&UNK_00067e50)[iVar10 * 0x10];
    uVar12 = *(ushort *)(&UNK_00067e4c + iVar10 * 0x10);
  } while( true );
LAB_00017ec4:
  cVar2 = FUN_00017830(param_1,local_850,iVar10,0);
  *(short *)(*(int *)(*(int *)(DAT_00088840 + param_1 * 4) + 4) + local_850 * 6 + 2) = (short)cVar2;
  cVar3 = FUN_00017830(param_1,local_850,iVar10,1);
  iVar8 = (int)(char)(cVar2 - cVar3);
  *(short *)(*(int *)(*(int *)(DAT_00088840 + param_1 * 4) + 8) + local_850 * 6 + 2) = (short)cVar3;
  if (4 < (byte)((cVar2 - cVar3) + 2U)) {
    iVar6 = FUN_00015dec(param_1,local_850,iVar10,iVar8);
    if ((iVar6 == 0) && (3 < DAT_00087bbc)) {
      snprintf((char *)&local_828,0x800,"sensor %d @ chain %d, offset = %d",
               *(int *)(DAT_00088824 + iVar4),param_1,iVar8);
      FUN_00032218(3,&local_828,0);
    }
    if (iVar8 < 0) {
      iVar8 = -iVar8;
    }
    cVar7 = cVar7 + -1;
    if ((iVar8 < 3) || (cVar7 == '\0')) goto LAB_00017e00;
    goto LAB_00017ec4;
  }
  if (4 < DAT_00087bbc) {
    snprintf((char *)&local_828,0x800,
             "sensor %d @ chain %d chip_temp_offset less than 2, no need to set offset",
             *(int *)(DAT_00088824 + iVar4),param_1);
    FUN_00032218(4,&local_828,0);
  }
LAB_00017e00:
  local_850 = local_850 + 1;
  iVar4 = FUN_00017028();
  if (iVar4 <= local_850) goto LAB_00017e24;
  goto LAB_00017ae0;
}

