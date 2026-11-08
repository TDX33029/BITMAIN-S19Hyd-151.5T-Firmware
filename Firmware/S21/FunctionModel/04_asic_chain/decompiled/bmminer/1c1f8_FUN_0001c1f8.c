// FUN_0001c1f8 @ 0001c1f8  size=1072  callers=1
// program: bmminer


uint FUN_0001c1f8(void)

{
  int iVar1;
  int iVar2;
  char *param3;
  void *pvVar3;
  size_t __n;
  int iVar4;
  uint uVar5;
  uint __n_00;
  uint local_2140;
  char local_213c [276];
  char local_2028 [8196];
  
  if (DAT_000c0410 == (void *)0x0) {
    pvVar3 = calloc(1,0x20);
    DAT_000c0410 = pvVar3;
    if (pvVar3 == (void *)0x0) {
      if (DAT_000be63c < 4) {
        return 0xfffffffe;
      }
      builtin_strncpy(local_2028,"No memory for configuraion.\n",0x1d);
      FUN_0004948c(3,local_2028,0);
      if (DAT_000c0410 == (void *)0x0) {
        return 0xfffffffe;
      }
      free(DAT_000c0410);
      DAT_000c0410 = pvVar3;
      return 0xfffffffe;
    }
  }
  else if (*(char *)((int)DAT_000c0410 + 0x1c) != '\0') {
    return 0xfffffffd;
  }
  iVar4 = 0;
  do {
    iVar1 = FUN_0002a6f0(iVar4);
    if (iVar1 != 0) {
      FUN_0006a034(iVar4);
      FUN_0004bf68(10);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  if (3 < DAT_000be63c) {
    builtin_strncpy(local_2028,"skip loading levels for now\n",0x1d);
    FUN_0004948c(3,local_2028,0);
  }
  iVar4 = 0;
  uVar5 = 0;
  do {
    iVar1 = FUN_0002a6f0(iVar4);
    pvVar3 = DAT_000c0410;
    if (iVar1 != 0) {
      iVar1 = 3;
      local_2140 = 0x14;
      local_213c[4] = '\0';
      local_213c[5] = '\0';
      local_213c[6] = '\0';
      local_213c[7] = '\0';
      local_213c[8] = '\0';
      local_213c[9] = '\0';
      local_213c[10] = '\0';
      local_213c[0xb] = '\0';
      local_213c[0xc] = '\0';
      local_213c[0xd] = '\0';
      local_213c[0xe] = '\0';
      local_213c[0xf] = '\0';
      local_213c[0x10] = '\0';
      local_213c[0x11] = '\0';
      local_213c[0x12] = '\0';
      local_213c[0x13] = '\0';
      local_213c[0] = '\0';
      local_213c[1] = '\0';
      local_213c[2] = '\0';
      local_213c[3] = '\0';
      do {
        iVar2 = FUN_0006a484(iVar4,0,local_213c + 0x14,0x100);
        if (iVar2 != 0) {
          if (3 < DAT_000be63c) {
            snprintf(local_2028,0x2000,"Read configuration fail for chain %d.\n",iVar4);
            FUN_0004948c(3,local_2028,0);
          }
          goto LAB_0001c334;
        }
        if (3 < DAT_000be63c) {
          snprintf(local_2028,0x2000,"load chain %d eeprom data\n",iVar4);
          FUN_0004948c(3,local_2028,0);
        }
        iVar2 = FUN_0001e118(local_213c + 0x14,0x100);
        if (iVar2 != 0) {
          (**(code **)(iVar2 + 0xb4))(iVar2,local_213c,&local_2140);
          __n_00 = local_2140;
          __n = local_2140;
          if (7 < local_2140) {
            __n = 8;
          }
          iVar1 = strncmp(local_213c,"HHB68501",__n);
          if ((((iVar1 != 0) && (iVar1 = strncmp(local_213c,"HHB68502",__n), iVar1 != 0)) &&
              (iVar1 = strncmp(local_213c,"HHB68601",__n), iVar1 != 0)) &&
             (iVar1 = strncmp(local_213c,"HHB68602",__n), iVar1 != 0)) {
            if (8 < __n_00) {
              __n_00 = 9;
            }
            iVar1 = strncmp(local_213c,"H6HB70601",__n_00);
            if (((iVar1 != 0) && (iVar1 = strncmp(local_213c,"H6HB70602",__n_00), iVar1 != 0)) &&
               ((iVar1 = strncmp(local_213c,"H6HB70501",__n_00), iVar1 != 0 &&
                ((iVar1 = strncmp(local_213c,"H6HB70801",__n_00), iVar1 != 0 &&
                 (iVar1 = strncmp(local_213c,"H6HB70802",__n_00), iVar1 != 0)))))) {
              if (3 < DAT_000be63c) {
                param3 = (char *)FUN_0002a4e4();
                snprintf(local_2028,0x2000,"FW type %s, eeprom[%d] shows %s\n",param3,iVar4,
                         local_213c);
                FUN_0004948c(3,local_2028,0);
              }
              (**(code **)(iVar2 + 0x128))(iVar2);
              goto LAB_0001c334;
            }
          }
          *(undefined1 *)((int)pvVar3 + iVar4 + 0x10) = 1;
          *(int *)((int)pvVar3 + iVar4 * 4) = iVar2;
          goto LAB_0001c290;
        }
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      if (3 < DAT_000be63c) {
        snprintf(local_2028,0x2000,"Data load fail for chain %d.\n",iVar4);
        FUN_0004948c(3,local_2028,0);
      }
LAB_0001c334:
      uVar5 = ~(~(uVar5 >> 0x10) << 0x10) | 1 << (iVar4 + 0x10U & 0xff);
    }
LAB_0001c290:
    iVar4 = iVar4 + 1;
    if (iVar4 == 4) {
      if (uVar5 == 0) {
        *(undefined1 *)((int)DAT_000c0410 + 0x1c) = 1;
      }
      return uVar5;
    }
  } while( true );
}

