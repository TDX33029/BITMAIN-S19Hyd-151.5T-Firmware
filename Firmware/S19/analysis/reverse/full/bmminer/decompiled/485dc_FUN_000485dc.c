// FUN_000485dc @ 000485dc  size=332  callers=0
// program: bmminer


undefined4 FUN_000485dc(int param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  void *__src;
  uint uVar3;
  size_t __n;
  bool bVar4;
  bool bVar5;
  char local_828 [8];
  undefined4 uStack_820;
  char acStack_81c [2040];
  
  if (DAT_0050f978 == 0) {
    uVar2 = 0xfffffffe;
  }
  else {
    if (DAT_0050f97c == param_1) {
      bVar5 = 0x3f < param_4;
      bVar4 = param_4 == 0x40;
      if (param_4 < 0x41) {
        bVar5 = 2 < (param_2 & 0xff);
        bVar4 = (param_2 & 0xff) == 3;
      }
      if (!bVar5 || bVar4) {
        iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0050f980);
        if (iVar1 != 0) {
          builtin_strncpy(local_828,"failed t",8);
          uStack_820._0_1_ = 'o';
          uStack_820._1_1_ = ' ';
          uStack_820._2_1_ = 'l';
          uStack_820._3_1_ = 'c';
          builtin_strncpy(acStack_81c,"d lock\n",8);
          FUN_00032218(0,local_828,0);
          return 0xfffffffc;
        }
        iVar1 = 0;
        do {
          uVar3 = param_2 + 1;
          __n = param_4;
          if (0xf < param_4) {
            __n = 0x10;
          }
          __src = (void *)(param_3 + iVar1);
          iVar1 = iVar1 + __n;
          memcpy(&DAT_0050f998 + param_2 * 0x10,__src,__n);
          param_4 = param_4 - __n;
          param_2 = (uint)(char)uVar3;
        } while ((uVar3 & 0xff) < 4 && param_4 != 0);
        write(DAT_0050f97c,&DAT_0050f998,0x40);
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050f980);
        return 0;
      }
    }
    builtin_strncpy(local_828,"bad para",8);
    uStack_820 = CONCAT13(uStack_820._3_1_,0xa6d);
    FUN_00032218(1,local_828,0);
    uVar2 = 0xfffffffd;
  }
  return uVar2;
}

