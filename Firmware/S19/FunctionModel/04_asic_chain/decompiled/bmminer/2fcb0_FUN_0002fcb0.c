// FUN_0002fcb0 @ 0002fcb0  size=764  callers=1
// program: bmminer


undefined4 FUN_0002fcb0(uint param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar7;
  int iVar8;
  int local_848;
  int local_840;
  undefined1 auStack_838 [8];
  undefined1 auStack_830 [8];
  char acStack_828 [2052];
  
  iVar4 = FUN_000201d8(param_3);
  if (iVar4 != 0) {
    uVar7 = param_3 & 0xff;
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0008a98c);
    FUN_00019ae0();
    DAT_0008a9a4 = 1;
    FUN_0002f798();
    if (param_1 == 2) {
      iVar4 = FUN_0002009c();
      FUN_000585e8(uVar7,param_2 * iVar4,2);
    }
    else if (param_1 == 6) {
      iVar4 = FUN_0002009c();
      FUN_000585cc(uVar7,param_2 * iVar4);
    }
    else {
      iVar4 = FUN_0002009c();
      FUN_000591fc(uVar7,param_2 * iVar4,param_1 & 0xff);
    }
    local_848 = 0;
    local_840 = 0;
    usleep(100000);
    do {
      pthread_mutex_lock((pthread_mutex_t *)&DAT_0008a974);
      iVar4 = DAT_00722a08;
      if (DAT_00722a08 < 1) {
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_0008a974);
        if (iVar4 == 0) {
          usleep(1000);
        }
      }
      else {
        iVar8 = 0;
        do {
          DAT_00722a08 = DAT_00722a08 + -1;
          iVar8 = iVar8 + 1;
          uVar7 = DAT_00722a04 + 1;
          iVar1 = uVar7 * 8;
          DAT_00722a04 = uVar7;
          if (0x1fe < uVar7) {
            DAT_00722a04 = 0;
          }
          if ((*(byte *)((int)&DAT_00722a08 + iVar1 + 3) == param_3) &&
             (*(char *)((int)&DAT_00722a08 + iVar1 + 2) == '@')) {
            uVar2 = *(undefined1 *)((int)&DAT_00722a08 + iVar1 + 1);
            uVar5 = FUN_0002009c();
            iVar6 = FUN_00067408(uVar2,uVar5);
            if (iVar6 == param_2) {
              uVar3 = *(undefined2 *)((int)&DAT_00722a04 + iVar1 + 2);
              local_848 = local_848 + 1;
              uVar5 = FUN_0002005c();
              FUN_000673ec(uVar3,uVar5);
              if (*(int *)(param_4 + extraout_r1 * 4) == 0) {
                uVar7 = (&DAT_00722a04)[uVar7 * 2];
                local_840 = local_840 + 1;
                uVar5 = FUN_0002005c();
                FUN_000673ec(uVar7 >> 0x10,uVar5);
                *(uint *)(param_4 + extraout_r1_00 * 4) = uVar7 & 0xffff;
              }
            }
          }
        } while (iVar4 != iVar8);
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_0008a974);
      }
      FUN_00034828(auStack_830);
      iVar4 = FUN_00034b00(auStack_830,auStack_838);
    } while (iVar4 < 200);
    iVar4 = FUN_0002005c();
    if ((local_840 != iVar4) && (3 < DAT_00087bbc)) {
      iVar4 = FUN_0002005c();
      snprintf(acStack_828,0x800,
               "recv core response not enough!!!, total recv::%d, valid::%d, need::%d.\n",local_848,
               local_840,iVar4);
      FUN_00032218(3,acStack_828,0);
    }
    DAT_0008a9a4 = 0;
    FUN_00019af4();
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0008a98c);
    return 0;
  }
  if (DAT_00087bbc < 4) {
    return 0xffffffff;
  }
  snprintf(acStack_828,0x800,"chain::%d don\'t exist!!!\n",param_3);
  FUN_00032218(3,acStack_828,0);
  return 0xffffffff;
}

