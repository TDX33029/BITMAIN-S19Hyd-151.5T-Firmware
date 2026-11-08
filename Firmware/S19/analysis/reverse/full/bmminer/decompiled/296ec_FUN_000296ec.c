// FUN_000296ec @ 000296ec  size=1064  callers=0
// program: bmminer


undefined4 FUN_000296ec(void)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  float fVar7;
  undefined4 extraout_s1;
  double dVar8;
  char local_850 [2052];
  
  prctl(0xf,"chk_sys",0,0,0);
  pcVar2 = (char *)FUN_0001fffc();
  iVar3 = strcmp(pcVar2,"BHB28601");
  if (iVar3 != 0) {
    pcVar2 = (char *)FUN_0001fffc();
    iVar3 = strcmp(pcVar2,"BHB28701");
    if (iVar3 != 0) {
      pcVar2 = (char *)FUN_0001fffc();
      iVar3 = strcmp(pcVar2,"HHB28601");
      if (iVar3 != 0) {
        pcVar2 = (char *)FUN_0001fffc();
        iVar3 = strcmp(pcVar2,"HHB28602");
        if (iVar3 != 0) goto LAB_00029730;
      }
      bVar1 = false;
      goto LAB_00029734;
    }
  }
LAB_00029730:
  bVar1 = true;
LAB_00029734:
  iVar3 = FUN_00029324();
  do {
    iVar4 = FUN_00036360();
    if (iVar4 == 2) {
      iVar4 = FUN_00029324();
      if ((DAT_00b2d258 != 0 || DAT_00b2d25c != 0) || (0x708 < (uint)(iVar4 - iVar3))) break;
    }
    FUN_00034a5c(10);
  } while( true );
  DAT_0008928c = FUN_00029324();
  DAT_000892b8 = DAT_0008928c;
  DAT_000892bc = DAT_0008928c;
  DAT_000892c0 = DAT_0008928c;
  if (DAT_000872fc != '\0') {
    uVar6 = 1;
    pthread_setcancelstate(1,(int *)0x0);
LAB_000297e0:
    if (uVar6 == (uVar6 / 0x78) * 0x78) {
      iVar3 = FUN_0001d4a4();
      if (iVar3 == 0) {
        FUN_000208a8();
        FUN_000208cc(0);
      }
      else {
        fVar7 = (float)thunk_FUN_0004e718();
        FUN_000208a8((int)fVar7);
        dVar8 = DAT_00b2d250;
        if (DAT_00b2d250 <= 100.0) {
          uVar5 = FUN_00020228();
          dVar8 = (double)CONCAT44(extraout_s1,uVar5);
        }
        FUN_000208cc(SUB84(((double)fVar7 * 1000.0) / dVar8,0));
        FUN_00018800();
        if (DAT_000892c4 == 0) {
          DAT_000892c4 = FUN_0005b008("bmminer_power");
        }
        FUN_0005c5c4(DAT_000892c4,"thread.c",8,"check_system_work_thread",0x18,0x1b3,0x14,
                     "%d/%.2f/%.2f/%d",(int)fVar7);
        sleep(1);
        iVar3 = thunk_FUN_0004e7fc(0);
        sleep(1);
        if (iVar3 != 0) {
          if (DAT_000892c4 == 0) {
            DAT_000892c4 = FUN_0005b008("bmminer_power");
          }
          FUN_0005c5c4(DAT_000892c4,"thread.c",8,"check_system_work_thread",0x18,0x1bd,0x14,
                       "power err_code:0x%08x\n",iVar3);
        }
      }
    }
    iVar3 = pthread_mutex_trylock((pthread_mutex_t *)&DAT_000892c8);
    if (iVar3 == 0) {
      if (DAT_00087b88 != '\0') {
        FUN_00039f4c();
      }
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_000892c8);
    }
    pthread_setcancelstate(0,(int *)0x0);
    pthread_testcancel();
    FUN_00034a5c(1000);
    if (DAT_000872fc != '\0') {
      uVar6 = uVar6 + 1;
      pthread_setcancelstate(1,(int *)0x0);
      if ((uVar6 == (uVar6 / 0x1e) * 0x1e) && (bVar1)) {
        pcVar2 = (char *)FUN_0001fffc();
        iVar3 = strcmp(pcVar2,"HHB28601");
        if (iVar3 != 0) {
          pcVar2 = (char *)FUN_0001fffc();
          iVar3 = strcmp(pcVar2,"HHB28602");
          if (iVar3 != 0) goto LAB_000297e0;
        }
        if (uVar6 % 300 == 0) {
          iVar4 = FUN_000201d8(0,300,uVar6 * 0x1b4e81b5);
          iVar3 = 0;
          while( true ) {
            if (iVar4 != 0) {
              uVar5 = FUN_0002009c();
              FUN_00044310(iVar3,uVar5);
            }
            iVar3 = iVar3 + 1;
            if (iVar3 == 4) break;
            iVar4 = FUN_000201d8(iVar3);
          }
        }
      }
      goto LAB_000297e0;
    }
  }
  if (3 < DAT_00087bbc) {
    builtin_strncpy(local_850,"check_system_work_thread exit",0x1e);
    FUN_00032218(3,local_850,0);
  }
  return 0;
}

