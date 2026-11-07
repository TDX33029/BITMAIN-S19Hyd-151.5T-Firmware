// FUN_0003009c @ 0003009c  size=584  callers=4
// program: cgminer


int * FUN_0003009c(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  char *__format;
  char local_820 [2052];
  
  piVar2 = (int *)FUN_0001f8e8(0x748,1,"cgminer.c","add_pool",0x304);
  iVar3 = DAT_00072e70;
  *piVar2 = DAT_00072e70;
  iVar1 = DAT_00072e70;
  *(undefined1 *)(piVar2 + 0xa5) = 0;
  piVar2[1] = iVar3;
  DAT_00072f14 = FUN_0001f978(DAT_00072f14,(iVar1 + 2) * 4,"cgminer.c","add_pool",0x310);
  iVar3 = DAT_00072e70 * 4;
  DAT_00072e70 = DAT_00072e70 + 1;
  *(int **)(DAT_00072f14 + iVar3) = piVar2;
  iVar3 = pthread_mutex_init((pthread_mutex_t *)(piVar2 + 0x2f),(pthread_mutexattr_t *)0x0);
  if (iVar3 == 0) {
    iVar3 = pthread_cond_init((pthread_cond_t *)(piVar2 + 0x4a),(pthread_condattr_t *)0x0);
    if (iVar3 != 0) {
      builtin_strncpy(local_820,"Failed to pthread_cond_init in add_pool",0x28);
      goto LAB_00030220;
    }
    iVar3 = pthread_mutex_init((pthread_mutex_t *)(piVar2 + 0x35),(pthread_mutexattr_t *)0x0);
    if (iVar3 == 0) {
      iVar3 = pthread_rwlock_init((pthread_rwlock_t *)(piVar2 + 0x3b),(pthread_rwlockattr_t *)0x0);
      if (iVar3 == 0) {
        iVar3 = pthread_mutex_init((pthread_mutex_t *)(piVar2 + 0xb4),(pthread_mutexattr_t *)0x0);
        if (iVar3 == 0) {
          iVar3 = pthread_mutex_init((pthread_mutex_t *)(piVar2 + 0xbd),(pthread_mutexattr_t *)0x0);
          if (iVar3 == 0) {
            iVar3 = pthread_rwlock_init((pthread_rwlock_t *)(piVar2 + 0xc3),
                                        (pthread_rwlockattr_t *)0x0);
            if (iVar3 == 0) {
              piVar2[0x22] = -1;
              piVar2[0x2e] = 0;
              piVar2[0x28] = (int)"{\"method\": \"getwork\", \"params\": [], \"id\":0}\n";
              piVar2[0x56] = (int)(piVar2 + 0x56);
              piVar2[0x57] = (int)(piVar2 + 0x56);
              piVar2[0xe] = 1;
              FUN_0002a2a8();
              *(undefined1 *)(piVar2 + 0x91) = 0;
              return piVar2;
            }
            piVar2 = __errno_location();
            iVar3 = *piVar2;
            uVar4 = 0x31c;
            goto LAB_000301f8;
          }
          piVar2 = __errno_location();
          iVar3 = *piVar2;
          uVar4 = 0x31c;
          __format = "Failed to pthread_mutex_init errno=%d in %s %s():%d";
        }
        else {
          piVar2 = __errno_location();
          iVar3 = *piVar2;
          uVar4 = 0x31b;
          __format = "Failed to pthread_mutex_init errno=%d in %s %s():%d";
        }
      }
      else {
        piVar2 = __errno_location();
        uVar4 = 0x31a;
        iVar3 = *piVar2;
LAB_000301f8:
        __format = "Failed to pthread_rwlock_init errno=%d in %s %s():%d";
      }
    }
    else {
      piVar2 = __errno_location();
      iVar3 = *piVar2;
      uVar4 = 0x31a;
      __format = "Failed to pthread_mutex_init errno=%d in %s %s():%d";
    }
  }
  else {
    piVar2 = __errno_location();
    iVar3 = *piVar2;
    uVar4 = 0x313;
    __format = "Failed to pthread_mutex_init errno=%d in %s %s():%d";
  }
  snprintf(local_820,0x800,__format,iVar3,"cgminer.c","add_pool",uVar4);
LAB_00030220:
  FUN_0001dd98(3,local_820,1);
                    /* WARNING: Subroutine does not return */
  FUN_0002c290(1);
}

