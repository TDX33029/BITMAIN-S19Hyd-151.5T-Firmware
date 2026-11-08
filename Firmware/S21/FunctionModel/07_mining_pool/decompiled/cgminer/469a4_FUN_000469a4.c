// FUN_000469a4 @ 000469a4  size=252  callers=1
// program: cgminer


void FUN_000469a4(uint param_1)

{
  bool bVar1;
  char cVar2;
  int __fd;
  ssize_t sVar3;
  timeval local_20;
  
  cVar2 = DAT_00072c2c;
  if (DAT_00072c28 != 0) {
    return;
  }
  do {
    bVar1 = (bool)hasExclusiveAccess(0x72c2c);
  } while (!bVar1);
  DAT_00072c2c = 1;
  if (cVar2 != '\0') {
    do {
      sched_yield();
      DataMemoryBarrier(0xb);
    } while (DAT_00072c28 == 0);
    return;
  }
  if (param_1 != 0) goto LAB_000469f4;
  __fd = open64("/dev/urandom",0);
  if (__fd == -1) {
LAB_00046a78:
    gettimeofday(&local_20,(__timezone_ptr_t)0x0);
    param_1 = getpid();
    param_1 = param_1 ^ local_20.tv_usec ^ local_20.tv_sec;
  }
  else {
    sVar3 = read(__fd,&local_20,4);
    close(__fd);
    if (sVar3 != 4) goto LAB_00046a78;
    param_1 = CONCAT31(CONCAT21(CONCAT11((undefined1)local_20.tv_sec,local_20.tv_sec._1_1_),
                                local_20.tv_sec._2_1_),local_20.tv_sec._3_1_);
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
LAB_000469f4:
  DataMemoryBarrier(0xb);
  DAT_00072c28 = param_1;
  return;
}

