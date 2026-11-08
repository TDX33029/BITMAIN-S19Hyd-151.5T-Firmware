// FUN_01583650 @ 01583650 size=692 calls_out=13 calls_in=1
// strings: 

undefined8 FUN_01583650(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  int local_94;
  int local_90;
  int local_8c;
  undefined4 local_88 [3];
  undefined4 local_7c;
  int *local_78;
  undefined4 local_74;
  undefined8 local_70;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined1 local_48 [24];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*param_2 == '\x05') {
    uVar3 = 0;
    local_8c = 0;
    local_90 = 4;
    local_94 = 0;
    if (param_4 != 0) {
      iVar10 = *(int *)(param_1 + 0xc);
      uVar13 = *(uint *)(param_1 + 0x10);
      DataMemoryBarrier(0xb);
      if (*(int *)(param_4 + 0x14) != 0) {
        FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
      }
      piVar11 = *(int **)(param_4 + 0xc);
      do {
        iVar4 = *piVar11;
        bVar2 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar2);
      *piVar11 = iVar4 + 1;
      if (iVar4 < 0) {
LAB_01583900:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1583900);
        (*pcVar1)();
      }
      uVar12 = *(undefined4 *)(param_4 + 0x10);
      iVar10 = iVar10 + 8;
      uVar9 = (*(int **)(param_4 + 4))[1];
      if (uVar13 < uVar9) {
        uVar9 = 0;
      }
      else {
        iVar4 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,iVar10,uVar9);
        if (iVar4 != 0) {
          uVar9 = 0;
        }
        iVar10 = iVar10 + uVar9;
      }
      local_70 = FUN_016bc0ec(iVar10,uVar13 - uVar9);
      local_7c = 3;
      uVar3 = 2;
      local_78 = piVar11;
      local_74 = uVar12;
    }
    iVar10 = *(int *)(param_1 + 4);
    local_88[0] = uVar3;
    if (*(int *)(param_1 + 8) != 0) {
      piVar11 = *(int **)(param_1 + 0xc);
      iVar4 = iVar10 + *(int *)(param_1 + 8) * 0xc;
      uVar12 = *(undefined4 *)(param_2 + 4);
      uVar14 = *(undefined4 *)(param_2 + 8);
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      puVar5 = (undefined4 *)((uint)local_48 | 4);
      do {
        iVar6 = FUN_0196b2cc(uVar12,uVar14,*(undefined4 *)(iVar10 + 4),*(undefined4 *)(iVar10 + 8));
        if (iVar6 == 0) {
          do {
            iVar6 = *piVar11;
            bVar2 = (bool)hasExclusiveAccess(piVar11);
          } while (!bVar2);
          *piVar11 = iVar6 + 1;
          if (iVar6 < 0) goto LAB_01583900;
          FUN_01538d58(&local_68,local_88);
          uVar15 = FUN_01531840(param_3);
          FUN_006666fc(&local_30,*(undefined4 *)(iVar10 + 4),*(undefined4 *)(iVar10 + 8));
          *puVar5 = local_30;
          puVar5[1] = uStack_2c;
          puVar5[2] = uStack_28;
          local_48[0] = 3;
          iVar7 = FUN_015963e0(piVar11,uVar3,&local_68,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                               param_2,local_48);
          iVar6 = local_8c;
          local_68 = iVar7;
          if (local_8c == local_94) {
            FUN_0155a420(&local_94);
          }
          *(int *)(local_90 + iVar6 * 4) = iVar7;
          local_8c = iVar6 + 1;
        }
        iVar10 = iVar10 + 0xc;
      } while (iVar10 != iVar4);
    }
    if (local_8c != 0) {
      local_5c = local_90 + local_8c * 4;
      local_60 = local_94;
      local_68 = local_90;
      local_64 = local_90;
      piVar11 = (int *)thunk_FUN_01be5118(0x10);
      if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x10);
      }
      *piVar11 = local_68;
      piVar11[1] = local_64;
      piVar11[2] = local_60;
      piVar11[3] = local_5c;
      FUN_0126e254(local_88);
      puVar8 = &UNK_01cfc168;
      goto LAB_015838d8;
    }
    FUN_0126e254(local_88);
    FUN_01501840(&local_94);
  }
  piVar11 = (int *)&DAT_00000001;
  puVar8 = &UNK_01cfc1a4;
LAB_015838d8:
  return CONCAT44(puVar8,piVar11);
}

