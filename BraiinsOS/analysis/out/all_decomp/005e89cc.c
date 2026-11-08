// FUN_005e89cc @ 005e89cc size=520 calls_out=6 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_005e89cc(int *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int local_30;
  int local_2c;
  undefined4 local_28;
  
  iVar5 = param_2 + 0xc;
  while( true ) {
    if (*(char *)(param_2 + 0x2c) == '\0') {
      pbVar2 = *(byte **)(param_2 + 0x18);
      if (*(int *)(param_2 + 0x1c) == 0) {
        *(byte **)(param_2 + 0x18) = pbVar2;
        local_30 = 5;
        local_2c = FUN_0157c50c(&local_30,*(undefined4 *)(param_2 + 0x20),
                                *(undefined4 *)(param_2 + 0x24));
        goto LAB_005e8af0;
      }
      bVar1 = *pbVar2;
      uVar3 = (uint)bVar1;
      *(byte **)(param_2 + 0x18) = pbVar2 + 1;
      iVar4 = *(int *)(param_2 + 0x24) + 1;
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + -1;
      if (uVar3 == 10) {
        *(int *)(param_2 + 0x28) = iVar4 + *(int *)(param_2 + 0x28);
        *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
        iVar4 = 0;
      }
      *(byte *)(param_2 + 0x2d) = bVar1;
      *(undefined1 *)(param_2 + 0x2c) = 1;
      *(int *)(param_2 + 0x24) = iVar4;
    }
    else {
      uVar3 = (uint)*(byte *)(param_2 + 0x2d);
    }
    if ((0x17 < uVar3 - 9) || ((1 << (uVar3 - 9 & 0xff) & 0x800013U) == 0)) break;
    *(undefined1 *)(param_2 + 0x2c) = 0;
    if (*(int *)(param_2 + 0xc) != -0x80000000) {
      iVar4 = *(int *)(param_2 + 0x14);
      if (iVar4 == *(int *)(param_2 + 0xc)) {
        FUN_006029c0(iVar5);
      }
      *(char *)(*(int *)(param_2 + 0x10) + iVar4) = (char)uVar3;
      *(int *)(param_2 + 0x14) = iVar4 + 1;
    }
  }
  if (uVar3 == 0x22) {
    *(undefined1 *)(param_2 + 0x2c) = 0;
    if (*(int *)(param_2 + 0xc) != -0x80000000) {
      iVar4 = *(int *)(param_2 + 0x14);
      if (iVar4 == *(int *)(param_2 + 0xc)) {
        FUN_006029c0(iVar5);
      }
      *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar4) = 0x22;
      *(int *)(param_2 + 0x14) = iVar4 + 1;
    }
    *(undefined4 *)(param_2 + 8) = 0;
    FUN_00ef8e3c(&local_30,iVar5);
    if (local_30 == 2) goto LAB_005e8af0;
    FUN_00e7c798(&local_40,local_2c,local_28);
    if (local_40 != -0x80000000) {
      *param_1 = local_40;
      param_1[1] = iStack_3c;
      param_1[2] = iStack_38;
      return;
    }
  }
  else {
    iStack_3c = FUN_005b85f0(param_2,&local_30,&DAT_0187be98);
  }
  local_2c = FUN_011da120(iStack_3c,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24))
  ;
LAB_005e8af0:
  *param_1 = -0x80000000;
  param_1[1] = local_2c;
  return;
}

