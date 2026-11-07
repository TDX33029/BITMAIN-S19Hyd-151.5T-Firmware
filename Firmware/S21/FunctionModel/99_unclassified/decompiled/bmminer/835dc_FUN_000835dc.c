// FUN_000835dc @ 000835dc  size=340  callers=26
// program: bmminer


int FUN_000835dc(int param_1,uint param_2,uint param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  
  if (param_2 < 4) {
    if (param_3 < 0x100) {
      pthread_mutex_lock((pthread_mutex_t *)&DAT_0094539c);
      if (param_1 == 0) {
        iVar1 = 0;
        do {
          if (*(int *)(param_2 * 0x400 + 0xa453b4 + iVar1 * 8) == param_4) {
            *param_5 = *(undefined4 *)(&DAT_00a453b8 + (iVar1 + param_2 * 0x80) * 8);
            if (iVar1 == 0x7f) {
              iVar1 = -4;
              pthread_mutex_unlock((pthread_mutex_t *)&DAT_0094539c);
              goto LAB_00083698;
            }
            break;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 != 0x80);
      }
      else {
        if (param_1 != 1) {
          iVar1 = -6;
          pthread_mutex_unlock((pthread_mutex_t *)&DAT_0094539c);
LAB_00083698:
          printf("get_register_cache_value failed, ret = %d",iVar1);
          return iVar1;
        }
        iVar1 = 0;
        do {
          if (*(int *)(&DAT_009453b4 + iVar1 * 8 + (param_2 * 0x100 + param_3) * 0x400) == param_4)
          {
            *param_5 = *(undefined4 *)
                        (&DAT_009453b8 + (iVar1 + (param_2 * 0x100 + param_3) * 0x80) * 8);
            if (iVar1 == 0x7f) {
              iVar1 = -5;
              pthread_mutex_unlock((pthread_mutex_t *)&DAT_0094539c);
              goto LAB_00083698;
            }
            break;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 != 0x80);
      }
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0094539c);
      return 0;
    }
    iVar1 = -2;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

