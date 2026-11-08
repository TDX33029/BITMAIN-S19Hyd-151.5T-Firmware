// FUN_000181a8 @ 000181a8  size=1536  callers=1
// program: bmminer


undefined4 FUN_000181a8(uint param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *__format;
  char cVar6;
  char *pcVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  int param5;
  char *local_2040;
  char *local_2034;
  undefined1 local_202a;
  byte local_2029;
  uint local_2028;
  char acStack_2024 [8192];
  
  param5 = 0;
  local_2034 = (char *)0x0;
  do {
    iVar3 = FUN_00017ec4();
    if (iVar3 <= param5) {
LAB_000184a4:
      if (3 < DAT_000be63c) {
        snprintf((char *)&local_2028,0x2000,"chain %d temp sensor %s\n",param_1,local_2034);
        FUN_0004948c(3,&local_2028,0);
      }
      return 0;
    }
    iVar3 = param5 * 4;
    iVar9 = 4;
    uVar10 = (int)(short)*(undefined4 *)(DAT_000bfb44 + param5 * 4) * (int)(short)DAT_000bfb40 &
             0xff;
    FUN_00082338(param_1 & 0xff,uVar10);
    usleep(10000);
    do {
      local_2028 = local_2028 & 0xffffff00;
      FUN_00017794(param_1,uVar10,0xfe,0,&local_2028);
      if ((char)local_2028 == '\x1a') {
        iVar9 = 0;
        local_2034 = "NCT218";
        goto LAB_000182b4;
      }
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    iVar9 = 4;
    while( true ) {
      local_2028 = local_2028 & 0xffffff00;
      FUN_00017794(param_1,uVar10,0xfe,0,&local_2028);
      if ((char)local_2028 == 'U') break;
      iVar9 = iVar9 + -1;
      if (iVar9 == 0) {
        if (DAT_000be63c < 4) {
          return 0xffffffff;
        }
        snprintf((char *)&local_2028,0x2000,"sensor %d @ chain %d manufacture id unknown",
                 *(int *)(DAT_000bfb44 + iVar3),param_1);
        FUN_0004948c(3,&local_2028,0);
        return 0xffffffff;
      }
    }
    iVar9 = 1;
    local_2034 = "TMP451";
LAB_000182b4:
    if (3 < DAT_000be63c) {
      snprintf((char *)&local_2028,0x2000,"sensor %d @ chain %d is %s",
               *(int *)(DAT_000bfb44 + iVar3),param_1,local_2034);
      FUN_0004948c(3,&local_2028,0);
    }
    local_202a = 4;
    if (DAT_000bfb40 == 0) {
      if (DAT_000be63c < 4) {
        return 0;
      }
      local_2028._0_1_ = 'c';
      local_2028._1_1_ = 'a';
      local_2028._2_1_ = 'n';
      local_2028._3_1_ = ' ';
      builtin_strncpy(acStack_2024,"not set ext mode before calibration",0x24);
      FUN_0004948c(3,&local_2028,0);
LAB_000183ac:
      if (DAT_000be63c < 4) {
        return 0;
      }
      snprintf((char *)&local_2028,0x2000,"sensor %d @ chain %d fail to set to ext mode",
               *(int *)(DAT_000bfb44 + iVar3),param_1);
      FUN_0004948c(3,&local_2028,0);
      goto LAB_000184a4;
    }
    iVar4 = FUN_0002a594();
    if (iVar4 == 0) {
      if (DAT_000be63c < 4) {
        return 0;
      }
      snprintf((char *)&local_2028,0x2000,"%s chain %d ,index %d not connected","set_ext_mode",
               param_1,param5);
      FUN_0004948c(3,&local_2028,0);
      goto LAB_000183ac;
    }
    iVar4 = FUN_00017794(param_1,(int)(short)*(undefined4 *)(DAT_000bfb44 + iVar3) *
                                 (int)(short)DAT_000bfb40 & 0xff,(&UNK_000993a3)[iVar9 * 0x10],1,
                         &local_202a);
    if (iVar4 == 0) {
      if (DAT_000be63c < 4) {
        return 0;
      }
      snprintf((char *)&local_2028,0x2000,"set ext mode failed for senser %d @ chain %d",
               *(int *)(DAT_000bfb44 + iVar3),param_1);
      FUN_0004948c(3,&local_2028,0);
      goto LAB_000183ac;
    }
    local_2040 = "sensor %d @ chain %d, offset = %d";
    cVar6 = '\v';
    while( true ) {
      cVar1 = FUN_00017ee4(param_1,param5,iVar9,0);
      *(short *)(*(int *)(*(int *)(DAT_000bfab8 + param_1 * 4) + 4) + param5 * 6 + 2) = (short)cVar1
      ;
      cVar2 = FUN_00017ee4(param_1,param5,iVar9,1);
      bVar8 = cVar1 - cVar2;
      iVar4 = (int)(char)bVar8;
      *(short *)(*(int *)(*(int *)(DAT_000bfab8 + param_1 * 4) + 8) + param5 * 6 + 2) = (short)cVar2
      ;
      if ((byte)(bVar8 + 2) < 5) break;
      local_2029 = bVar8;
      if (DAT_000bfb40 == 0) {
        if (3 < DAT_000be63c) {
          local_2028._0_1_ = 'c';
          local_2028._1_1_ = 'a';
          local_2028._2_1_ = 'n';
          local_2028._3_1_ = ' ';
          builtin_strncpy(acStack_2024,"not set ext mode before calibration",0x24);
          FUN_0004948c(3,&local_2028,0);
        }
LAB_0001855c:
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
      }
      else {
        iVar5 = FUN_0002a594();
        if (iVar5 != 0) {
          iVar5 = FUN_00017794(param_1,(int)(short)*(undefined4 *)(DAT_000bfb44 + iVar3) *
                                       (int)(short)DAT_000bfb40 & 0xff,(&UNK_000993a4)[iVar9 * 0x10]
                               ,1,&local_2029);
          if (iVar5 == 0) {
            if (3 < DAT_000be63c) {
              snprintf((char *)&local_2028,0x2000,"set offset failed for senser %d @ chain %d",
                       *(int *)(DAT_000bfb44 + iVar3),param_1);
              FUN_0004948c(3,&local_2028,0);
            }
          }
          else if (3 < DAT_000be63c) {
            pcVar7 = *(char **)(DAT_000bfb44 + iVar3);
            __format = local_2040;
            iVar5 = iVar4;
            goto LAB_00018644;
          }
          goto LAB_0001855c;
        }
        if (DAT_000be63c < 4) goto LAB_0001855c;
        pcVar7 = "set_sensor_offset";
        __format = "%s chain %d ,index %d not connected";
        iVar5 = param5;
LAB_00018644:
        snprintf((char *)&local_2028,0x2000,__format,pcVar7,param_1,iVar5);
        FUN_0004948c(3,&local_2028,0);
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
      }
      if ((iVar4 < 3) || (cVar6 = cVar6 + -1, cVar6 == '\0')) goto LAB_0001866c;
    }
    if (4 < DAT_000be63c) {
      snprintf((char *)&local_2028,0x2000,
               "sensor %d @ chain %d chip_temp_offset less than 2, no need to set offset",
               *(int *)(DAT_000bfb44 + iVar3),param_1);
      FUN_0004948c(4,&local_2028,0);
    }
LAB_0001866c:
    param5 = param5 + 1;
  } while( true );
}

