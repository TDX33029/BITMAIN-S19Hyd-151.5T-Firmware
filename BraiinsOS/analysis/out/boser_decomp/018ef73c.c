// FUN_018ef73c @ 018ef73c size=484 calls_out=6 calls_in=0
// strings: 

void FUN_018ef73c(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,uint param_5,
                 uint param_6)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined4 local_60;
  int local_5c;
  uint local_58;
  undefined4 local_50;
  uint uStack_4c;
  uint uStack_48;
  undefined4 local_40;
  uint local_3c;
  uint local_38;
  undefined2 local_29;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  
  if (*(int *)(param_3 + 4) == 0) {
    iVar3 = *(int *)(param_3 + 0xc);
  }
  else {
    iVar3 = *(int *)(param_3 + 0x10) - *(int *)(param_3 + 0xc);
  }
  iVar3 = iVar3 + 0x11;
  FUN_01931298(&local_60,iVar3);
  local_38 = param_5 << 0x18 | (param_5 >> 8 & 0xff) << 0x10 | (param_5 >> 0x10 & 0xff) << 8 |
             param_5 >> 0x18;
  local_3c = param_6 << 0x18 | (param_6 >> 8 & 0xff) << 0x10 | (param_6 >> 0x10 & 0xff) << 8 |
             param_6 >> 0x18;
  iVar4 = 0;
  local_40 = 0;
  do {
    *(byte *)((int)&local_40 + iVar4) =
         *(byte *)((int)&local_40 + iVar4) ^ *(byte *)(param_2 + iVar4 + 0x220);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0xc);
  local_50 = local_40;
  uStack_4c = local_3c;
  uStack_48 = local_38;
  FUN_019311e4((int *)(param_3 + 4),&local_60);
  uVar2 = 0x14;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_3 + 0x14)) {
  case 1:
    uVar2 = 0x15;
    break;
  case 2:
    uVar2 = 0x16;
    break;
  case 3:
    uVar2 = 0x17;
    break;
  case 4:
    uVar2 = 0x18;
    break;
  case 5:
    uVar2 = *(undefined1 *)(param_3 + 0x15);
  }
  local_40 = CONCAT31(local_40._1_3_,uVar2);
  FUN_01ac6cbc(&local_60,&local_40,1);
  uVar1 = local_58;
  iVar4 = local_5c;
  local_27 = 3;
  local_25 = (undefined1)iVar3;
  local_26 = (undefined1)((uint)iVar3 >> 8);
  local_29 = 0x317;
  if (local_58 < 5) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(5,local_58,local_58,&DAT_01d255e8);
  }
  pcVar5 = *(code **)(*(int *)(param_2 + 0x210) + 4);
  DataMemoryBarrier(0xb);
  if (DAT_01d51afc != '\x02') {
    FUN_0188ff90();
  }
  (*pcVar5)(&local_40,param_2,&local_50,&local_29,5,iVar4 + 5,uVar1 - 5);
  if ((char)local_40 == '\0') {
    FUN_01ac6cbc(&local_60,(int)&local_40 + 1,0x10);
    param_1[1] = local_60;
    param_1[2] = local_5c;
    param_1[3] = local_58;
    *(undefined1 *)(param_1 + 5) = 3;
    *(undefined2 *)(param_1 + 4) = 4;
    *param_1 = 0x80000029;
  }
  else {
    *param_1 = 0x8000001a;
    FUN_0134bd64(local_60,local_5c);
  }
  return;
}

