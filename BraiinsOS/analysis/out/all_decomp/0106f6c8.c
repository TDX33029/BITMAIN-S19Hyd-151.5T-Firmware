// FUN_0106f6c8 @ 0106f6c8 size=392 calls_out=6 calls_in=2
// strings: 

void FUN_0106f6c8(int param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,int *param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined4 local_14;
  
  uVar6 = *(uint *)(param_1 + 0x74) & 0x3f;
  uVar5 = param_3 >> uVar6 | param_4 << (0x20 - uVar6 & 0xff);
  if (-1 < (int)(uVar6 - 0x20)) {
    uVar5 = param_4 >> (uVar6 - 0x20 & 0xff);
  }
  uVar6 = 0;
  if (*(uint *)(param_1 + 0x74) != 0x40) {
    uVar6 = uVar5;
  }
  local_14 = param_2;
  if (*(uint *)(param_1 + 0x5c) <= uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar6,*(uint *)(param_1 + 0x5c),&DAT_0188428c);
  }
  uVar8 = FUN_010974f0(*(int *)(param_1 + 0x58) + uVar6 * 8,param_1 + 0x60,param_3,param_4,&local_14
                      );
  iVar2 = (int)((ulonglong)uVar8 >> 0x20);
  iVar1 = (int)uVar8;
  if (iVar1 != 0) {
    FUN_0109e07c(param_5,param_6,param_7,*(undefined4 *)(iVar1 + 0x84));
    DataMemoryBarrier(0xb);
    if (*(short *)(*(int *)(iVar1 + 0x80) + 0x34) != *(short *)(*(int *)(iVar1 + 0x80) + 0x36)) {
      FUN_0109e274(param_8,*(undefined4 *)(iVar1 + 0x84));
    }
    FUN_0109d7e0(iVar1);
    return;
  }
  iVar1 = param_7[3];
  if (iVar1 != 0) {
    iVar2 = param_7[4];
  }
  if (iVar1 != 0 && iVar2 != iVar1) {
    iVar3 = *param_7;
    bVar7 = iVar3 == 1;
    if (bVar7) {
      iVar3 = param_7[1];
    }
    if (bVar7 && iVar3 == iVar1) {
      iVar3 = *(int *)(iVar3 + 4);
      *param_7 = 1;
      param_7[1] = iVar3;
      iVar3 = *(int *)(iVar1 + 4);
      iVar4 = *(int *)(iVar1 + 8);
    }
    else {
      iVar3 = *(int *)(iVar1 + 4);
      iVar4 = *(int *)(iVar1 + 8);
    }
    if (iVar4 == 0) {
      param_7[3] = iVar3;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    else {
      if (iVar3 == 0) {
        return;
      }
      *(int *)(iVar4 + 4) = iVar3;
      iVar3 = *(int *)(iVar1 + 4);
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar1 + 8);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00419463,0x28,&DAT_01883dc0);
      }
      *(int *)(iVar1 + 8) = iVar2;
      param_7[4] = iVar1;
      *(int *)(iVar2 + 4) = iVar1;
      return;
    }
  }
  return;
}

