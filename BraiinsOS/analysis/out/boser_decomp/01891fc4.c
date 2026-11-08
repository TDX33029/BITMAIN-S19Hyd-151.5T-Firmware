// FUN_01891fc4 @ 01891fc4 size=228 calls_out=3 calls_in=2
// strings: 

void FUN_01891fc4(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  DataMemoryBarrier(0xb);
  if (DAT_01d51afc != '\x02') {
    FUN_0188ff90();
  }
  iVar2 = *param_2;
  FUN_01bed93e(&local_50,0,0x30);
  if (0x30 < *(uint *)(iVar2 + 0x10)) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,*(uint *)(iVar2 + 0x10),0x30,&DAT_01d2138c);
  }
  iVar1 = (**(code **)(iVar2 + 4))(param_3,param_4,&local_50);
  if (iVar1 == 0) {
    if (iVar2 != 0) {
      param_1[1] = local_50;
      param_1[2] = iStack_4c;
      param_1[3] = iStack_48;
      param_1[4] = iStack_44;
      param_1[5] = iStack_40;
      param_1[6] = iStack_3c;
      param_1[7] = local_38;
      param_1[8] = iStack_34;
      param_1[9] = iStack_30;
      param_1[10] = iStack_2c;
      param_1[0xb] = iStack_28;
      param_1[0xc] = iStack_24;
      param_1[0xd] = (int)param_2;
      goto LAB_01892080;
    }
  }
  iVar2 = 0;
LAB_01892080:
  *param_1 = iVar2;
  return;
}

