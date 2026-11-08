// FUN_01542558 @ 01542558 size=2008 calls_out=10 calls_in=2
// strings: resumptionCLIENT_EARLY_TRAFFIC_SECRETCLIENT_HANDSHAKE_TRAFFIC_SECRETSERVER_HANDSHAKE_TRAFFIC_SECRETCLIENT_TRAFFIC_SECRET_0SERVER_TRAFFIC_SECRET_0EXPORTER_SECRET

void FUN_01542558(undefined4 *param_1,int param_2,int *param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined8 uVar18;
  undefined1 auStack_160 [64];
  uint local_120;
  undefined1 local_11c [64];
  uint local_dc;
  undefined4 **local_d8;
  undefined4 local_d4;
  undefined1 *local_d0;
  undefined4 local_cc;
  undefined *local_c8;
  undefined4 local_c4;
  char *local_c0;
  undefined4 local_bc;
  undefined1 *local_b8;
  undefined4 local_b4;
  undefined1 *local_b0;
  uint local_ac;
  undefined4 local_a8;
  int local_a4;
  undefined4 local_a0;
  int local_9c;
  int local_98;
  int local_94;
  undefined4 *local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined4 uStack_80;
  undefined4 *local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_2a;
  undefined1 local_29 [5];
  
  piVar13 = *(int **)(param_4 + 0x10);
  iVar11 = *(int *)(param_4 + 0x14);
  iVar4 = FUN_01515df8(piVar13,iVar11);
  if (iVar4 != 0) {
    *(undefined1 *)(param_1 + 1) = 6;
    *param_1 = &DAT_8000001c;
    return;
  }
  (**(code **)(*(int *)(param_2 + 0x18) + 0xc))(auStack_160,*(undefined4 *)(param_2 + 0x14));
  if (0x40 < local_120) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,local_120,0x40,&DAT_018a7f14);
  }
  uVar10 = *(undefined4 *)(param_2 + 0x40);
  iVar4 = *(int *)(param_2 + 0x44);
  uVar5 = (**(code **)(iVar4 + 0x14))(uVar10);
  local_90._0_2_ = (ushort)((uVar5 & 0xff) << 8) | (ushort)(uVar5 >> 8) & 0xff;
  local_b8 = local_29;
  local_2a = 0x10;
  local_b4 = 1;
  local_cc = 1;
  local_d4 = 2;
  local_bc = 10;
  local_c0 = &DAT_0040c4c1;
  local_c4 = 6;
  local_c8 = &DAT_0040c506;
  local_29[0] = (undefined1)local_120;
  local_ac = local_120;
  local_d8 = &local_90;
  local_d0 = &local_2a;
  local_b0 = auStack_160;
  (**(code **)(iVar4 + 0x10))(&local_74,uVar10,&local_d8,6);
  uVar15 = *(undefined4 *)(param_4 + 4);
  uVar16 = *(undefined4 *)(param_4 + 8);
  local_78 = (undefined4 *)(param_2 + 0x40);
  uVar18 = (**(code **)(*(int *)(*(int *)(param_2 + 0x48) + 0xc) + 0x18))
                     (*(undefined4 *)(*(int *)(param_2 + 0x48) + 8),&local_74);
  puVar8 = (undefined4 *)((ulonglong)uVar18 >> 0x20);
  uVar10 = (undefined4)uVar18;
  uVar5 = (*(code *)puVar8[5])();
  local_d8 = &local_90;
  local_90 = (undefined4 *)
             CONCAT22(local_90._2_2_,(ushort)((uVar5 & 0xff) << 8) | (ushort)(uVar5 >> 8) & 0xff);
  local_b8 = local_29;
  local_2a = 0x10;
  local_c0 = 
  "resumptionCLIENT_EARLY_TRAFFIC_SECRETCLIENT_HANDSHAKE_TRAFFIC_SECRETSERVER_HANDSHAKE_TRAFFIC_SECRETCLIENT_TRAFFIC_SECRET_0SERVER_TRAFFIC_SECRET_0EXPORTER_SECRET"
  ;
  local_29[0] = (undefined1)uVar16;
  local_b4 = 1;
  local_bc = 10;
  local_c4 = 6;
  local_cc = 1;
  local_c8 = &DAT_0040c506;
  local_d4 = 2;
  local_d0 = &local_2a;
  local_b0 = (undefined1 *)uVar15;
  local_ac = uVar16;
  (*(code *)puVar8[4])(local_11c,uVar10,&local_d8,6);
  if ((code *)*puVar8 != (code *)0x0) {
    (*(code *)*puVar8)(uVar10);
  }
  if (puVar8[1] != 0) {
    thunk_FUN_016d3fb4(uVar10);
  }
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_6b = 0;
  local_6a = 0;
  local_69 = 0;
  local_68 = 0;
  local_67 = 0;
  local_66 = 0;
  local_65 = 0;
  local_64 = 0;
  local_63 = 0;
  local_62 = 0;
  local_61 = 0;
  local_60 = 0;
  local_5f = 0;
  local_5e = 0;
  local_5d = 0;
  local_5c = 0;
  local_5b = 0;
  local_5a = 0;
  local_59 = 0;
  local_58 = 0;
  local_57 = 0;
  local_56 = 0;
  local_55 = 0;
  local_54 = 0;
  local_53 = 0;
  local_52 = 0;
  local_51 = 0;
  local_50 = 0;
  local_4f = 0;
  local_4e = 0;
  local_4d = 0;
  local_4c = 0;
  local_4b = 0;
  local_4a = 0;
  local_49 = 0;
  local_48 = 0;
  local_47 = 0;
  local_46 = 0;
  local_45 = 0;
  local_44 = 0;
  local_43 = 0;
  local_42 = 0;
  local_41 = 0;
  local_40 = 0;
  local_3f = 0;
  local_3e = 0;
  local_3d = 0;
  local_3c = 0;
  local_3b = 0;
  local_3a = 0;
  local_39 = 0;
  local_38 = 0;
  local_37 = 0;
  local_36 = 0;
  local_35 = 0;
  iVar4 = *(int *)(*(int *)(param_2 + 0x30) + 0x98);
  (**(code **)(iVar4 + 0x10))
            (&local_d8,
             *(int *)(*(int *)(param_2 + 0x30) + 0x94) + (*(int *)(iVar4 + 8) - 1U & 0xfffffff8) + 8
            );
  uVar10 = local_cc;
  puVar3 = local_d0;
  local_78 = (undefined4 *)0x80000021;
  if (((uint)local_d8 & 1) == 0) {
    *param_1 = 0x80000021;
    return;
  }
  FUN_0152bfc0(&local_78);
  uVar15 = *(undefined4 *)(param_2 + 0x3c);
  piVar12 = *(int **)(param_4 + 0x18);
  do {
    iVar4 = *piVar12;
    bVar2 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar2);
  *piVar12 = iVar4 + 1;
  if (iVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1542d28);
    (*pcVar1)();
  }
  if (0x40 < local_dc) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,local_dc,0x40,&DAT_018a8b78);
  }
  iVar4 = param_3[1];
  if (iVar4 == 0) {
    local_90 = (undefined4 *)0x0;
    local_8c = 4;
    local_88 = 0;
  }
  else {
    FUN_01504dd8(&local_78,*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8));
    local_88 = local_70;
    local_90 = local_78;
    local_8c = local_74;
  }
  iVar17 = 0;
  iVar4 = iVar11 * 0x10;
  if (iVar11 != 0) {
    piVar6 = piVar13;
    iVar9 = iVar4;
    while (iVar9 = iVar9 + -0x10, *piVar6 != -0x7fffffff) {
      if (((short)piVar6[3] == 0x19) || (piVar6 = piVar6 + 4, iVar9 == 0)) goto LAB_015429a8;
    }
    iVar17 = piVar6[1];
  }
