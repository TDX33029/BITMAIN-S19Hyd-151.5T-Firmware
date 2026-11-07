// FUN_007093bc @ 007093bc size=1524 calls_out=12 calls_in=1
// strings: tungstenite::protocol::frame | tungstenite::protocol::frame

void FUN_007093bc(undefined4 *param_1,int param_2,undefined4 param_3,int ****param_4)

{
  int *piVar1;
  int ***pppiVar2;
  int *****pppppiVar3;
  int ***pppiVar4;
  byte bVar5;
  char cVar6;
  int *piVar7;
  int ****ppppiVar8;
  byte *pbVar9;
  byte bVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  uint *puVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  undefined4 local_a8;
  undefined4 local_a4;
  int *****local_a0;
  int ***local_9c;
  int ***local_98;
  int ***local_94;
  int ***pppiStack_90;
  int ***pppiStack_8c;
  int ***pppiStack_88;
  int *****local_50;
  int ***local_4c;
  int *****pppppiStack_48;
  int ***local_44;
  int ***pppiStack_40;
  int ***local_3c;
  int ***pppiStack_38;
  undefined4 local_30;
  code *local_2c;
  
  if (*(char *)(param_2 + 0x90) == '\x01') {
    piVar7 = (int *)FUN_01664fc4();
    uVar18 = piVar7[0x52];
    piVar15 = piVar7 + 2;
    iVar17 = 0;
    do {
      if (0x3f < uVar18) {
        uVar18 = piVar7[0x50];
        if (piVar7[0x51] < (int)(uint)(uVar18 == 0)) {
          uVar18 = 0;
          FUN_013cb19c(piVar7 + 0x42,piVar15);
        }
        else {
          piVar7[0x50] = uVar18 - 0x100;
          piVar7[0x51] = piVar7[0x51] - (uint)(uVar18 < 0x100);
          FUN_007a4e7c(piVar7 + 0x42,piVar15);
          uVar18 = 0;
        }
      }
      piVar1 = piVar15 + uVar18;
      uVar18 = uVar18 + 1;
      *(char *)((int)&local_a8 + iVar17) = (char)*piVar1;
      pppiVar2 = (int ***)local_a8;
      iVar17 = iVar17 + 1;
      piVar7[0x52] = uVar18;
    } while (iVar17 != 4);
    iVar17 = *piVar7;
    *piVar7 = iVar17 + -1;
    if (iVar17 + -1 == 0) {
      FUN_01663bac(piVar7);
    }
    param_4[2] = pppiVar2;
    *(undefined1 *)((int)param_4 + 7) = 1;
  }
  if (4 < DAT_01d51b00) {
    local_98 = (int ***)&DAT_01c06ce4;
    local_4c = (int ***)FUN_00709a78;
    local_9c = (int ***)0x15;
    local_a0 = (int *****)&DAT_00532556;
    local_a4 = (int ***)0x15;
    local_a8 = &DAT_00532556;
    local_50 = (int *****)param_4;
    FUN_01ac6264(&DAT_005917e5,&local_50,5,&local_a8);
  }
  local_50 = (int *****)*param_4;
  local_4c = param_4[1];
  pppppiStack_48 = (int *****)param_4[2];
  local_44 = param_4[3];
  pppiStack_40 = param_4[4];
  local_3c = param_4[5];
  pppiStack_38 = param_4[6];
  iVar17 = 2;
  uVar18 = (uint)local_4c >> 0x18;
  if (local_3c < (int ***)0x10000) {
    iVar17 = 1;
  }
  if (local_3c < (int ***)0x7e) {
    iVar17 = 0;
  }
  iVar16 = *(int *)(param_2 + 0x58);
  if (*(uint *)(param_2 + 0x48) <
      (int)local_3c + iVar16 + *(int *)(iVar17 * 4 + 0x534f98) + (uVar18 & 0x3f) * 4) {
    local_a0 = (int *****)*param_4;
    local_9c = param_4[1];
    local_98 = param_4[2];
    local_94 = param_4[3];
    pppiStack_90 = param_4[4];
    pppiStack_8c = param_4[5];
    pppiStack_88 = param_4[6];
    ppppiVar8 = (int ****)0x9;
  }
  else {
    if (4 < DAT_01d51b00) {
      local_2c = FUN_01ac5ee0;
      local_98 = (int ***)&DAT_01c0744c;
      local_9c = (int ***)0x1c;
      local_a0 = (int *****)0x3deb16;
      local_a4 = (int ***)0x1c;
      local_a8 = "tungstenite::protocol::frame";
      local_30 = (int *****)&local_50;
      FUN_01ac6264(&DAT_005ad1cb,&local_30,5,&local_a8);
      uVar18 = (uint)local_4c >> 0x18;
    }
    piVar7 = (int *)(param_2 + 0x50);
    iVar17 = 2;
    if (local_3c < (int ***)0x10000) {
      iVar17 = 1;
    }
    if (local_3c < (int ***)0x7e) {
      iVar17 = 0;
    }
    uVar18 = *(int *)(iVar17 * 4 + 0x534fa4) + (uVar18 & 0x3f) * 4 + (int)local_3c;
    if ((uint)(*piVar7 - iVar16) < uVar18) {
      FUN_0132b898(piVar7,iVar16,uVar18,1,1);
    }
    pppiVar4 = local_3c;
    local_a8 = (char *)local_50;
    ppppiVar8 = (int ****)local_a8;
    local_a4 = local_4c;
    pppiVar2 = local_a4;
    local_a0 = pppppiStack_48;
    local_9c = local_44;
    local_98 = pppiStack_40;
    local_94 = local_3c;
    pppiStack_90 = pppiStack_38;
    bVar5 = (byte)((uint)local_4c >> 0x10);
    uVar18 = (uint)local_4c >> 8 & 0xff;
    if (((uint)local_4c & 1) == 0) {
      if (uVar18 < 3) {
        bVar5 = (byte)((uint)local_4c >> 8);
      }
switchD_00709660_caseD_3:
      bVar10 = bVar5;
    }
    else {
      bVar10 = 8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(uVar18) {
      case 1:
        bVar10 = 9;
        break;
      case 2:
        bVar10 = 10;
        break;
      case 3:
        goto switchD_00709660_caseD_3;
      }
    }
    local_a8._0_1_ = (char)local_50;
    local_a8._1_1_ = (char)((uint)local_50 >> 8);
    local_a8._2_1_ = (char)((uint)local_50 >> 0x10);
    local_a8._3_1_ = (char)((uint)local_50 >> 0x18);
    iVar17 = 2;
    if (local_3c < (int ***)0x10000) {
      iVar17 = 1;
    }
    bVar5 = bVar10 | (char)local_a8 << 7 | local_a8._1_1_ << 6 | local_a8._2_1_ << 5 |
            local_a8._3_1_ << 4;
    if (local_3c < (int ***)0x7e) {
      iVar17 = 0;
    }
    local_a4._3_1_ = (char)((uint)local_4c >> 0x18);
    cVar6 = local_a4._3_1_;
    local_a8 = (char *)ppppiVar8;
    local_a4 = pppiVar2;
    if (iVar17 == 0) {
      local_30._0_2_ = CONCAT11((byte)local_3c | local_a4._3_1_ << 7,bVar5);
      FUN_01ac6cbc(piVar7,&local_30,2);
    }
    else if (iVar17 == 1) {
      local_30 = (int *****)(CONCAT22(local_30._2_2_,CONCAT11(local_a4._3_1_ << 7,bVar5)) | 0x7e00);
      FUN_01ac6cbc(piVar7,&local_30,2);
      local_30 = (int *****)
                 CONCAT22(local_30._2_2_,
                          (ushort)(((uint)pppiVar4 & 0xff) << 8) |
                          (ushort)((uint)pppiVar4 >> 8) & 0xff);
      FUN_01ac6cbc(piVar7,&local_30,2);
    }
    else {
      local_30 = (int *****)(CONCAT22(local_30._2_2_,CONCAT11(local_a4._3_1_ << 7,bVar5)) | 0x7f00);
      FUN_01ac6cbc(piVar7,&local_30,2);
      local_2c = (code *)((int)pppiVar4 << 0x18 | ((uint)pppiVar4 >> 8 & 0xff) << 0x10 |
                          ((uint)pppiVar4 >> 0x10 & 0xff) << 8 | (uint)pppiVar4 >> 0x18);
      local_30 = (int *****)0x0;
      FUN_01ac6cbc(piVar7,&local_30,8);
    }
    if (cVar6 != '\0') {
      FUN_01ac6cbc(piVar7,&local_a0,4);
    }
    uVar18 = *(uint *)(param_2 + 0x58);
    FUN_01ac6cbc(piVar7,local_98,pppiVar4);
    pppiVar2 = local_a4;
    local_a4 = (int ***)((uint)local_a4 & 0xffffff);
    if (((uint)pppiVar2 & 0x1000000) != 0) {
      uVar11 = *(uint *)(param_2 + 0x58);
      if (uVar11 < uVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar18,uVar11,uVar11,&DAT_01d2f6d4);
      }
      iVar17 = *(int *)(param_2 + 0x54) + uVar18;
      uVar11 = uVar11 - uVar18;
      uVar18 = (iVar17 + 3U & 0xfffffffc) - iVar17;
      if (uVar11 < uVar18) {
        pbVar12 = &DAT_00000001;
        uVar19 = 0;
        puVar14 = (uint *)&SUB_00000004;
        uVar13 = 0;
        uVar18 = uVar11;
      }
      else {
        uVar11 = uVar11 - uVar18;
        puVar14 = (uint *)(iVar17 + uVar18);
        uVar13 = uVar11 & 3;
        pbVar12 = (byte *)((int)puVar14 + (uVar11 & 0x7ffffffc));
        uVar19 = uVar11 >> 2;
      }
      local_30 = local_a0;
      if (uVar18 != 0) {
        uVar11 = 0;
        do {
          *(byte *)(iVar17 + uVar11) =
               *(byte *)(iVar17 + uVar11) ^ *(byte *)((uint)&local_30 | uVar11 & 3);
          uVar11 = uVar11 + 1;
        } while (uVar18 != uVar11);
        uVar18 = uVar18 & 3;
        if (uVar18 != 0) {
          local_30 = (int *****)((uint)local_a0 >> uVar18 * 8 | (int)local_a0 << uVar18 * -8 + 0x20)
          ;
        }
      }
      if (uVar19 != 0) {
        iVar17 = uVar19 << 2;
        do {
          iVar17 = iVar17 + -4;
          *puVar14 = *puVar14 ^ (uint)local_30;
          puVar14 = puVar14 + 1;
        } while (iVar17 != 0);
      }
      if (uVar13 != 0) {
        pbVar9 = (byte *)&local_30;
        do {
          uVar13 = uVar13 - 1;
          *pbVar12 = *pbVar12 ^ *pbVar9;
          pbVar9 = pbVar9 + 1;
          pbVar12 = pbVar12 + 1;
        } while (uVar13 != 0);
      }
    }
    (*(code *)local_9c[4])(&pppiStack_90,local_98,local_94);
    ppppiVar8 = (int ****)0xf;
    if (*(uint *)(param_2 + 0x4c) < *(uint *)(param_2 + 0x58)) {
      FUN_0071201c(&local_a8,param_2 + 0x20,param_3);
      pppiVar2 = local_9c;
      pppppiVar3 = local_a0;
      if (((int ****)local_a8 != (int ****)0xf || local_a4 != (int ***)0x0) &&
         ((int ****)local_a8 == (int ****)0x5 && local_a4 == (int ***)0x0)) {
        local_4c = local_9c;
        local_50 = local_a0;
        if ((*(byte *)(param_2 + 0x92) < 2) || (cVar6 = FUN_005ef5e8(&local_50), cVar6 != '\x03')) {
          *param_1 = 5;
          param_1[1] = 0;
          param_1[2] = pppppiVar3;
          param_1[3] = pppiVar2;
          return;
        }
        *param_1 = 3;
        param_1[1] = 0;
        FUN_0069263c(pppppiVar3,pppiVar2);
        return;
      }
      goto LAB_00709958;
    }
  }
  local_a4 = (int ***)0x0;
  local_a8 = (char *)ppppiVar8;
LAB_00709958:
  FUN_01bed4e2(param_1,&local_a8,0x58);
  return;
}

