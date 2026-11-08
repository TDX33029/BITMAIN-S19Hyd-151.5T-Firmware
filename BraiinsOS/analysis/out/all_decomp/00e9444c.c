// FUN_00e9444c @ 00e9444c size=228 calls_out=5 calls_in=0
// strings: [internal exception] blocking task ran twice.the timer is shutdown; must be called from the context of Tokio runtimetimer is at capacity and cannot create a new entrytimer duration exceeds maximum duration

void FUN_00e9444c(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int extraout_r2;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  iVar4 = *param_2;
  *param_2 = -0x80000000;
  if (iVar4 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("[internal exception] blocking task ran twice.the timer is shutdown, must be called from the context of Tokio runtimetimer is at capacity and cannot create a new entrytimer duration exceeds maximum duration"
                 ,0x2d,&DAT_018ad3f4);
  }
  uVar5 = thunk_FUN_016de0ee(0x80000000,param_2,0x40);
  iVar1 = (int)((ulonglong)uVar5 >> 0x20);
  iVar2 = (int)uVar5 + extraout_r2;
  uVar3 = *(undefined4 *)(iVar1 + 4);
  local_34 = *(undefined4 *)(iVar1 + 8);
  if (*(char *)(iVar2 + 0x38) != '\x01') {
    if (*(char *)(iVar2 + 0x38) == '\x02') goto LAB_00e944bc;
    FUN_015e8e6c(iVar2,FUN_01655ec4);
    *(undefined1 *)(iVar2 + 0x38) = 1;
  }
  *(undefined1 *)(iVar2 + 0x30) = 0;
LAB_00e944bc:
  local_30 = *(undefined4 *)(iVar1 + 0xc);
  uStack_2c = *(undefined4 *)(iVar1 + 0x10);
  uStack_28 = *(undefined4 *)(iVar1 + 0x14);
  local_24 = *(undefined4 *)(iVar1 + 0x18);
  local_3c = iVar4;
  local_38 = uVar3;
  FUN_015ec1bc(&local_48,&local_30,uVar3,local_34);
  if (iVar4 != 0) {
    thunk_FUN_016d3fb4(uVar3);
  }
  *param_1 = local_48;
  param_1[1] = uStack_44;
  return;
}

