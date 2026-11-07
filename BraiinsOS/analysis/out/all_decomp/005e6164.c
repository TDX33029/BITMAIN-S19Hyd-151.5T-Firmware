// FUN_005e6164 @ 005e6164 size=676 calls_out=8 calls_in=1
// strings: 

void FUN_005e6164(undefined2 *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int local_48;
  int local_44;
  uint local_40;
  uint uStack_3c;
  undefined4 local_38 [2];
  uint uStack_30;
  uint uStack_2c;
  undefined1 uStack_21;
  
  while( true ) {
    if (*(char *)(param_2 + 0x2c) == '\0') {
      pbVar2 = *(byte **)(param_2 + 0x18);
      if (*(int *)(param_2 + 0x1c) == 0) {
        *(byte **)(param_2 + 0x18) = pbVar2;
        local_38[0] = 5;
        uVar4 = FUN_0157c50c(local_38,*(undefined4 *)(param_2 + 0x20),
                             *(undefined4 *)(param_2 + 0x24));
        *(undefined4 *)(param_1 + 2) = uVar4;
        *param_1 = 1;
        return;
      }
      bVar1 = *pbVar2;
      uVar5 = (uint)bVar1;
      *(byte **)(param_2 + 0x18) = pbVar2 + 1;
      iVar3 = *(int *)(param_2 + 0x24) + 1;
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + -1;
      if (uVar5 == 10) {
        *(int *)(param_2 + 0x28) = iVar3 + *(int *)(param_2 + 0x28);
        *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
        iVar3 = 0;
      }
      *(byte *)(param_2 + 0x2d) = bVar1;
      *(undefined1 *)(param_2 + 0x2c) = 1;
      *(int *)(param_2 + 0x24) = iVar3;
    }
    else {
      uVar5 = (uint)*(byte *)(param_2 + 0x2d);
    }
    if (0x24 < uVar5 - 9) break;
    switch(uVar5 - 9) {
    case 0:
    case 1:
    case 4:
    case 0x17:
      *(undefined1 *)(param_2 + 0x2c) = 0;
      if (*(int *)(param_2 + 0xc) != -0x80000000) {
        iVar3 = *(int *)(param_2 + 0x14);
        if (iVar3 == *(int *)(param_2 + 0xc)) {
          FUN_006029c0(param_2 + 0xc);
        }
        *(char *)(*(int *)(param_2 + 0x10) + iVar3) = (char)uVar5;
        *(int *)(param_2 + 0x14) = iVar3 + 1;
      }
      break;
    default:
      goto switchD_005e6210_caseD_2;
    case 0x24:
      FUN_00ef8de4(param_2 + 0xc);
      FUN_005b6d34(&local_48,param_2,0);
      if (!(local_48 != 3 || local_44 != 0)) goto LAB_005e63b0;
      goto LAB_005e63c4;
    }
  }
switchD_005e6210_caseD_2:
  if (uVar5 - 0x30 < 10) {
    FUN_005b6d34(&local_48,param_2,1);
    if (local_48 == 3 && local_44 == 0) {
      *(uint *)(param_1 + 2) = local_40;
      *param_1 = 1;
      return;
    }
LAB_005e63c4:
    if (local_48 == 1) {
      if (uStack_3c == 0 && (0xffff < local_40) <= uStack_3c) {
LAB_005e6408:
        param_1[1] = (short)local_40;
        *param_1 = 0;
        return;
      }
    }
    else {
      if (local_48 != 2) {
        uStack_2c = uStack_3c;
        uStack_30 = local_40;
        uVar4 = FUN_0157cc00(local_38,&uStack_21,&DAT_0187aa0c);
        goto LAB_005e6440;
      }
      if (uStack_3c == 0 && (0xffff < local_40) <= uStack_3c) goto LAB_005e6408;
    }
    uStack_30 = local_40;
    uStack_2c = uStack_3c;
    uVar4 = FUN_0157cd6c(local_38,&uStack_21,&DAT_0187aa0c);
  }
  else {
    uVar4 = FUN_005b85f0(param_2,&uStack_21,&DAT_0187aa0c);
  }
LAB_005e6440:
  local_40 = FUN_011da120(uVar4,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24));
LAB_005e63b0:
  *(uint *)(param_1 + 2) = local_40;
  *param_1 = 1;
  return;
}

