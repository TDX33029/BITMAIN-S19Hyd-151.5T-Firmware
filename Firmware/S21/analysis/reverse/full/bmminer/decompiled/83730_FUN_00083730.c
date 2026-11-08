// FUN_00083730 @ 00083730  size=372  callers=2
// program: bmminer


int FUN_00083730(int param_1,uint param_2,uint param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_2 < 4) {
    if (param_3 < 0x100) {
      pthread_mutex_lock((pthread_mutex_t *)&DAT_0094539c);
      if (param_1 == 0) {
        iVar2 = 0;
LAB_00083820:
        if (*(int *)(param_2 * 0x400 + 0xa453b4 + iVar2 * 8) != param_4) goto LAB_00083814;
        iVar1 = (iVar2 + param_2 * 0x8000) * 8;
        puVar3 = &DAT_009453b4 + iVar1;
        *(undefined4 *)(&DAT_00a453b8 + (iVar2 + param_2 * 0x80) * 8) = param_5;
        do {
          *(undefined4 *)(puVar3 + 4) = param_5;
          puVar3 = puVar3 + 0x400;
        } while (puVar3 != (undefined *)(iVar1 + 0x9853b4));
        if (iVar2 != 0x7f) goto LAB_000837c0;
        iVar2 = -4;
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_0094539c);
        goto LAB_000837e8;
      }
      if (param_1 == 1) {
        iVar2 = 0;
        do {
          if (*(int *)(&DAT_009453b4 + iVar2 * 8 + (param_2 * 0x100 + param_3) * 0x400) == param_4)
          {
            *(undefined4 *)(&DAT_009453b8 + (iVar2 + (param_2 * 0x100 + param_3) * 0x80) * 8) =
                 param_5;
            if (iVar2 == 0x7f) {
              iVar2 = -5;
              pthread_mutex_unlock((pthread_mutex_t *)&DAT_0094539c);
              goto LAB_000837e8;
            }
            break;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 != 0x80);
LAB_000837c0:
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_0094539c);
        return 0;
      }
      iVar2 = -6;
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0094539c);
LAB_000837e8:
      printf("set_register_cache_value failed, ret = %d",iVar2);
    }
    else {
      iVar2 = -2;
    }
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
LAB_00083814:
  iVar2 = iVar2 + 1;
  if (iVar2 == 0x80) goto LAB_000837c0;
  goto LAB_00083820;
}

