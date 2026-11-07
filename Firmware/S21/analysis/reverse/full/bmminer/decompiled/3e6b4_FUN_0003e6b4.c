// FUN_0003e6b4 @ 0003e6b4  size=1068  callers=0
// program: bmminer


void FUN_0003e6b4(void)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  float fVar8;
  undefined4 extraout_s1;
  double dVar9;
  
  prctl(0xf,"chk_sys",0,0,0);
  pcVar2 = (char *)FUN_0002a4e4();
  iVar3 = strcmp(pcVar2,"H6HB70601");
  if (iVar3 != 0) {
    pcVar2 = (char *)FUN_0002a4e4();
    iVar3 = strcmp(pcVar2,"H6HB70602");
    if (iVar3 != 0) {
      pcVar2 = (char *)FUN_0002a4e4();
      iVar3 = strcmp(pcVar2,"H6HB70501");
      if (iVar3 != 0) {
        pcVar2 = (char *)FUN_0002a4e4();
        iVar3 = strcmp(pcVar2,"H6HB70801");
        if (iVar3 != 0) {
          pcVar2 = (char *)FUN_0002a4e4();
          iVar3 = strcmp(pcVar2,"H6HB70802");
          if (iVar3 != 0) {
            bVar1 = true;
            goto LAB_0003e6f8;
          }
        }
      }
    }
  }
  bVar1 = false;
LAB_0003e6f8:
  iVar3 = FUN_0003e028();
  do {
    iVar4 = FUN_0004e8a8();
    if (iVar4 == 2) {
      iVar4 = FUN_0003e028();
      if ((DAT_00aaa908 != 0 || DAT_00aaa90c != 0) || (0x708 < (uint)(iVar4 - iVar3))) {
        DAT_000c7f74 = FUN_0003e028();
        DAT_00a54cc0 = 0;
        DAT_00a54cc4 = 0;
        DAT_000c7fa0 = DAT_000c7f74;
        DAT_000c7fa4 = DAT_000c7f74;
        iVar3 = pthread_setcancelstate(1,(int *)0x0);
        uVar7 = 1;
        do {
          if (uVar7 % 0x78 == 0) {
            iVar3 = FUN_00024f30(iVar3,(uVar7 / 0x78) * 0xf,uVar7 * -0x77777777);
            if ((iVar3 == 0) || (iVar3 = FUN_000245fc(), iVar3 == 0)) {
              FUN_0002af30(0);
              FUN_0002af64(0);
            }
            else {
              pthread_setcancelstate(1,(int *)0x0);
              fVar8 = (float)FUN_00024efc();
              pthread_setcancelstate(0,(int *)0x0);
              FUN_0002af30((int)fVar8);
              dVar9 = DAT_00aaa900;
              if (DAT_00aaa900 <= 100.0) {
                uVar6 = FUN_0002a740();
                dVar9 = (double)CONCAT44(extraout_s1,uVar6);
              }
              FUN_0002af64(SUB84(((double)fVar8 * 1000.0) / dVar9,0));
              pthread_setcancelstate(1,(int *)0x0);
              FUN_00018a2c();
              if (DAT_000c7fa8 == 0) {
                DAT_000c7fa8 = FUN_000856dc("bmminer_power");
              }
              iVar3 = DAT_000c7fa8;
              FUN_00024c74();
              FUN_000875a0(iVar3,"thread.c",8,"check_system_work_thread",0x18,0x2c8,0x14,
                           "%d/%.2f/%.2f/%d/%d",(int)fVar8);
              pthread_setcancelstate(0,(int *)0x0);
              sleep(1);
              if ((int)uVar7 < 0x12d) {
                sleep(1);
              }
              else {
                pthread_setcancelstate(1,(int *)0x0);
                iVar3 = FUN_00077f64(0);
                pthread_setcancelstate(0,(int *)0x0);
                sleep(1);
                if (iVar3 != 0) {
                  if (DAT_000c7fa8 == 0) {
                    DAT_000c7fa8 = FUN_000856dc("bmminer_power");
                  }
                  FUN_000875a0(DAT_000c7fa8,"thread.c",8,"check_system_work_thread",0x18,0x2f0,0x14,
                               "power err_code:0x%08x\n",iVar3);
                }
              }
              iVar3 = FUN_00053180();
              if (iVar3 != 0) {
                FUN_000531d0();
              }
            }
          }
          iVar3 = pthread_mutex_trylock((pthread_mutex_t *)&DAT_000c7fac);
          if (iVar3 == 0) {
            if ((DAT_000c74c4 != '\0') && (iVar3 = FUN_000245fc(), iVar3 != 0)) {
              pthread_setcancelstate(1,(int *)0x0);
              FUN_000534b8(uVar7);
              pthread_setcancelstate(0,(int *)0x0);
            }
            pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c7fac);
          }
          uVar7 = uVar7 + 1;
          pthread_setcancelstate(0,(int *)0x0);
          pthread_testcancel();
          FUN_0004bf68(1000);
          iVar3 = pthread_setcancelstate(1,(int *)0x0);
          if ((uVar7 % 0x1e == 0) && (bVar1)) {
            iVar5 = FUN_0002a6f0(0);
            iVar4 = 0;
            while( true ) {
              iVar3 = 0;
              if (iVar5 != 0) {
                uVar6 = FUN_0002a584();
                iVar3 = FUN_00054194(iVar4,uVar6);
              }
              iVar4 = iVar4 + 1;
              if (iVar4 == 4) break;
              iVar5 = FUN_0002a6f0(iVar4);
            }
          }
        } while( true );
      }
    }
    FUN_0004bf68(10);
  } while( true );
}

