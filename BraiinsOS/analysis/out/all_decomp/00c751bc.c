// FUN_00c751bc @ 00c751bc size=1264 calls_out=11 calls_in=1
// strings: core missing | core missing

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_00c751bc(undefined4 *param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  undefined4 uVar11;
  uint uVar12;
  int extraout_r3;
  uint uVar13;
  undefined1 *puVar14;
  int *piVar15;
  undefined4 uVar16;
  char cVar17;
  undefined4 uVar18;
  uint uVar19;
  uint local_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 *local_48;
  uint local_40;
  undefined4 local_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  
  piVar15 = *(int **)(param_3 + 8);
  uVar19 = *(uint *)(param_3 + 4);
  uVar11 = *param_1;
  *param_1 = param_2;
  DataMemoryBarrier(0xb);
  *(undefined1 *)(*piVar15 + 0x17c) = 1;
  FUN_015f3b0c(&local_40);
  *(uint *)(uVar19 + 0x28) = local_40;
  *(undefined4 *)(uVar19 + 0x2c) = local_3c;
  *(uint *)(uVar19 + 0x30) = local_38;
  iVar4 = thunk_FUN_016de0ee();
  iVar4 = iVar4 + extraout_r3;
  do {
    DataMemoryBarrier(0xb);
    pcVar10 = (char *)(*piVar15 + 0x17c);
    do {
      cVar17 = *pcVar10;
      bVar2 = (bool)hasExclusiveAccess(pcVar10);
    } while (!bVar2);
    *pcVar10 = '\0';
    DataMemoryBarrier(0xb);
    if (cVar17 != '\0') {
      if (piVar15[1] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb715c(&DAT_018acbe0);
      }
      piVar15[1] = -1;
      if (piVar15[2] == 0) {
        iVar5 = 0;
      }
      else {
        FUN_014c8020();
        iVar5 = piVar15[1] + 1;
      }
      piVar15[1] = iVar5;
      piVar15[2] = uVar19;
      if (*(char *)(iVar4 + 0x38) == '\x01') {
LAB_00c752b4:
        iVar5 = piVar15[1];
      }
      else if (*(char *)(iVar4 + 0x38) != '\x02') {
        FUN_015e8e6c(iVar4,FUN_00bacf28);
        *(undefined1 *)(iVar4 + 0x38) = 1;
        goto LAB_00c752b4;
      }
      if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb715c(&DAT_018acbd0);
      }
      uVar19 = piVar15[2];
      piVar15[1] = -1;
      piVar15[2] = 0;
      if (uVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("core missing",0xc,&DAT_018acbc0);
      }
      piVar15[1] = 0;
    }
    for (iVar5 = *(int *)(*piVar15 + 0x144); iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*(char *)(uVar19 + 100) != '\0') {
        *param_1 = uVar11;
        return uVar19;
      }
      *(int *)(uVar19 + 0x38) = *(int *)(uVar19 + 0x38) + 1;
      iVar6 = FUN_0164dafc(uVar19,*piVar15 + 0x80);
      if (iVar6 == 0) {
        puVar14 = *(undefined1 **)(uVar19 + 0x30);
        if (puVar14 != &DAT_3b9aca00) {
          uVar16 = *(undefined4 *)(uVar19 + 0x28);
          uVar18 = *(undefined4 *)(uVar19 + 0x2c);
          FUN_015f3b0c(&local_40,1);
          local_60 = local_40;
          uStack_5c = local_3c;
          uStack_58 = local_38;
          local_50 = uVar16;
          local_4c = uVar18;
          local_48 = puVar14;
          FUN_015f3c24(&local_40,&local_60,&local_50);
          uVar8 = (uint)((ulonglong)local_38 * 1000000000);
          lVar3 = (ulonglong)uStack_34 * 1000000000 + ((ulonglong)local_38 * 1000000000 >> 0x20);
          uVar12 = (uint)lVar3;
          uVar13 = (uint)((ulonglong)lVar3 >> 0x20);
          uVar9 = uVar8 + local_30;
          bVar2 = CARRY4(uVar12,(uint)CARRY4(uVar8,local_30));
          iVar5 = uVar12 + CARRY4(uVar8,local_30);
          uVar8 = *(uint *)(uVar19 + 0x10);
          if (uVar13 + bVar2 != 0 || CARRY4(uVar13,(uint)bVar2)) {
            uVar9 = 0xffffffff;
            iVar5 = -1;
          }
          iVar5 = *(int *)(uVar19 + 0x14) + iVar5 + (uint)CARRY4(uVar8,uVar9);
          uVar9 = uVar8 + uVar9;
          if ((local_40 & 1) != 0) {
            iVar5 = *(int *)(uVar19 + 0x14);
            uVar9 = uVar8;
          }
          *(uint *)(uVar19 + 0x10) = uVar9;
          *(int *)(uVar19 + 0x14) = iVar5;
        }
        if (0x7ffffffe < (uint)piVar15[3]) {
          FUN_00fb71b0(&DAT_018ad0ec);
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0xc756c0);
          (*pcVar1)();
        }
        if (piVar15[6] == 0) {
          uVar19 = FUN_0164df60(piVar15,uVar19,*piVar15 + 0x80);
        }
        else {
          uVar19 = FUN_0164dbd8(piVar15,uVar19);
        }
        FUN_015f3b0c(&local_40,1);
        goto LAB_00c7560c;
      }
      if (piVar15[1] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb715c(&DAT_018acbe0);
      }
      piVar15[1] = -1;
      if (piVar15[2] == 0) {
        iVar7 = 0;
      }
      else {
        FUN_014c8020();
        iVar7 = piVar15[1] + 1;
      }
      piVar15[1] = iVar7;
      piVar15[2] = uVar19;
      cVar17 = *(char *)(iVar4 + 0x38);
      if (cVar17 == '\x01') {
LAB_00c75380:
        cVar17 = *(char *)(iVar4 + 0x30);
        uVar19 = (uint)*(byte *)(iVar4 + 0x31);
        *(undefined2 *)(iVar4 + 0x30) = 0x8001;
      }
      else if (cVar17 != '\x02') {
        FUN_015e8e6c(iVar4,FUN_00bacf28);
        *(undefined1 *)(iVar4 + 0x38) = 1;
        goto LAB_00c75380;
      }
      (*(code *)**(undefined4 **)(iVar6 + 8))(iVar6);
      if (cVar17 != '\x02') {
        if (*(char *)(iVar4 + 0x38) != '\x01') {
          if (*(char *)(iVar4 + 0x38) == '\x02') goto LAB_00c753dc;
          FUN_015e8e6c(iVar4,FUN_01655ec4);
          *(undefined1 *)(iVar4 + 0x38) = 1;
        }
        *(char *)(iVar4 + 0x31) = (char)uVar19;
        *(char *)(iVar4 + 0x30) = cVar17;
      }
