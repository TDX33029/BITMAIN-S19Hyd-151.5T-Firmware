// FUN_0124f9c4 @ 0124f9c4 size=444 calls_out=8 calls_in=2
// strings: 

void FUN_0124f9c4(int *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int local_40;
  undefined1 local_3c;
  int local_38;
  int local_34;
  int local_30;
  char local_2c;
  char local_2b;
  int local_28;
  
  uVar5 = *(uint *)(param_2 + 0x14);
  if (uVar5 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar7 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar5);
      uVar6 = uVar7 - 9;
      if ((0x17 < uVar6) || ((1 << (uVar6 & 0xff) & 0x800013U) == 0)) {
        if (uVar7 != 0x5b) {
          iVar3 = FUN_019659c8(param_2,&local_38,&DAT_01c249ec);
          goto LAB_0124fb3c;
        }
        cVar2 = *(char *)(param_2 + 0x24) + -1;
        *(char *)(param_2 + 0x24) = cVar2;
        if (cVar2 == '\0') {
          local_38 = 0x18;
          goto LAB_0124fa1c;
        }
        iVar3 = 1;
        *(uint *)(param_2 + 0x14) = uVar5 + 1;
        local_3c = 1;
        local_30 = 0;
        local_34 = 1;
        local_38 = 0;
        local_40 = param_2;
        goto LAB_0124fa7c;
      }
      uVar5 = uVar5 + 1;
      *(uint *)(param_2 + 0x14) = uVar5;
    } while (*(uint *)(param_2 + 0x10) != uVar5);
  }
  local_38 = 5;
LAB_0124fa1c:
  iVar3 = FUN_01964674(param_2,&local_38);
  goto LAB_0124fb48;
LAB_0124fa7c:
  iVar1 = local_30;
  FUN_01224c58(&local_2c,&local_40);
  cVar2 = local_2b;
  if (local_2c == '\x01') goto LAB_0124fac8;
  if (local_2b == '\x02') {
    iVar8 = local_38;
    iVar3 = local_34;
    goto LAB_0124fae8;
  }
  if (iVar1 == local_38) {
    FUN_00a20d54(&local_38);
    iVar3 = local_34;
  }
  *(char *)(iVar3 + iVar1) = cVar2;
  local_30 = iVar1 + 1;
  goto LAB_0124fa7c;
LAB_0124fac8:
  FUN_019bb7e0(local_38,local_34);
  iVar8 = -0x80000000;
  iVar3 = local_28;
LAB_0124fae8:
  *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
  iVar4 = FUN_01964fb0(param_2);
  if (iVar8 == -0x80000000) {
    if (iVar4 != 0) {
      FUN_01225578(iVar4);
    }
  }
  else {
    if (iVar4 == 0) {
      *param_1 = iVar8;
      param_1[1] = iVar3;
      param_1[2] = iVar1;
      return;
    }
    FUN_019bb7e0(iVar8,iVar3);
    iVar3 = iVar4;
  }
LAB_0124fb3c:
  iVar3 = FUN_01966f00(iVar3,param_2);
LAB_0124fb48:
  *param_1 = -0x80000000;
  param_1[1] = iVar3;
  return;
}

