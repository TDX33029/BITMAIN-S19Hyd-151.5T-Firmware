// FUN_01754c7c @ 01754c7c size=200 calls_out=3 calls_in=0
// strings: Map must not be polled after it returned `Poll::Ready`

void FUN_01754c7c(undefined8 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_30;
  undefined2 local_2e;
  undefined4 local_28;
  undefined4 uStack_24;
  char cStack_1f;
  undefined4 uStack_20;
  
  iVar1 = *param_2;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("Map must not be polled after it returned `Poll::Ready`",0x36,&DAT_01d2da7c);
  }
  iVar2 = param_2[1];
  (**(code **)(iVar2 + 0xc))(&local_28,iVar1);
  if (cStack_1f == '\x03') {
    *(undefined1 *)((int)param_1 + 9) = 3;
  }
  else {
    FUN_01139b38(iVar1,iVar2);
    local_30 = (undefined1)uStack_20;
    *param_2 = 0;
    if (cStack_1f == '\x02') {
      uVar3 = FUN_016f8580();
      *param_1 = uVar3;
      *(undefined1 *)((int)param_1 + 9) = 2;
    }
    else {
      local_2e = (undefined2)((uint)uStack_20 >> 0x10);
      *(char *)((int)param_1 + 9) = cStack_1f;
      *(undefined1 *)(param_1 + 1) = local_30;
      *(undefined4 *)param_1 = local_28;
      *(undefined4 *)((int)param_1 + 4) = uStack_24;
      *(undefined2 *)((int)param_1 + 10) = local_2e;
    }
  }
  return;
}

