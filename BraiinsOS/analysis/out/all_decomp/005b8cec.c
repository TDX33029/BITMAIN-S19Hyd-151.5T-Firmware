// FUN_005b8cec @ 005b8cec size=424 calls_out=2 calls_in=4
// strings: 

undefined4 FUN_005b8cec(int param_1)

{
  uint uVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  undefined4 local_24 [3];
  
  while (*(char *)(param_1 + 0x2c) != '\0') {
    bVar6 = *(byte *)(param_1 + 0x2d);
    uVar7 = (uint)bVar6;
    uVar1 = uVar7 - 9;
    if (0x23 < uVar1) goto LAB_005b8e94;
LAB_005b8d80:
    switch((int)&switchD_005b8d88::switchdataD_005b8d8c +
           (&switchD_005b8d88::switchdataD_005b8d8c)[uVar1] & 0xfffffffe) {
    case 0x5b8e1c:
      *(undefined1 *)(param_1 + 0x2c) = 0;
      if (*(int *)(param_1 + 0xc) != -0x80000000) {
        iVar5 = *(int *)(param_1 + 0x14);
        if (iVar5 == *(int *)(param_1 + 0xc)) {
          FUN_006029c0(param_1 + 0xc);
        }
        *(byte *)(*(int *)(param_1 + 0x10) + iVar5) = bVar6;
        *(int *)(param_1 + 0x14) = iVar5 + 1;
      }
      break;
    default:
      goto switchD_005b8d88_caseD_5b8ef4;
    case 0x5b8f00:
      uVar3 = *(undefined4 *)(param_1 + 0x20);
      uVar4 = *(undefined4 *)(param_1 + 0x24);
      local_24[0] = 0x15;
      goto LAB_005b8f08;
    }
  }
  pbVar2 = *(byte **)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x1c) == 0) {
    *(byte **)(param_1 + 0x18) = pbVar2;
    local_24[0] = 3;
    uVar3 = FUN_0157c50c(local_24,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    return uVar3;
  }
  bVar6 = *pbVar2;
  uVar7 = (uint)bVar6;
  iVar5 = *(int *)(param_1 + 0x24) + 1;
  *(byte **)(param_1 + 0x18) = pbVar2 + 1;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
  if (uVar7 == 10) {
    *(int *)(param_1 + 0x28) = iVar5 + *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    iVar5 = 0;
  }
  *(byte *)(param_1 + 0x2d) = bVar6;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  *(int *)(param_1 + 0x24) = iVar5;
  uVar1 = uVar7 - 9;
  if (uVar1 < 0x24) goto LAB_005b8d80;
LAB_005b8e94:
  if (uVar7 == 0x7d) {
    *(undefined1 *)(param_1 + 0x2c) = 0;
    if (*(int *)(param_1 + 0xc) != -0x80000000) {
      iVar5 = *(int *)(param_1 + 0x14);
      if (iVar5 == *(int *)(param_1 + 0xc)) {
        FUN_006029c0(param_1 + 0xc);
      }
      *(undefined1 *)(*(int *)(param_1 + 0x10) + iVar5) = 0x7d;
      *(int *)(param_1 + 0x14) = iVar5 + 1;
    }
    return 0;
  }
switchD_005b8d88_caseD_5b8ef4:
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  local_24[0] = 0x16;
LAB_005b8f08:
  uVar3 = FUN_0157c50c(local_24,uVar3,uVar4);
  return uVar3;
}

