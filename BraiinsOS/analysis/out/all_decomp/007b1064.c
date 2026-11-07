// FUN_007b1064 @ 007b1064 size=1044 calls_out=15 calls_in=0
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers.

void FUN_007b1064(undefined1 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *extraout_r1;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined4 *unaff_r4;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined4 *local_60;
  undefined4 *local_5c;
  int local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined8 local_38;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  
  uVar4 = (&switchD_007b1084::switchdataD_007b1088)[*(byte *)(param_2 + 0x18)];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(param_2 + 0x18)) {
  case 0:
    unaff_r4 = (undefined4 *)param_2[0x17];
    FUN_0165a798(&local_38);
    puVar6 = (undefined1 *)((int)local_38._4_4_ + (uint)(0xfffffffd < (uint)local_38));
    if ((int)(((uint)local_38._4_4_ ^ (uint)puVar6) & ~(uint)local_38._4_4_) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
    }
    FUN_010e08d0(&local_38,local_38._4_4_,(uint)local_38 + 2,puVar6,local_30);
    puVar7 = local_30;
    uVar10 = FUN_0164ec90(&DAT_0185a6cc);
    puVar9 = (undefined4 *)(uVar10 >> 0x20);
    uVar4 = (uint)uVar10;
    iVar8 = 0x180;
    if ((uVar10 & 1) != 0) {
      iVar8 = 0xb8;
    }
    if (*(undefined1 **)((int)puVar9 + iVar8 + 0x90) == &DAT_3b9aca00) {
      local_38 = uVar10;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                   ,0x73,&DAT_0185a6cc);
    }
    param_2[0x14] = unaff_r4;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 0x12) = 0;
    *(ulonglong *)(param_2 + 0xc) = uVar10;
    param_2[0xe] = (uint)local_38;
    param_2[0xf] = local_38._4_4_;
    param_2[0x10] = puVar7;
    local_38._0_4_ = uVar4;
    local_38._4_4_ = puVar9;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0185e180);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0185e180);
  }
  uVar11 = thunk_FUN_016de0ee(uVar4,0x40);
  puVar7 = (undefined4 *)((int)uVar11 + (int)((ulonglong)uVar11 >> 0x20));
  if (*(char *)(puVar7 + 0xe) != '\x01') {
    if (*(char *)(puVar7 + 0xe) == '\x02') {
      iVar8 = param_2[0x14];
      cVar1 = *(char *)(iVar8 + 0xce);
      puVar9 = (undefined4 *)&SUB_00000002;
      goto joined_r0x007b11c4;
    }
    FUN_015e8e6c(puVar7,FUN_009948a0);
    *(undefined1 *)(puVar7 + 0xe) = 1;
  }
  puVar9 = (undefined4 *)
           (~(uint)*(byte *)(puVar7 + 0xc) & 1 | (uint)(*(char *)((int)puVar7 + 0x31) != '\0'));
  iVar8 = param_2[0x14];
  cVar1 = *(char *)(iVar8 + 0xce);