LAB_00c753dc:
      if (piVar15[1] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb715c(&DAT_018acbd0);
      }
      uVar19 = piVar15[2];
      piVar15[1] = -1;
      piVar15[2] = 0;
      if (uVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("core missing",0xc,&DAT_018acbc0);
      }
      piVar15[1] = 0;
    }
    puVar14 = *(undefined1 **)(uVar19 + 0x30);
    if (puVar14 != &DAT_3b9aca00) {
      uVar16 = *(undefined4 *)(uVar19 + 0x28);
      uVar18 = *(undefined4 *)(uVar19 + 0x2c);
      FUN_015f3b0c(&local_40,1);
      local_60 = local_40;
      uStack_5c = local_3c;
      uStack_58 = local_38;
      local_50 = uVar16;
      local_4c = uVar18;
      local_48 = puVar14;
      FUN_015f3c24(&local_40,&local_60,&local_50);
      uVar8 = (uint)((ulonglong)local_38 * 1000000000);
      lVar3 = (ulonglong)uStack_34 * 1000000000 + ((ulonglong)local_38 * 1000000000 >> 0x20);
      uVar12 = (uint)lVar3;
      uVar13 = (uint)((ulonglong)lVar3 >> 0x20);
      uVar9 = uVar8 + local_30;
      bVar2 = CARRY4(uVar12,(uint)CARRY4(uVar8,local_30));
      iVar5 = uVar12 + CARRY4(uVar8,local_30);
      uVar8 = *(uint *)(uVar19 + 0x10);
      if (uVar13 + bVar2 != 0 || CARRY4(uVar13,(uint)bVar2)) {
        uVar9 = 0xffffffff;
        iVar5 = -1;
      }
      iVar5 = *(int *)(uVar19 + 0x14) + iVar5 + (uint)CARRY4(uVar8,uVar9);
      uVar9 = uVar8 + uVar9;
      if ((local_40 & 1) != 0) {
        iVar5 = *(int *)(uVar19 + 0x14);
        uVar9 = uVar8;
      }
      *(uint *)(uVar19 + 0x10) = uVar9;
      *(int *)(uVar19 + 0x14) = iVar5;
    }
    uVar19 = FUN_0164dbd8(piVar15,uVar19,*piVar15 + 0x80);
    FUN_015f3b0c(&local_40,1);
LAB_00c7560c:
    *(uint *)(uVar19 + 0x28) = local_40;
    *(undefined4 *)(uVar19 + 0x2c) = local_3c;
    *(uint *)(uVar19 + 0x30) = local_38;
  } while( true );
}

