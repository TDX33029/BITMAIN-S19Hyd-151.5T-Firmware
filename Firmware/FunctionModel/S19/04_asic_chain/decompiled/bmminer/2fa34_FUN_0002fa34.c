// FUN_0002fa34 @ 0002fa34  size=632  callers=3
// program: bmminer


uint FUN_0002fa34(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint param6;
  uint uVar3;
  int iVar4;
  int local_830;
  int local_82c;
  char acStack_828 [2052];
  
  local_82c = 5;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0008a98c);
  do {
    local_830 = 8;
    FUN_0002f798();
    FUN_00020c04(param_3 & 0xff,0,param_2 & 0xff,param_1 & 0xff);
    do {
      FUN_00034a5c(10);
      pthread_mutex_lock((pthread_mutex_t *)&DAT_0008a974);
      iVar2 = DAT_00722a08;
      if (DAT_00722a08 != 0) {
        iVar4 = 0;
        do {
          DAT_00722a08 = DAT_00722a08 + -1;
          iVar4 = iVar4 + 1;
          uVar3 = DAT_00722a04 + 1;
          if (0x1fe < uVar3) {
            DAT_00722a04 = 0;
          }
          iVar1 = uVar3 * 8;
          if (uVar3 < 0x1ff) {
            DAT_00722a04 = uVar3;
          }
          param6 = (uint)*(byte *)((int)&DAT_00722a08 + iVar1 + 3);
          if (((param6 == param_3) && (*(byte *)((int)&DAT_00722a08 + iVar1 + 1) == param_2)) &&
             (*(byte *)((int)&DAT_00722a08 + iVar1 + 2) == param_1)) {
            if (param_1 != 0x1c) {
              pthread_mutex_unlock((pthread_mutex_t *)&DAT_0008a974);
              FUN_0002f798();
              pthread_mutex_unlock((pthread_mutex_t *)&DAT_0008a98c);
              return (&DAT_00722a04)[uVar3 * 2];
            }
            uVar3 = (&DAT_00722a04)[uVar3 * 2];
            if ((uVar3 & 0xe0000000) != 0) {
              uVar3 = 0;
            }
            pthread_mutex_unlock((pthread_mutex_t *)&DAT_0008a974);
            FUN_0002f798();
            pthread_mutex_unlock((pthread_mutex_t *)&DAT_0008a98c);
            return uVar3;
          }
          if (3 < DAT_00087bbc) {
            snprintf(acStack_828,0x800,
                     "read asic reg error: expect chain = %d, chip = %d, reg = %d, got chain = %d, chip = %d, reg = %d\n"
                     ,param_3,param_2,param_1,param6,
                     (uint)*(byte *)((int)&DAT_00722a08 + uVar3 * 8 + 1),
                     (uint)*(byte *)((int)&DAT_00722a08 + uVar3 * 8 + 2));
            FUN_00032218(3,acStack_828,0);
          }
        } while (iVar2 != iVar4);
      }
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0008a974);
      local_830 = local_830 + -1;
    } while (local_830 != 0);
    local_82c = local_82c + -1;
    if (local_82c == 0) {
      if (4 < DAT_00087bbc) {
        snprintf(acStack_828,0x800,"read asic reg timeout: expect chain = %d, chip = %d, reg = %d\n"
                 ,param_3,param_2,param_1);
        FUN_00032218(4,acStack_828,0);
      }
      FUN_0002f798();
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0008a98c);
      return 0;
    }
  } while( true );
}

