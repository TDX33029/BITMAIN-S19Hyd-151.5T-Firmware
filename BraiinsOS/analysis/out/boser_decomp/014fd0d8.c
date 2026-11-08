// FUN_014fd0d8 @ 014fd0d8 size=248 calls_out=5 calls_in=2
// strings: 

void FUN_014fd0d8(uint *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint local_f0;
  uint local_ec;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [172];
  
  uVar6 = *(uint *)(param_2 + 8);
  uVar5 = 0;
  iVar2 = uVar6 * 0xb8;
  if (0xb21642 < uVar6) {
LAB_014fd104:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar5,iVar2);
  }
  if (iVar2 == 0) {
    local_ec = 8;
    local_f0 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
    uVar5 = 8;
    local_ec = FUN_01298504(iVar2,8);
    if (local_ec == 0) goto LAB_014fd104;
    local_f0 = uVar6;
    if (uVar6 != 0) {
      uVar4 = 0;
      uVar3 = local_ec;
      do {
        if (iVar2 == 0) break;
        FUN_006666fc(auStack_e0,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
        FUN_014fd200(auStack_d0,iVar1 + 0x10);
        uVar4 = uVar4 + 1;
        iVar1 = iVar1 + 0xb8;
        FUN_01bed4e2(uVar3,auStack_e0,0xb8);
        uVar3 = uVar3 + 0xb8;
        iVar2 = iVar2 + -0xb8;
      } while (uVar6 != uVar4);
    }
  }
  *param_1 = local_f0;
  param_1[1] = local_ec;
  param_1[2] = uVar6;
  return;
}

