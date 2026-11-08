// FUN_019dedec @ 019dedec size=456 calls_out=8 calls_in=1
// strings: 

void FUN_019dedec(int *param_1,ushort *param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  undefined2 uVar7;
  undefined4 extraout_r12;
  undefined4 local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar5 = *param_2;
  uVar3 = 2;
  if (uVar5 != 0) {
    uVar3 = 10;
  }
  FUN_01609904(&local_48,uVar3,1);
  uVar4 = local_44;
  if (((char)local_48 == '\x04') || ((local_48 & 0xff) == 4)) {
    if (local_44 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c(&DAT_00570c98,8,&DAT_01d05e10);
    }
    local_48 = 1;
    iVar1 = FUN_01be9b78(local_44,1,2,&local_48,4);
    if (-1 < iVar1) {
      if ((uVar5 & 1) == 0) {
        puVar2 = (uint *)(param_2 + 1);
        local_40 = 0;
        uVar3 = 0x10;
        uVar5 = param_2[3] << 8 | param_2[3] >> 8;
        uVar7 = 2;
        local_3c = 0;
        local_30 = extraout_r12;
      }
      else {
        local_28 = *(undefined4 *)(param_2 + 6);
        local_24 = *(undefined4 *)(param_2 + 8);
        local_40 = *(uint *)(param_2 + 2);
        local_3c = *(int *)(param_2 + 4);
        local_30 = *(undefined4 *)(param_2 + 0xc);
        puVar2 = (uint *)(param_2 + 10);
        uVar5 = param_2[0xe] << 8 | param_2[0xe] >> 8;
        uVar3 = 0x1c;
        uVar7 = 10;
      }
      local_34 = local_24;
      local_44 = *puVar2;
      uStack_38 = local_28;
      local_48 = CONCAT22(uVar5,uVar7);
      iVar1 = FUN_01be718e(uVar4,&local_48,uVar3);
      if ((-1 < iVar1) && (iVar1 = FUN_01be7e64(uVar4,0x80), -1 < iVar1)) {
        FUN_019dd788(&local_48,uVar4,&DAT_01d28f04);
        if (local_48 != 2) {
          param_1[3] = local_3c;
        }
        goto LAB_019def8c;
      }
    }
    puVar2 = (uint *)FUN_01be3244();
    uVar6 = *puVar2;
    FUN_01bf01d6(uVar4);
    uVar4 = 0;
    local_48 = 0;
    local_40 = uVar6;
  }
  else {
    uVar4 = local_48 >> 8;
    local_40 = local_44;
  }
  local_44 = local_48 & 0xff | uVar4 << 8;
  local_48 = 2;
LAB_019def8c:
  *param_1 = local_48;
  param_1[1] = local_44;
  param_1[2] = local_40;
  return;
}

