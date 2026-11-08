// FUN_01288758 @ 01288758 size=304 calls_out=1 calls_in=0
// strings: 

void FUN_01288758(int *param_1,byte param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = (char)((uint)((short)(ushort)param_2 * 0xcd) >> 0xb);
  if (param_2 < 10) {
    if (param_3 != '\x02') {
      if (param_3 != '\x01') {
        iVar3 = param_1[2];
        goto LAB_012887bc;
      }
      goto LAB_01288794;
    }
    iVar3 = param_1[2];
    iVar2 = iVar3;
    if (*param_1 == iVar3) {
      FUN_006520b4(param_1,iVar3,1,1,1);
      iVar2 = param_1[2];
    }
    *(undefined1 *)(param_1[1] + iVar2) = 0x20;
  }
  else {
LAB_01288794:
    iVar3 = param_1[2];
    iVar2 = iVar3;
    if (*param_1 == iVar3) {
      FUN_006520b4(param_1,iVar3,1,1,1);
      iVar2 = param_1[2];
    }
    *(char *)(param_1[1] + iVar2) = cVar1 + '0';
  }
  iVar3 = iVar3 + 1;
  param_1[2] = iVar3;
LAB_012887bc:
  iVar2 = iVar3;
  if (*param_1 == iVar3) {
    FUN_006520b4(param_1,iVar3,1,1,1);
    iVar2 = param_1[2];
  }
  *(byte *)(param_1[1] + iVar2) = param_2 + cVar1 * -10 | 0x30;
  param_1[2] = iVar3 + 1;
  return;
}

