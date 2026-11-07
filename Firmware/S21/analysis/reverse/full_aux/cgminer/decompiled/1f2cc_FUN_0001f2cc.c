// FUN_0001f2cc @ 0001f2cc  size=148  callers=5
// program: cgminer


bool FUN_0001f2cc(uint param_1,uint param_2)

{
  int iVar1;
  __suseconds_t *p_Var2;
  uint uVar3;
  uint uVar4;
  timeval local_90;
  fd_set local_88;
  
  local_90.tv_sec = param_2 & ~((int)param_2 >> 0x1f);
  p_Var2 = &local_90.tv_usec;
  do {
    p_Var2 = p_Var2 + 1;
    *p_Var2 = 0;
  } while (local_88.fds_bits + 0x1f != p_Var2);
  uVar4 = param_1 + 0x1f;
  if (-1 < (int)param_1) {
    uVar4 = param_1;
  }
  local_90.tv_usec = 0;
  uVar3 = param_1 & 0x1f;
  if (-1 < (int)-param_1) {
    uVar3 = -(-param_1 & 0x1f);
  }
  local_88.fds_bits[(int)uVar4 >> 5] = local_88.fds_bits[(int)uVar4 >> 5] | 1 << (uVar3 & 0xff);
  iVar1 = select(param_1 + 1,&local_88,(fd_set *)0x0,(fd_set *)0x0,&local_90);
  return 0 < iVar1;
}

