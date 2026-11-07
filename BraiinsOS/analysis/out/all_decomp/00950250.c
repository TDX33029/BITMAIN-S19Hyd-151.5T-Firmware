// FUN_00950250 @ 00950250 size=500 calls_out=9 calls_in=2
// strings: 

void FUN_00950250(int *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_40;
  undefined1 local_3c;
  int local_38;
  int local_34;
  int local_30;
  char local_2c;
  char local_2b;
  int local_28;
  
  uVar4 = *(uint *)(param_2 + 0x14);
  if (uVar4 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar6 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar4);
      uVar5 = uVar6 - 9;
      if ((0x17 < uVar5) || ((1 << (uVar5 & 0xff) & 0x800013U) == 0)) {
        if (uVar6 != 0x5b) {
          iVar3 = FUN_005b8238(param_2,&local_38,&DAT_01867428);
          goto LAB_009503e8;
        }
        cVar2 = *(char *)(param_2 + 0x24) + -1;
        *(char *)(param_2 + 0x24) = cVar2;
        if (cVar2 == '\0') {
          local_38 = 0x18;
          goto LAB_009502a8;
        }
        iVar3 = 1;
        *(uint *)(param_2 + 0x14) = uVar4 + 1;
        local_3c = 1;
        local_30 = 0;
        local_34 = 1;
        local_38 = 0;
        local_40 = param_2;
        goto LAB_0095031c;
      }
      uVar4 = uVar4 + 1;
      *(uint *)(param_2 + 0x14) = uVar4;
    } while (*(uint *)(param_2 + 0x10) != uVar4);
  }
  local_38 = 5;
LAB_009502a8:
  iVar3 = FUN_008f9984(param_2,&local_38);
  goto LAB_009503f0;
LAB_0095031c:
  iVar1 = local_30;
  FUN_005e5d80(&local_2c,&local_40);
  if (local_2c == '\x01') goto LAB_00950374;
  if (local_2b != '\x01') {
    iVar7 = local_34;
    iVar8 = local_38;
    goto LAB_0095039c;
  }
  FUN_00916498(&local_2c,local_40);
  cVar2 = local_2b;
  if (local_2c == '\x01') goto LAB_00950374;
  if (iVar1 == local_38) {
    FUN_00933524(&local_38);
    iVar3 = local_34;
  }
  *(char *)(iVar3 + iVar1) = cVar2;
  local_30 = iVar1 + 1;
  goto LAB_0095031c;
LAB_00950374:
  iVar7 = local_28;
  iVar8 = -0x80000000;
  if (local_38 != 0) {
    thunk_FUN_016d3fb4(local_34);
  }
LAB_0095039c:
  *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
  iVar3 = FUN_008fad50(param_2);
  if (iVar8 == -0x80000000) {
    if (iVar3 != 0) {
      FUN_005c3974();
      thunk_FUN_016d3fb4(iVar3);
    }
    iVar3 = iVar7;
  }
  else {
    if (iVar3 == 0) {
      *param_1 = iVar8;
      param_1[1] = iVar7;
      param_1[2] = iVar1;
      return;
    }
    if (iVar8 != 0) {
      thunk_FUN_016d3fb4(iVar7);
    }
  }
LAB_009503e8:
  iVar3 = FUN_00e959bc(iVar3,param_2);
LAB_009503f0:
  *param_1 = -0x80000000;
  param_1[1] = iVar3;
  return;
}

