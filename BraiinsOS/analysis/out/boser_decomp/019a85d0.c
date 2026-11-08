// FUN_019a85d0 @ 019a85d0 size=600 calls_out=5 calls_in=1
// strings: 

void FUN_019a85d0(uint *param_1,uint *param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  uint extraout_r2;
  uint extraout_r2_00;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  undefined8 uVar13;
  undefined1 local_28 [4];
  
  uVar5 = *param_2;
  uVar8 = param_2[2];
  if (uVar5 - uVar8 < param_4) {
    if (uVar8 == 0) {
      uVar8 = 0;
    }
    else {
      uVar7 = 0;
      uVar1 = param_2[1];
      do {
        uVar10 = uVar8 - uVar7;
        iVar11 = uVar1 + uVar7;
        uVar2 = FUN_01bf053e(1,iVar11,uVar10);
        if (uVar2 == 0xffffffff) {
          puVar3 = (undefined4 *)FUN_01be3244();
          puVar9 = (undefined *)*puVar3;
          uVar6 = 0;
          *(undefined1 *)(param_2 + 3) = 0;
          if (puVar9 != (undefined *)0x4) {
            uVar2 = uVar10;
            if (puVar9 != (undefined *)0x9) goto LAB_019a8788;
            goto LAB_019a8684;
          }
        }
        else {
          *(undefined1 *)(param_2 + 3) = 0;
LAB_019a8684:
          if (uVar2 == 0) {
            uVar6 = 2;
            puVar9 = &DAT_01d285ac;
LAB_019a8788:
            if (uVar7 != 0) {
              FUN_01bed864(uVar1,iVar11,uVar10);
              param_2[2] = uVar10;
            }
            *param_1 = uVar6;
            param_1[1] = (uint)puVar9;
            return;
          }
          uVar7 = uVar2 + uVar7;
        }
      } while (uVar7 < uVar8);
      if (uVar8 < uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar7,uVar8,&DAT_01d28024);
      }
      uVar8 = 0;
      param_2[2] = 0;
    }
  }
  if (param_4 < uVar5) {
    FUN_01bed4e2(param_2[1] + uVar8,param_3,param_4);
    param_2[2] = uVar8 + param_4;
    *(undefined1 *)param_1 = 4;
    return;
  }
  *(undefined1 *)(param_2 + 3) = 1;
  puVar4 = param_2;
  if (param_4 != 0) {
    puVar12 = &DAT_01d2e7c8;
    do {
      uVar13 = FUN_01bf053e(1,param_3,param_4);
      puVar4 = (uint *)((ulonglong)uVar13 >> 0x20);
      uVar8 = (uint)uVar13;
      if (uVar8 == 0xffffffff) {
        puVar3 = (undefined4 *)FUN_01be3244();
        puVar4 = (uint *)*puVar3;
        local_28[0] = 0;
        if (puVar4 != (uint *)&SUB_00000004) {
          puVar12 = (uint *)local_28;
          uVar8 = extraout_r2;
          goto LAB_019a87cc;
        }
      }
      else {
        local_28[0] = 4;
        if (uVar8 == 0) {
          puVar4 = &DAT_01d2e7b8;
          uVar8 = extraout_r2_00;
LAB_019a87cc:
          if (puVar4 == (uint *)&DAT_00000009) {
            uVar8 = *puVar12 & 0xff;
          }
          if (puVar4 == (uint *)&DAT_00000009 && uVar8 == 0) {
            *(undefined1 *)param_1 = 4;
          }
          else {
            *param_1 = *puVar12;
            param_1[1] = (uint)puVar4;
          }
          goto LAB_019a87e8;
        }
        if (param_4 < uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar8,param_4,param_4,&DAT_01d27754);
        }
        param_3 = param_3 + uVar8;
        param_4 = param_4 - uVar8;
      }
    } while (param_4 != 0);
  }
  *param_1 = 4;
  param_1[1] = (uint)puVar4;
LAB_019a87e8:
  *(undefined1 *)(param_2 + 3) = 0;
  return;
}

