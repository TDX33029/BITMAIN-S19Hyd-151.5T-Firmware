// FUN_0191d45c @ 0191d45c size=628 calls_out=7 calls_in=6
// strings: message buffer full

void FUN_0191d45c(uint *param_1,int param_2,undefined4 param_3,code *param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint local_30;
  uint local_2c;
  int local_28;
  int local_24;
  
  if (*(int *)(param_2 + 0x1d8) == 1) {
    uVar5 = *(uint *)(param_2 + 0x1ec);
    iVar3 = 0;
    uVar6 = *(uint *)(param_2 + 0x1dc);
    if (uVar5 == 0) {
      uVar2 = 0;
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(param_2 + 0x1e0);
      uVar7 = *(uint *)(param_2 + 0x1e8);
      uVar2 = uVar7 - uVar4;
      if (uVar7 < uVar4) {
        uVar2 = uVar7;
      }
      if (uVar4 - uVar2 < uVar5) {
        iVar3 = uVar5 - (uVar4 - uVar2);
      }
      else {
        uVar4 = uVar2 + uVar5;
      }
    }
    local_28 = *(int *)(param_2 + 0x1e4);
    local_24 = local_28 + iVar3 * 0xc;
    local_30 = local_28 + uVar2 * 0xc;
    local_2c = local_28 + uVar4 * 0xc;
    iVar3 = FUN_01908284(&local_30);
    if (uVar6 < (uint)(iVar3 - *(int *)(param_2 + 0x1f0))) {
      FUN_019a18a8(param_1,0x28,&DAT_00523660,0x1e);
      return;
    }
  }
  if (*(char *)(param_2 + 599) != '\0') {
    *(undefined1 *)param_1 = 4;
    param_1[1] = 0;
    return;
  }
  uVar5 = 0xffff;
  uVar6 = *(uint *)(param_2 + 0x2ac);
  if (*(int *)(param_2 + 0x268) == 0) {
    uVar5 = 0x4805;
  }
  if (uVar6 < uVar5) {
    puVar8 = (uint *)(param_2 + 0x2a0);
    uVar2 = uVar6 + 0x1000;
    if (uVar5 <= uVar6 + 0x1000) {
      uVar2 = uVar5;
    }
    if (*(uint *)(param_2 + 0x2a8) < uVar2) {
      FUN_018e2cf4(puVar8,uVar2);
    }
    else if ((uVar6 == 0) || (uVar5 < *(uint *)(param_2 + 0x2a8))) {
      FUN_018e2cf4(puVar8,uVar2);
      if (uVar2 < *puVar8) {
        uVar5 = *(uint *)(param_2 + 0x2a8);
        if (*puVar8 < uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_0052ce40,0x49,&DAT_01d2bbc0);
        }
        if (uVar5 < uVar2) {
          uVar5 = uVar2;
        }
        iVar3 = FUN_00703e24(puVar8,uVar5);
        if (iVar3 != -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620();
        }
      }
    }
    uVar5 = *(uint *)(param_2 + 0x2a8);
    uVar6 = *(uint *)(param_2 + 0x2ac);
    if (uVar5 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar6,uVar5,uVar5,&DAT_01d2569c);
    }
    (*param_4)(&local_30,param_3,*(int *)(param_2 + 0x2a4) + uVar6,uVar5 - uVar6);
    if (((char)local_30 != '\x04') && ((local_30 & 0xff) != 4)) goto LAB_0191d684;
    *(uint *)(param_2 + 0x2ac) = uVar6 + local_2c;
    local_30 = CONCAT31(local_30._1_3_,4);
    bVar1 = true;
  }
  else {
    FUN_019a18a8(&local_30,0x15,"message buffer full",0x13);
    bVar1 = (char)local_30 == '\x04';
  }
  if ((bVar1) && (local_2c == 0)) {
    *(undefined1 *)(param_2 + 600) = 1;
  }
LAB_0191d684:
  *param_1 = local_30;
  param_1[1] = local_2c;
  return;
}