LAB_015429a8:
  uVar16 = *(undefined4 *)(param_4 + 0x20);
  FUN_015323a8(&local_d8,piVar12,local_11c,local_dc,puVar3,uVar10,*(undefined4 *)(param_4 + 0x1c),
               &local_90,*(int *)(param_2 + 0x30) + 0xa0,*(int *)(param_2 + 0x30) + 0x84);
  local_94 = 0;
  local_9c = 0;
  local_98 = 1;
  local_a8 = uVar16;
  local_a4 = iVar17;
  local_a0 = uVar15;
  if ((char)param_3[2] != '\x01') {
LAB_01542b10:
    iVar4 = *(int *)(param_2 + 0x38);
    iVar17 = *(int *)(param_2 + 0x34);
    iVar9 = *(int *)(iVar4 + 8);
    if (*(char *)(param_2 + 0x1c) == '\x01') {
      local_90 = *(undefined4 **)(param_2 + 0x1c);
      local_8c = *(int *)(param_2 + 0x20);
      uStack_80 = *(undefined4 *)(param_2 + 0x2c);
      local_88 = *(int *)(param_2 + 0x24);
      local_84 = *(int *)(param_2 + 0x28);
      goto LAB_01542bac;
    }
    iVar14 = *(int *)(param_2 + 0x24);
    iVar11 = *(int *)(param_2 + 0x28);
    if (*(int *)(param_2 + 0x20) == -0x80000000) {
      local_8c = -0x80000000;
      iVar7 = iVar14;
    }
    else {
      if (iVar11 == 0) {
        iVar7 = 1;
      }
      else {
        iVar7 = thunk_FUN_016d4a50(iVar11);
        if (iVar7 == 0) goto LAB_01542d2c;
      }
      FUN_016dd1aa(iVar7,iVar14,iVar11);
      local_8c = iVar11;
    }
    local_90 = (undefined4 *)((uint)local_90 & 0xffffff00);
    local_88 = iVar7;
    local_84 = iVar11;
LAB_01542bac:
    FUN_016dd1aa(&local_78,&local_d8,0x48);
    (**(code **)(iVar4 + 0x24))(iVar17 + (iVar9 - 1U & 0xfffffff8) + 8,&local_90,&local_78);
    *param_1 = 0x80000029;
    return;
  }
  if (iVar11 != 0) {
    while (iVar4 = iVar4 + -0x10, *piVar13 != -0x7fffffff) {
      if (((short)piVar13[3] == 0x19) || (piVar13 = piVar13 + 4, iVar4 == 0)) goto LAB_01542a80;
    }
    if (1 < piVar13[1] + 1U) {
      *(undefined1 *)(param_1 + 1) = 0x19;
      *param_1 = &DAT_8000001c;
      FUN_01544360(&local_d8);
      return;
    }
  }
LAB_01542a80:
  iVar4 = *param_3;
  if (*(int *)(iVar4 + 0x58) == -0x80000000) goto LAB_01542b10;
  iVar11 = *(int *)(iVar4 + 0x60);
  uVar10 = 0;
  if (iVar11 < 0) goto LAB_01542aa0;
  uVar10 = *(undefined4 *)(iVar4 + 0x5c);
  if (iVar11 == 0) {
    iVar17 = 1;
    iVar4 = 0;
LAB_01542af4:
    FUN_016dd1aa(iVar17,uVar10,iVar11);
    local_9c = iVar4;
    local_98 = iVar17;
    local_94 = iVar11;
    goto LAB_01542b10;
  }
  iVar17 = thunk_FUN_016d4a50(iVar11);
  iVar4 = iVar11;
  if (iVar17 != 0) goto LAB_01542af4;
LAB_01542d2c:
  uVar10 = 1;
LAB_01542aa0:
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(uVar10,iVar11);
}

