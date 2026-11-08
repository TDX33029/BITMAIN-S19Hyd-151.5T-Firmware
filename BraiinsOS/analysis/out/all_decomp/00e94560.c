// FUN_00e94560 @ 00e94560 size=180 calls_out=5 calls_in=0
// strings: [internal exception] blocking task ran twice.the timer is shutdown; must be called from the context of Tokio runtimetimer is at capacity and cannot create a new entrytimer duration exceeds maximum duration

void FUN_00e94560(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar3 = *param_2;
  iVar1 = param_2[1];
  *param_2 = -0x80000000;
  if (iVar3 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("[internal exception] blocking task ran twice.the timer is shutdown, must be called from the context of Tokio runtimetimer is at capacity and cannot create a new entrytimer duration exceeds maximum duration"
                 ,0x2d,&DAT_018ad3f4);
  }
  uVar4 = thunk_FUN_016de0ee(0x80000000,0x40,param_2[2]);
  iVar2 = (int)uVar4 + (int)((ulonglong)uVar4 >> 0x20);
  if (*(char *)(iVar2 + 0x38) != '\x01') {
    if (*(char *)(iVar2 + 0x38) == '\x02') goto LAB_00e945d0;
    FUN_015e8e6c(iVar2,FUN_01655ec4);
    *(undefined1 *)(iVar2 + 0x38) = 1;
  }
  *(undefined1 *)(iVar2 + 0x30) = 0;
LAB_00e945d0:
  FUN_015ec424(&local_28,iVar1);
  if (iVar3 != 0) {
    thunk_FUN_016d3fb4(iVar1);
  }
  *param_1 = local_28;
  param_1[1] = uStack_24;
  param_1[2] = uStack_20;
  return;
}

