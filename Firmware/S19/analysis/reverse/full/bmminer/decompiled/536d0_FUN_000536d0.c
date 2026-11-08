// FUN_000536d0 @ 000536d0  size=252  callers=1
// program: bmminer


void FUN_000536d0(uint param_1)

{
  bool bVar1;
  char cVar2;
  int __fd;
  ssize_t sVar3;
  timeval local_20;
  
  cVar2 = DAT_0050fc80;
  if (DAT_0050fc7c != 0) {
    return;
  }
  do {
    bVar1 = (bool)hasExclusiveAccess(0x50fc80);
  } while (!bVar1);
  DAT_0050fc80 = 1;
  if (cVar2 != '\0') {
    do {
      sched_yield();
      DataMemoryBarrier(0xb);
    } while (DAT_0050fc7c == 0);
    return;
  }
  if (param_1 != 0) goto LAB_00053720;
  __fd = open64("/dev/urandom",0);
  if (__fd == -1) {
LAB_000537a4:
    gettimeofday(&local_20,(__timezone_ptr_t)0x0);
    param_1 = getpid();
    param_1 = param_1 ^ local_20.tv_usec ^ local_20.tv_sec;
  }
  else {
    sVar3 = read(__fd,&local_20,4);
    close(__fd);
    if (sVar3 != 4) goto LAB_000537a4;
    param_1 = CONCAT31(CONCAT21(CONCAT11((undefined1)local_20.tv_sec,local_20.tv_sec._1_1_),
                                local_20.tv_sec._2_1_),local_20.tv_sec._3_1_);
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
LAB_00053720:
  DataMemoryBarrier(0xb);
  DAT_0050fc7c = param_1;
  return;
}

