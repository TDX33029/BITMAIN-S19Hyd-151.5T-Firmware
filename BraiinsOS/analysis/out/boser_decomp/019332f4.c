// FUN_019332f4 @ 019332f4 size=448 calls_out=6 calls_in=0
// strings: 

void FUN_019332f4(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,uint param_5,
                 uint param_6)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_50;
  uint uStack_4c;
  uint uStack_48;
  undefined2 local_42;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  char local_3d;
  undefined1 auStack_3c [12];
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  
  if (*(int *)(param_3 + 4) == 0) {
    iVar2 = *(int *)(param_3 + 0xc);
  }
  else {
    iVar2 = *(int *)(param_3 + 0x10) - *(int *)(param_3 + 0xc);
  }
  iVar2 = iVar2 + 0x11;
  FUN_01931298(&local_60,iVar2);
  local_28 = param_5 << 0x18 | (param_5 >> 8 & 0xff) << 0x10 | (param_5 >> 0x10 & 0xff) << 8 |
             param_5 >> 0x18;
  local_2c = param_6 << 0x18 | (param_6 >> 8 & 0xff) << 0x10 | (param_6 >> 0x10 & 0xff) << 8 |
             param_6 >> 0x18;
  iVar3 = 0;
  local_30 = 0;
  do {
    auStack_3c[iVar3 + 0xc] = auStack_3c[iVar3 + 0xc] ^ *(byte *)(param_2 + 0xc + iVar3);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0xc);
  local_50 = local_30;
  uStack_4c = local_2c;
  uStack_48 = local_28;
  local_3f = (undefined1)((uint)iVar2 >> 8);
  local_40 = 3;
  local_3e = (undefined1)iVar2;
  local_42 = 0x317;
  FUN_019311e4((int *)(param_3 + 4),&local_60);
  uVar1 = 0x14;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_3 + 0x14)) {
  case 1:
    uVar1 = 0x15;
    break;
  case 2:
    uVar1 = 0x16;
    break;
  case 3:
    uVar1 = 0x17;
    break;
  case 4:
    uVar1 = 0x18;
    break;
  case 5:
    uVar1 = *(undefined1 *)(param_3 + 0x15);
  }
  local_30._0_1_ = uVar1;
  FUN_01ac6cbc(&local_60,&local_30,1);
  FUN_01bed4e2((int)&local_30 + 1,&local_50,0xc);
  local_30 = CONCAT31(local_30._1_3_,1);
  FUN_01932040(&local_3d,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),&local_30,
               &local_42,&local_60);
  if (local_3d == '\0') {
    FUN_01bed4e2(&local_30,auStack_3c,0xc);
    iVar2 = 0;
    do {
      *(undefined1 *)((int)&local_30 + iVar2) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0xc);
    param_1[1] = local_60;
    param_1[2] = local_5c;
    param_1[3] = uStack_58;
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

