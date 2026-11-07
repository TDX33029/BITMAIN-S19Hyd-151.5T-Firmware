// FUN_005b8f24 @ 005b8f24 size=556 calls_out=5 calls_in=4
// strings: 

undefined4 FUN_005b8f24(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  bool bVar8;
  char local_34;
  char local_33;
  char local_32;
  undefined4 local_30;
  undefined4 local_2c [3];
  
  iVar4 = param_1 + 0xc;
  while (*(char *)(param_1 + 0x2c) != '\0') {
    bVar6 = *(byte *)(param_1 + 0x2d);
    uVar7 = (uint)bVar6;
    uVar2 = uVar7 - 9;
    if (0x23 < uVar2) goto LAB_005b90cc;
LAB_005b8fbc:
    switch((int)&switchD_005b8fc4::switchdataD_005b8fc8 +
           (&switchD_005b8fc4::switchdataD_005b8fc8)[uVar2] & 0xfffffffe) {
    case 0x5b9058:
      *(undefined1 *)(param_1 + 0x2c) = 0;
      if (*(int *)(param_1 + 0xc) != -0x80000000) {
        iVar5 = *(int *)(param_1 + 0x14);
        if (iVar5 == *(int *)(param_1 + 0xc)) {
          FUN_006029c0(iVar4);
        }
        *(byte *)(*(int *)(param_1 + 0x10) + iVar5) = bVar6;
        *(int *)(param_1 + 0x14) = iVar5 + 1;
      }
      break;
    default:
      goto switchD_005b8fc4_caseD_5b9128;
    case 0x5b914c:
      FUN_00ef8de4(iVar4);
      FUN_005b800c(&local_34,param_1);
      if (local_34 != '\x01') {
        bVar8 = local_33 == '\x01';
        if (bVar8) {
          local_33 = local_32;
        }
        if (bVar8 && local_33 == ']') {
          local_2c[0] = 0x15;
          uVar1 = FUN_0157c50c(local_2c,*(undefined4 *)(param_1 + 0x20),
                               *(undefined4 *)(param_1 + 0x24));
          goto LAB_005b91a4;
        }
      }
      local_2c[0] = 0x16;
      uVar1 = FUN_0157c50c(local_2c,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24))
      ;
LAB_005b91a4:
      FUN_005bcf14(local_34,local_30);
      return uVar1;
    }
  }
  pbVar3 = *(byte **)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x1c) == 0) {
    *(byte **)(param_1 + 0x18) = pbVar3;
    local_2c[0] = 2;
    uVar1 = FUN_0157c50c(local_2c,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    return uVar1;
  }
  bVar6 = *pbVar3;
  uVar7 = (uint)bVar6;
  iVar5 = *(int *)(param_1 + 0x24) + 1;
  *(byte **)(param_1 + 0x18) = pbVar3 + 1;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
  if (uVar7 == 10) {
    *(int *)(param_1 + 0x28) = iVar5 + *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    iVar5 = 0;
  }
  *(byte *)(param_1 + 0x2d) = bVar6;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  *(int *)(param_1 + 0x24) = iVar5;
  uVar2 = uVar7 - 9;
  if (uVar2 < 0x24) goto LAB_005b8fbc;
LAB_005b90cc:
  if (uVar7 == 0x5d) {
    *(undefined1 *)(param_1 + 0x2c) = 0;
    if (*(int *)(param_1 + 0xc) != -0x80000000) {
      iVar5 = *(int *)(param_1 + 0x14);
      if (iVar5 == *(int *)(param_1 + 0xc)) {
        FUN_006029c0(iVar4);
      }
      *(undefined1 *)(*(int *)(param_1 + 0x10) + iVar5) = 0x5d;
      *(int *)(param_1 + 0x14) = iVar5 + 1;
    }
    return 0;
  }
switchD_005b8fc4_caseD_5b9128:
  local_2c[0] = 0x16;
  uVar1 = FUN_0157c50c(local_2c,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  return uVar1;
}

