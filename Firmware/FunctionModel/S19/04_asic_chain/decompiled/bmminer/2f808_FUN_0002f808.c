// FUN_0002f808 @ 0002f808  size=556  callers=2
// program: bmminer


undefined4 FUN_0002f808(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char acStack_828 [2052];
  
  iVar1 = FUN_000201d8();
  if (iVar1 == 0) {
    uVar5 = 0;
    if (3 < DAT_00087bbc) {
      snprintf(acStack_828,0x800,"Chain %d is not exist.\n",param_1);
      FUN_00032218(3,acStack_828,0);
    }
  }
  else {
    if (param_2 == 0) {
      FUN_00020548(param_1,0);
    }
    iVar1 = 0;
    FUN_0002f798();
    iVar8 = 0;
    FUN_00020c04(param_1 & 0xff,1,0,param_2 & 0xff);
LAB_0002f88c:
    do {
      while( true ) {
        FUN_00034a5c(300);
        pthread_mutex_lock((pthread_mutex_t *)&DAT_0008a974);
        iVar2 = DAT_00722a08;
        iVar1 = iVar1 + DAT_00722a08;
        if (DAT_00722a08 < 1) break;
        iVar8 = 0;
        do {
          DAT_00722a08 = DAT_00722a08 + -1;
          iVar8 = iVar8 + 1;
          uVar6 = DAT_00722a04 + 1;
          DAT_00722a04 = uVar6;
          if (0x1fe < uVar6) {
            DAT_00722a04 = 0;
          }
          uVar7 = (&DAT_00722a04)[uVar6 * 2];
          if ((*(byte *)((int)&DAT_00722a08 + uVar6 * 8 + 3) == param_1 &&
               *(char *)((int)&DAT_00722a08 + uVar6 * 8 + 2) == '\0') &&
             (uVar6 = FUN_0002004c(), uVar6 == uVar7 >> 0x10)) {
            FUN_000204d8(param_1);
          }
        } while (iVar2 != iVar8);
        iVar8 = FUN_0002002c();
        iVar2 = FUN_000201c8();
        if (iVar2 * iVar8 * 5 < iVar1) {
LAB_0002f944:
          pthread_mutex_unlock((pthread_mutex_t *)&DAT_0008a974);
          return 1;
        }
        iVar8 = 0;
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_0008a974);
      }
      iVar3 = FUN_0002002c();
      iVar4 = FUN_000201c8();
      if (iVar4 * iVar3 * 5 < iVar1) goto LAB_0002f944;
      if (iVar2 != 0) {
        if (param_2 == 0) {
          iVar2 = FUN_0002002c();
          iVar3 = FUN_000205b4(param_1);
          if (iVar2 == iVar3) goto LAB_0002f944;
        }
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_0008a974);
        goto LAB_0002f88c;
      }
      iVar8 = iVar8 + 1;
      FUN_00034a5c(100);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0008a974);
    } while (iVar8 != 4);
    uVar5 = 1;
  }
  return uVar5;
}

