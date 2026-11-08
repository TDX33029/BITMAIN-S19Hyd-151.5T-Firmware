// FUN_00875d64 @ 00875d64 size=1264 calls_out=22 calls_in=1
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers.

void FUN_00875d64(int *param_1,int param_2,int *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  byte bVar11;
  undefined4 uVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined1 auStack_100 [80];
  undefined *local_b0;
  undefined1 *local_ac;
  undefined4 *local_a8;
  int *local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_80;
  undefined *local_78;
  undefined1 *local_74;
  undefined1 *local_70;
  undefined1 local_68;
  undefined4 *local_60;
  int *local_5c;
  int *local_58;
  undefined *local_50;
  byte local_4c;
  byte local_4b;
  ushort local_4a;
  int *local_48;
  undefined *local_44;
  undefined8 local_40;
  int *local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar2 = (&switchD_00875d84::switchdataD_00875d88)[*(byte *)(param_2 + 0x5c)];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(param_2 + 0x5c)) {
  case 0:
    uVar12 = *(undefined4 *)(param_2 + 0x58);
    FUN_0165a798(&local_b0);
    puVar7 = local_b0 + 2;
    puVar5 = local_ac + ((undefined *)0xfffffffd < local_b0);
    if ((int)(((uint)local_ac ^ (uint)puVar5) & ~(uint)local_ac) < 0) {
LAB_00875e00:
      FUN_01656dc8(&local_b0);
      local_80 = CONCAT44(local_80._4_4_,(undefined4)local_80);
    }
    else {
      if (&DAT_3b9aca00 <= local_a8) {
        bVar13 = (undefined *)0xfffffffe < puVar7;
        puVar7 = local_b0 + 3;
        if (-1 < (int)(((uint)puVar5 ^ (uint)(puVar5 + bVar13)) & ~(uint)puVar5)) {
          puVar6 = (undefined4 *)((int)local_a8 + -1000000000);
          puVar5 = puVar5 + bVar13;
          if ((undefined1 *)((int)local_a8 + -1000000000) != &DAT_3b9aca00) goto LAB_00875e10;
        }
        goto LAB_00875e00;
      }
      puVar6 = local_a8;
LAB_00875e10:
      local_40 = FUN_0164ec90(&DAT_01861b40);
      iVar8 = 0x180;
      if ((local_40 & 1) != 0) {
        iVar8 = 0xb8;
      }
      if (*(undefined1 **)((int)(local_40 >> 0x20) + iVar8 + 0x90) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                     ,0x73,&DAT_01861b40);
      }
      local_ac = (undefined1 *)0x0;
      local_b0 = (undefined *)0x0;
      local_68 = 0;
      local_78 = puVar7;
      local_74 = puVar5;
      local_70 = (undefined1 *)puVar6;
      local_80 = local_40;
    }
    FUN_016dd1aa(auStack_100,&local_b0,0x50);
    uVar2 = FUN_016dd1aa(param_2,auStack_100,0x50);
    *(undefined4 *)(param_2 + 0x50) = uVar12;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01861b50);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01861b50);
  }
  uVar14 = thunk_FUN_016de0ee(uVar2,0x40);
  iVar8 = (int)uVar14 + (int)((ulonglong)uVar14 >> 0x20);
  bVar11 = *(byte *)(iVar8 + 0x38);
  if (bVar11 == 1) {
LAB_00875ec4:
    bVar11 = ~*(byte *)(iVar8 + 0x30) & 1 | *(char *)(iVar8 + 0x31) != '\0';
  }
  else if (bVar11 != 2) {
    FUN_015e8e6c(iVar8,FUN_007e604c);
    *(undefined1 *)(iVar8 + 0x38) = 1;
    goto LAB_00875ec4;
  }
  iVar8 = *(int *)(param_2 + 0x50);
  if (*(char *)(iVar8 + 0x42) == '\0') {
    iVar9 = iVar8 + 0x30;
    if (*(char *)(iVar8 + 0x41) != '\x01') goto LAB_00876098;
    bVar1 = *(byte *)(iVar8 + 0x40);
    do {
      if ((bVar1 & 1) != 0) {
        FUN_01665e08(&local_60,iVar8 + 0x10,iVar9);
        piVar10 = local_58;
        if (local_60 == (undefined4 *)0x80000001) {
          param_3 = local_5c;
LAB_008761d0:
          *(undefined1 *)(iVar8 + 0x42) = 1;
          puVar6 = (undefined4 *)0x80000000;
        }
        else if (local_60 == (undefined4 *)0x80000000) {
          piVar10 = (int *)0x0;
          puVar6 = (undefined4 *)0x80000001;
          *(undefined1 *)(iVar8 + 0x41) = 0;
        }
        else {
          puVar6 = local_60;
          param_3 = local_5c;
        }
        goto LAB_00875f08;
      }
      FUN_01666080(&local_40,iVar8 + 0x10,iVar9);
      if ((undefined4 *)local_40 != (undefined4 *)0x80000000) {
        piVar10 = local_38;
        param_3 = local_40._4_4_;
        if ((undefined4 *)local_40 == (undefined4 *)0x80000001) goto LAB_008761d0;
        puVar6 = (undefined4 *)local_40;
        goto LAB_00875f08;
      }
      *(undefined1 *)(iVar8 + 0x41) = 0;
LAB_00876098:
      iVar3 = *(int *)(iVar8 + 0x34);
      if (*(int *)(iVar8 + 0x38) == iVar3) {
        FUN_00f5f538(iVar9,1);
        iVar3 = *(int *)(iVar8 + 0x34);
      }
      if (iVar3 == 0x7fffffff) {
LAB_00876164:
        bVar1 = 1;
        if (*(char *)(iVar8 + 0x40) != '\0') goto LAB_00875f04;
      }
      else {
        iVar4 = *(int *)(iVar8 + 0x38);
        if (iVar4 == iVar3) {
          FUN_00f5f538(iVar9,0x40);
          iVar3 = *(int *)(iVar8 + 0x34);
          iVar4 = *(int *)(iVar8 + 0x38);
        }
        local_ac = (undefined1 *)(iVar4 - iVar3);
        puVar7 = (undefined *)(*(int *)(iVar8 + 0x30) + iVar3);
        local_a4 = (int *)0x0;
        local_a8 = (undefined4 *)0x0;
        local_b0 = puVar7;
        local_50 = puVar7;
        FUN_01642868(&local_4c,iVar8,param_3,&local_b0);
        uVar2 = (uint)local_4c;
        if (uVar2 != 4) {
          if (uVar2 == 5) {
            iVar8 = FUN_016540e8(bVar11 == 2 | bVar11 & 1,param_2,*param_3);
            if (iVar8 != 0) {
              *param_1 = -0x7fffffff;
              *(undefined1 *)(param_2 + 0x5c) = 3;
              return;
            }
            puVar6 = (undefined4 *)0x80000002;
            piVar10 = param_1;
          }
          else {
            *(undefined1 *)(iVar8 + 0x42) = 1;
            param_3 = (int *)((uint)local_4a << 0x10 | (uint)local_4b << 8 | uVar2);
            puVar6 = (undefined4 *)0x80000000;
            piVar10 = local_48;
          }
          goto LAB_00875f08;
        }
        if (local_ac < local_a8) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,local_a8,local_ac,&DAT_018acc90);
        }
        local_44 = local_b0;
        if (puVar7 != local_b0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fa8e5c(&local_50,&local_44,&DAT_018a4784);
        }
        puVar5 = (undefined1 *)(*(int *)(iVar8 + 0x38) - *(int *)(iVar8 + 0x34));
        if (puVar5 < local_a8) {
          local_b0 = (undefined *)local_a8;
          local_ac = puVar5;
                    /* WARNING: Subroutine does not return */
          FUN_00f600c0(&local_b0);
        }
        *(undefined1 **)(iVar8 + 0x34) = (undefined1 *)((int)local_a8 + *(int *)(iVar8 + 0x34));
        bVar1 = 0;
        if (local_a8 == (undefined4 *)0x0) goto LAB_00876164;
      }
      *(undefined1 *)(iVar8 + 0x41) = 1;
      *(byte *)(iVar8 + 0x40) = bVar1;
    } while (*(char *)(iVar8 + 0x42) == '\0');
  }
  *(undefined2 *)(iVar8 + 0x41) = 0;
