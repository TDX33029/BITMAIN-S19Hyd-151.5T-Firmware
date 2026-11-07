// FUN_014134f0 @ 014134f0 size=412 calls_out=1 calls_in=9
// strings: 

void FUN_014134f0(int *param_1,int *param_2)

{
  uint uVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined **ppuVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  bool bVar12;
  int local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [4];
  
  uVar5 = param_2[2];
  uVar10 = 0xffff;
  if (uVar5 != 0) {
    iVar3 = param_2[1];
    uVar6 = 0;
    do {
      uVar8 = (uint)*(byte *)(iVar3 + uVar6);
      uVar1 = uVar6 + 1;
      if (uVar8 < 0x3f) {
        if ((1 < uVar8 - 0x21) && (uVar8 != 0x3d)) {
          uVar11 = 0xffff;
          if (uVar8 != 0x23) goto LAB_01413568;
          goto LAB_01413620;
        }
      }
      else if (3 < uVar8 - 0x7b) {
        if (uVar8 == 0x3f) {
          uVar11 = (undefined2)uVar6;
          if ((uVar6 & 0xffff) != 0xffff) {
            if ((byte *)(iVar3 + uVar6) + 1 == (byte *)(iVar3 + uVar5)) goto LAB_01413610;
            goto LAB_014135d0;
          }
          break;
        }
LAB_01413568:
        uVar6 = uVar8 - 0x61;
        bVar12 = 0x19 < uVar6;
        if (bVar12) {
          uVar6 = uVar8 - 0x24;
        }
        if ((bVar12 && 0x17 < uVar6) && ((uVar8 & 0xe0) != 0x40)) goto LAB_01413594;
      }
      uVar6 = uVar1;
    } while (uVar5 != uVar1);
  }
  goto LAB_01413674;
LAB_014135d0:
  do {
    uVar6 = (uint)*(byte *)(iVar3 + uVar1);
    if (uVar6 != 0x21 && uVar6 != 0x3d) {
      if (uVar6 == 0x23) {
        uVar6 = uVar1;
LAB_01413620:
        uVar10 = uVar11;
        if (uVar6 < uVar5) {
          ppuVar2 = (undefined **)*param_2;
          ppuVar4 = &PTR_FUN_01d06d34;
          if (ppuVar2 != &PTR_FUN_01d06d34) {
            ppuVar4 = &PTR_FUN_01d06d48;
          }
          if (ppuVar2 != &PTR_FUN_01d06d34 && ppuVar2 != ppuVar4) {
            param_2[2] = uVar6;
          }
          else {
            FUN_01283834(&local_30,param_2,uVar6);
            (**(code **)(local_30 + 0x10))(auStack_24,uStack_2c,uStack_28);
          }
        }
        goto LAB_01413674;
      }
      uVar8 = uVar6 - 0x24;
      bVar12 = uVar8 == 0x18;
      if (0x17 < uVar8) {
        uVar6 = uVar6 - 0x3f;
        bVar12 = uVar6 == 0x3f;
      }
      if ((0x17 < uVar8 && 0x3e < uVar6) && !bVar12) {
LAB_01413594:
        iVar3 = *param_2;
        *param_1 = 0;
        *(undefined1 *)(param_1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x014135b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar3 + 0x10))(param_2 + 3);
        return;
      }
    }
    uVar1 = uVar1 + 1;
  } while (uVar5 != uVar1);
LAB_01413610:
  uVar10 = uVar11;
LAB_01413674:
  iVar3 = param_2[1];
  iVar7 = param_2[2];
  iVar9 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = iVar3;
  param_1[2] = iVar7;
  param_1[3] = iVar9;
  *(undefined2 *)(param_1 + 4) = uVar10;
  return;
}

