// FUN_01acb374 @ 01acb374 size=820 calls_out=9 calls_in=2
// strings: 

undefined8 FUN_01acb374(int param_1,char param_2,uint param_3,int param_4,int param_5)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  int *piVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  undefined *puVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined *local_28;
  
  uVar11 = 0;
  local_4c = param_5;
  iVar12 = param_5 - param_4;
  local_50 = param_4;
  if (iVar12 < 0) {
LAB_01acb398:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar11,iVar12);
  }
  iVar13 = 0;
  iVar9 = 1;
  local_48 = 0;
  if (param_5 != param_4) {
    uVar11 = 1;
    iVar9 = FUN_01298504(iVar12);
    if (iVar9 == 0) goto LAB_01acb398;
    local_48 = iVar12;
  }
  uVar16 = *(undefined4 *)(param_1 + 0x18);
  uVar11 = *(undefined4 *)(param_1 + 0x1c);
  cVar1 = *(char *)(param_1 + 0x20);
  local_44 = iVar9;
  do {
    local_40 = iVar13;
    puVar4 = (undefined1 *)FUN_01ac9ff4(&local_50);
    if (puVar4 == (undefined1 *)0x23) {
      if (cVar1 == '\0') break;
    }
    else if (puVar4 == &DAT_00110000) {
      iVar12 = 0;
      iVar15 = 0x3fffffe;
      goto LAB_01acb548;
    }
    FUN_01acaf80(uVar16,uVar11,puVar4,local_50,local_4c);
    uVar14 = 1;
    if ((undefined1 *)0x7f < puVar4) {
      uVar14 = 2;
    }
    if (((undefined1 *)0x7ff < puVar4) && (uVar14 = 4, puVar4 < (undefined1 *)0x10000)) {
      uVar14 = 3;
    }
    iVar12 = iVar13;
    if ((uint)(local_48 - iVar13) < uVar14) {
      FUN_01af7b44(&local_48,iVar13,uVar14,1,1);
      iVar12 = local_40;
      iVar9 = local_44;
    }
    pbVar5 = (byte *)(iVar9 + iVar12);
    if (puVar4 < (undefined1 *)0x80) {
      *pbVar5 = (byte)puVar4;
    }
    else {
      bVar2 = (byte)puVar4 & 0x3f | 0x80;
      bVar8 = (byte)((uint)puVar4 >> 6);
      if (puVar4 < (undefined1 *)0x800) {
        bVar8 = bVar8 | 0xc0;
        pbVar5[1] = bVar2;
      }
      else {
        bVar3 = bVar8 & 0x3f | 0x80;
        bVar8 = (byte)((uint)puVar4 >> 0xc);
        if ((uint)puVar4 >> 0x10 != 0) {
          pbVar5[3] = bVar2;
          pbVar5[2] = bVar3;
          pbVar5[1] = bVar8 & 0x3f | 0x80;
          *pbVar5 = (byte)((uint)puVar4 >> 0x12) | 0xf0;
          goto LAB_01acb508;
        }
        pbVar5[1] = bVar3;
        bVar8 = bVar8 | 0xe0;
        pbVar5[2] = bVar2;
      }
      *pbVar5 = bVar8;
    }
LAB_01acb508:
    iVar13 = uVar14 + iVar13;
  } while( true );
  iVar12 = local_50;
  iVar15 = local_4c;
LAB_01acb548:
  if (param_3 != 0) {
    piVar6 = *(int **)(param_1 + 4);
    uVar14 = *(uint *)(param_1 + 8);
    if (param_3 < uVar14) {
      if (*(char *)((int)piVar6 + param_3) < -0x40) {
LAB_01acb578:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(piVar6,uVar14,0,param_3,&DAT_01d2fb38);
      }
    }
    else if (param_3 != uVar14) goto LAB_01acb578;
    if (param_3 == 3) {
      uVar11 = 3;
      puVar10 = &DAT_00532793;
LAB_01acb5f4:
      iVar7 = thunk_FUN_01bed842(piVar6,puVar10,uVar11);
      if (iVar7 != 0) goto LAB_01acb630;
    }
    else {
      if (param_3 == 5) {
        uVar11 = 5;
        puVar10 = &DAT_0053278b;
        goto LAB_01acb5f4;
      }
      if ((param_3 != 4) || ((*piVar6 != 0x70747468 && (*piVar6 != 0x656c6966)))) goto LAB_01acb630;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      (**(code **)(*(int *)(param_1 + 0x14) + 0x14))
                (&local_3c,*(int *)(param_1 + 0x10),iVar9,iVar13);
      goto LAB_01acb644;
    }
  }
LAB_01acb630:
  local_3c = -0x80000000;
  local_38 = iVar9;
  local_34 = iVar13;
LAB_01acb644:
  iVar13 = local_38;
  local_28 = &DAT_005687b8;
  if (param_2 == '\x02') {
    local_28 = &DAT_0056a8e8;
  }
  local_30 = local_38;
  local_2c = local_34;
  FUN_01655840(&local_30,param_1);
  if (local_3c != -0x80000000) {
    FUN_019bb7e0(local_3c,iVar13);
    iVar9 = local_44;
  }
  FUN_019bb7e0(local_48,iVar9);
  return CONCAT44(iVar15,iVar12);
}

