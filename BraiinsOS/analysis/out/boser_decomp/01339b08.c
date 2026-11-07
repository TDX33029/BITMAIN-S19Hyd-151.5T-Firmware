// FUN_01339b08 @ 01339b08 size=500 calls_out=7 calls_in=0
// strings: 

void FUN_01339b08(int *param_1,int param_2,uint param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_68;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  
  iVar6 = 0;
  iVar8 = 0;
  local_50 = 0;
  local_54 = 4;
  local_58 = 0;
  if (param_3 != 0) {
    iVar2 = *param_4;
    uVar4 = 0;
    local_68 = 4;
    iVar7 = -1;
    do {
      iVar5 = *(int *)(param_2 + 0x3c);
      if (uVar4 != param_3 - 1) {
        local_44 = -1;
        local_48 = iVar5 + 1;
        local_4c = 7;
        FUN_013387b0(param_2 + 0x34,&local_4c);
      }
      if (iVar7 != -1) {
        FUN_01339954(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),iVar7,iVar5,1);
      }
      uVar1 = *(uint *)(iVar2 + 8);
      if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar4,uVar1,&DAT_01ce669c);
      }
      FUN_013399c0(&local_4c,param_2,*(int *)(iVar2 + 4) + uVar4 * 0x24,2);
      if (local_4c != 0x12) {
        param_1[1] = local_48;
        param_1[2] = local_44;
        param_1[3] = iStack_40;
        param_1[4] = iStack_3c;
        *param_1 = local_4c;
        FUN_0134aee0(local_58,local_68,4,4);
        return;
      }
      if (uVar4 != param_3 - 1) {
        uVar3 = *(undefined4 *)(param_2 + 0x3c);
        if (iVar8 == local_58) {
          FUN_01a54b48(&local_58);
          local_68 = local_54;
        }
        *(undefined4 *)(local_68 + iVar8 * 4) = uVar3;
        iVar8 = iVar8 + 1;
        local_4c = 8;
        local_48 = 0;
        local_50 = iVar8;
        FUN_013387b0(param_2 + 0x34,&local_4c);
      }
      uVar4 = uVar4 + 1;
      iVar7 = iVar5;
    } while (uVar4 != param_3);
  }
  iVar2 = local_54;
  iVar7 = local_58;
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  for (; iVar8 * 4 != iVar6; iVar6 = iVar6 + 4) {
    FUN_013398fc(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                 *(undefined4 *)(iVar2 + iVar6),uVar3);
  }
  FUN_0134aee0(iVar7,iVar2,4,4);
  *param_1 = 0x12;
  return;
}

