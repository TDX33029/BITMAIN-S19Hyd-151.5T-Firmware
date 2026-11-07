// FUN_00045408 @ 00045408  size=540  callers=2
// program: bmminer


void FUN_00045408(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint local_82c;
  char local_828 [2052];
  
  local_82c = 0;
  memset(&DAT_0050f4b8,0,0x124);
  FUN_00045bc4(2,&local_82c);
  if (local_82c == 0) {
    builtin_strncpy(local_828,"Cannot Find Any Plug In!\r\n",0x1b);
    FUN_00032218(0,local_828,0);
    return;
  }
  if ((int)local_82c < 0) {
    local_82c = local_82c >> 0x18;
    DAT_0050f5dc = 1;
    snprintf(local_828,0x800,"HASH_ON_PLUG T9 = 0x%x\n",local_82c);
    FUN_00032218(2,local_828,0);
    if (local_82c == 0) {
      return;
    }
    bVar2 = false;
    iVar3 = 0;
    iVar5 = DAT_0050f4b8;
    do {
      iVar6 = iVar5 * 0x48;
      if ((local_82c & 1) != 0) {
        *(int *)(&DAT_0050f4bc + iVar6) = iVar3;
        if (iVar3 == 1) {
          *(undefined4 *)(&DAT_0050f4c4 + iVar6) = 2;
          *(undefined4 *)(&DAT_0050f4c8 + iVar6) = 10;
          *(undefined4 *)(&DAT_0050f4cc + iVar6) = 0xb;
          *(undefined4 *)(&DAT_0050f4c0 + iVar6) = 3;
        }
        else if (iVar3 == 0) {
          *(undefined4 *)(&DAT_0050f4c4 + iVar6) = 1;
          *(undefined4 *)(&DAT_0050f4c8 + iVar6) = 8;
          *(undefined4 *)(&DAT_0050f4cc + iVar6) = 9;
          *(undefined4 *)(&DAT_0050f4c0 + iVar6) = 3;
        }
        else if (iVar3 == 2) {
          *(undefined4 *)(&DAT_0050f4c4 + iVar6) = 3;
          *(undefined4 *)(&DAT_0050f4c8 + iVar6) = 0xc;
          *(undefined4 *)(&DAT_0050f4cc + iVar6) = 0xd;
          *(undefined4 *)(&DAT_0050f4c0 + iVar6) = 3;
        }
        iVar5 = iVar5 + 1;
        bVar2 = true;
      }
      local_82c = local_82c >> 1;
      iVar3 = iVar3 + 1;
    } while (local_82c != 0);
  }
  else {
    local_82c = local_82c & 0xffff;
    DAT_0050f5dc = 0;
    snprintf(local_828,0x800,"HASH_ON_PLUG V9 = 0x%x\n",local_82c);
    FUN_00032218(2,local_828,0);
    if (local_82c == 0) {
      return;
    }
    bVar2 = false;
    iVar6 = 0;
    iVar3 = DAT_0050f4b8;
    do {
      iVar1 = iVar3 * 0x48;
      iVar5 = iVar3;
      if ((local_82c & 1) != 0) {
        iVar4 = *(int *)(&DAT_0050f4c0 + iVar1);
        bVar2 = true;
        iVar5 = iVar3 + 1;
        *(int *)(&DAT_0050f4bc + iVar1) = iVar6;
        *(int *)(&DAT_0050f4c0 + iVar1) = iVar4 + 1;
        *(int *)(&DAT_0050f4c4 + (iVar4 + iVar3 * 0x12) * 4) = iVar6;
      }
      local_82c = local_82c >> 1;
      iVar6 = iVar6 + 1;
      iVar3 = iVar5;
    } while (local_82c != 0);
  }
  if (bVar2) {
    DAT_0050f4b8 = iVar5;
  }
  return;
}

