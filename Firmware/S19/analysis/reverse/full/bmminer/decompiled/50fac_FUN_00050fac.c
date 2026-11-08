// FUN_00050fac @ 00050fac  size=228  callers=1
// program: bmminer


int FUN_00050fac(void)

{
  undefined4 uVar1;
  int local_814;
  char local_810 [2048];
  
  local_814 = -1;
  if (DAT_0050f5e0 == 0) {
    builtin_strncpy(local_810,"please init platform first!!\n",0x1e);
    FUN_00032218(0,local_810,0);
    local_814 = -2;
  }
  else {
    if (DAT_0050fc5c == 0) {
      uVar1 = FUN_00048b84(&LAB_00050ed8,0,0);
      DAT_0050fc60 = uVar1;
      pthread_mutex_init((pthread_mutex_t *)&DAT_0050fc64,(pthread_mutexattr_t *)0x0);
    }
    else {
      uVar1 = DAT_0050fc60;
    }
    DAT_0050fc5c = DAT_0050fc5c + 1;
    local_810[0] = '\0';
    local_810[1] = '\0';
    local_810[2] = '\0';
    local_810[3] = '\0';
    local_810[4] = '\0';
    local_810[5] = '\0';
    local_810[6] = '\0';
    local_810[7] = '\0';
    local_814 = DAT_0050fc5c;
    FUN_00048bd4(uVar1,&local_814,4,local_810,8);
  }
  return local_814;
}

