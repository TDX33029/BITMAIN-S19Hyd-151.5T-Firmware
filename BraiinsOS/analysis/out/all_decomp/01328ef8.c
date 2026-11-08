// FUN_01328ef8 @ 01328ef8 size=284 calls_out=2 calls_in=122
// strings: 

void FUN_01328ef8(undefined4 *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_18;
  undefined1 local_14;
  
  uVar5 = *(uint *)(param_2 + 0x18);
  uVar6 = *(uint *)(param_2 + 0x1c);
  if (4 < uVar5 - uVar6) {
    if (uVar5 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar6,uVar5,uVar5,&DAT_0188fa90);
    }
    iVar4 = *(int *)(param_2 + 0x14) + uVar6;
    iVar2 = 0;
    uVar5 = param_3;
    if (0x7f < param_3) {
      do {
        *(byte *)(iVar4 + iVar2) = (byte)uVar5 | 0x80;
        param_3 = uVar5 >> 7;
        uVar1 = uVar5 >> 0xe;
        iVar2 = iVar2 + 1;
        uVar5 = param_3;
      } while (uVar1 != 0);
    }
    *(char *)(iVar4 + iVar2) = (char)param_3;
    *param_1 = 4;
    *(uint *)(param_2 + 0x1c) = uVar6 + iVar2 + 1;
    return;
  }
  local_14 = 0;
  local_18 = 0;
  uVar5 = 0;
  if (param_3 < 0x80) {
    local_18 = param_3 & 0xff;
    FUN_01328914(param_1,param_2,&local_18,1);
    return;
  }
  do {
    uVar3 = uVar5;
    *(byte *)((int)&local_18 + uVar3) = (byte)param_3 | 0x80;
    uVar6 = param_3 >> 7;
    uVar1 = param_3 >> 0xe;
    param_3 = uVar6;
    uVar5 = uVar3 + 1;
  } while (uVar1 != 0);
  *(char *)((int)&local_18 + uVar3 + 1) = (char)uVar6;
  if (3 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar3 + 2,5,&DAT_0188fa80);
  }
  FUN_01328914(param_1,param_2,&local_18);
  return;
}

