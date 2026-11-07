// FUN_000462cc @ 000462cc  size=632  callers=6
// program: bmminer


uint FUN_000462cc(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint param6;
  uint uVar3;
  int iVar4;
  int local_2030;
  int local_202c;
  char acStack_2028 [8196];
  
  local_202c = 5;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_000c9630);
  do {
    local_2030 = 8;
    FUN_00045c7c();
    FUN_0002c9f4(param_3 & 0xff,0,param_2 & 0xff,param_1 & 0xff);
    do {
      FUN_0004bf68(10);
      pthread_mutex_lock((pthread_mutex_t *)&DAT_000c9614);
      iVar2 = DAT_00a5f358;
      if (DAT_00a5f358 != 0) {
        iVar4 = 0;
        do {
          DAT_00a5f358 = DAT_00a5f358 + -1;
          iVar4 = iVar4 + 1;
          uVar3 = DAT_00a5f354 + 1;
          if (0xffe < uVar3) {
            DAT_00a5f354 = 0;
          }
          iVar1 = uVar3 * 8;
          if (uVar3 < 0xfff) {
            DAT_00a5f354 = uVar3;
          }
          param6 = (uint)*(byte *)((int)&DAT_00a5f358 + iVar1 + 3);
          if (((param6 == param_3) && (*(byte *)((int)&DAT_00a5f358 + iVar1 + 1) == param_2)) &&
             (*(byte *)((int)&DAT_00a5f358 + iVar1 + 2) == param_1)) {
            if (param_1 != 0xff) {
              pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c9614);
              FUN_00045c7c();
              pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c9630);
              return (&DAT_00a5f354)[uVar3 * 2];
            }
            uVar3 = (&DAT_00a5f354)[uVar3 * 2];
            if ((uVar3 & 0xe0000000) != 0) {
              uVar3 = 0;
            }
            pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c9614);
            FUN_00045c7c();
            pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c9630);
            return uVar3;
          }
          if (3 < DAT_000be63c) {
            snprintf(acStack_2028,0x2000,
                     "read asic reg error: expect chain = %d, chip = %d, reg = %d, got chain = %d, chip = %d, reg = %d\n"
                     ,param_3,param_2,param_1,param6,
                     (uint)*(byte *)((int)&DAT_00a5f358 + uVar3 * 8 + 1),
                     (uint)*(byte *)((int)&DAT_00a5f358 + uVar3 * 8 + 2));
            FUN_0004948c(3,acStack_2028,0);
          }
        } while (iVar2 != iVar4);
      }
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c9614);
      local_2030 = local_2030 + -1;
    } while (local_2030 != 0);
    local_202c = local_202c + -1;
    if (local_202c == 0) {
      if (3 < DAT_000be63c) {
        snprintf(acStack_2028,0x2000,
                 "read asic reg timeout: expect chain = %d, chip = %d, reg = %d\n",param_3,param_2,
                 param_1);
        FUN_0004948c(3,acStack_2028,0);
      }
      FUN_00045c7c();
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c9630);
      return 0;
    }
  } while( true );
}

