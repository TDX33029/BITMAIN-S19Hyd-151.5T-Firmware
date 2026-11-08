// FUN_00018a04 @ 00018a04  size=672  callers=1
// program: cgminer


void FUN_00018a04(uint *param_1,char *param_2)

{
  size_t sVar1;
  uint uVar2;
  int param4;
  ssize_t sVar3;
  int *piVar4;
  char *param6;
  __suseconds_t *p_Var5;
  size_t __n;
  int iVar6;
  uint uVar7;
  uint uVar8;
  timeval local_8b0;
  fd_set local_8a8;
  char acStack_828 [2052];
  
  iVar6 = 0;
  sVar1 = strlen(param_2);
  sVar1 = sVar1 + 1;
  __n = sVar1;
  do {
    p_Var5 = &local_8b0.tv_usec;
    local_8b0.tv_sec = 0;
    local_8b0.tv_usec = 50000;
    do {
      p_Var5 = p_Var5 + 1;
      *p_Var5 = 0;
    } while (p_Var5 != local_8a8.fds_bits + 0x1f);
    uVar2 = *param_1;
    uVar7 = uVar2 + 0x1f;
    if (-1 < (int)uVar2) {
      uVar7 = uVar2;
    }
    uVar8 = uVar2 & 0x1f;
    if (-1 < (int)-uVar2) {
      uVar8 = -(-uVar2 & 0x1f);
    }
    local_8a8.fds_bits[(int)uVar7 >> 5] = local_8a8.fds_bits[(int)uVar7 >> 5] | 1 << (uVar8 & 0xff);
    param4 = select(uVar2 + 1,(fd_set *)0x0,&local_8a8,(fd_set *)0x0,&local_8b0);
    if (param4 < 1) {
      if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 3)) {
        return;
      }
      snprintf(acStack_828,0x800,"%s: send select failed, ret = %d","send_api_result",param4);
      FUN_0001dd98(3,acStack_828,0);
      return;
    }
    sVar3 = send(*param_1,param_2,__n,0);
    if (sVar3 < 0) {
      piVar4 = __errno_location();
      if (*piVar4 != 0xb) {
        if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 3)) {
          return;
        }
        param6 = strerror(*piVar4);
        snprintf(acStack_828,0x800,"%s: send (%d:%d) failed %s","send_api_result",sVar1,sVar1 - __n,
                 param6);
        FUN_0001dd98(3,acStack_828,0);
        return;
      }
      if ((DAT_000686f1 != '\0') &&
         (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
        snprintf(acStack_828,0x800,"%s: send EAGAIN ","send_api_result");
        FUN_0001dd98(7,acStack_828,0);
      }
LAB_00018af4:
      iVar6 = iVar6 + 1;
    }
    else {
      __n = __n - sVar3;
      param_2 = param_2 + sVar3;
      if (sVar3 == 0) goto LAB_00018af4;
    }
    if ((int)__n < 1 || 2 < iVar6) {
      return;
    }
  } while( true );
}

