// FUN_016d9bb8 @ 016d9bb8 size=524 calls_out=5 calls_in=2
// strings: internal error: entered unreachable code

void FUN_016d9bb8(undefined4 *param_1,int param_2,uint *param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint local_f8 [3];
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  uint local_94;
  uint uStack_90;
  uint uStack_8c;
  int local_84;
  undefined1 auStack_80 [92];
  
  if (*(int *)(param_2 + 0x20) != 0) {
    FUN_01306fc8(&DAT_01d09dc8);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x16d9e68);
    (*pcVar1)();
  }
  iVar2 = *(int *)(param_2 + 0x2c);
  *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
  if (iVar2 == 0) {
LAB_016d9e50:
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d09dd8);
  }
  piVar4 = (int *)(*(int *)(param_2 + 0x28) + (iVar2 + -1) * 0x98);
  iVar5 = *piVar4;
  *(int *)(param_2 + 0x2c) = iVar2 + -1;
  if (iVar5 == 0x110009) {
    piVar7 = piVar4 + 1;
    iVar2 = piVar4[0x17];
    FUN_01bed4e2(local_f8,piVar7,0x58);
    if (local_f8[0] != 0x110008) {
      iVar2 = 2;
      if (0x10ffff < local_f8[0]) {
        iVar2 = local_f8[0] - 0x110000;
      }
                    /* WARNING: Could not recover jumptable at 0x016d9c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_016d9c9c + *(int *)(&DAT_016d9c9c + iVar2 * 4)))();
      return;
    }
    uVar6 = *param_3;
    if (uVar6 != 0x110008) {
      iVar2 = 2;
      if (0x10ffff < uVar6) {
        iVar2 = uVar6 - 0x110000;
      }
                    /* WARNING: Could not recover jumptable at 0x016d9d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_016d9d1c + *(int *)(&DAT_016d9d1c + iVar2 * 4)))();
      return;
    }
    local_94 = param_3[6];
    uStack_90 = param_3[7];
    uStack_8c = param_3[8];
    local_a0 = local_ec;
    uStack_9c = uStack_e8;
    uStack_98 = uStack_e4;
    FUN_01bed4e2(auStack_80,piVar7,0x58);
    iVar5 = thunk_FUN_01be5118(0x58);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x58);
    }
    FUN_01bed4e2(iVar5,piVar7,0x58);
    local_84 = iVar5;
    FUN_01bed4e2(auStack_80,param_3,0x58);
    iVar3 = thunk_FUN_01be5118(0x58);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x58);
    }
    FUN_01bed4e2(iVar3,param_3,0x58);
    param_1[3] = local_a0;
    param_1[4] = uStack_9c;
    param_1[5] = uStack_98;
    param_1[6] = local_94;
    param_1[7] = uStack_90;
    param_1[8] = uStack_8c;
    *(char *)(param_1 + 9) = (char)iVar2;
    param_1[2] = iVar3;
    *param_1 = 0x110008;
    param_1[1] = iVar5;
    iVar2 = 0;
  }
  else {
    if (iVar5 == 0x11000a) goto LAB_016d9e50;
    *(int *)(param_2 + 0x2c) = iVar2;
    FUN_01bed4e2(param_1,param_3,0x58);
    iVar2 = *(int *)(param_2 + 0x20) + 1;
  }
  *(int *)(param_2 + 0x20) = iVar2;
  return;
}

