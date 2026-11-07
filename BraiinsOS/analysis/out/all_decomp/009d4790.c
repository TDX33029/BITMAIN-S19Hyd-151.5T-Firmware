// FUN_009d4790 @ 009d4790 size=392 calls_out=4 calls_in=3
// strings: 

void FUN_009d4790(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  longlong lStack_34;
  undefined4 local_2c;
  
  iVar3 = *(int *)(param_4 + 0x14);
  if (*(int *)(param_4 + 8) == -0x80000000) {
    iVar3 = 1;
  }
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faf2a4(&DAT_0186ac28);
  }
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    return;
  }
  local_64 = 0;
  local_68 = 0;
  local_6c = 0;
  local_70 = 0;
  local_74 = 0;
  local_78 = 0;
  uVar1 = FUN_018462e8(*(undefined4 *)(param_4 + 0x54));
  iVar3 = 0;
  do {
    local_60 = local_78;
    uStack_5c = local_74;
    uStack_58 = local_70;
    uStack_54 = local_6c;
    uStack_50 = local_68;
    uStack_4c = local_64;
    local_48 = param_2 + iVar3 * 0x18;
    if (*(int *)(local_48 + 0x14) == 0) {
      uVar2 = 0;
      uVar4 = 0;
    }
    else {
      puVar5 = *(uint **)(local_48 + 0x10);
      iVar6 = *(int *)(local_48 + 0x14) << 2;
      uVar2 = 0;
      uVar4 = 0;
      do {
        if (*(uint *)(local_48 + 8) <= *puVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_0034ae41,0x13,&DAT_0186abb8);
        }
        uVar7 = *(uint *)(*(int *)(local_48 + 4) + *puVar5 * 4);
        puVar5 = puVar5 + 1;
        bVar8 = CARRY4(uVar2,uVar7);
        uVar2 = uVar2 + uVar7;
        uVar4 = uVar4 + bVar8;
        iVar6 = iVar6 + -4;
      } while (iVar6 != 0);
    }
    local_38 = (undefined4)((ulonglong)uVar1 * (ulonglong)uVar2);
    lStack_34 = (ulonglong)uVar1 * (ulonglong)uVar4 + ((ulonglong)uVar1 * (ulonglong)uVar2 >> 0x20);
    local_2c = 0;
    local_3c = 0;
    local_40 = 0;
    FUN_010e1750(&local_78,&local_60,&local_40);
    iVar3 = iVar3 + 1;
  } while (iVar3 != param_3);
  *param_1 = local_78;
  param_1[1] = local_74;
  param_1[2] = local_70;
  param_1[3] = local_6c;
  param_1[4] = local_68;
  param_1[5] = local_64;
  return;
}

