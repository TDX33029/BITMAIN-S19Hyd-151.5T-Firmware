// FUN_0132901c @ 0132901c size=324 calls_out=2 calls_in=23
// strings: 

void FUN_0132901c(undefined4 *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  
  uVar4 = *(uint *)(param_2 + 0x18);
  uVar5 = *(uint *)(param_2 + 0x1c);
  if (9 < uVar4 - uVar5) {
    if (uVar4 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar5,uVar4,uVar4,&DAT_0188fab0);
    }
    iVar6 = *(int *)(param_2 + 0x14) + uVar5;
    if (param_4 == 0 && (0x7f < param_3) <= param_4) {
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      do {
        *(byte *)(iVar6 + iVar3) = (byte)param_3 | 0x80;
        bVar8 = 0x3fff < param_3;
        param_3 = param_3 >> 7 | param_4 << 0x19;
        bVar2 = param_4 != 0;
        bVar8 = param_4 < bVar8;
        param_4 = param_4 >> 7;
        iVar3 = iVar3 + 1;
      } while (bVar2 || bVar8);
    }
    *(char *)(iVar6 + iVar3) = (char)param_3;
    *param_1 = 4;
    *(uint *)(param_2 + 0x1c) = uVar5 + iVar3 + 1;
    return;
  }
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  uVar4 = 0;
  if (param_4 == 0 && (0x7f < param_3) <= param_4) {
    local_28 = param_3 & 0xff;
    FUN_01328914(param_1,param_2,&local_28,1);
    return;
  }
  do {
    uVar7 = uVar4;
    *(byte *)((int)&local_28 + uVar7) = (byte)param_3 | 0x80;
    uVar5 = param_3 >> 7;
    uVar4 = param_4 << 0x19;
    uVar1 = param_3 >> 0xe;
    bVar2 = param_4 != 0;
    param_4 = param_4 >> 7;
    param_3 = uVar5 | uVar4;
    uVar4 = uVar7 + 1;
  } while (bVar2 || uVar1 != 0);
  *(char *)((int)&local_28 + uVar7 + 1) = (char)uVar5;
  if (8 < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar7 + 2,10,&DAT_0188faa0);
  }
  FUN_01328914(param_1,param_2,&local_28);
  return;
}

