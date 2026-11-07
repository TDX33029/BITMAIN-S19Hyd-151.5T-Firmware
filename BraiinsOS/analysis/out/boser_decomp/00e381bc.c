// FUN_00e381bc @ 00e381bc size=240 calls_out=4 calls_in=2
// strings: autotuning not supported

void FUN_00e381bc(int *param_1,int param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_91;
  int local_90;
  int local_8c;
  int *local_88;
  undefined1 auStack_84 [92];
  undefined1 *local_28;
  code *local_24;
  
  local_91 = (undefined1)param_3;
  piVar4 = (int *)(param_2 + 0x1a8);
  if ((*(int *)(param_2 + 0x1a8) == 2 && *(int *)(param_2 + 0x1ac) == 0) &&
     (FUN_01a71aac(&local_90,9,"autotuning not supported",0x18), piVar4 = local_88,
     local_90 != 3 || local_8c != 0)) {
    FUN_01bed4e2(param_1 + 3,auStack_84,0x5c);
    *param_1 = local_90;
    param_1[1] = local_8c;
  }
  else {
    iVar3 = piVar4[0x1c];
    pbVar2 = (byte *)piVar4[0x1b];
    do {
      if (iVar3 == 0) {
        local_24 = FUN_00e38718;
        local_28 = &local_91;
        FUN_00664898(&local_90,&DAT_0059b2d5,&local_28);
        FUN_01a70fd4(param_1,9,&local_90);
        return;
      }
      bVar1 = *pbVar2;
      iVar3 = iVar3 + -1;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != param_3);
    *param_1 = 3;
    param_1[1] = 0;
    local_88 = piVar4;
  }
  param_1[2] = (int)local_88;
  return;
}

