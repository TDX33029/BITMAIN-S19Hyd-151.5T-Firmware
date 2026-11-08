// FUN_007163c4 @ 007163c4 size=540 calls_out=2 calls_in=3
// strings: 

void FUN_007163c4(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  int local_c4;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  undefined4 local_30;
  undefined4 local_2c;
  
  piVar1 = *(int **)(param_2 + 0x80);
  iVar3 = param_2;
  if (piVar1 != (int *)0x0) {
    iVar3 = piVar1[3];
  }
  if (piVar1 != (int *)0x0 && iVar3 != 0) {
    iVar3 = *piVar1;
    uVar8 = piVar1[1];
    uVar4 = uVar8 & 0x9f65b5de;
    local_c4 = 0;
    while( true ) {
      uVar5 = *(uint *)(iVar3 + uVar4);
      uVar7 = (uVar5 & 0x80808080 ^ 0x80808080) & (uVar5 ^ 0x4f4f4f4f) + 0xfefefeff;
      while (uVar7 != 0) {
        uVar6 = uVar4 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                       (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) & uVar8;
        piVar1 = (int *)(iVar3 + -0x18 + uVar6 * -0x18);
        uVar7 = uVar7 - 1 & uVar7;
        if ((*piVar1 == -0x6bc222c2 && piVar1[2] == -0x609a4a22) &&
            (piVar1[1] == 0x460ca456 && piVar1[3] == 0x582c5bdc)) {
          iVar3 = iVar3 + uVar6 * -0x18;
          uVar9 = (**(code **)(*(int *)(iVar3 + -4) + 0x14))(*(undefined4 *)(iVar3 + -8));
          piVar1 = (int *)uVar9;
          (**(code **)((int)((ulonglong)uVar9 >> 0x20) + 0xc))(&local_b8,piVar1);
          if ((local_b8 != -0x6bc222c2 || iStack_b0 != -0x609a4a22) ||
              (iStack_b4 != 0x460ca456 || iStack_ac != 0x582c5bdc)) goto LAB_007163e8;
          if (*piVar1 == 0) {
            FUN_01bed4e2(param_1,param_2,0x90);
            return;
          }
          iVar3 = piVar1[1];
          FUN_01bed4e2(&local_b8,param_2,0x90);
          uVar2 = FUN_00716624(local_30,extraout_r1_00,local_2c,iVar3);
          goto LAB_00716408;
        }
      }
      if ((uVar5 & 0x80808080 & uVar5 << 1) != 0) break;
      local_c4 = local_c4 + 4;
      uVar4 = uVar4 + local_c4 & uVar8;
    }
  }
LAB_007163e8:
  FUN_01bed4e2(&local_b8,param_2,0x90);
  uVar2 = FUN_00716624(local_30,extraout_r1,local_2c,0x200000);
LAB_00716408:
  FUN_01bed4e2(param_1,param_2,0x88);
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  *(undefined **)(param_1 + 0x8c) = &DAT_01c076a4;
  return;
}

