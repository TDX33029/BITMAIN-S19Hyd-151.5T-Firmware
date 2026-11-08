// FUN_015342a0 @ 015342a0 size=500 calls_out=1 calls_in=0
// strings: 

void FUN_015342a0(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,uint param_5,
                 uint param_6)

{
  char cVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined2 local_35;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  
  uVar5 = *(uint *)(param_3 + 8);
  if (uVar5 < 0x10) {
    *param_1 = &DAT_80000019;
    return;
  }
  local_35 = 0x317;
  local_30 = *(undefined4 *)(param_2 + 0x10);
  local_32 = (undefined1)(uVar5 >> 8);
  local_33 = 3;
  local_28 = (uint)*(byte *)(param_2 + 0x18) ^ param_5 >> 0x18 |
             ((uint)*(byte *)(param_2 + 0x19) ^ param_5 >> 0x10 & 0xff) << 8 |
             ((uint)*(byte *)(param_2 + 0x1a) ^ param_5 >> 8 & 0xff) << 0x10 |
             ((uint)*(byte *)(param_2 + 0x1b) ^ param_5 & 0xff) << 0x18;
  local_31 = (undefined1)uVar5;
  iVar4 = *(int *)(param_3 + 4);
  local_2c = (uint)*(byte *)(param_2 + 0x14) ^ param_6 >> 0x18 |
             ((uint)*(byte *)(param_2 + 0x15) ^ param_6 >> 0x10 & 0xff) << 8 |
             ((uint)*(byte *)(param_2 + 0x16) ^ param_6 >> 8 & 0xff) << 0x10 |
             ((uint)*(byte *)(param_2 + 0x17) ^ param_6 & 0xff) << 0x18;
  uVar6 = FUN_015344a8(param_2,&local_30,&local_35,iVar4,uVar5);
  uVar2 = (uint)((ulonglong)uVar6 >> 0x20);
  if ((int)uVar6 == 0) {
    *param_1 = &DAT_80000019;
    return;
  }
  if (uVar2 < uVar5) {
    uVar5 = uVar2;
  }
  if (0x4001 < uVar5) {
    *param_1 = &DAT_80000024;
    return;
  }
  do {
    if (uVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0x16;
      *param_1 = &DAT_8000001c;
      return;
    }
    cVar1 = *(char *)(iVar4 + -1 + uVar5);
    uVar5 = uVar5 - 1;
  } while (cVar1 == '\0');
  switch(cVar1) {
  case '\x14':
    uVar3 = 0;
    cVar1 = '\0';
    break;
  case '\x15':
    cVar1 = '\0';
    uVar3 = 1;
    break;
  case '\x16':
    cVar1 = '\0';
    uVar3 = 2;
    break;
  case '\x17':
    cVar1 = '\0';
    uVar3 = 3;
    break;
  case '\x18':
    cVar1 = '\0';
    uVar3 = 4;
    break;
  default:
    uVar3 = 5;
  }
  *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)(param_3 + 2);
  *(undefined2 *)(param_1 + 1) = 5;
  *(char *)((int)param_1 + 0x11) = cVar1;
  *(undefined1 *)(param_1 + 4) = uVar3;
  param_1[2] = iVar4;
  param_1[3] = uVar5;
  *param_1 = 0x80000029;
  return;
}

