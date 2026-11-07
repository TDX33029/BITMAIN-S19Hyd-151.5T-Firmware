// FUN_014f955c @ 014f955c size=340 calls_out=4 calls_in=1
// strings: 

undefined8 FUN_014f955c(int param_1,undefined2 *param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  undefined2 *extraout_r1;
  undefined2 *puVar3;
  ushort extraout_r2;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  uint6 uVar10;
  byte local_29;
  int local_28;
  
  uVar5 = 0;
  puVar3 = param_2;
  puVar7 = param_2;
  do {
    uVar8 = *(undefined4 *)(param_1 + 8);
    if (uVar5 < param_3 - 1) {
      if (uVar5 == 0) {
LAB_014f95a4:
        FUN_014f9820(&local_29,param_1);
        puVar3 = extraout_r1;
        if ((local_29 & 1) != 0) {
          if (7 < uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar5,8,&DAT_01cfa584);
          }
          uVar1 = (ushort)((uint)local_28 >> 8);
          param_2[uVar5] = (ushort)((uint)(local_28 << 0x18) >> 0x10) | uVar1 & 0xff;
          if (uVar5 == 7) {
            puVar4 = &DAT_01cfa594;
            goto LAB_014f9684;
          }
          uVar6 = uVar5 + 2;
          puVar3 = (undefined2 *)&DAT_00000001;
          (param_2 + uVar5)[1] = uVar1 & 0xff00 | (ushort)(byte)((uint)local_28 >> 0x18);
          goto LAB_014f9670;
        }
      }
      else {
        uVar9 = FUN_014f96bc(param_1,puVar3);
        puVar3 = (undefined2 *)((ulonglong)uVar9 >> 0x20);
        if ((int)uVar9 == 0x3a) goto LAB_014f95a4;
      }
      *(undefined4 *)(param_1 + 8) = uVar8;
    }
    if (uVar5 == 0) {
LAB_014f95e0:
      uVar10 = FUN_014f9708(param_1,0x10,4,0x10000);
      if ((int)uVar10 == 0) {
        *(undefined4 *)(param_1 + 8) = uVar8;
      }
    }
    else {
      iVar2 = FUN_014f96bc(param_1,puVar3);
      uVar10 = (uint6)extraout_r2 << 0x20;
      if (iVar2 == 0x3a) goto LAB_014f95e0;
      *(undefined4 *)(param_1 + 8) = uVar8;
    }
    puVar3 = (undefined2 *)0x0;
    uVar6 = uVar5;
    if ((uVar10 & 1) == 0) goto LAB_014f9670;
    if (uVar5 == 8) {
      puVar4 = &DAT_01cfa5a4;
LAB_014f9684:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(8,8,puVar4);
    }
    uVar5 = uVar5 + 1;
    *puVar7 = (short)(uVar10 >> 0x20);
    puVar7 = puVar7 + 1;
  } while (param_3 != uVar5);
  uVar6 = param_3;
LAB_014f9670:
  return CONCAT44(puVar3,uVar6);
}

