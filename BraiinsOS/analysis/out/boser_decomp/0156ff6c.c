// FUN_0156ff6c @ 0156ff6c size=992 calls_out=9 calls_in=2
// strings: 

void FUN_0156ff6c(int *param_1,undefined4 *param_2,int param_3)

{
  ushort uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  ushort *puVar15;
  uint local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  if (param_3 == 0) {
    iVar8 = FUN_01a429a4();
    puVar15 = (ushort *)((int)param_2 + 0x192);
    uVar1 = *puVar15;
    *(undefined2 *)(iVar8 + 0x192) = 0;
    *(undefined4 *)(iVar8 + 0x108) = 0;
    local_88 = 0;
    if (uVar1 != 0) {
      puVar13 = param_2 + 0x44;
      local_88 = 0;
      puVar6 = (undefined4 *)((uint)&local_80 | 4);
      do {
        FUN_006666fc(&local_68,*puVar13,puVar13[1]);
        puVar13 = puVar13 + 3;
        local_88 = local_88 + 1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)param_2) {
        case 0:
          uVar4 = 0;
          goto LAB_015702a0;
        case 1:
          local_80 = *param_2;
          uStack_7c = param_2[1];
          local_78 = param_2[2];
          uStack_74 = param_2[3];
          uStack_70 = param_2[4];
          uStack_6c = param_2[5];
          goto LAB_01570330;
        case 2:
          local_78 = param_2[2];
          uStack_74 = param_2[3];
          uStack_70 = param_2[4];
          uStack_6c = param_2[5];
          uVar4 = 2;
LAB_015702a0:
          local_80 = CONCAT31(local_80._1_3_,uVar4);
          goto LAB_01570330;
        case 3:
          FUN_006666fc(&local_30,param_2[2],param_2[3]);
          uVar4 = 3;
          break;
        case 4:
          FUN_014fcef8(&local_30,param_2 + 1);
          uVar4 = 4;
          break;
        case 5:
          FUN_0156aa80(&local_30,param_2 + 1);
          uVar4 = 5;
        }
        *puVar6 = local_30;
        puVar6[1] = local_2c;
        puVar6[2] = uStack_28;
        local_80 = CONCAT31(local_80._1_3_,uVar4);
LAB_01570330:
        FUN_01964254(&local_30,iVar8,&local_68,&local_80);
        param_2 = param_2 + 6;
      } while (local_88 < *puVar15);
    }
    *param_1 = iVar8;
    param_1[1] = 0;
    param_1[2] = local_88;
  }
  else {
    FUN_0156ff6c(&local_68,param_2[0x66]);
    if ((int)local_68 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d27490);
    }
    local_68 = FUN_01964440((int)local_68,local_68._4_4_);
    uVar2 = (ulonglong)local_68 >> 0x20;
    uVar5 = (undefined4)local_68;
    if (*(ushort *)((int)param_2 + 0x192) != 0) {
      iVar12 = 4;
      iVar14 = 0;
      puVar6 = (undefined4 *)((uint)&local_58 | 4);
      iVar8 = local_60;
      uVar11 = 0;
      do {
        FUN_006666fc(&local_30,*(undefined4 *)((int)param_2 + iVar14 * 2 + 0x110),
                     *(undefined4 *)((int)param_2 + iVar14 * 2 + 0x114));
        puVar13 = param_2 + iVar14;
        uVar9 = uVar11 + 1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)puVar13) {
        case 0:
          uVar4 = 0;
          break;
        case 1:
          local_58 = *puVar13;
          uStack_54 = puVar13[1];
          local_50 = puVar13[2];
          uStack_4c = puVar13[3];
          uStack_48 = puVar13[4];
          uStack_44 = puVar13[5];
          goto LAB_01570118;
        case 2:
          local_50 = puVar13[2];
          uStack_4c = puVar13[3];
          uStack_48 = puVar13[4];
          uStack_44 = puVar13[5];
          uVar4 = 2;
          break;
        case 3:
          FUN_006666fc(&local_80,puVar13[2],puVar13[3]);
          *puVar6 = local_80;
          puVar6[1] = uStack_7c;
          puVar6[2] = local_78;
          uVar4 = 3;
          break;
        case 4:
          FUN_014fcef8(&local_80,(undefined1 *)((int)param_2 + iVar12));
          *puVar6 = local_80;
          puVar6[1] = uStack_7c;
          puVar6[2] = local_78;
          uVar4 = 4;
          break;
        case 5:
          FUN_0156aa80(&local_80,(undefined1 *)((int)param_2 + iVar12));
          *puVar6 = local_80;
          puVar6[1] = uStack_7c;
          puVar6[2] = local_78;
          uVar4 = 5;
        }
        local_58 = CONCAT31(local_58._1_3_,uVar4);
LAB_01570118:
        FUN_0156ff6c(&local_3c,param_2[uVar11 + 0x67],param_3 + -1);
        iVar3 = local_34;
        if (local_3c == 0) {
          iVar7 = FUN_01a429a4();
          uVar10 = 0;
          *(undefined2 *)(iVar7 + 0x192) = 0;
          *(undefined4 *)(iVar7 + 0x108) = 0;
        }
        else {
          iVar7 = local_3c;
          uVar10 = local_38;
        }
        FUN_0196436c(uVar5,(int)uVar2,&local_30,&local_58,iVar7,uVar10);
        iVar12 = iVar12 + 0x18;
        iVar14 = iVar14 + 6;
        iVar8 = iVar3 + iVar8 + 1;
        uVar11 = uVar9;
      } while (uVar9 < *(ushort *)((int)param_2 + 0x192));
      local_60 = iVar8;
    }
    *(undefined8 *)param_1 = local_68;
    param_1[2] = local_60;
  }
  return;
}

