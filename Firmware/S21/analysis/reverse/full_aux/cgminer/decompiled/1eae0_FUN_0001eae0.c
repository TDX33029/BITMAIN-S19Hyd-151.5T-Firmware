// FUN_0001eae0 @ 0001eae0  size=656  callers=3
// program: cgminer


undefined4 FUN_0001eae0(int param_1,char *param_2,int param_3)

{
  size_t sVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  __suseconds_t *p_Var5;
  uint uVar6;
  uint uVar7;
  uint local_844;
  size_t local_83c;
  timeval local_830;
  fd_set local_828 [16];
  
  uVar6 = *(uint *)(param_1 + 0x24c);
  if (((DAT_00072ed8 != '\0') && (DAT_000686f1 != '\0')) &&
     ((DAT_00072da0 != '\0' || ((DAT_000686f0 != '\0' || (6 < DAT_00067848)))))) {
    snprintf((char *)local_828,0x800,"SEND: %s",param_2);
    FUN_0001dd98(7,local_828,0);
  }
  local_83c = param_3 + 1;
  sVar1 = strlen(param_2);
  (param_2 + sVar1)[0] = '\n';
  (param_2 + sVar1)[1] = '\0';
  if ((int)local_83c < 1) {
    local_844 = 0;
    iVar2 = 0;
  }
  else {
    uVar4 = uVar6 + 0x1f;
    if (-1 < (int)uVar6) {
      uVar4 = uVar6;
    }
    uVar7 = uVar6 & 0x1f;
    if (-1 < (int)-uVar6) {
      uVar7 = -(-uVar6 & 0x1f);
    }
    local_844 = 0;
    do {
      while( true ) {
        local_830.tv_usec = 0;
        local_830.tv_sec = 1;
        while( true ) {
          p_Var5 = &local_830.tv_usec;
          do {
            p_Var5 = p_Var5 + 1;
            *p_Var5 = 0;
          } while (local_828[0].fds_bits + 0x1f != p_Var5);
          local_828[0].fds_bits[(int)uVar4 >> 5] =
               local_828[0].fds_bits[(int)uVar4 >> 5] | 1 << (uVar7 & 0xff);
          iVar2 = select(uVar6 + 1,(fd_set *)0x0,local_828,(fd_set *)0x0,&local_830);
          if (0 < iVar2) break;
          piVar3 = __errno_location();
          if (*piVar3 != 4) {
            return 1;
          }
        }
        if (*(char *)(param_1 + 0x250) == '\0') break;
        iVar2 = SSL_write(*(SSL **)(param_1 + 0x254),param_2 + local_844,local_83c);
        if (-1 < iVar2) goto LAB_0001ec44;
LAB_0001ed34:
        piVar3 = __errno_location();
        if (*piVar3 != 0xb) {
          return 2;
        }
      }
      iVar2 = send(*(int *)(param_1 + 0x24c),param_2 + local_844,local_83c,0x4000);
      if (iVar2 < 0) goto LAB_0001ed34;
LAB_0001ec44:
      local_83c = local_83c - iVar2;
      local_844 = local_844 + iVar2;
    } while (0 < (int)local_83c);
    iVar2 = (int)local_844 >> 0x1f;
  }
  uVar6 = *(uint *)(param_1 + 0x1f0);
  uVar7 = *(uint *)(param_1 + 0x1f8);
  *(uint *)(param_1 + 0x1f0) = uVar6 + 1;
  uVar4 = *(uint *)(param_1 + 0x200);
  *(uint *)(param_1 + 500) = *(int *)(param_1 + 500) + (uint)(0xfffffffe < uVar6);
  *(uint *)(param_1 + 0x1f8) = uVar7 + local_844;
  *(uint *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + iVar2 + (uint)CARRY4(uVar7,local_844);
  *(uint *)(param_1 + 0x200) = uVar4 + local_844;
  *(uint *)(param_1 + 0x204) = *(int *)(param_1 + 0x204) + iVar2 + (uint)CARRY4(uVar4,local_844);
  return 0;
}

