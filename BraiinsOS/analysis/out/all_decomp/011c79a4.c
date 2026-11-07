// FUN_011c79a4 @ 011c79a4 size=1584 calls_out=12 calls_in=1
// strings: 

bool FUN_011c79a4(int *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  double *pdVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  double in_d0;
  double dVar11;
  uint local_f0;
  uint local_ec;
  int local_e8;
  uint local_e4;
  int *local_e0;
  int local_dc;
  uint uStack_d8;
  uint local_d0;
  uint local_cc;
  int local_c8;
  uint local_c4;
  int *local_c0;
  int local_bc;
  uint local_b8;
  uint local_b0;
  uint local_ac;
  int local_a8;
  uint local_a4;
  int *local_a0;
  int local_9c;
  uint local_98;
  uint local_90;
  undefined4 local_8c;
  uint local_88;
  uint local_80;
  undefined4 local_7c;
  uint local_78;
  undefined1 auStack_70 [12];
  uint local_64;
  uint local_60;
  int local_5c;
  uint local_58;
  uint uStack_54;
  int iStack_50;
  uint local_4c;
  int *local_48;
  int local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  
  pdVar4 = (double *)(param_1 + 2);
  if (*param_1 == 0) {
    dVar11 = (double)FUN_01845f30(*(undefined4 *)pdVar4,param_1[3]);
  }
  else if (*param_1 == 1) {
    dVar11 = (double)FUN_01845d5c(*(undefined4 *)pdVar4,param_1[3]);
  }
  else {
    dVar11 = *pdVar4;
  }
  if (dVar11 == 0.0) {
    return true;
  }
  if (dVar11 < in_d0) {
    return false;
  }
  FUN_0123bbe0(&local_d0);
  FUN_0123bbe0(&local_b0);
  uVar5 = local_d0 + 0x80000001 & (int)local_d0 >> 0x1f;
  if (uVar5 == 0) {
    uVar5 = local_b0 + 0x80000001 & (int)local_b0 >> 0x1f;
    if (uVar5 == 0) {
      if (local_c8 == 0) {
        if (local_a8 != 0) {
          local_f0 = local_d0;
          local_ec = local_cc;
          local_e8 = local_c8;
          local_e4 = local_c4;
          local_e0 = local_c0;
          local_dc = local_bc;
          goto joined_r0x011c7d4c;
        }
        local_f0 = 0x80000001;
      }
      else {
        if (local_a8 != 0) {
          FUN_0123d368(&local_90,local_cc,local_c8,local_ac,local_a8);
          FUN_0123d368(&local_80,local_c0,local_bc,local_a0,local_9c);
          uVar2 = local_88;
          uVar3 = local_8c;
          bVar10 = 0x3ffffffe < local_88;
          bVar9 = local_88 == 0x3fffffff;
          local_48 = (int *)local_cc;
          uVar5 = local_88 * 4;
          uVar6 = 0;
          if (local_88 < 0x40000000) {
            bVar10 = 0x7ffffffb < uVar5;
            bVar9 = uVar5 == 0x7ffffffc;
          }
          local_44 = local_c8;
          local_4c = local_d0;
          if (bVar10 && !bVar9) {
LAB_011c7c50:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar6,uVar5);
          }
          if (uVar5 == 0) {
            local_40 = 0;
            local_3c = 4;
          }
          else {
            local_3c = thunk_FUN_016d4a50(uVar5);
            local_40 = uVar2;
            if (local_3c == 0) {
              uVar6 = 4;
              goto LAB_011c7c50;
            }
          }
          FUN_016dd1aa(local_3c,uVar3,uVar5);
          local_38 = uVar2;
          FUN_0127a77c(&local_f0,&local_4c,&local_40);
          local_5c = local_e8;
          local_60 = local_ec;
          local_64 = local_f0;
          if (local_e4 != 0) {
            thunk_FUN_016d3fb4(local_e0);
          }
          uVar2 = local_78;
          uVar3 = local_7c;
          local_44 = local_9c;
          bVar10 = 0x3ffffffe < local_78;
          bVar9 = local_78 == 0x3fffffff;
          local_48 = local_a0;
          local_4c = local_a4;
          uVar6 = 0;
          uVar5 = local_78 * 4;
          if (local_78 < 0x40000000) {
            bVar10 = 0x7ffffffb < uVar5;
            bVar9 = uVar5 == 0x7ffffffc;
          }
          if (bVar10 && !bVar9) {
LAB_011c7e54:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar6,uVar5);
          }
          if (uVar5 == 0) {
            uVar8 = 0;
            iVar7 = 4;
          }
          else {
            iVar7 = thunk_FUN_016d4a50(uVar5);
            uVar8 = uVar2;
            if (iVar7 == 0) {
              uVar6 = 4;
              goto LAB_011c7e54;
            }
          }
          local_40 = uVar8;
          local_3c = iVar7;
          FUN_016dd1aa(iVar7,uVar3,uVar5);
          local_38 = uVar2;
          FUN_0127a77c(&local_f0,&local_4c,&local_40);
          iStack_50 = local_e8;
          uStack_54 = local_ec;
          local_58 = local_f0;
          if (local_e4 != 0) {
            thunk_FUN_016d3fb4(local_e0);
          }
          FUN_012408ac(auStack_70,&local_64,&local_58);
          local_44 = local_bc;
          local_48 = local_c0;
          local_4c = local_c4;
          local_40 = local_80;
          local_3c = local_7c;
          local_38 = local_78;
          FUN_0127a77c(&local_f0,&local_4c,&local_40);
          iVar7 = local_e8;
          uVar2 = local_ec;
          uVar5 = local_f0;
          if (local_e4 != 0) {
            thunk_FUN_016d3fb4(local_e0);
          }
          local_48 = (int *)local_ac;
          local_5c = iVar7;
          local_60 = uVar2;
          local_64 = uVar5;
          local_44 = local_a8;
          local_4c = local_b0;
          local_40 = local_90;
          local_3c = local_8c;
          local_38 = local_88;
          FUN_0127a77c(&local_f0,&local_4c,&local_40);
          iVar7 = local_e8;
          uVar2 = local_ec;
          uVar5 = local_f0;
          if (local_e4 != 0) {
            thunk_FUN_016d3fb4(local_e0);
          }
          local_58 = uVar5;
          uStack_54 = uVar2;
          iStack_50 = iVar7;
          FUN_012408ac(&local_40,&local_64,&local_58);
          FUN_0123d084(&local_f0,auStack_70,&local_40);
          goto joined_r0x011c7fc8;
        }
        local_ec = CONCAT31(local_ec._1_3_,(undefined1)local_b8);
        local_f0 = 0x80000000;
      }
      if (local_b0 != 0) {
        thunk_FUN_016d3fb4(local_ac);
      }
      bVar1 = 0;
      if (local_a4 != 0) {
        thunk_FUN_016d3fb4(local_a0);
      }
    }
    else {
      if (uVar5 != 1) {
        local_f0 = local_b0;
        local_ec = local_ac;
        local_e8 = local_a8;
        local_e4 = local_a4;
        local_e0 = local_a0;
        local_dc = local_9c;
        uStack_d8 = local_98;
        if (local_d0 != 0) {
          thunk_FUN_016d3fb4(local_cc);
        }
        if (local_c4 != 0) {
          thunk_FUN_016d3fb4(local_c0);
        }
        goto joined_r0x011c7fc8;
      }
      local_e0 = (int *)thunk_FUN_016d4a50(4);
      if (local_e0 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,4);
      }
      bVar1 = 1;
      *local_e0 = 1;
      local_f0 = 0;
      local_ec = 4;
      local_e8 = 0;
      local_dc = 1;
      local_e4 = 1;
    }
    if (local_d0 != 0) {
      thunk_FUN_016d3fb4(local_cc);
    }
    if (local_c4 != 0) {
      thunk_FUN_016d3fb4(local_c0);
    }
    if (!(bool)(bVar1 & local_b0 < 0x80000000)) goto joined_r0x011c7fc8;
  }
  else {
    if (uVar5 == 1) {
      uVar5 = local_b0 + 0x80000001 & (int)local_b0 >> 0x1f;
      if (uVar5 == 0) {
        local_f0 = 0x80000000;
        local_ec = CONCAT31(local_ec._1_3_,(local_cc & 0xff) != (local_98 & 0xff));
        if ((int)local_b0 < 0) goto joined_r0x011c7fc8;
        goto joined_r0x011c7d4c;
      }
      if (uVar5 != 1) {
        local_f0 = local_b0;
        local_ec = local_ac;
        local_e8 = local_a8;
        local_e4 = local_a4;
        local_e0 = local_a0;
        local_dc = local_9c;
        uStack_d8 = local_98;
        goto joined_r0x011c7fc8;
      }
      local_f0 = 0x80000001;
    }
    else {
      local_f0 = local_d0;
      local_ec = local_cc;
      local_e8 = local_c8;
      local_e4 = local_c4;
      local_e0 = local_c0;
      local_dc = local_bc;
      uStack_d8 = local_b8;
    }
    if (0x7fffffff < local_b0) goto joined_r0x011c7fc8;
  }
joined_r0x011c7d4c:
  if (local_b0 != 0) {
    thunk_FUN_016d3fb4(local_ac);
  }
  if (local_a4 != 0) {
    thunk_FUN_016d3fb4(local_a0);
  }
joined_r0x011c7fc8:
  if ((int)local_f0 < 0) {
    return true;
  }
  bVar9 = false;
  if (local_dc == 1) {
    bVar9 = *local_e0 == 1;
  }
  if (local_f0 != 0) {
    thunk_FUN_016d3fb4(local_ec);
  }
  if (local_e4 == 0) {
    return bVar9;
  }
  thunk_FUN_016d3fb4(local_e0);
  return bVar9;
}

