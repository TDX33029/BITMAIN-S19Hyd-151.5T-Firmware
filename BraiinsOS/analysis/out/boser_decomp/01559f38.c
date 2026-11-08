// FUN_01559f38 @ 01559f38 size=860 calls_out=15 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_01559f38(undefined4 param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined *puVar10;
  int *piVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  undefined4 local_7c;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_68 [28];
  int local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  int *local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  if (*param_2 == '\x05') {
    local_88 = *(uint *)(param_2 + 4);
    local_84 = *(uint *)(param_2 + 8);
    local_70 = *(undefined4 *)(param_2 + 0xc);
    if (local_88 == 0) {
      local_70 = 0;
    }
    local_90 = (uint)(local_88 != 0);
    puVar2 = (undefined4 *)((uint)local_68 | 4);
    local_94 = 0;
    local_98 = 4;
    local_9c = 0;
    local_7c = 0;
    local_8c = 0;
    local_80 = local_90;
    local_78 = local_88;
    local_74 = local_84;
    while( true ) {
      iVar3 = FUN_01a41998(&local_90);
      if (iVar3 == 0) break;
      FUN_006666fc(&local_48,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
      *puVar2 = local_48;
      puVar2[1] = uStack_44;
      puVar2[2] = uStack_40;
      local_68[0] = 3;
      uVar16 = FUN_01576990(param_1,local_68,param_3,param_4,param_5);
      iVar3 = (int)((ulonglong)uVar16 >> 0x20);
      pcVar4 = *(code **)(iVar3 + 0xc);
      while( true ) {
        iVar5 = (*pcVar4)((int)uVar16);
        if (iVar5 == 0) break;
        piVar13 = *(int **)(iVar5 + 0x78);
        do {
          iVar6 = *piVar13;
          bVar1 = (bool)hasExclusiveAccess(piVar13);
        } while (!bVar1);
        *piVar13 = iVar6 + 1;
        local_4c = iVar5;
        if (iVar6 < 0) {
LAB_0155a290:
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xfdee,0x155a290);
          (*pcVar4)();
        }
        uVar14 = *(uint *)(iVar5 + 0x7c);
        do {
          iVar6 = *piVar13;
          bVar1 = (bool)hasExclusiveAccess(piVar13);
        } while (!bVar1);
        *piVar13 = iVar6 + 1;
        if (iVar6 < 0) goto LAB_0155a290;
        if (param_4 == 0) {
          local_48 = 0;
        }
        else {
          DataMemoryBarrier(0xb);
          if (*(int *)(param_4 + 0x14) != 0) {
            FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
          }
          piVar15 = *(int **)(param_4 + 0xc);
          do {
            iVar6 = *piVar15;
            bVar1 = (bool)hasExclusiveAccess(piVar15);
          } while (!bVar1);
          *piVar15 = iVar6 + 1;
          if (iVar6 < 0) goto LAB_0155a290;
          uVar8 = *(undefined4 *)(param_4 + 0x10);
          piVar11 = piVar13 + 2;
          uVar12 = (*(int **)(param_4 + 4))[1];
          if (uVar14 < uVar12) {
            uVar9 = uVar14;
          }
          else {
            iVar6 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar11,uVar12);
            if (iVar6 != 0) {
              uVar12 = 0;
            }
            uVar9 = uVar14 - uVar12;
            piVar11 = (int *)((int)piVar11 + uVar12);
          }
          uVar17 = FUN_016bc0ec(piVar11,uVar9);
          local_3c = 3;
          local_48 = 2;
          local_38 = piVar15;
          local_34 = uVar8;
          local_30 = uVar17;
        }
        uVar17 = FUN_01531840(param_3);
        uVar8 = FUN_01594a60(iVar5);
        uVar8 = FUN_015948f4(piVar13,uVar14,&local_48,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20),
                             param_2,uVar8);
        uVar12 = local_94;
        local_48 = uVar8;
        if (local_94 == local_9c) {
          FUN_0155a420(&local_9c);
        }
        *(undefined4 *)(local_98 + uVar12 * 4) = uVar8;
        local_94 = uVar12 + 1;
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar13;
          bVar1 = (bool)hasExclusiveAccess(piVar13);
        } while (!bVar1);
        *piVar13 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0070451c(piVar13,uVar14);
        }
      }
      FUN_01139b38((int)uVar16,iVar3);
      FUN_00e0febc(local_68);
    }
    local_88 = local_9c;
    local_84 = local_98 + local_94 * 4;
    local_90 = local_98;
    local_8c = local_98;
    puVar7 = (uint *)thunk_FUN_01be5118(0x10);
    if (puVar7 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
    puVar10 = &UNK_01cfbac8;
    *puVar7 = local_90;
    puVar7[1] = local_8c;
    puVar7[2] = local_88;
    puVar7[3] = local_84;
  }
  else {
    puVar7 = (uint *)&DAT_00000001;
    puVar10 = &UNK_01cfc1a4;
  }
  return CONCAT44(puVar10,puVar7);
}