LAB_00875f04:
  puVar6 = (undefined4 *)0x80000001;
  piVar10 = (int *)0x0;
LAB_00875f08:
  FUN_00a07b4c(param_2);
  if (puVar6 == (undefined4 *)0x80000001) {
    param_3 = (int *)FUN_00808f1c(&DAT_00344585,0x24);
  }
  else if (puVar6 == (undefined4 *)0x80000002) {
    param_3 = (int *)FUN_007f50cc();
  }
  else {
    if (puVar6 != (undefined4 *)0x80000000) goto LAB_00875fb0;
    local_60 = param_3;
    local_5c = piVar10;
    FUN_01602d08(&local_b0);
    local_40._0_4_ = (undefined4 *)local_b0;
    local_40._4_4_ = (undefined4 *)local_ac;
    local_38 = local_a8;
    uStack_34 = local_a4;
    uStack_30 = uStack_a0;
    uStack_2c = uStack_9c;
    local_ac = (undefined1 *)0x19;
    local_b0 = &DAT_003445a9;
    local_a8 = param_3;
    local_a4 = piVar10;
    param_3 = (int *)FUN_007f4d94(&local_b0);
  }
  puVar6 = (undefined4 *)0x80000000;
LAB_00875fb0:
  *param_1 = (int)puVar6;
  param_1[1] = (int)param_3;
  param_1[2] = (int)piVar10;
  *(undefined1 *)(param_2 + 0x5c) = 1;
  return;
}

