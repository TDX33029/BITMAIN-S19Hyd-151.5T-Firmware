// FUN_01538264 @ 01538264 size=292 calls_out=4 calls_in=19
// strings: 

void FUN_01538264(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_48;
  int local_44;
  undefined4 uStack_40;
  int local_3c;
  undefined1 auStack_38 [20];
  
  uVar1 = *param_2;
  iVar4 = param_2[1];
  uVar6 = param_2[2];
  uVar5 = 0;
  iVar3 = iVar4 + uVar6 * 0xc;
  iVar7 = uVar6 * 0x18;
  if (0x5555555 < uVar6) {
LAB_015382a4:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar5,iVar7);
  }
  iVar8 = 0;
  if (iVar7 == 0) {
    iVar2 = 8;
    uVar6 = 0;
  }
  else {
    uVar5 = 8;
    iVar2 = FUN_01298504(iVar7,8);
    if (iVar2 == 0) goto LAB_015382a4;
  }
  local_48 = iVar4;
  local_44 = iVar4;
  uStack_40 = uVar1;
  local_3c = iVar3;
  if (iVar4 != iVar3) {
    iVar7 = iVar2 + 1;
    iVar8 = 0;
    do {
      FUN_01bed4e2((uint)auStack_38 | 3,iVar4,0xc);
      *(undefined1 *)(iVar7 + -1) = 3;
      FUN_01bed4e2(iVar7,auStack_38,0xf);
      iVar4 = iVar4 + 0xc;
      iVar7 = iVar7 + 0x18;
      iVar8 = iVar8 + 1;
    } while (iVar4 != iVar3);
    local_44 = iVar4;
  }
  FUN_01574820(&local_48);
  *(uint *)(param_1 + 4) = uVar6;
  *(int *)(param_1 + 8) = iVar2;
  *(int *)(param_1 + 0xc) = iVar8;
  *param_1 = 4;
  return;
}

