// FUN_010a5eb0 @ 010a5eb0 size=392 calls_out=1 calls_in=4
// strings: 

void FUN_010a5eb0(int *param_1,int *param_2)

{
  uint uVar1;
  undefined **ppuVar2;
  int iVar3;
  uint uVar4;
  undefined **ppuVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  bool bVar14;
  int local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [4];
  
  uVar4 = param_2[2];
  uVar12 = 0xffff;
  uVar13 = uVar12;
  if (uVar4 != 0) {
    iVar11 = param_2[1];
    uVar7 = 0;
    do {
      uVar9 = (uint)*(byte *)(iVar11 + uVar7);
      uVar1 = uVar7 + 1;
      if (3 < uVar9 - 0x7b) {
        uVar10 = uVar7;
        uVar13 = 0xffff;
        switch(uVar9) {
        case 0x21:
        case 0x22:
        case 0x3d:
          break;
        case 0x23:
          goto switchD_010a5f28_caseD_23;
        default:
          uVar7 = uVar9 - 0x61;
          bVar14 = 0x19 < uVar7;
          if (bVar14) {
            uVar7 = uVar9 - 0x24;
          }
          if ((bVar14 && 0x17 < uVar7) && ((uVar9 & 0xe0) != 0x40)) goto LAB_010a5fb4;
          break;
        case 0x3f:
          uVar13 = uVar12;
          if (((uVar7 & 0xffff) != 0xffff) &&
             (uVar13 = (short)uVar7, (byte *)(iVar11 + uVar7) + 1 != (byte *)(iVar11 + uVar4)))
          goto LAB_010a6008;
          goto LAB_010a6098;
        }
      }
      uVar7 = uVar1;
      uVar13 = uVar12;
    } while (uVar4 != uVar1);
  }
  goto LAB_010a6098;
LAB_010a6008:
  do {
    uVar9 = (uint)*(byte *)(iVar11 + uVar1);
    if (uVar9 != 0x21 && uVar9 != 0x3d) {
      if (uVar9 == 0x23) {
        uVar10 = uVar1;
switchD_010a5f28_caseD_23:
        if (uVar10 < uVar4) {
          ppuVar2 = (undefined **)*param_2;
          ppuVar5 = &PTR_FUN_0188d4dc;
          if (ppuVar2 != &PTR_FUN_0188d4dc) {
            ppuVar5 = &PTR_FUN_0188d4f0;
          }
          if (ppuVar2 != &PTR_FUN_0188d4dc && ppuVar2 != ppuVar5) {
            param_2[2] = uVar10;
          }
          else {
            FUN_00f5f114(&local_30,param_2,uVar10);
            (**(code **)(local_30 + 0x10))(auStack_24,uStack_2c,uStack_28);
          }
        }
        break;
      }
      uVar10 = uVar9 - 0x24;
      bVar14 = uVar10 == 0x18;
      if (0x17 < uVar10) {
        uVar9 = uVar9 - 0x3f;
        bVar14 = uVar9 == 0x3f;
      }
      if ((0x17 < uVar10 && 0x3e < uVar9) && !bVar14) {
LAB_010a5fb4:
        iVar3 = *param_2;
        *param_1 = 0;
        *(undefined1 *)(param_1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x010a5fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar3 + 0x10))(param_2 + 3,iVar11);
        return;
      }
    }
    uVar1 = uVar1 + 1;
  } while (uVar4 != uVar1);
LAB_010a6098:
  iVar11 = *param_2;
  iVar6 = param_2[1];
  iVar8 = param_2[2];
  iVar3 = param_2[3];
  *(undefined2 *)(param_1 + 4) = uVar13;
  *param_1 = iVar11;
  param_1[1] = iVar6;
  param_1[2] = iVar8;
  param_1[3] = iVar3;
  return;
}

