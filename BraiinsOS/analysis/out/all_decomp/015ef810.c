// FUN_015ef810 @ 015ef810 size=1196 calls_out=9 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x015efbb4) */

void FUN_015ef810(uint *param_1,int param_2,int param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  ulonglong uVar13;
  uint local_30;
  undefined4 *local_2c;
  uint local_28;
  
  if (*(int *)(param_2 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_018ab50c);
  }
  *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
  uVar13 = FUN_00fb737c(10,param_3,param_4);
  puVar12 = (uint *)(param_2 + 0x14);
  if ((uVar13 & 1) == 0) {
    uVar11 = *(uint *)(param_2 + 0x1c);
    if (uVar11 == 0) {
      uVar11 = 0;
LAB_015ef9dc:
      uVar7 = *puVar12 - uVar11;
    }
    else {
      iVar5 = *(int *)(param_2 + 0x18);
      if (*(char *)(iVar5 + uVar11 + -1) != '\n') goto LAB_015ef9dc;
      uVar6 = 0;
      uVar7 = 0;
      do {
        iVar8 = uVar11 - uVar7;
        iVar2 = FUN_016e034e(1,iVar5 + uVar7,iVar8);
        if (iVar2 == -1) {
          puVar3 = (undefined4 *)FUN_016d2bc8();
          puVar4 = (undefined *)*puVar3;
          *(undefined1 *)(param_2 + 0x20) = 0;
          if (puVar4 != (undefined *)0x4) {
            iVar2 = iVar8;
            if (puVar4 == (undefined *)0x9) goto LAB_015ef97c;
            goto LAB_015efb74;
          }
        }
        else {
          *(undefined1 *)(param_2 + 0x20) = 0;
LAB_015ef97c:
          if (iVar2 == 0) {
            uVar6 = 2;
            puVar4 = &DAT_018aabb8;
LAB_015efb74:
            if (uVar7 != 0) {
              FUN_016dd52c(iVar5,iVar5 + uVar7,iVar8);
              *(int *)(param_2 + 0x1c) = iVar8;
            }
            *param_1 = uVar6;
            param_1[1] = (uint)puVar4;
            goto LAB_015efbe8;
          }
          uVar7 = iVar2 + uVar7;
        }
      } while (uVar7 < uVar11);
      if (uVar11 < uVar7) {
        uVar6 = 0;
        puVar4 = &DAT_018ab428;
        goto LAB_015efc08;
      }
      uVar11 = 0;
      *(undefined4 *)(param_2 + 0x1c) = 0;
      uVar7 = *puVar12;
    }
    if (param_4 < uVar7) {
      FUN_016dd1aa(*(int *)(param_2 + 0x18) + uVar11,param_3,param_4);
      *(uint *)(param_2 + 0x1c) = uVar11 + param_4;
      *(undefined1 *)param_1 = 4;
      goto LAB_015efbe8;
    }
  }
  else {
    uVar9 = (int)(uVar13 >> 0x20) + 1;
    if (param_4 < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018ab640);
    }
    iVar5 = *(int *)(param_2 + 0x1c);
    if (iVar5 == 0) {
      if (uVar9 != 0) {
        uVar7 = uVar9;
        iVar5 = param_3;
        do {
          while (uVar6 = FUN_016e034e(1,iVar5,uVar7), uVar6 == 0xffffffff) {
            local_2c = (undefined4 *)FUN_016d2bc8();
            local_2c = (undefined4 *)*local_2c;
            local_28 = local_28 & 0xffffff00;
            if (local_2c != (undefined4 *)0x4) {
              bVar1 = false;
              local_30 = local_28;
LAB_015efbcc:
              if (local_2c != (undefined4 *)0x9 || bVar1) goto LAB_015efbe4;
              goto LAB_015efaac;
            }
            if (uVar7 == 0) goto LAB_015efaac;
          }
          local_28 = CONCAT31(local_28._1_3_,4);
          if (uVar6 == 0) {
            bVar1 = true;
            local_30 = 2;
            local_2c = &DAT_018aeae8;
            goto LAB_015efbcc;
          }
          if (uVar7 < uVar6) {
            puVar4 = &DAT_018aab58;
            uVar11 = uVar7;
            goto LAB_015efc08;
          }
          iVar5 = iVar5 + uVar6;
          uVar7 = uVar7 - uVar6;
        } while (uVar7 != 0);
      }
    }
    else {
      if (uVar9 < *puVar12 - iVar5) {
        FUN_016dd1aa(*(int *)(param_2 + 0x18) + iVar5,param_3,uVar9);
        uVar11 = iVar5 + uVar9;
        *(uint *)(param_2 + 0x1c) = uVar11;
      }
      else {
        FUN_015eff40(&local_30,puVar12,param_3,uVar9);
        if ((char)local_30 != '\x04') {
LAB_015efbe4:
          *param_1 = local_30;
          param_1[1] = (uint)local_2c;
          goto LAB_015efbe8;
        }
        uVar11 = *(uint *)(param_2 + 0x1c);
        if (uVar11 == 0) goto LAB_015efaac;
      }
      uVar7 = 0;
      iVar5 = *(int *)(param_2 + 0x18);
      uVar6 = 0;
      do {
        iVar10 = iVar5 + uVar7;
        iVar8 = uVar11 - uVar7;
        iVar2 = FUN_016e034e(1,iVar10,iVar8);
        if (iVar2 == -1) {
          puVar3 = (undefined4 *)FUN_016d2bc8();
          puVar4 = (undefined *)*puVar3;
          *(undefined1 *)(param_2 + 0x20) = 0;
          if (puVar4 != (undefined *)0x4) {
            iVar2 = iVar8;
            if (puVar4 == (undefined *)0x9) goto LAB_015ef924;
            goto LAB_015efb08;
          }
        }
        else {
          *(undefined1 *)(param_2 + 0x20) = 0;
LAB_015ef924:
          if (iVar2 == 0) {
            uVar6 = 2;
            puVar4 = &DAT_018aabb8;
LAB_015efb08:
            if (uVar7 != 0) {
              FUN_016dd52c(iVar5,iVar10,iVar8);
              *(int *)(param_2 + 0x1c) = iVar8;
            }
            *param_1 = uVar6;
            param_1[1] = (uint)puVar4;
            goto LAB_015efbe8;
          }
          uVar7 = iVar2 + uVar7;
        }
      } while (uVar7 < uVar11);
      if (uVar11 < uVar7) {
        uVar6 = 0;
        puVar4 = &DAT_018ab428;
LAB_015efc08:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar6,uVar7,uVar11,puVar4);
      }
      *(undefined4 *)(param_2 + 0x1c) = 0;
    }
LAB_015efaac:
    param_4 = param_4 - uVar9;
    iVar5 = *(int *)(param_2 + 0x1c);
    param_3 = param_3 + uVar9;
    if (param_4 < (uint)(*(int *)(param_2 + 0x14) - iVar5)) {
      FUN_016dd1aa(*(int *)(param_2 + 0x18) + iVar5,param_3,param_4);
      *(uint *)(param_2 + 0x1c) = iVar5 + param_4;
      *(undefined1 *)param_1 = 4;
      goto LAB_015efbe8;
    }
  }
  FUN_015eff40(param_1,puVar12,param_3,param_4);
LAB_015efbe8:
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
  return;
}