joined_r0x007b11c4:
  if (cVar1 == '\0') {
    puVar7 = (undefined4 *)(iVar8 + 0xbc);
    if (*(char *)(iVar8 + 0xcd) != '\x01') goto LAB_007b1318;
    bVar3 = *(byte *)(iVar8 + 0xcc);
    do {
      if ((bVar3 & 1) != 0) {
        FUN_0110ff28(&local_38,iVar8 + 0x10,puVar7);
        local_50 = local_38._4_4_;
        local_48 = local_2c;
        puVar9 = local_30;
        if ((uint)local_38 != 1) {
          if (local_38._4_4_ != (undefined4 *)0x0) {
            uVar4 = 1;
            unaff_r4 = local_38._4_4_;
            puVar7 = local_30;
            param_3 = local_28;
            puVar9 = local_2c;
            goto LAB_007b124c;
          }
          if (*(int *)(iVar8 + 0xc0) == 0) {
            puVar9 = (undefined4 *)0x0;
            uVar4 = 0;
            *(undefined1 *)(iVar8 + 0xcd) = 0;
            unaff_r4 = (undefined4 *)0x0;
            puVar7 = local_38._4_4_;
            param_3 = local_2c;
            goto LAB_007b124c;
          }
          FUN_015e79d4(&local_60,0x28,&DAT_004089b1,0x19);
          local_50 = (undefined4 *)&DAT_80000000;
          local_48 = local_5c;
          puVar9 = local_60;
        }
LAB_007b1450:
        uVar4 = 1;
        unaff_r4 = (undefined4 *)0x0;
        *(undefined1 *)(iVar8 + 0xce) = 1;
        puVar7 = local_50;
        param_3 = local_48;
        goto LAB_007b124c;
      }
      FUN_0110ff28(&local_54,iVar8 + 0x10,puVar7);
      if (local_54 != 0) {
        puVar9 = local_4c;
        goto LAB_007b1450;
      }
      unaff_r4 = local_50;
      if (local_50 != (undefined4 *)0x0) {
        uVar4 = 1;
        puVar7 = local_4c;
        param_3 = local_44;
        puVar9 = local_48;
        goto LAB_007b124c;
      }
      *(undefined1 *)(iVar8 + 0xcd) = 0;
LAB_007b1318:
      if (*(int *)(iVar8 + 0xc4) == *(int *)(iVar8 + 0xc0)) {
        FUN_00f5f538(puVar7,1);
      }
      FUN_00753ed0(&local_40,iVar8,param_3,puVar7);
      if (((uint)local_40 & 0xff) != 4) {
        if (((uint)local_40 & 0xff) == 5) {
          iVar8 = FUN_016540e8((uint)(puVar9 == (undefined4 *)&SUB_00000002) | (uint)puVar9 & 1,
                               param_2,*param_3);
          if (iVar8 != 0) {
            *param_1 = 10;
            *(undefined1 *)(param_2 + 0x18) = 3;
            return;
          }
          uVar4 = 2;
        }
        else {
          uVar4 = 1;
          *(undefined1 *)(iVar8 + 0xce) = 1;
          unaff_r4 = (undefined4 *)0x0;
          puVar7 = (undefined4 *)&DAT_80000000;
          param_3 = local_3c;
          puVar9 = local_40;
        }
        goto LAB_007b124c;
      }
      bVar3 = 0;
      if ((local_3c == (undefined4 *)0x0) && (bVar3 = 1, *(char *)(iVar8 + 0xcc) != '\0')) {
        uVar4 = 0;
        goto LAB_007b124c;
      }
      *(undefined1 *)(iVar8 + 0xcd) = 1;
      *(byte *)(iVar8 + 0xcc) = bVar3;
    } while (*(char *)(iVar8 + 0xce) == '\0');
  }
  uVar4 = 0;
  *(undefined2 *)(iVar8 + 0xcd) = 0;
LAB_007b124c:
  FUN_00a07b4c(param_2);
  if (uVar4 == 2) {
    uVar2 = 0;
    puVar5 = extraout_r1;
  }
  else {
    uVar2 = 2;
    local_38._0_4_ = CONCAT31(local_38._1_3_,2);
    puVar5 = extraout_r1;
    if ((uVar4 & 1) != 0) {
      FUN_00731154(&local_38);
      uVar2 = 9;
      if (unaff_r4 == (undefined4 *)0x0) {
        uVar2 = 3;
        puVar5 = puVar9;
        puVar9 = param_3;
      }
      else {
        puVar5 = puVar7;
        puVar7 = unaff_r4;
      }
    }
  }
  *param_1 = uVar2;
  *(undefined4 **)(param_1 + 4) = puVar7;
  *(undefined4 **)(param_1 + 8) = puVar5;
  *(undefined4 **)(param_1 + 0xc) = puVar9;
  *(undefined4 **)(param_1 + 0x10) = param_3;
  *(undefined1 *)(param_2 + 0x18) = 1;
  return;
}

