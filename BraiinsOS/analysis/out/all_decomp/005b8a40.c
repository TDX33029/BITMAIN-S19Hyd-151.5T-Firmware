// FUN_005b8a40 @ 005b8a40 size=404 calls_out=2 calls_in=5
// strings: 

undefined4 FUN_005b8a40(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 local_24 [3];
  
  while( true ) {
    if (*(char *)(param_1 + 0x2c) == '\0') {
      pbVar4 = *(byte **)(param_1 + 0x18);
      if (*(int *)(param_1 + 0x1c) == 0) {
        *(byte **)(param_1 + 0x18) = pbVar4;
        local_24[0] = 3;
        uVar2 = FUN_0157c50c(local_24,*(undefined4 *)(param_1 + 0x20),
                             *(undefined4 *)(param_1 + 0x24));
        return uVar2;
      }
      bVar1 = *pbVar4;
      uVar5 = (uint)bVar1;
      iVar3 = *(int *)(param_1 + 0x24) + 1;
      *(byte **)(param_1 + 0x18) = pbVar4 + 1;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
      if (uVar5 == 10) {
        *(int *)(param_1 + 0x28) = iVar3 + *(int *)(param_1 + 0x28);
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        iVar3 = 0;
      }
      *(byte *)(param_1 + 0x2d) = bVar1;
      *(undefined1 *)(param_1 + 0x2c) = 1;
      *(int *)(param_1 + 0x24) = iVar3;
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x2d);
      uVar5 = (uint)bVar1;
    }
    if (0x31 < uVar5 - 9) break;
    switch(uVar5 - 9) {
    case 0:
    case 1:
    case 4:
    case 0x17:
      *(undefined1 *)(param_1 + 0x2c) = 0;
      if (*(int *)(param_1 + 0xc) != -0x80000000) {
        iVar3 = *(int *)(param_1 + 0x14);
        if (iVar3 == *(int *)(param_1 + 0xc)) {
          FUN_006029c0(param_1 + 0xc);
        }
        *(byte *)(*(int *)(param_1 + 0x10) + iVar3) = bVar1;
        *(int *)(param_1 + 0x14) = iVar3 + 1;
      }
      break;
    default:
      goto switchD_005b8adc_caseD_2;
    case 0x31:
      *(undefined1 *)(param_1 + 0x2c) = 0;
      if (*(int *)(param_1 + 0xc) != -0x80000000) {
        iVar3 = *(int *)(param_1 + 0x14);
        if (iVar3 == *(int *)(param_1 + 0xc)) {
          FUN_006029c0(param_1 + 0xc);
        }
        *(undefined1 *)(*(int *)(param_1 + 0x10) + iVar3) = 0x3a;
        *(int *)(param_1 + 0x14) = iVar3 + 1;
      }
      return 0;
    }
  }
switchD_005b8adc_caseD_2:
  local_24[0] = 6;
  uVar2 = FUN_0157c50c(local_24,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  return uVar2;
}

