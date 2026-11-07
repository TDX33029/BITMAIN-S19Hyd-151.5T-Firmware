// FUN_0070df38 @ 0070df38 size=572 calls_out=2 calls_in=0
// strings: 

void FUN_0070df38(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  int local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 *local_38;
  undefined *local_34;
  int local_30;
  int local_2c;
  undefined1 uStack_25;
  
  puVar1 = param_1;
  if (param_2 != (int *)0x0) {
    puVar1 = (undefined4 *)param_2[3];
  }
  puVar5 = &DAT_80000008;
  if (param_2 != (int *)0x0 && puVar1 != (undefined4 *)0x0) {
    iVar9 = *param_2;
    uVar2 = param_2[1];
    uVar6 = uVar2 & 0x1e239a6a;
    local_50 = 0;
    while( true ) {
      uVar8 = *(uint *)(iVar9 + uVar6);
      uVar7 = (uVar8 & 0x80808080 ^ 0x80808080) & (uVar8 ^ 0xf0f0f0f) + 0xfefefeff;
      while (puVar5 = &DAT_80000008, uVar7 != 0) {
        uVar3 = uVar6 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                       (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) & uVar2;
        piVar4 = (int *)(iVar9 + -0x18 + uVar3 * -0x18);
        puVar5 = &DAT_80000008;
        uVar7 = uVar7 - 1 & uVar7;
        if ((*piVar4 == -0x2155a0ae && piVar4[2] == 0x1e239a6a) &&
            (piVar4[1] == -0xd4b508e && piVar4[3] == 0x7069884)) {
          iVar9 = iVar9 + uVar3 * -0x18;
          uVar10 = (**(code **)(*(int *)(iVar9 + -4) + 0x14))(*(undefined4 *)(iVar9 + -8));
          piVar4 = (int *)uVar10;
          (**(code **)((int)((ulonglong)uVar10 >> 0x20) + 0xc))(&local_38,piVar4);
          if ((local_38 == (undefined4 *)0xdeaa5f52 && local_30 == 0x1e239a6a) &&
              (local_34 == (undefined *)0xf2b4af72 && local_2c == 0x7069884)) {
            if (*piVar4 == -0x80000000) {
              local_40 = 0;
              local_44 = 1;
              local_38 = &local_48;
              local_48 = 0;
              local_2c = 0;
              local_34 = &DAT_01c06fa4;
              local_30 = 0x60000020;
              iVar9 = FUN_012fb940(&local_38,piVar4[1] + 8,piVar4[2]);
              if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_013073dc(&DAT_00533383,0x37,&uStack_25,&DAT_01c0713c,&DAT_01d30334);
              }
              puVar5 = &DAT_80000004;
              param_1[1] = local_48;
              param_1[2] = local_44;
              param_1[3] = local_40;
            }
            else {
              iVar9 = piVar4[2];
              puVar5 = &DAT_80000009;
              param_1[1] = piVar4[1];
              param_1[2] = iVar9;
            }
          }
          goto LAB_0070df58;
        }
      }
      if ((uVar8 & 0x80808080 & uVar8 << 1) != 0) break;
      local_50 = local_50 + 4;
      uVar6 = uVar6 + local_50 & uVar2;
    }
  }
LAB_0070df58:
  *param_1 = puVar5;
  return;
}

