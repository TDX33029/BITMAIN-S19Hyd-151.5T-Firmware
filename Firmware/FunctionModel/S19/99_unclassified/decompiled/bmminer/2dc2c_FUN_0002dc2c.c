// FUN_0002dc2c @ 0002dc2c  size=348  callers=1
// program: bmminer


void FUN_0002dc2c(undefined4 *param_1,int *param_2,int param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6,uint param_7)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined4 uVar2;
  
  __mutex = (pthread_mutex_t *)(param_3 + 0xd4);
  iVar1 = FUN_0002ca7c();
  *param_2 = iVar1;
  uVar2 = *param_1;
  iVar1 = pthread_mutex_lock(__mutex);
  if (iVar1 != 0) {
    FUN_0002c9dc("get_work_by_nonce2",0x58f);
  }
  FUN_0002c8b0((pthread_rwlock_t *)(param_3 + 0xec),"get_work_by_nonce2",0x58f);
  param_7 = param_7 << 0x18 | (param_7 >> 8 & 0xff) << 0x10 | (param_7 >> 0x10 & 0xff) << 8 |
            param_7 >> 0x18;
  *(undefined4 *)(param_3 + 0x280) = param_5;
  *(undefined4 *)(param_3 + 0x284) = param_6;
  FUN_00035430(param_3 + 0x63c,&param_7,4,"bmminer.c","get_work_by_nonce2",0x592);
  iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)(param_3 + 0xec));
  if (iVar1 == 0) {
    iVar1 = pthread_mutex_unlock(__mutex);
  }
  else {
    FUN_0002c7e0("get_work_by_nonce2",0x593);
    iVar1 = pthread_mutex_unlock(__mutex);
  }
  if (iVar1 != 0) {
    FUN_0002c924("get_work_by_nonce2",0x593);
  }
  (*DAT_00087ce8)();
  FUN_0002d114(param_3,*param_2);
  *(undefined4 *)(*param_2 + 0x104) = param_4;
  *(undefined4 *)(*param_2 + 0x100) = uVar2;
  *(undefined4 *)(*param_2 + 0x150) = 0;
  *(int *)(*(int *)(*param_2 + 0x104) + 0x44) = *(int *)(*(int *)(*param_2 + 0x104) + 0x44) + 1;
  *(undefined1 *)(*param_2 + 0x110) = 1;
  *(uint *)(*param_2 + 0x1bc) = param_7;
  return;
}

