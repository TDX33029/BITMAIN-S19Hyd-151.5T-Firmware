// FUN_0003c088 @ 0003c088  size=64  callers=0
// program: bmminer


void FUN_0003c088(int param_1)

{
  int iVar1;
  epoll_event eStack_18;
  
  FUN_0003aab8();
  do {
    do {
      iVar1 = epoll_wait(*(int *)(param_1 + 0x18),&eStack_18,1,-1);
    } while (iVar1 < 1);
    (**(code **)eStack_18.data.ptr)(&eStack_18);
  } while( true );
}

