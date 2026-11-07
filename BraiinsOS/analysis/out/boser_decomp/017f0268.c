// FUN_017f0268 @ 017f0268 size=504 calls_out=10 calls_in=2
// strings: has_authority means set_username shouldn't fail | has_authority means set_password shouldn't fail

void FUN_017f0268(undefined4 *param_1,int param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar4 = *(uint *)(param_2 + 0x20);
  iVar5 = *(int *)(param_2 + 0x14);
  uVar6 = *(uint *)(param_2 + 0x18);
  if (uVar4 != 0) {
    if (uVar4 < uVar6) {
      if (*(char *)(iVar5 + uVar4) < -0x40) {
LAB_017f02a0:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(iVar5,uVar6,uVar4,uVar6,&DAT_01d2fcf8);
      }
    }
    else if (uVar6 != uVar4) goto LAB_017f02a0;
  }
  if ((uVar6 - uVar4 < 3) || (iVar5 = thunk_FUN_01bed842(&DAT_005327c5,iVar5 + uVar4,3), iVar5 != 0)
     ) goto LAB_017f03ac;
  uVar7 = FUN_01ac9d2c(param_2);
  FUN_01655afc(&local_48,(int)uVar7,(int)uVar7 + (int)((ulonglong)uVar7 >> 0x20));
  if (local_48 == -0x7fffffff) goto LAB_017f03ac;
  local_64 = local_48;
  uStack_60 = local_44;
  uStack_5c = local_40;
  FUN_00666914(&local_70,&local_64);
  uVar7 = FUN_01ac9c00(param_2);
  iVar5 = (int)uVar7;
  if ((iVar5 == 0) ||
     (FUN_01655afc(&local_48,iVar5,iVar5 + (int)((ulonglong)uVar7 >> 0x20)), local_48 == -0x7fffffff
     )) {
LAB_017f0380:
    bVar1 = true;
    local_58 = -0x80000000;
  }
  else {
    local_30 = local_48;
    uStack_2c = local_44;
    uStack_28 = local_40;
    if (local_48 == -0x7fffffff) goto LAB_017f0380;
    FUN_00666914(&local_58,&local_30);
    bVar1 = local_58 == -0x80000000;
  }
  if ((local_68 != 0) || (!bVar1)) {
    iVar5 = FUN_01ac91f4(param_2);
    if (iVar5 == 0) {
      iVar5 = FUN_01ac9018(param_2);
      if (iVar5 == 0) {
        *param_1 = local_70;
        param_1[1] = local_6c;
        param_1[2] = local_68;
        param_1[3] = local_58;
        param_1[4] = uStack_54;
        param_1[5] = uStack_50;
        return;
      }
      puVar3 = &DAT_01d1ced4;
      pcVar2 = "has_authority means set_password shouldn\'t fail";
    }
    else {
      puVar3 = &DAT_01d1cec4;
      pcVar2 = "has_authority means set_username shouldn\'t fail";
    }
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(pcVar2,0x2f,&local_48,&DAT_01d1ccf8,puVar3);
  }
  FUN_019bb7e0(local_70,local_6c);
LAB_017f03ac:
  *param_1 = 0x80000000;
  return;
}

