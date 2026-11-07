// FUN_0003d300 @ 0003d300  size=2028  callers=0
// program: cgminer


/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0003d300(void)

{
  pthread_t __th;
  size_t sVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  pthread_attr_t local_84c;
  char local_828 [16];
  uint local_818;
  char acStack_814 [8];
  ushort local_80c;
  undefined1 local_80a;
  
  __th = pthread_self();
  pthread_detach(__th);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0006a24c);
  iVar2 = DAT_00072dd0 + DAT_00068b78 * 0x40;
  bVar9 = *(int *)(iVar2 + 0xc) != 0;
  if (bVar9) {
    FUN_00023258(FUN_000202bc,iVar2,1000);
    usleep(100000);
  }
  if (DAT_00068a18 != (void *)0x0) {
    free(DAT_00068a18);
  }
  iVar2 = DAT_00072e70;
  if (0 < DAT_00072e70) {
    iVar4 = 0;
    do {
      if ((DAT_000686f1 != '\0') &&
         (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
        snprintf(local_828,0x800,"before add pool, pool->pool_no = %d, pool->rpc_url = %s\n",
                 *(int *)DAT_00072f14[iVar4],(char *)((int *)DAT_00072f14[iVar4])[0x29]);
        FUN_0001dd98(7,local_828,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar2 != iVar4);
  }
  FUN_0002b4cc();
  if (DAT_00072e70 == iVar2) {
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
      builtin_strncpy(local_828,"Input pool error",0x10);
      local_818._0_1_ = ',';
      local_818._1_1_ = ' ';
      local_818._2_1_ = 't';
      local_818._3_1_ = 'r';
      builtin_strncpy(acStack_814,"y again\n",8);
      local_80c = local_80c & 0xff00;
      FUN_0001dd98(3,local_828,0);
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0006a24c);
  }
  else {
    DAT_00068a14 = 0;
    iVar4 = DAT_00072e70;
    if (iVar2 < DAT_00072e70) {
      iVar7 = iVar2 << 2;
      iVar6 = iVar2;
      do {
        iVar5 = *(int *)((int)DAT_00072f14 + iVar7);
        if (*(int *)(iVar5 + 100) != 1) {
          FUN_00028ff0(iVar5 + 100);
        }
        iVar4 = DAT_00072e70;
        iVar6 = iVar6 + 1;
        *(undefined1 *)(iVar5 + 0x61) = 1;
        iVar7 = iVar7 + 4;
      } while (iVar6 < iVar4);
    }
    if ((DAT_000686f1 != '\0') &&
       (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
      snprintf(local_828,0x800,"total_pools = %d, need to remove %d pools\n",iVar4,iVar2);
      FUN_0001dd98(7,local_828,0);
    }
    if (0 < DAT_00072e70) {
      iVar4 = 0;
      do {
        if ((DAT_000686f1 != '\0') &&
           (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
          snprintf(local_828,0x800,"after add pool, pool->pool_no = %d, pool->rpc_url = %s\n",
                   *(int *)DAT_00072f14[iVar4],(char *)((int *)DAT_00072f14[iVar4])[0x29]);
          FUN_0001dd98(7,local_828,0);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < DAT_00072e70);
    }
    if (0 < iVar2) {
      iVar4 = 0;
      do {
        iVar6 = *DAT_00072f14;
        iVar7 = FUN_0002fbd8();
        if (iVar6 == iVar7) {
          FUN_00031afc(0);
        }
        iVar4 = iVar4 + 1;
        DAT_00074f34 = DAT_00074f34 + -1;
        DAT_00068b90 = DAT_00068b90 + -1;
        *(undefined4 *)(iVar6 + 100) = 0;
        DAT_00068b8c = DAT_00068b8c + -1;
        DAT_00068b9c = DAT_00068b9c + -1;
        FUN_0002aca0(iVar6);
      } while (iVar2 != iVar4);
    }
    if ((DAT_000686f1 != '\0') &&
       (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
      snprintf(local_828,0x800,"total_pools after removed = %d\n",DAT_00072e70);
      FUN_0001dd98(7,local_828,0);
    }
    if (0 < DAT_00072e70) {
      iVar2 = 0;
      do {
        if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (4 < DAT_00067848)) {
          snprintf(local_828,0x800,"after reload pool, pool->pool_no = %d, pool->rpc_url = %s\n",
                   *(int *)DAT_00072f14[iVar2],(char *)((int *)DAT_00072f14[iVar2])[0x29]);
          FUN_0001dd98(5,local_828,0);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_00072e70);
    }
    iVar2 = 0;
    FUN_00028d5c();
    do {
      iVar2 = iVar2 + 1;
      sleep(1);
      if (iVar2 == 8) {
        bVar3 = 0;
      }
      else {
        bVar3 = (DAT_00068a14 ^ 1) & 1;
      }
    } while (bVar3 != 0);
    FUN_0003d1f0();
    local_84c.__align = 0x6572;
    if ((DAT_000686f1 != '\0') &&
       (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
      snprintf(local_828,0x800,"pool change success, send %s",local_84c.__size);
      FUN_0001dd98(7,local_828,0);
    }
    sVar1 = strlen(local_84c.__size);
    FUN_000427b4(&local_84c,sVar1);
    if (DAT_00068a14 == 0) {
      if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
        builtin_strncpy(local_828,"error pool input",0x10);
        local_818 = local_818 & 0xffffff00;
        FUN_0001dd98(3,local_828,0);
      }
      if (0 < DAT_00072e70) {
        iVar2 = 0;
        do {
          piVar8 = (int *)DAT_00072f14[iVar2];
          if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
            snprintf(local_828,0x800,"pool%d, url = %s, user = %s, pass = %s\n",*piVar8,
                     (char *)piVar8[0x29],(char *)piVar8[0x2b],(char *)piVar8[0x2c]);
            FUN_0001dd98(3,local_828,0);
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < DAT_00072e70);
      }
    }
    else {
      DAT_0006a264 = 1;
    }
    DAT_0006a268 = 1;
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0006a24c);
  }
  if (bVar9) {
    iVar4 = DAT_00072dd0 + DAT_00068b78 * 0x40;
    pthread_attr_init(&local_84c);
    pthread_attr_setstacksize(&local_84c,0x200000);
    iVar2 = FUN_00022f8c(iVar4,&local_84c,FUN_000320b0,0);
    if (iVar2 != 0) {
      builtin_strncpy(local_828,"watchpool thread",0x10);
      local_818._0_1_ = ' ';
      local_818._1_1_ = 'c';
      local_818._2_1_ = 'r';
      local_818._3_1_ = 'e';
      builtin_strncpy(acStack_814,"ate fail",8);
      local_80c = 0x6465;
      local_80a = 0;
      FUN_0001dd98(3,local_828,1);
                    /* WARNING: Subroutine does not return */
      FUN_0002c290(1,0);
    }
    pthread_detach(*(pthread_t *)(iVar4 + 0xc));
  }
  sleep(1);
  DAT_00068af0 = 0;
  return;
}

